#define PREFIX TBD_2B25
#define COMPONENT gall
#include "\x\cba\addons\main\script_macros_common.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PREP_SUB(subfolder,fncName) [QPATHTOF(functions\subfolder\DOUBLES(fnc,fncName).sqf), QUOTE(DFUNC(DOUBLES(subfolder,fncName)))] call CBA_fnc_compileFunction

#define MORTFUNC(var1) tbd_mortars_main_fnc_##var1
#define QMORTFUNC(var1) QUOTE(MORTFUNC(var1))
#define MORTPATH(var1,var2) x\tbd_mortars\addons\var1\var2
#define QMORTPATH(var1,var2) QUOTE(MORTPATH(var1,var2))

#define TBD_2B25_GALL tbd_2b25_gall
#define TBD_2B25_WEAPON tbd_2b25_weapon
#define TBD_2B25_BOX_HE tbd_2b25_box_he
#define TBD_2B25_HE tbd_2b25_shell_he
#define TBD_2B25_82mm_SHELL_AMMO_HE tbd_2B25_82mm_shell_ammo_he

#define TBD_2B25_CARRY tbd_2b25_carry
#define TBD_2B25_TRIPOD tbd_2b25_tripod
#define TBD_2B25_BASEPLATE tbd_2b25_baseplate

#define TBD_2B25_SHOT_SOUNDSET tbd_2b25_shot_soundset
#define TBD_2B25_SHOT_SOUNDSHADER tbd_2b25_shot_soundshader
