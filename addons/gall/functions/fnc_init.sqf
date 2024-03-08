/*
	FILE: fnc_init.sqf

	Name: tbd_2b25_gall_fnc_init

	Author(s):
		ilbinek

	Description:
		Initializes the 82mm box

	Parameters:
        _box   - object    - The box

	Returns:
		Nothing

	Examples:
		> [_this] call tbd_2b25_gall_fnc_init;

	Public:
		No

    0 - Empty
    1 - HE Shells
    2 - Smoke Shells
    3 - Illumination Shells
*/

#include "..\script_component.hpp"

params ["_box"];

_box setVariable ["top", false, true];
_box animate["top", 0, 0.2];

for "_i" from 1 to 4 do {
    private _n = format ["round_%1", _i];
    _box setVariable[_n, 1, true];
    _box animate [format ["mine_he_%1_h", _i], 0];
};
