/*
	FILE: fnc_canClose.sqf

	Name: tbd_2b25_gall_fnc_canClose

	Author(s):
		ilbinek

	Description:
		Determines if a lid can be closeed

	Parameters:
        _box    - object    - The box

	Returns:
		bool	- True if the lid can be closed

	Examples:
		> [_this] call tbd_2b25_gall_fnc_canClose;

	Public:
		No
*/

#include "..\script_component.hpp"

params ["_box"];

private _ret = (_box animationphase "top" > 0.1) && (_box getVariable "top");

_ret
