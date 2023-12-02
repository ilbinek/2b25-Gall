["All","AllVehicles","Land","LandVehicle","StaticWeapon","StaticMortar","Mortar_01_base_F","I_G_Mortar_01_F"]

class B_G_Mortar_01_F: I_G_Mortar_01_F
{
    author = $STR_A3_BOHEMIA_INTERACTIVE;
    class SimpleObject
    {
        eden = 1;
        animate[] = {{"mainturret",0},{"maingun",0},{"optics",0},{"optics_stabilization",0},{"legs_zeroing",0},{"uplegs_zeroing",0}};
        hide[] = {"light_back","brzdove svetlo","clan","podsvit pristroju","poskozeni"};
        verticalOffset = 0.757;
        verticalOffsetWorld = 0.035;
        init = "''";
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_G_Mortar_01_F.jpg";
    _generalMacro = "B_G_Mortar_01_F";
    scope = 2;
    scopeCurator = 2;
    side = 1;
    faction = "BLU_G_F";
    crew = "B_G_Soldier_F";
};

/*
    INCLUDE INHERITED ENTRIES: false
    SHOW CLASSES ONLY: false
    UNLOCALIZED TEXT: true
    CONFIG PATH: bin\config.bin/CfgVehicles/I_G_Mortar_01_F
    SOURCE ADD-ON(S): A3_Static_F_Mortar_01, tbd_mortars_mk6
*/

class I_G_Mortar_01_F: Mortar_01_base_F
{
    author = $STR_A3_BOHEMIA_INTERACTIVE;
    class SimpleObject
    {
        eden = 1;
        animate[] = {{"mainturret",0},{"maingun",0},{"optics",0},{"optics_stabilization",0},{"legs_zeroing",0},{"uplegs_zeroing",0}};
        hide[] = {"light_back","brzdove svetlo","clan","podsvit pristroju","poskozeni"};
        verticalOffset = 0.757;
        verticalOffsetWorld = 0.035;
        init = "''";
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_G_Mortar_01_F.jpg";
    _generalMacro = "I_G_Mortar_01_F";
    scope = 2;
    scopeCurator = 2;
    side = 2;
    faction = "IND_G_F";
    crew = "I_G_Soldier_F";
    availableForSupportTypes[] = {"Artillery"};
    artilleryScanner = 0;
    ace_artillerytables_showRangetable = 1;
    ace_artillerytables_showGunLaying = 1;
};


/*
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    UNLOCALIZED TEXT: true
    CONFIG PATH: bin\config.bin/CfgVehicles/B_Mortar_01_F
    SOURCE ADD-ON(S): A3_Static_F_Mortar_01
*/

