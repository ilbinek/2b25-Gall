#include "..\script_component.hpp"

class CfgPatches {
    class TBD_2B25_GALL {
        addonRootClass = "A3_Armor_F_Beta";
        requiredAddons[] = {"cba_main", "ace_interact_menu"};
        requiredVersion = 0.5;
        weapons[] = {QUOTE(TBD_2B25_WEAPON)};
        units[] = {QUOTE(TBD_2B25_GALL)};
    };
};

class Mode_SemiAuto;
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgMoves.hpp"
