/*
	FILE: fnc_loadMine.sqf

	Name: tbd_2b25_gall_fnc_loadMine

	Author(s):
		ilbinek

	Description:
		Loads a mine into the tube

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the tube
		_mine	- string	- Mine class name

	Returns:
		Nothing

	Examples:
		> [_this, 1, "tbd_2b25_shell_he"] call tbd_2b25_gall_fnc_loadMine;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr", "_mine"];

// One last check
if (!([_box, _nbr, _mine] call FUNC(canLoadMine))) exitWith {};



// Check player inventory first
private _magazines = magazines player;
if (_mine in _magazines) then {
	// Mine is in players inventory, remove it from it and add it to the box
	player removeItem _mine;
} else {
	private _nearby = nearestObjects [player, ["GroundWeaponHolder"], 3];
	private _holder = objNull;
	{
		if (_mine in magazineCargo _x) exitWith {_holder = _x};
	} forEach _nearby;

	if (!isNull _holder) then {
		private _oldMags = magazinesAmmoCargo _holder;
		private _i = _oldMags find ([_mine, 1]);
		_oldMags set [_i, "usedRound"];
		_oldMags = _oldMags - ["usedRound"];

		if (count (weaponCargo _holder) == 0) then {_holder addWeaponCargoGlobal ['FakeWeapon', 1];};
		clearMagazineCargoGlobal (_holder);
		{_holder addMagazineAmmoCargo [_x select 0, 1, _x select 1]} forEach _oldMags;
		if (count (weaponCargo _holder - ['FakeWeapon']) == 0) then {clearWeaponCargoGlobal _holder};
	};
};

private _r = format ["round_%1", _nbr];
_box setVariable [_r, 1, true];
_box animate [format ["mine_he_%1_h", _nbr], 0];
