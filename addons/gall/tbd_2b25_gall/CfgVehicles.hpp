class CfgVehicles {
    class LandVehicle {
        class Turrets;
        class EventHandlers;
        class ACE_Actions;
    };
    class StaticWeapon : LandVehicle {
         class Turrets: Turrets {
            class MainTurret;
        };
    };
    class StaticMortar : StaticWeapon {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class ViewGunner;
                class ViewOptics;
            };
        };
    };

    class TBD_2B25_GALL : StaticMortar {
        artilleryScanner = 0; // turn off artillery computer
        ace_artillerytables_showRangetable = 1; // "fix" rangetables not showing up
        ace_artillerytables_showGunLaying = 1;  // "fix" rangetables not showing up

        scope = 2;
        scopeCurator = 2;
        author = "TBD Team";
        displayName = "$STR_TBD_2B25";
        model = QPATHTOF(TBD_2B25_GALL\TBD_2B25_GALL);
        editorPreview = QPATHTOF(TBD_2B25_GALL\data\preview.paa);
        picture = QPATHTOF(TBD_2B25_GALL\data\tbd_2b25_icon.paa);
        side = 0;
        faction = "OPF_F";
        crew = "O_Soldier_F";

        transportSoldier = 0;
        cargoAction[] = {"2B25pose"};
        getInAction = "GetInMortar";
        getOutAction = "GetOutLow";
        unitInfoType = "RscUnitInfoMortar";
        editorSubcategory = "EdSubcat_Turrets";
        cost = 200000;
        accuracy = 0.8;
        EPEImpulseDamageCoef = 5;

        class AnimationSources {
            class RoundHideSource {
                weapon = QUOTE(TBD_2B25_WEAPON);
                selection = "round_selection";
                source = "ammo";
                type = "hide";
                hideValue = 0;
                unhideValue = 1;
            };

            class Mamasource {
                weapon = QUOTE(TBD_2B25_WEAPON);
                selection = "round_selection";
                source = "reloadMagazine";
            };

             class LegsSource {
                selection = "legs";
                source = "mainGun";
            };
        };

        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerRightHandAnimName = "axis_right_hand";
                gunnerLeftHandAnimName = "axis_left_hand";
                gunnerAction = "2B25pose";
                gunnergetInAction = "GetInLow";
                gunnergetOutAction = "GetOutLow";
                weapons[] = {QUOTE(TBD_2B25_WEAPON)};
                elevationMode = 1;
                initCamElev = 0;
                minCamElev = -35;
                maxCamElev = 35;
                initElev = 0;
                minTurn = -180;
                maxTurn = 180;
                initTurn = 0;
                cameraDir = "usti hlavne";
                discreteDistance[] = {};
                //discreteDistanceCameraPoint[] = {"eye"};
                gunnerForceOptics = 0;
                memoryPointGunnerOptics = "gunnerview";
                gunnerOpticsModel = QPATHTOF(TBD_2B25_GALL\scope.p3d);
                gunnerUsesPilotView = 1;
                disableSoundAttenuation = 1;
                class ViewGunner : ViewGunner {
                   // camPos = "gunnerview";
                   // camDir = "look2";
                    initAngleX = -70;
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleY = -45;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initFov = 1;
                    minFov = 1;
                    maxFov = 1;
                    visionMode[] = {"Normal"};
                };

                class ViewOptics: ViewOptics {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.15;
                    minFov = 0.15;
                    maxFov = 0.15;
                    visionMode[] = {"Normal"};
                };
                minelev = 0;
                maxelev = 44;
                magazines[] = {};
                ejectDeadGunner = 1;
                usepip = 2;
                discreteDistanceInitIndex = 0;
                primaryGunner = 1;
                maxHorizontalRotSpeed = 1.2;
                memoryPointsGetInGunner = "pos_gunner";
                memoryPointsGetInGunnerDir = "pos_gunner_dir";
                proxyType = "CPGunner";
                proxyIndex = 1;
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

        /*class ACE_SelfActions {
            class ace_mk6mortar_toggleMils {
                displayName = "Toggle MILS";
                condition = "true";
                statement = "_this call ace_mk6mortar_fnc_toggleMils";
                exceptions[] = {};
            };
        };*/

        class ACE_Actions: ACE_Actions {
            class ACE_LoadRound {
                selection = "usti hlavne";
                distance = 2.5;
                condition = "alive _target";
                showDisabled = 1;
                priority = 5;
                displayName = "$STR_TBD_MORTAR_82MM_LOAD";
                icon = QMORTPATH(main,data\load.paa);

                class ACE_LoadRound_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_HE_SHELL";
                    icon = QPATHTOF(TBD_2B25_HE\data\icon.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_2B25_HE)))] call MORTFUNC(checkCanLoadShell));
                    statement = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_2B25_HE)))] call MORTFUNC(loadShell));
                    showDisabled = 0;
                };
            };

            class ACE_UnloadRound {
                selection = "usti hlavne";
                distance = 2.5;
                condition = "alive _target";
                showDisabled = 1;
                priority = 5;
                displayName = "$STR_TBD_MORTAR_82MM_UNLOAD";
                icon = QMORTPATH(main,data\unload.paa);
                class ACE_UnloadRound_HE {
                    displayName = "$STR_TBD_MORTAR_82MM_HE_SHELL";
                    icon = QPATHTOF(TBD_2B25_HE\data\icon.paa);
                    condition = QUOTE([ARR_3(_target,0,QUOTE(QUOTE(TBD_2B25_HE)))] call MORTFUNC(checkCanUnloadShell));
                    statement = QUOTE([ARR_4(_target,0,QUOTE(QUOTE(TBD_2B25_HE)),_player)] call MORTFUNC(unloadShell));
                    showDisabled = 0;
                };
            };
        };

        class ACE_CSW {
            enabled = 1;
            disassembleTurret = QUOTE(TBD_2B25_BASEPLATE);
            disassembleWeapon = QUOTE(TBD_2B25_CARRY);
            disassembleFunc = QFUNC(handleDisassembly);
        };
    };

    class ace_csw_baseTripod;
    class ace_csw_mortarBaseplate: ace_csw_baseTripod {};

    class TBD_2B25_BASEPLATE: ace_csw_mortarBaseplate {
        class ACE_CSW {
            disassembleTo = QUOTE(TBD_2B25_TRIPOD);
        };
        model = QPATHTOF(TBD_2B25_GALL\tbd_2b25_baseplate.p3d);
    };
};
