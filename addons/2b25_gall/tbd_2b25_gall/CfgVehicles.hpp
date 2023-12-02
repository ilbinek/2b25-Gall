class CfgVehicles {
    class All;
    class AllVehicles : All {};
    class Land : AllVehicles {};
    class LandVehicle : Land {};
    class StaticWeapon : LandVehicle {};
    class StaticMortar : StaticWeapon {
        class Turrets {
            class MainTurret;
        };
    };

    class TBD_2B25_GALL : StaticMortar {
        artilleryScanner = 1;
        scope = 2;
        scopeCurator = 2;
        author = "TBD Team";
        displayName = "$STR_TBD_2B25";
        model = QPATHTOF(TBD_2B25_GALL\TBD_2B25_GALL);
        editorPreview = QPATHTOF(TBD_2B25_GALL\data\preview.paa);
        side = 0;
        faction = "OPF_F";
        crew = "B_Soldier_F";

        transportSoldier = 0;
        cargoAction[] = {"Mortar_Gunner"};
        getInAction = "GetInMortar";
        getOutAction = "GetOutLow";
        unitInfoType = "RscUnitInfoMortar";
        editorSubcategory = "EdSubcat_Turrets";
        cost = 200000;
        accuracy = 0.8;
        EPEImpulseDamageCoef = 5;

        class Turrets : Turrets {
            class MainTurret : MainTurret {
                gunnerAction = "Mortar_Gunner";
                gunnergetInAction = "";
                gunnergetOutAction = "";
                weapons[] = {QUOTE(TBD_2B25_WEAPON)};
                elevationMode = 1;
                initCamElev = 0;
                minCamElev = -35;
                maxCamElev = 35;
                initElev = 0;
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
                cameraDir = "look";
                discreteDistance[] = {};
                discreteDistanceCameraPoint[] = {"eye"};
                gunnerForceOptics = 0;
                memoryPointGunnerOptics = "eye";
                gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
                disableSoundAttenuation = 1;
                class ViewOptics : ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.174;
                    minFov = 0.0077778;
                    maxFov = 0.14;
                    visionMode[] = {"Normal"};
                };
                minelev = -30;
                maxelev = 13;
                magazines[] = {QUOTE(TBD_2B25_HE)};
                ejectDeadGunner = 1;
                usepip = 2;
                turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
                discreteDistanceInitIndex = 0;
                primaryGunner = 1;
                maxHorizontalRotSpeed = 1.2;
            };
        };
        htMin = 1;
        htMax = 480;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 100;

        ace_cargo_size = 2;
        ace_cargo_canLoad = 1;

        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};
        ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.2, 0};

        class ACE_SelfActions {
            class ace_mk6mortar_toggleMils {
                displayName = "Toggle MILS";
                condition = "true";
                statement = "_this call ace_mk6mortar_fnc_toggleMils";
                exceptions[] = {};
            };
        };
    };
};
