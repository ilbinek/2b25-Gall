#include "..\script_component.hpp"

class CfgPatches {
	class TBD_2B25_HE {
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"cba_main", "ace_interact_menu", "tbd_mortars_main"};
		requiredVersion = 0.1;
		weapons[] = {""};
		units[] = {""};
		magazines[] = {QUOTE(TBD_2B25_HE)};
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
