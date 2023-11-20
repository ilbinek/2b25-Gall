/*
	FILE: fnc_openLid.sqf

	Name: tbd_2b25_gall_fnc_openLid

	Author(s):
		ilbinek

	Description:
		Opens the lid on the 82mm ammo box

	Parameters:
        _box    - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this, 1] call tbd_2b25_gall_fnc_openLid;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

_box animate ["top", 1];
_box setVariable ["top", true, true];
