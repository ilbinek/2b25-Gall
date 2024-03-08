/*
	FILE: fnc_handleDisassembly.sqf

	Name: tbd_2b25_gall_fnc_handleDisassembly

	Author(s):
		ilbinek

	Description:
		Handles the disassembly of the 2B25 mortar

	Parameters:
        _tripod    		- object    - ??
        _staticWeapon   - object    - ??  

	Returns:
		Nothing

	Examples:
		> [??, ??] call tbd_2b25_gall_fnc_handleDisassembly;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_tripod", "_staticWeapon"];

private _mags = magazinesAmmo _staticWeapon;

{
	if (_x#0 == QUOTE(TBD_2B25_HE)) then {
		private _mineClass = QUOTE(TBD_2B25_HE);
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
	};
} forEach _mags;
