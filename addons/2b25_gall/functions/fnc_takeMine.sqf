/*
	FILE: fnc_takeMine.sqf

	Name: tbd_2b25_gall_fnc_takeMine

	Author(s):
		ilbinek

	Description:
		Determines if a mine can be taken

	Parameters:
        _box    - object    - The box
        _nbr    - number    - Number of the mine  

	Returns:
		Nothing

	Examples:
		> [_this, 1] call tbd_2b25_gall_fnc_takeMine;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box", "_nbr"];

// Check if the box is empty and exit
private _m = format ["round_%1", _nbr];
if (_box getVariable _m == 0) exitWith {};

// Deterimne which classname to use and animate it out
private _mineClass = QUOTE(TBD_2B25_HE);

// Remove the mine from the box
_box setVariable [_m, 0, true];

// Add the mine to the players inventory/on the ground
if ((player canAddItemToVest _mineClass) || (player canAddItemToBackpack _mineClass)) then {
	if (player canAddItemToVest _mineClass) then {
		player addItemToVest _mineClass;
	} else {
		player addItemToBackpack _mineClass;
	};
} else {
	// Add it to the ground
	private _nearby = nearestObjects [player, ["GroundWeaponHolder"], 3];
	private _holder = objNull;
	if (count _nearby > 0) then {
		_holder = _nearby#0;
	};
	if (isNull _holder) then {
		_holder = "GroundWeaponHolder" createVehicle (getPosATL player);
	};
	_holder setPosATL (getPosATL player);
	_holder addMagazineCargoGlobal [_mineClass, 1];
};
