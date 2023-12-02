/*
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    UNLOCALIZED TEXT: false
    CONFIG PATH: bin\config.bin/CfgVehicles/O_Mortar_01_F
    SOURCE ADD-ON(S): A3_Static_F_Mortar_01
*/

class O_Mortar_01_F {
    author = "Bohemia Interactive";
    class SimpleObject {
        eden = 1;
        animate[] = {{"mainturret", 0}, {"maingun", 0}, {"optics", 0}, {"optics_stabilization", 0}, {"legs_zeroing", 0}, {"uplegs_zeroing", 0}};
        hide[] = {"light_back", "brzdove svetlo", "clan", "podsvit pristroju", "poskozeni"};
        verticalOffset = 0.757;
        verticalOffsetWorld = 0.035;
        init = "''";
    };
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_Mortar_01_F.jpg";
    _generalMacro = "O_Mortar_01_F";
    scope = 2;
    side = 0;
    faction = "OPF_F";
    crew = "O_Soldier_F";
    availableForSupportTypes[] = {"Artillery"};
    class assembleInfo {
        dissasembleTo[] = {"O_Mortar_01_weapon_F", "O_Mortar_01_support_F"};
        primary = 0;
        base = "";
        assembleTo = "";
        displayName = "";
    };
    transportSoldier = 0;
    cargoAction[] = {"Mortar_Gunner"};
    getInAction = "GetInMortar";
    getOutAction = "GetOutLow";
    unitInfoType = "RscUnitInfoMortar";
    editorSubcategory = "EdSubcat_Turrets";
    picture = "\A3\Static_f\Mortar_01\data\UI\Mortar_01_ca.paa";
    icon = "\A3\Static_f\Mortar_01\data\UI\map_Mortar_01_CA.paa";
    cost = 200000;
    accuracy = 0.25;
    EPEImpulseDamageCoef = 5;
    class Turrets {
        class MainTurret {
            gunnerAction = "Mortar_Gunner";
            gunnergetInAction = "";
            gunnergetOutAction = "";
            weapons[] = {"mortar_82mm"};
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
            class ViewOptics {
                initAngleX = 0;
                minAngleX = -30;
                maxAngleX = 30;
                initAngleY = 0;
                minAngleY = -100;
                maxAngleY = 100;
                initFov = 0.174;
                minFov = 0.0077778;
                maxFov = 0.14;
                visionMode[] = {"Normal", "NVG"};
                minMoveX = 0;
                maxMoveX = 0;
                minMoveY = 0;
                maxMoveY = 0;
                minMoveZ = 0;
                maxMoveZ = 0;
            };
            minelev = -30;
            maxelev = 13;
            magazines[] = {"8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_shells", "8Rnd_82mm_Mo_Flare_white", "8Rnd_82mm_Mo_Smoke_white"};
            ejectDeadGunner = 1;
            usepip = 2;
            turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
            discreteDistanceInitIndex = 0;
            class HitPoints {
                class HitGun {
                    armor = 0.3;
                    material = -1;
                    name = "action";
                    visual = "autonomous_unhide";
                    passThrough = 0;
                    radius = 0.2;
                };
                class HitTurret {
                    class DestructionEffects {
                        class Smoke {
                            simulation = "particles";
                            type = "WeaponWreckSmoke";
                            position = "destructionEffect";
                            intensity = 1;
                            interval = 1;
                            lifeTime = 5;
                        };
                    };
                    armor = 0.3;
                    material = -1;
                    name = "action";
                    visual = "autonomous_unhide";
                    passThrough = 0;
                    radius = 0.2;
                };
            };
            class Components {
                class VehicleSystemsDisplayManagerComponentLeft {
                    class Components {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay {
                            componentType = "UAVFeedDisplayComponent";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    left = 1;
                    defaultDisplay = "EmptyDisplay";
                    x = "(profilenamespace getvariable ["
                        "IGUI_GRID_CUSTOMINFOLEFT_X"
                        ",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
                    y = "(profilenamespace getvariable ["
                        "IGUI_GRID_CUSTOMINFOLEFT_Y"
                        ",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
                class VehicleSystemsDisplayManagerComponentRight {
                    class Components {
                        class EmptyDisplay {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay {
                            componentType = "UAVFeedDisplayComponent";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    right = 1;
                    defaultDisplay = "EmptyDisplay";
                    x = "(profilenamespace getvariable ["
                        "IGUI_GRID_CUSTOMINFORIGHT_X"
                        ",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
                    y = "(profilenamespace getvariable ["
                        "IGUI_GRID_CUSTOMINFORIGHT_Y"
                        ",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
            };
            selectionFireAnim = "";
            memoryPointsGetInGunner = "pos_gunner";
            memoryPointsGetInGunnerDir = "pos_gunner_dir";
            gunnerReversedGetOut = 0;
            memoryPointGun = "usti hlavne";
            outGunnerMayFire = 1;
            optics = 1;
            castGunnerShadow = 1;
            canEject = 0;
            body = "mainTurret";
            gun = "mainGun";
            animationSourceBody = "mainTurret";
            animationSourceGun = "mainGun";
            animationSourceHatch = "hatchGunner";
            animationSourceCamElev = "camElev";
            proxyType = "CPGunner";
            proxyIndex = 1;
            gunnerName = "Gunner";
            gunnerType = "";
            primaryGunner = 1;
            primaryObserver = 0;
            soundServo[] = {"", 0.00316228, 1};
            soundElevation[] = {"", 0.00316228, 1};
            minOutElev = -4;
            maxOutElev = 20;
            initOutElev = 0;
            minOutTurn = -60;
            maxOutTurn = 60;
            initOutTurn = 0;
            maxHorizontalRotSpeed = 1.2;
            maxVerticalRotSpeed = 1.2;
            stabilizedInAxes = 3;
            primary = 1;
            hasGunner = 1;
            commanding = 1;
            turretCanSee = 0;
            canUseScanners = 1;
            class ViewGunner {
                initAngleX = 5;
                minAngleX = -75;
                maxAngleX = 85;
                initAngleY = 0;
                minAngleY = -150;
                maxAngleY = 150;
                minFov = 0.25;
                maxFov = 1.25;
                initFov = 0.75;
                minMoveX = 0;
                maxMoveX = 0;
                minMoveY = 0;
                maxMoveY = 0;
                minMoveZ = 0;
                maxMoveZ = 0;
                continuous = 0;
                speedZoomMaxSpeed = 1e+010;
                speedZoomMaxFOV = 0;
            };
            class TurretSpec {
                showHeadPhones = 0;
            };
            gunnerOpticsColor[] = {0, 0, 0, 1};
            gunnerOpticsShowCursor = 0;
            gunnerOutOpticsModel = "";
            gunnerOutOpticsColor[] = {0, 0, 0, 1};
            gunnerOpticsEffect[] = {};
            gunnerOutOpticsEffect[] = {};
            memoryPointGunnerOutOptics = "";
            gunnerOutForceOptics = 0;
            gunnerOutOpticsShowCursor = 0;
            gunnerFireAlsoInInternalCamera = 1;
            gunnerOutFireAlsoInInternalCamera = 1;
            gunnerUsesPilotView = 0;
            viewGunnerShadow = 1;
            viewGunnerShadowDiff = 1;
            viewGunnerShadowAmb = 1;
            hideWeaponsGunner = 1;
            canHideGunner = -1;
            forceHideGunner = 0;
            inGunnerMayFire = 1;
            showHMD = 0;
            viewGunnerInExternal = 0;
            lockWhenDriverOut = 0;
            lockWhenVehicleSpeed = -1;
            gunnerCompartments = "Compartment1";
            LODTurnedIn = -1;
            LODTurnedOut = -1;
            startEngine = 1;
            memoryPointsGetInGunnerPrecise = "";
            missileBeg = "spice rakety";
            missileEnd = "konec rakety";
            armorLights = 0.4;
            class Reflectors {
            };
            aggregateReflectors[] = {};
            class GunFire {
                access = 0;
                cloudletDuration = 0.2;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 1;
                cloudletGrowUp = 0.2;
                cloudletFadeIn = 0.01;
                cloudletFadeOut = 0.5;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletFire";
                cloudletColor[] = {1, 1, 1, 0};
                interval = 0.01;
                size = 3;
                sourceSize = 0.5;
                timeToLive = 0;
                initT = 4500;
                deltaT = -3000;
                class Table {
                    class T0 {
                        maxT = 0;
                        color[] = {0.82, 0.95, 0.93, 0};
                    };
                    class T1 {
                        maxT = 200;
                        color[] = {0.75, 0.77, 0.9, 0};
                    };
                    class T2 {
                        maxT = 400;
                        color[] = {0.56, 0.62, 0.67, 0};
                    };
                    class T3 {
                        maxT = 600;
                        color[] = {0.39, 0.46, 0.47, 0};
                    };
                    class T4 {
                        maxT = 800;
                        color[] = {0.24, 0.31, 0.31, 0};
                    };
                    class T5 {
                        maxT = 1000;
                        color[] = {0.23, 0.31, 0.29, 0};
                    };
                    class T6 {
                        maxT = 1500;
                        color[] = {0.21, 0.29, 0.27, 0};
                    };
                    class T7 {
                        maxT = 2000;
                        color[] = {0.19, 0.23, 0.21, 0};
                    };
                    class T8 {
                        maxT = 2300;
                        color[] = {0.22, 0.19, 0.1, 0};
                    };
                    class T9 {
                        maxT = 2500;
                        color[] = {0.35, 0.2, 0.02, 0};
                    };
                    class T10 {
                        maxT = 2600;
                        color[] = {0.62, 0.29, 0.03, 0};
                    };
                    class T11 {
                        maxT = 2650;
                        color[] = {0.59, 0.35, 0.05, 0};
                    };
                    class T12 {
                        maxT = 2700;
                        color[] = {0.75, 0.37, 0.03, 0};
                    };
                    class T13 {
                        maxT = 2750;
                        color[] = {0.88, 0.34, 0.03, 0};
                    };
                    class T14 {
                        maxT = 2800;
                        color[] = {0.91, 0.5, 0.17, 0};
                    };
                    class T15 {
                        maxT = 2850;
                        color[] = {1, 0.6, 0.2, 0};
                    };
                    class T16 {
                        maxT = 2900;
                        color[] = {1, 0.71, 0.3, 0};
                    };
                    class T17 {
                        maxT = 2950;
                        color[] = {0.98, 0.83, 0.41, 0};
                    };
                    class T18 {
                        maxT = 3000;
                        color[] = {0.98, 0.91, 0.54, 0};
                    };
                    class T19 {
                        maxT = 3100;
                        color[] = {0.98, 0.99, 0.6, 0};
                    };
                    class T20 {
                        maxT = 3300;
                        color[] = {0.96, 0.99, 0.72, 0};
                    };
                    class T21 {
                        maxT = 3600;
                        color[] = {1, 0.98, 0.91, 0};
                    };
                    class T22 {
                        maxT = 4200;
                        color[] = {1, 1, 1, 0};
                    };
                };
            };
            class GunClouds {
                access = 0;
                cloudletDuration = 0.3;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 1;
                cloudletGrowUp = 1;
                cloudletFadeIn = 0.01;
                cloudletFadeOut = 1;
                cloudletAccY = 0.4;
                cloudletMinYSpeed = 0.2;
                cloudletMaxYSpeed = 0.8;
                cloudletShape = "cloudletClouds";
                cloudletColor[] = {1, 1, 1, 0};
                interval = 0.05;
                size = 3;
                sourceSize = 0.5;
                timeToLive = 0;
                initT = 0;
                deltaT = 0;
                class Table {
                    class T0 {
                        maxT = 0;
                        color[] = {1, 1, 1, 0};
                    };
                };
            };
            class MGunClouds {
                access = 0;
                cloudletGrowUp = 0.05;
                cloudletFadeIn = 0;
                cloudletFadeOut = 0.1;
                cloudletDuration = 0.05;
                cloudletAnimPeriod = 1;
                cloudletSize = 1;
                cloudletAlpha = 0.3;
                cloudletAccY = 0;
                cloudletMinYSpeed = -100;
                cloudletMaxYSpeed = 100;
                cloudletShape = "cloudletClouds";
                cloudletColor[] = {1, 1, 1, 0};
                timeToLive = 0;
                interval = 0.02;
                size = 0.3;
                sourceSize = 0.02;
                initT = 0;
                deltaT = 0;
                class Table {
                    class T0 {
                        maxT = 0;
                        color[] = {1, 1, 1, 0};
                    };
                };
            };
            class Turrets {
            };
            forceNVG = 0;
            isCopilot = 0;
            gunnerLeftHandAnimName = "";
            gunnerRightHandAnimName = "";
            gunnerLeftLegAnimName = "";
            gunnerRightLegAnimName = "";
            gunnerDoor = "";
            preciseGetInOut = 0;
            turretFollowFreeLook = 0;
            allowTabLock = 1;
            showAllTargets = 0;
            dontCreateAI = 0;
            slingLoadOperator = 0;
            playerPosition = 0;
            allowLauncherIn = 0;
            allowLauncherOut = 0;
            class TurnIn {
                turnOffset = 0;
            };
            class TurnOut {
                turnOffset = 0;
            };
            gunnerInAction = "ManActTestDriver";
            gunBeg = "usti hlavne";
            gunEnd = "konec hlavne";
            showCrewAim = 0;
            ace_fcs_Enabled = 0;
            ace_fcs_MinDistance = 200;
            ace_fcs_MaxDistance = 5500;
            ace_fcs_DistanceInterval = 5;
        };
    };
    class EventHandlers {
        fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
        class CBA_Extended_EventHandlers {
            init = "call cba_xeh_fnc_init";
            fired = "call cba_xeh_fnc_fired";
            animChanged = "call cba_xeh_fnc_animChanged";
            animDone = "call cba_xeh_fnc_animDone";
            animStateChanged = "call cba_xeh_fnc_animStateChanged";
            cargoLoaded = "call cba_xeh_fnc_cargoLoaded";
            cargoUnloaded = "call cba_xeh_fnc_cargoUnloaded";
            containerClosed = "call cba_xeh_fnc_containerClosed";
            containerOpened = "call cba_xeh_fnc_containerOpened";
            controlsShifted = "call cba_xeh_fnc_controlsShifted";
            dammaged = "call cba_xeh_fnc_dammaged";
            deleted = "call cba_xeh_fnc_deleted";
            disassembled = "call cba_xeh_fnc_disassembled";
            engine = "call cba_xeh_fnc_engine";
            epeContact = "call cba_xeh_fnc_epeContact";
            epeContactEnd = "call cba_xeh_fnc_epeContactEnd";
            epeContactStart = "call cba_xeh_fnc_epeContactStart";
            explosion = "call cba_xeh_fnc_explosion";
            firedMan = "call cba_xeh_fnc_firedMan";
            firedNear = "call cba_xeh_fnc_firedNear";
            fuel = "call cba_xeh_fnc_cba_xeh_fuel";
            gear = "call cba_xeh_fnc_gear";
            gestureChanged = "call cba_xeh_fnc_gestureChanged";
            gestureDone = "call cba_xeh_fnc_gestureDone";
            getIn = "call cba_xeh_fnc_getIn";
            getInMan = "call cba_xeh_fnc_getInMan";
            getOut = "call cba_xeh_fnc_getOut";
            getOutMan = "call cba_xeh_fnc_getOutMan";
            hit = "call cba_xeh_fnc_hit";
            hitPart = "call cba_xeh_fnc_hitPart";
            incomingMissile = "call cba_xeh_fnc_incomingMissile";
            inventoryClosed = "call cba_xeh_fnc_inventoryClosed";
            inventoryOpened = "call cba_xeh_fnc_inventoryOpened";
            killed = "call cba_xeh_fnc_killed";
            landedTouchDown = "call cba_xeh_fnc_landedTouchDown";
            landedStopped = "call cba_xeh_fnc_landedStopped";
            local = "call cba_xeh_fnc_local";
            opticsModeChanged = "call cba_xeh_fnc_opticsModeChanged";
            opticsSwitch = "call cba_xeh_fnc_opticsSwitch";
            put = "call cba_xeh_fnc_put";
            reloaded = "call cba_xeh_fnc_reloaded";
            respawn = "call cba_xeh_fnc_respawn";
            ropeAttach = "call cba_xeh_fnc_ropeAttach";
            ropeBreak = "call cba_xeh_fnc_ropeBreak";
            seatSwitched = "call cba_xeh_fnc_seatSwitched";
            seatSwitchedMan = "call cba_xeh_fnc_seatSwitchedMan";
            slotItemChanged = "call cba_xeh_fnc_slotItemChanged";
            suppressed = "call cba_xeh_fnc_suppressed";
            soundPlayed = "call cba_xeh_fnc_soundPlayed";
            take = "call cba_xeh_fnc_take";
            turnIn = "call cba_xeh_fnc_turnIn";
            turnOut = "call cba_xeh_fnc_turnOut";
            visionModeChanged = "call cba_xeh_fnc_visionModeChanged";
            weaponAssembled = "call cba_xeh_fnc_weaponAssembled";
            weaponDisassembled = "call cba_xeh_fnc_weaponDisassembled";
            weaponDeployed = "call cba_xeh_fnc_weaponDeployed";
            weaponRested = "call cba_xeh_fnc_weaponRested";
        };
    };
    htMin = 1;
    htMax = 480;
    afMax = 0;
    mfMax = 0;
    mFact = 1;
    tBody = 100;
    class DestructionEffects {
        class Smoke {
            simulation = "particles";
            type = "WeaponWreckSmoke";
            position = "destructionEffect";
            intensity = 1;
            interval = 1;
            lifeTime = 5;
        };
    };
    model = "\A3\static_f\Mortar_01\Mortar_01_F";
    artilleryScanner = 1;
    SLX_XEH_DISABLED = 0;
    ace_cargo_size = 2;
    ace_cargo_canLoad = 1;
    class ace_csw {
        enabled = 1;
        disassembleWeapon = "ace_csw_staticMortarCarry";
        disassembleTurret = "ace_csw_mortarBaseplate";
        desiredAmmo = 1;
        ammoLoadTime = 3;
        ammoUnloadTime = 3;
        proxyWeapon = "ace_mk6mortar_fnc_csw_getProxyWeapon";
        magazineLocation = "_target selectionPosition 'usti hlavne'";
    };
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
    class SpeechVariants {
        class Default {
            speechSingular[] = {"veh_static_mortar_s"};
            speechPlural[] = {"veh_static_mortar_p"};
        };
    };
    textSingular = "mortar";
    textPlural = "mortars";
    nameSound = "veh_static_mortar_s";
    threat[] = {0.8, 0.8, 0.1};
    ace_artillerytables_showGunLaying = 2;
    mapSize = 2.55;
    memoryPointMissile[] = {"spice rakety", "usti hlavne"};
    memoryPointMissileDir[] = {"konec rakety", "konec hlavne"};
    class VehicleTransport {
        class Cargo {
            canBeTransported = 0;
        };
    };
    gearBox[] = {-1, 0, 1};
    soundEnviron[] = {"", 1, 0.7};
    soundEngine[] = {"", 10, 1};
    soundCrash[] = {"", 0.562341, 1};
    soundGear[] = {"", 0.000316228, 1};
    soundDammage[] = {"", 0.01, 1};
    cargoGetInAction[] = {};
    cargoGetOutAction[] = {};
    class Wounds {
        tex[] = {};
        mat[] = {};
    };
    class HitPoints {
        class HitEngine {
            armor = 0.8;
            material = -1;
            name = "motor";
            passThrough = 1;
        };
        class HitHull {
            armor = 1;
            material = -1;
            name = "telo";
            passThrough = 1;
        };
        class HitTurret {
            armor = 0.8;
            material = -1;
            name = "vez";
            passThrough = 1;
        };
        class HitGun {
            armor = 0.6;
            material = -1;
            name = "zbran";
            passThrough = 1;
        };
        class HitLTrack {
            armor = 0.6;
            material = -1;
            name = "pas_L";
            passThrough = 1;
        };
        class HitRTrack {
            armor = 0.6;
            material = -1;
            name = "pas_P";
            passThrough = 1;
        };
        class HitBody {
            armor = 1;
            material = -1;
            name = "NEzbytek";
            visual = "zbytek";
            passThrough = 1;
        };
    };
    extCameraPosition[] = {0, 1.5, -9};
    class ViewPilot {
        initAngleX = 7;
        minAngleX = -15;
        maxAngleX = 25;
        initAngleY = 0;
        minAngleY = -90;
        maxAngleY = 90;
        minFov = 0.25;
        maxFov = 1.25;
        initFov = 0.75;
        minMoveX = 0;
        maxMoveX = 0;
        minMoveY = 0;
        maxMoveY = 0;
        minMoveZ = 0;
        maxMoveZ = 0;
        speedZoomMaxSpeed = 1e+010;
        speedZoomMaxFOV = 0;
    };
    weapons[] = {"FakeWeapon"};
    magazines[] = {"FakeWeapon"};
    driverOpticsColor[] = {0, 0, 0, 1};
    class CargoLight {
        color[] = {0, 0, 0, 0};
        ambient[] = {0.6, 0, 0.15, 1};
        brightness = 0.007;
    };
    class Reflectors {
    };
    class UserActions {
        class PressXToFlipTheThing {
            displayNameDefault = "Set-up the tripod";
            displayName = "Set-up the tripod";
            position = "";
            radius = 2.7;
            onlyForPlayer = 1;
            condition = "alive this AND (not canmove this) AND (count crew this == 0 || isAutonomous this) AND (simulationEnabled this) AND ((locked this) < 2)";
            statement = "[this] call bis_fnc_unflipVehicle";
        };
    };
    vehicleClass = "Static";
    driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";
    selectionClan = "clan";
    selectionDashboard = "podsvit pristroju";
    selectionShowDamage = "poskozeni";
    selectionBackLights = "light_back";
    bounding = "usti hlavne";
    alphaTracks = 0.7;
    textureTrackWheel = 0;
    selectionLeftOffset = "";
    selectionRightOffset = "";
    memoryPointTrack1L = "";
    memoryPointTrack1R = "";
    memoryPointTrack2L = "";
    memoryPointTrack2R = "";
    tracksSpeed = 1;
    waterLeakiness = 100;
    selectionFireAnim = "";
    fireDustEffect = "FDustEffects";
    memoryPointCargoLight = "cargo light";
    driverCanSee = "1 + 2 + 4 + 8 + 32";
    gunnerCanSee = "1 + 2 + 4 + 8 + 32";
    commanderCanSee = "1 + 2 + 4 + 8 + 32";
    gunnerHasFlares = 0;
    damperSize = 1.4;
    damperForce = 0.8;
    attenuationEffectType = "OpenCarAttenuation";
    getInRadius = 3.5;
    secondaryExplosion = -1;
    fuelExplosionPower = 0;
    fuelCapacity = 0;
    irScanRangeMin = 0;
    irScanRangeMax = 0;
    irScanToEyeFactor = 1;
    allowTabLock = 0;
    irTarget = 0;
    laserTarget = 0;
    armor = 24;
    armorStructural = 1;
    explosionShielding = 1;
    minTotalDamageThreshold = 0.01;
    crewCrashProtection = 1;
    crewExplosionProtection = 0;
    steerAheadSimul = 0.4;
    steerAheadPlan = 0.6;
    predictTurnSimul = 1.2;
    predictTurnPlan = 1.8;
    ejectDeadDriver = 1;
    ejectDeadCargo = 1;
    hasDriver = 0;
    nightVision = 0;
    driverAction = "ManActCargo";
    driverInAction = "ManActCargo";
    memoryPointsGetInCargo = "pos_cargo";
    memoryPointsGetInCargoDir = "pos_cargo_dir";
    simulation = "tankX";
    occludeSoundsWhenIn = 1;
    obstructSoundsWhenIn = 1;
    formationX = 20;
    formationZ = 30;
    precision = 1;
    brakeDistance = 0;
    turnCoef = 0;
    maxSpeed = 0;
    canFloat = 0;
    type = 1;
    camouflage = 1;
    audible = 1;
    sensitivityEar = 0.125;
    sensitivity = 1.75;
    hideProxyInCombat = 0;
    transportMaxMagazines = 0;
    transportMaxWeapons = 0;
    numberPhysicalWheels = 0;
    class ACE_Actions {
        class ACE_MainActions {
            displayName = "Interactions";
            selection = "gunnerview";
            distance = 4;
            condition = "true";
            class ACE_Passengers {
                displayName = "Passengers";
                condition = "alive _target";
                statement = "";
                exceptions[] = {"isNotSwimming"};
                insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
            };
            class ace_interaction_flip {
                displayName = "Flip";
                condition = "call ace_interaction_fnc_canFlip";
                statement =
                    "["
                    "ace_interaction_flip"
                    ", _target, _target] call CBA_fnc_targetEvent";
            };
            class ace_quickmount_GetIn {
                displayName = "Get In";
                condition = "call ace_quickmount_fnc_canShowFreeSeats";
                statement = "call ace_quickmount_fnc_getInNearest";
                exceptions[] = {"isNotSwimming"};
                insertChildren = "(_this select 2) param [0,  []]";
            };
            class ace_rearm_Rearm {
                displayName = "Rearm";
                distance = 9;
                condition = "_this call ace_rearm_fnc_canRearm";
                statement = "_this call ace_rearm_fnc_rearm";
                exceptions[] = {"isNotInside"};
                icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
            };
            class ace_reload_checkAmmo {
                displayName = "Check Ammo";
                distance = 2;
                condition = "call ace_reload_fnc_canCheckAmmo";
                statement = "call ace_reload_fnc_checkAmmo";
                exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
            };
            class ace_captives_LoadCaptive {
                displayName = "Load Captive";
                distance = 4;
                condition = "[_player,  objNull,  _target] call ace_captives_fnc_canLoadCaptive";
                statement = "[_player,  objNull,  _target] call ace_captives_fnc_doLoadCaptive";
                exceptions[] = {"isNotEscorting", "isNotSwimming"};
            };
            class ace_csw_getIn {
                displayName = "Get In";
                condition = "call ace_csw_fnc_canGetIn";
                statement = "call ace_csw_fnc_getIn";
            };
        };
    };
    class MainTurret {
    };
    class Components {
        class TransportCountermeasuresComponent {
        };
    };
    selectionBrakeLights = "brzdove svetlo";
    class Exhausts {
        class Exhaust1 {
            position = "exhaust";
            direction = "exhaust_dir";
            effect = "ExhaustsEffect";
        };
    };
    engineStartSpeed = 1.5;
    leftDustEffect = "LDustEffects";
    rightDustEffect = "RDustEffects";
    leftWaterEffect = "LWaterEffects";
    rightWaterEffect = "RWaterEffects";
    leftFastWaterEffect = "LWaterEffects";
    rightFastWaterEffect = "RWaterEffects";
    aggregateReflectors[] = {{"Left", "Right"}};
    explosionEffect = "FuelExplosion";
    class CommanderOptics {
        proxyType = "CPCommander";
        proxyIndex = 1;
        gunnerName = "Commander";
        primaryGunner = 0;
        primaryObserver = 1;
        stabilizedInAxes = 0;
        body = "obsTurret";
        gun = "obsGun";
        animationSourceBody = "obsTurret";
        animationSourceGun = "obsGun";
        animationSourceHatch = "hatchCommander";
        animationSourceCamElev = "camElev";
        soundServo[] = {"A3\sounds_f\dummysound", 0.01, 1, 10};
        gunBeg = "";
        gunEnd = "";
        minElev = -4;
        maxElev = 20;
        initElev = 0;
        minTurn = -360;
        maxTurn = 360;
        initTurn = 0;
        commanding = 2;
        outGunnerMayFire = 1;
        inGunnerMayFire = 1;
        viewGunnerInExternal = 0;
        gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
        gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
        gunnerOutOpticsColor[] = {0, 0, 0, 1};
        gunnerOutForceOptics = 0;
        gunnerOutOpticsShowCursor = 0;
        gunnerOpticsEffect[] = {};
        gunnerOutOpticsEffect[] = {};
        memoryPointGunnerOutOptics = "commander_weapon_view";
        memoryPointGunnerOptics = "commanderview";
        memoryPointsGetInGunner = "pos commander";
        memoryPointsGetInGunnerDir = "pos commander dir";
        gunnerGetInAction = "GetInHigh";
        gunnerGetOutAction = "GetOutHigh";
        memoryPointGun = "gun_muzzle";
        selectionFireAnim = "zasleh_1";
        class ViewOptics {
            initAngleX = 0;
            minAngleX = -30;
            maxAngleX = 30;
            initAngleY = 0;
            minAngleY = -100;
            maxAngleY = 100;
            initFov = 0.3;
            minFov = 0.07;
            maxFov = 0.35;
            minMoveX = 0;
            maxMoveX = 0;
            minMoveY = 0;
            maxMoveY = 0;
            minMoveZ = 0;
            maxMoveZ = 0;
            speedZoomMaxSpeed = 1e+010;
            speedZoomMaxFOV = 0;
        };
        class ViewGunner {
            initAngleX = 5;
            minAngleX = -75;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
            minFov = 0.25;
            maxFov = 1.25;
            initFov = 0.75;
            minMoveX = 0;
            maxMoveX = 0;
            minMoveY = 0;
            maxMoveY = 0;
            minMoveZ = 0;
            maxMoveZ = 0;
            speedZoomMaxSpeed = 1e+010;
            speedZoomMaxFOV = 0;
        };
        gunnerType = "";
        weapons[] = {};
        magazines[] = {};
        soundElevation[] = {"", 0.00316228, 1};
        minOutElev = -4;
        maxOutElev = 20;
        initOutElev = 0;
        minOutTurn = -60;
        maxOutTurn = 60;
        initOutTurn = 0;
        maxHorizontalRotSpeed = 1.2;
        maxVerticalRotSpeed = 1.2;
        minCamElev = -90;
        maxCamElev = 90;
        initCamElev = 0;
        primary = 1;
        hasGunner = 1;
        turretCanSee = 0;
        canUseScanners = 1;
        class TurretSpec {
            showHeadPhones = 0;
        };
        gunnerOpticsColor[] = {0, 0, 0, 1};
        gunnerForceOptics = 1;
        gunnerOpticsShowCursor = 0;
        turretInfoType = "";
        gunnerFireAlsoInInternalCamera = 1;
        gunnerOutFireAlsoInInternalCamera = 1;
        gunnerUsesPilotView = 0;
        castGunnerShadow = 0;
        viewGunnerShadow = 1;
        viewGunnerShadowDiff = 1;
        viewGunnerShadowAmb = 1;
        ejectDeadGunner = 0;
        hideWeaponsGunner = 1;
        canHideGunner = -1;
        forceHideGunner = 0;
        showHMD = 0;
        lockWhenDriverOut = 0;
        lockWhenVehicleSpeed = -1;
        gunnerCompartments = "Compartment1";
        LODTurnedIn = -1;
        LODTurnedOut = -1;
        startEngine = 1;
        memoryPointsGetInGunnerPrecise = "";
        missileBeg = "spice rakety";
        missileEnd = "konec rakety";
        armorLights = 0.4;
        class Reflectors {
        };
        aggregateReflectors[] = {};
        class GunFire {
            access = 0;
            cloudletDuration = 0.2;
            cloudletAnimPeriod = 1;
            cloudletSize = 1;
            cloudletAlpha = 1;
            cloudletGrowUp = 0.2;
            cloudletFadeIn = 0.01;
            cloudletFadeOut = 0.5;
            cloudletAccY = 0;
            cloudletMinYSpeed = -100;
            cloudletMaxYSpeed = 100;
            cloudletShape = "cloudletFire";
            cloudletColor[] = {1, 1, 1, 0};
            interval = 0.01;
            size = 3;
            sourceSize = 0.5;
            timeToLive = 0;
            initT = 4500;
            deltaT = -3000;
            class Table {
                class T0 {
                    maxT = 0;
                    color[] = {0.82, 0.95, 0.93, 0};
                };
                class T1 {
                    maxT = 200;
                    color[] = {0.75, 0.77, 0.9, 0};
                };
                class T2 {
                    maxT = 400;
                    color[] = {0.56, 0.62, 0.67, 0};
                };
                class T3 {
                    maxT = 600;
                    color[] = {0.39, 0.46, 0.47, 0};
                };
                class T4 {
                    maxT = 800;
                    color[] = {0.24, 0.31, 0.31, 0};
                };
                class T5 {
                    maxT = 1000;
                    color[] = {0.23, 0.31, 0.29, 0};
                };
                class T6 {
                    maxT = 1500;
                    color[] = {0.21, 0.29, 0.27, 0};
                };
                class T7 {
                    maxT = 2000;
                    color[] = {0.19, 0.23, 0.21, 0};
                };
                class T8 {
                    maxT = 2300;
                    color[] = {0.22, 0.19, 0.1, 0};
                };
                class T9 {
                    maxT = 2500;
                    color[] = {0.35, 0.2, 0.02, 0};
                };
                class T10 {
                    maxT = 2600;
                    color[] = {0.62, 0.29, 0.03, 0};
                };
                class T11 {
                    maxT = 2650;
                    color[] = {0.59, 0.35, 0.05, 0};
                };
                class T12 {
                    maxT = 2700;
                    color[] = {0.75, 0.37, 0.03, 0};
                };
                class T13 {
                    maxT = 2750;
                    color[] = {0.88, 0.34, 0.03, 0};
                };
                class T14 {
                    maxT = 2800;
                    color[] = {0.91, 0.5, 0.17, 0};
                };
                class T15 {
                    maxT = 2850;
                    color[] = {1, 0.6, 0.2, 0};
                };
                class T16 {
                    maxT = 2900;
                    color[] = {1, 0.71, 0.3, 0};
                };
                class T17 {
                    maxT = 2950;
                    color[] = {0.98, 0.83, 0.41, 0};
                };
                class T18 {
                    maxT = 3000;
                    color[] = {0.98, 0.91, 0.54, 0};
                };
                class T19 {
                    maxT = 3100;
                    color[] = {0.98, 0.99, 0.6, 0};
                };
                class T20 {
                    maxT = 3300;
                    color[] = {0.96, 0.99, 0.72, 0};
                };
                class T21 {
                    maxT = 3600;
                    color[] = {1, 0.98, 0.91, 0};
                };
                class T22 {
                    maxT = 4200;
                    color[] = {1, 1, 1, 0};
                };
            };
        };
        class GunClouds {
            access = 0;
            cloudletDuration = 0.3;
            cloudletAnimPeriod = 1;
            cloudletSize = 1;
            cloudletAlpha = 1;
            cloudletGrowUp = 1;
            cloudletFadeIn = 0.01;
            cloudletFadeOut = 1;
            cloudletAccY = 0.4;
            cloudletMinYSpeed = 0.2;
            cloudletMaxYSpeed = 0.8;
            cloudletShape = "cloudletClouds";
            cloudletColor[] = {1, 1, 1, 0};
            interval = 0.05;
            size = 3;
            sourceSize = 0.5;
            timeToLive = 0;
            initT = 0;
            deltaT = 0;
            class Table {
                class T0 {
                    maxT = 0;
                    color[] = {1, 1, 1, 0};
                };
            };
        };
        class MGunClouds {
            access = 0;
            cloudletGrowUp = 0.05;
            cloudletFadeIn = 0;
            cloudletFadeOut = 0.1;
            cloudletDuration = 0.05;
            cloudletAnimPeriod = 1;
            cloudletSize = 1;
            cloudletAlpha = 0.3;
            cloudletAccY = 0;
            cloudletMinYSpeed = -100;
            cloudletMaxYSpeed = 100;
            cloudletShape = "cloudletClouds";
            cloudletColor[] = {1, 1, 1, 0};
            timeToLive = 0;
            interval = 0.02;
            size = 0.3;
            sourceSize = 0.02;
            initT = 0;
            deltaT = 0;
            class Table {
                class T0 {
                    maxT = 0;
                    color[] = {1, 1, 1, 0};
                };
            };
        };
        class HitPoints {
            class HitTurret {
                armor = 0.8;
                material = 51;
                name = "turret";
                visual = "turret";
                passThrough = 1;
                explosionShielding = 1;
            };
            class HitGun {
                armor = 0.6;
                material = 52;
                name = "gun";
                visual = "gun";
                passThrough = 1;
                explosionShielding = 1;
            };
        };
        class Turrets {
        };
        forceNVG = 0;
        isCopilot = 0;
        canEject = 1;
        gunnerLeftHandAnimName = "";
        gunnerRightHandAnimName = "";
        gunnerLeftLegAnimName = "";
        gunnerRightLegAnimName = "";
        gunnerDoor = "";
        preciseGetInOut = 0;
        turretFollowFreeLook = 0;
        allowTabLock = 1;
        showAllTargets = 0;
        dontCreateAI = 0;
        disableSoundAttenuation = 0;
        slingLoadOperator = 0;
        playerPosition = 0;
        allowLauncherIn = 0;
        allowLauncherOut = 0;
        class TurnIn {
            turnOffset = 0;
        };
        class TurnOut {
            turnOffset = 0;
        };
        gunnerInAction = "ManActTestDriver";
        gunnerAction = "ManActTestDriver";
        showCrewAim = 0;
        ace_fcs_Enabled = 0;
        ace_fcs_MinDistance = 200;
        ace_fcs_MaxDistance = 5500;
        ace_fcs_DistanceInterval = 5;
    };
    wheelDamageThreshold = 0.2;
    wheelDestroyThreshold = 0.99;
    wheelDamageRadiusCoef = 0.9;
    wheelDestroyRadiusCoef = 0.4;
    weaponsGroup1 = 1;
    weaponsGroup2 = "2 + 		4";
    weaponsGroup3 = "8 + 	16 + 	32";
    weaponsGroup4 = "64 + 		128";
    class SquadTitles {
        name = "clan_sign";
        color[] = {0, 0, 0, 0.75};
    };
    memoryPointDriverOptics[] = {"driverview", "pilot"};
    memoryPointsGetInDriver = "pos driver";
    memoryPointsGetInDriverDir = "pos driver dir";
    memoryPointsGetInCoDriver = "pos codriver";
    memoryPointsGetInCoDriverDir = "pos codriver dir";
    memoryPointsGetInDriverPrecise = "pos driver";
    memoryPointsGetInCargoPrecise[] = {"pos cargo"};
    memoryPointsLeftWaterEffect = "waterEffectL";
    memoryPointsRightWaterEffect = "waterEffectR";
    memoryPointTaskMarker = "";
    memoryPointTaskMarkerOffset[] = {0, 0, 0};
    class NewTurret {
        body = "mainTurret";
        gun = "mainGun";
        animationSourceBody = "mainTurret";
        animationSourceGun = "mainGun";
        animationSourceHatch = "hatchGunner";
        animationSourceCamElev = "camElev";
        proxyType = "CPGunner";
        proxyIndex = 1;
        gunnerName = "Gunner";
        gunnerType = "";
        primaryGunner = 1;
        primaryObserver = 0;
        weapons[] = {};
        magazines[] = {};
        soundServo[] = {"", 0.00316228, 1};
        soundElevation[] = {"", 0.00316228, 1};
        minElev = -4;
        maxElev = 20;
        initElev = 0;
        minTurn = -360;
        maxTurn = 360;
        initTurn = 0;
        minOutElev = -4;
        maxOutElev = 20;
        initOutElev = 0;
        minOutTurn = -60;
        maxOutTurn = 60;
        initOutTurn = 0;
        maxHorizontalRotSpeed = 1.2;
        maxVerticalRotSpeed = 1.2;
        minCamElev = -90;
        maxCamElev = 90;
        initCamElev = 0;
        stabilizedInAxes = 3;
        primary = 1;
        hasGunner = 1;
        commanding = 1;
        gunnerGetInAction = "";
        gunnerGetOutAction = "";
        turretCanSee = 0;
        canUseScanners = 1;
        class ViewGunner {
            initAngleX = 5;
            minAngleX = -75;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
            minFov = 0.25;
            maxFov = 1.25;
            initFov = 0.75;
            minMoveX = 0;
            maxMoveX = 0;
            minMoveY = 0;
            maxMoveY = 0;
            minMoveZ = 0;
            maxMoveZ = 0;
            continuous = 0;
            speedZoomMaxSpeed = 1e+010;
            speedZoomMaxFOV = 0;
        };
        class TurretSpec {
            showHeadPhones = 0;
        };
        gunnerOpticsModel = "";
        gunnerOpticsColor[] = {0, 0, 0, 1};
        gunnerForceOptics = 1;
        gunnerOpticsShowCursor = 0;
        turretInfoType = "";
        gunnerOutOpticsModel = "";
        gunnerOutOpticsColor[] = {0, 0, 0, 1};
        gunnerOpticsEffect[] = {};
        gunnerOutOpticsEffect[] = {};
        memoryPointGunnerOutOptics = "";
        gunnerOutForceOptics = 0;
        gunnerOutOpticsShowCursor = 0;
        gunnerFireAlsoInInternalCamera = 1;
        gunnerOutFireAlsoInInternalCamera = 1;
        gunnerUsesPilotView = 0;
        castGunnerShadow = 0;
        viewGunnerShadow = 1;
        viewGunnerShadowDiff = 1;
        viewGunnerShadowAmb = 1;
        ejectDeadGunner = 0;
        hideWeaponsGunner = 1;
        canHideGunner = -1;
        forceHideGunner = 0;
        outGunnerMayFire = 0;
        inGunnerMayFire = 1;
        showHMD = 0;
        viewGunnerInExternal = 0;
        lockWhenDriverOut = 0;
        lockWhenVehicleSpeed = -1;
        gunnerCompartments = "Compartment1";
        LODTurnedIn = -1;
        LODTurnedOut = -1;
        startEngine = 1;
        memoryPointsGetInGunnerPrecise = "";
        missileBeg = "spice rakety";
        missileEnd = "konec rakety";
        armorLights = 0.4;
        class Reflectors {
        };
        aggregateReflectors[] = {};
        class GunFire {
            access = 0;
            cloudletDuration = 0.2;
            cloudletAnimPeriod = 1;
            cloudletSize = 1;
            cloudletAlpha = 1;
            cloudletGrowUp = 0.2;
            cloudletFadeIn = 0.01;
            cloudletFadeOut = 0.5;
            cloudletAccY = 0;
            cloudletMinYSpeed = -100;
            cloudletMaxYSpeed = 100;
            cloudletShape = "cloudletFire";
            cloudletColor[] = {1, 1, 1, 0};
            interval = 0.01;
            size = 3;
            sourceSize = 0.5;
            timeToLive = 0;
            initT = 4500;
            deltaT = -3000;
            class Table {
                class T0 {
                    maxT = 0;
                    color[] = {0.82, 0.95, 0.93, 0};
                };
                class T1 {
                    maxT = 200;
                    color[] = {0.75, 0.77, 0.9, 0};
                };
                class T2 {
                    maxT = 400;
                    color[] = {0.56, 0.62, 0.67, 0};
                };
                class T3 {
                    maxT = 600;
                    color[] = {0.39, 0.46, 0.47, 0};
                };
                class T4 {
                    maxT = 800;
                    color[] = {0.24, 0.31, 0.31, 0};
                };
                class T5 {
                    maxT = 1000;
                    color[] = {0.23, 0.31, 0.29, 0};
                };
                class T6 {
                    maxT = 1500;
                    color[] = {0.21, 0.29, 0.27, 0};
                };
                class T7 {
                    maxT = 2000;
                    color[] = {0.19, 0.23, 0.21, 0};
                };
                class T8 {
                    maxT = 2300;
                    color[] = {0.22, 0.19, 0.1, 0};
                };
                class T9 {
                    maxT = 2500;
                    color[] = {0.35, 0.2, 0.02, 0};
                };
                class T10 {
                    maxT = 2600;
                    color[] = {0.62, 0.29, 0.03, 0};
                };
                class T11 {
                    maxT = 2650;
                    color[] = {0.59, 0.35, 0.05, 0};
                };
                class T12 {
                    maxT = 2700;
                    color[] = {0.75, 0.37, 0.03, 0};
                };
                class T13 {
                    maxT = 2750;
                    color[] = {0.88, 0.34, 0.03, 0};
                };
                class T14 {
                    maxT = 2800;
                    color[] = {0.91, 0.5, 0.17, 0};
                };
                class T15 {
                    maxT = 2850;
                    color[] = {1, 0.6, 0.2, 0};
                };
                class T16 {
                    maxT = 2900;
                    color[] = {1, 0.71, 0.3, 0};
                };
                class T17 {
                    maxT = 2950;
                    color[] = {0.98, 0.83, 0.41, 0};
                };
                class T18 {
                    maxT = 3000;
                    color[] = {0.98, 0.91, 0.54, 0};
                };
                class T19 {
                    maxT = 3100;
                    color[] = {0.98, 0.99, 0.6, 0};
                };
                class T20 {
                    maxT = 3300;
                    color[] = {0.96, 0.99, 0.72, 0};
                };
                class T21 {
                    maxT = 3600;
                    color[] = {1, 0.98, 0.91, 0};
                };
                class T22 {
                    maxT = 4200;
                    color[] = {1, 1, 1, 0};
                };
            };
        };
        class GunClouds {
            access = 0;
            cloudletDuration = 0.3;
            cloudletAnimPeriod = 1;
            cloudletSize = 1;
            cloudletAlpha = 1;
            cloudletGrowUp = 1;
            cloudletFadeIn = 0.01;
            cloudletFadeOut = 1;
            cloudletAccY = 0.4;
            cloudletMinYSpeed = 0.2;
            cloudletMaxYSpeed = 0.8;
            cloudletShape = "cloudletClouds";
            cloudletColor[] = {1, 1, 1, 0};
            interval = 0.05;
            size = 3;
            sourceSize = 0.5;
            timeToLive = 0;
            initT = 0;
            deltaT = 0;
            class Table {
                class T0 {
                    maxT = 0;
                    color[] = {1, 1, 1, 0};
                };
            };
        };
        class MGunClouds {
            access = 0;
            cloudletGrowUp = 0.05;
            cloudletFadeIn = 0;
            cloudletFadeOut = 0.1;
            cloudletDuration = 0.05;
            cloudletAnimPeriod = 1;
            cloudletSize = 1;
            cloudletAlpha = 0.3;
            cloudletAccY = 0;
            cloudletMinYSpeed = -100;
            cloudletMaxYSpeed = 100;
            cloudletShape = "cloudletClouds";
            cloudletColor[] = {1, 1, 1, 0};
            timeToLive = 0;
            interval = 0.02;
            size = 0.3;
            sourceSize = 0.02;
            initT = 0;
            deltaT = 0;
            class Table {
                class T0 {
                    maxT = 0;
                    color[] = {1, 1, 1, 0};
                };
            };
        };
        class HitPoints {
            class HitTurret {
                armor = 0.8;
                material = 51;
                name = "turret";
                visual = "turret";
                passThrough = 1;
                explosionShielding = 1;
            };
            class HitGun {
                armor = 0.6;
                material = 52;
                name = "gun";
                visual = "gun";
                passThrough = 1;
                explosionShielding = 1;
            };
        };
        class Turrets {
        };
        class ViewOptics {
            initAngleX = 0;
            minAngleX = -30;
            maxAngleX = 30;
            initAngleY = 0;
            minAngleY = -100;
            maxAngleY = 100;
            initFov = 0.3;
            minFov = 0.07;
            maxFov = 0.35;
            minMoveX = 0;
            maxMoveX = 0;
            minMoveY = 0;
            maxMoveY = 0;
            minMoveZ = 0;
            maxMoveZ = 0;
            speedZoomMaxSpeed = 1e+010;
            speedZoomMaxFOV = 0;
        };
        forceNVG = 0;
        isCopilot = 0;
        canEject = 1;
        gunnerLeftHandAnimName = "";
        gunnerRightHandAnimName = "";
        gunnerLeftLegAnimName = "";
        gunnerRightLegAnimName = "";
        gunnerDoor = "";
        preciseGetInOut = 0;
        turretFollowFreeLook = 0;
        allowTabLock = 1;
        showAllTargets = 0;
        dontCreateAI = 0;
        disableSoundAttenuation = 0;
        slingLoadOperator = 0;
        playerPosition = 0;
        allowLauncherIn = 0;
        allowLauncherOut = 0;
        class TurnIn {
            turnOffset = 0;
        };
        class TurnOut {
            turnOffset = 0;
        };
        gunnerInAction = "ManActTestDriver";
        gunnerAction = "ManActTestDriver";
        gunBeg = "usti hlavne";
        gunEnd = "konec hlavne";
        memoryPointGunnerOptics = "gunnerview";
        memoryPointsGetInGunner = "pos gunner";
        memoryPointsGetInGunnerDir = "pos gunner dir";
        memoryPointGun = "kulas";
        selectionFireAnim = "zasleh";
        showCrewAim = 0;
        ace_fcs_Enabled = 0;
        ace_fcs_MinDistance = 200;
        ace_fcs_MaxDistance = 5500;
        ace_fcs_DistanceInterval = 5;
    };
    class ViewCargo {
        initAngleX = 5;
        minAngleX = -75;
        maxAngleX = 85;
        initAngleY = 0;
        minAngleY = -150;
        maxAngleY = 150;
        minFov = 0.25;
        maxFov = 1.25;
        initFov = 0.75;
        minMoveX = 0;
        maxMoveX = 0;
        minMoveY = 0;
        maxMoveY = 0;
        minMoveZ = 0;
        maxMoveZ = 0;
        speedZoomMaxSpeed = 1e+010;
        speedZoomMaxFOV = 0;
    };
    class ViewOptics {
        initAngleX = 0;
        minAngleX = -30;
        maxAngleX = 30;
        initAngleY = 0;
        minAngleY = -100;
        maxAngleY = 100;
        initFov = 0.7;
        minFov = 0.42;
        maxFov = 0.85;
        minMoveX = 0;
        maxMoveX = 0;
        minMoveY = 0;
        maxMoveY = 0;
        minMoveZ = 0;
        maxMoveZ = 0;
        speedZoomMaxSpeed = 1e+010;
        speedZoomMaxFOV = 0;
    };
    class PilotSpec {
        showHeadPhones = 0;
    };
    class CargoSpec {
        class Cargo1 {
            showHeadPhones = 0;
        };
    };
    class MFD {
    };
    class Sounds {
        class Engine {
            sound = "soundEngine";
            frequency = "rpm";
            volume = "rpm + speed";
        };
        class Movement {
            sound = "soundEnviron";
            frequency = "speed";
            volume = "speed";
        };
    };
    class SoundEvents {
    };
    class RenderTargets {
    };
    cargoProxyIndexes[] = {};
    driverLeftHandAnimName = "";
    driverRightHandAnimName = "";
    driverLeftLegAnimName = "";
    driverRightLegAnimName = "";
    driverDoor = "";
    cargoDoors[] = {};
    hasTerminal = 0;
    getInOutOnProxy = 0;
    preciseGetInOut = 0;
    cargoPreciseGetInOut[] = {0};
    waterPPInVehicle = 1;
    impactEffectsSea = "ImpactEffectsSea";
    impactEffectSpeedLimit = 8;
    showCrewAim = 0;
    class CargoTurret {
        class ViewGunner {
            initAngleX = 5;
            minAngleX = -75;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -150;
            maxAngleY = 150;
            minFov = 0.25;
            maxFov = 1.25;
            initFov = 0.75;
            minMoveX = 0;
            maxMoveX = 0;
            minMoveY = 0;
            maxMoveY = 0;
            minMoveZ = 0;
            maxMoveZ = 0;
            speedZoomMaxSpeed = 1e+010;
            speedZoomMaxFOV = 0;
        };
        class Hitpoints {
        };
        animationSourceBody = "";
        animationSourceGun = "";
        body = "";
        canEject = 1;
        commanding = 0;
        dontCreateAI = 1;
        gun = "";
        gunnerGetInAction = "GetInLow";
        gunnerGetOutAction = "GetOutLow";
        gunnerName = "cargo";
        hideWeaponsGunner = 0;
        isCopilot = 0;
        memoryPointsGetInGunner = "pos cargo";
        memoryPointsGetInGunnerDir = "pos cargo dir";
        primaryGunner = 0;
        proxyType = "CPCargo";
        startEngine = 0;
        turretFollowFreeLook = 0;
        viewGunnerInExternal = 1;
        disableSoundAttenuation = 1;
        outGunnerMayFire = 1;
        isPersonTurret = 1;
        showAsCargo = 1;
        maxElev = 45;
        minElev = -45;
        maxTurn = 95;
        minTurn = -95;
        animationSourceHatch = "hatchGunner";
        animationSourceCamElev = "camElev";
        proxyIndex = 1;
        gunnerType = "";
        primaryObserver = 0;
        weapons[] = {};
        magazines[] = {};
        soundServo[] = {"", 0.00316228, 1};
        soundElevation[] = {"", 0.00316228, 1};
        initElev = 0;
        initTurn = 0;
        minOutElev = -4;
        maxOutElev = 20;
        initOutElev = 0;
        minOutTurn = -60;
        maxOutTurn = 60;
        initOutTurn = 0;
        maxHorizontalRotSpeed = 1.2;
        maxVerticalRotSpeed = 1.2;
        minCamElev = -90;
        maxCamElev = 90;
        initCamElev = 0;
        stabilizedInAxes = 3;
        primary = 1;
        hasGunner = 1;
        turretCanSee = 0;
        canUseScanners = 1;
        class TurretSpec {
            showHeadPhones = 0;
        };
        gunnerOpticsModel = "";
        gunnerOpticsColor[] = {0, 0, 0, 1};
        gunnerForceOptics = 1;
        gunnerOpticsShowCursor = 0;
        turretInfoType = "";
        gunnerOutOpticsModel = "";
        gunnerOutOpticsColor[] = {0, 0, 0, 1};
        gunnerOpticsEffect[] = {};
        gunnerOutOpticsEffect[] = {};
        memoryPointGunnerOutOptics = "";
        gunnerOutForceOptics = 0;
        gunnerOutOpticsShowCursor = 0;
        gunnerFireAlsoInInternalCamera = 1;
        gunnerOutFireAlsoInInternalCamera = 1;
        gunnerUsesPilotView = 0;
        castGunnerShadow = 0;
        viewGunnerShadow = 1;
        viewGunnerShadowDiff = 1;
        viewGunnerShadowAmb = 1;
        ejectDeadGunner = 0;
        canHideGunner = -1;
        forceHideGunner = 0;
        inGunnerMayFire = 1;
        showHMD = 0;
        lockWhenDriverOut = 0;
        lockWhenVehicleSpeed = -1;
        gunnerCompartments = "Compartment1";
        LODTurnedIn = -1;
        LODTurnedOut = -1;
        memoryPointsGetInGunnerPrecise = "";
        missileBeg = "spice rakety";
        missileEnd = "konec rakety";
        armorLights = 0.4;
        class Reflectors {
        };
        aggregateReflectors[] = {};
        class GunFire {
            access = 0;
            cloudletDuration = 0.2;
            cloudletAnimPeriod = 1;
            cloudletSize = 1;
            cloudletAlpha = 1;
            cloudletGrowUp = 0.2;
            cloudletFadeIn = 0.01;
            cloudletFadeOut = 0.5;
            cloudletAccY = 0;
            cloudletMinYSpeed = -100;
            cloudletMaxYSpeed = 100;
            cloudletShape = "cloudletFire";
            cloudletColor[] = {1, 1, 1, 0};
            interval = 0.01;
            size = 3;
            sourceSize = 0.5;
            timeToLive = 0;
            initT = 4500;
            deltaT = -3000;
            class Table {
                class T0 {
                    maxT = 0;
                    color[] = {0.82, 0.95, 0.93, 0};
                };
                class T1 {
                    maxT = 200;
                    color[] = {0.75, 0.77, 0.9, 0};
                };
                class T2 {
                    maxT = 400;
                    color[] = {0.56, 0.62, 0.67, 0};
                };
                class T3 {
                    maxT = 600;
                    color[] = {0.39, 0.46, 0.47, 0};
                };
                class T4 {
                    maxT = 800;
                    color[] = {0.24, 0.31, 0.31, 0};
                };
                class T5 {
                    maxT = 1000;
                    color[] = {0.23, 0.31, 0.29, 0};
                };
                class T6 {
                    maxT = 1500;
                    color[] = {0.21, 0.29, 0.27, 0};
                };
                class T7 {
                    maxT = 2000;
                    color[] = {0.19, 0.23, 0.21, 0};
                };
                class T8 {
                    maxT = 2300;
                    color[] = {0.22, 0.19, 0.1, 0};
                };
                class T9 {
                    maxT = 2500;
                    color[] = {0.35, 0.2, 0.02, 0};
                };
                class T10 {
                    maxT = 2600;
                    color[] = {0.62, 0.29, 0.03, 0};
                };
                class T11 {
                    maxT = 2650;
                    color[] = {0.59, 0.35, 0.05, 0};
                };
                class T12 {
                    maxT = 2700;
                    color[] = {0.75, 0.37, 0.03, 0};
                };
                class T13 {
                    maxT = 2750;
                    color[] = {0.88, 0.34, 0.03, 0};
                };
                class T14 {
                    maxT = 2800;
                    color[] = {0.91, 0.5, 0.17, 0};
                };
                class T15 {
                    maxT = 2850;
                    color[] = {1, 0.6, 0.2, 0};
                };
                class T16 {
                    maxT = 2900;
                    color[] = {1, 0.71, 0.3, 0};
                };
                class T17 {
                    maxT = 2950;
                    color[] = {0.98, 0.83, 0.41, 0};
                };
                class T18 {
                    maxT = 3000;
                    color[] = {0.98, 0.91, 0.54, 0};
                };
                class T19 {
                    maxT = 3100;
                    color[] = {0.98, 0.99, 0.6, 0};
                };
                class T20 {
                    maxT = 3300;
                    color[] = {0.96, 0.99, 0.72, 0};
                };
                class T21 {
                    maxT = 3600;
                    color[] = {1, 0.98, 0.91, 0};
                };
                class T22 {
                    maxT = 4200;
                    color[] = {1, 1, 1, 0};
                };
            };
        };
        class GunClouds {
            access = 0;
            cloudletDuration = 0.3;
            cloudletAnimPeriod = 1;
            cloudletSize = 1;
            cloudletAlpha = 1;
            cloudletGrowUp = 1;
            cloudletFadeIn = 0.01;
            cloudletFadeOut = 1;
            cloudletAccY = 0.4;
            cloudletMinYSpeed = 0.2;
            cloudletMaxYSpeed = 0.8;
            cloudletShape = "cloudletClouds";
            cloudletColor[] = {1, 1, 1, 0};
            interval = 0.05;
            size = 3;
            sourceSize = 0.5;
            timeToLive = 0;
            initT = 0;
            deltaT = 0;
            class Table {
                class T0 {
                    maxT = 0;
                    color[] = {1, 1, 1, 0};
                };
            };
        };
        class MGunClouds {
            access = 0;
            cloudletGrowUp = 0.05;
            cloudletFadeIn = 0;
            cloudletFadeOut = 0.1;
            cloudletDuration = 0.05;
            cloudletAnimPeriod = 1;
            cloudletSize = 1;
            cloudletAlpha = 0.3;
            cloudletAccY = 0;
            cloudletMinYSpeed = -100;
            cloudletMaxYSpeed = 100;
            cloudletShape = "cloudletClouds";
            cloudletColor[] = {1, 1, 1, 0};
            timeToLive = 0;
            interval = 0.02;
            size = 0.3;
            sourceSize = 0.02;
            initT = 0;
            deltaT = 0;
            class Table {
                class T0 {
                    maxT = 0;
                    color[] = {1, 1, 1, 0};
                };
            };
        };
        class Turrets {
        };
        class ViewOptics {
            initAngleX = 0;
            minAngleX = -30;
            maxAngleX = 30;
            initAngleY = 0;
            minAngleY = -100;
            maxAngleY = 100;
            initFov = 0.3;
            minFov = 0.07;
            maxFov = 0.35;
            minMoveX = 0;
            maxMoveX = 0;
            minMoveY = 0;
            maxMoveY = 0;
            minMoveZ = 0;
            maxMoveZ = 0;
            speedZoomMaxSpeed = 1e+010;
            speedZoomMaxFOV = 0;
        };
        forceNVG = 0;
        gunnerLeftHandAnimName = "";
        gunnerRightHandAnimName = "";
        gunnerLeftLegAnimName = "";
        gunnerRightLegAnimName = "";
        gunnerDoor = "";
        preciseGetInOut = 0;
        allowTabLock = 1;
        showAllTargets = 0;
        slingLoadOperator = 0;
        playerPosition = 0;
        allowLauncherIn = 0;
        allowLauncherOut = 0;
        class TurnIn {
            turnOffset = 0;
        };
        class TurnOut {
            turnOffset = 0;
        };
        gunnerInAction = "ManActTestDriver";
        gunnerAction = "ManActTestDriver";
        gunBeg = "usti hlavne";
        gunEnd = "konec hlavne";
        memoryPointGunnerOptics = "gunnerview";
        memoryPointGun = "kulas";
        selectionFireAnim = "zasleh";
        showCrewAim = 0;
        ace_fcs_Enabled = 0;
        ace_fcs_MinDistance = 200;
        ace_fcs_MaxDistance = 5500;
        ace_fcs_DistanceInterval = 5;
    };
    curatorInfoType = "RscDisplayAttributesVehicle";
    curatorInfoTypeEmpty = "RscDisplayAttributesVehicleEmpty";
    ace_refuel_flowRate = 1;
    access = 0;
    reversed = 1;
    autocenter = 1;
    animated = 1;
    shadow = 1;
    featureType = 0;
    speechSingular[] = {};
    speechPlural[] = {};
    maxDetectRange = 20;
    detectSkill = 20;
    mineAlertIconRange = 200;
    killFriendlyExpCoef = 1;
    weaponSlots = 0;
    spotableDarkNightLightsOff = 0.001;
    spotableNightLightsOff = 0.02;
    spotableNightLightsOn = 4;
    accuracyDarkNightLightsOff = 0.001;
    accuracyNightLightsOff = 0.006;
    accuracyNightLightsOn = 0.1;
    insideSoundCoef = 0.5;
    outsideSoundFilter = 0;
    obstructSoundLFRatio = 0;
    occludeSoundLFRatio = 0.25;
    unloadInCombat = 0;
    antiRollbarForceCoef = 0;
    antiRollbarForceLimit = 5;
    antiRollbarSpeedMin = 20;
    antiRollbarSpeedMax = 60;
    slowSpeedForwardCoef = 0.3;
    normalSpeedForwardCoef = 0.85;
    enableManualFire = 1;
    portrait = "";
    ghostPreview = "";
    destrType = "DestructDefault";
    armorLights = 0.4;
    crewVulnerable = 1;
    damageResistance = 0.004;
    replaceDamaged = "";
    replaceDamagedLimit = 0.9;
    replaceDamagedHitpoints[] = {};
    keepInEPESceneAfterDeath = 0;
    fuelConsumptionRate = 0.01;
    groupCameraPosition[] = {0, 5, -30};
    extCameraParams[] = {1};
    cameraSmoothSpeed = 5;
    minFireTime = 20;
    indirectHitEnemyCoefAI = 10;
    indirectHitFriendlyCoefAI = -20;
    indirectHitCivilianCoefAI = -20;
    indirectHitUnknownCoefAI = -0.5;
    formationTime = 5;
    alwaysTarget = 0;
    irScanGround = 1;
    laserScanner = 0;
    nvTarget = 0;
    nvScanner = 0;
    artilleryTarget = 0;
    canUseScanners = 1;
    preferRoads = 0;
    unitInfoTypeLite = 0;
    hideUnitInfo = 0;
    radarType = 0;
    limitedSpeedCoef = 0.22;
    driverForceOptics = 0;
    hideWeaponsDriver = 1;
    hideWeaponsCargo = 0;
    memoryPointSupply = "doplnovani";
    supplyRadius = -1;
    enableGPS = 0;
    enableWatch = 0;
    enableRadio = 0;
    lockDetectionSystem = 0;
    incomingMissileDetectionSystem = 0;
    headGforceLeaningFactor[] = {0.01, 0.002, 0.01};
    usePreciseGetInAction = 0;
    showAllTargets = 0;
    dustFrontLeftPos = "dustFrontLeft";
    dustFrontRightPos = "dustFrontRight";
    dustBackLeftPos = "dustBackLeft";
    dustBackRightPos = "dustBackRight";
    wheelCircumference = 1;
    waterResistanceCoef = 0.5;
    waterLinearDampingCoefX = 0;
    waterLinearDampingCoefY = 0;
    waterAngularDampingCoef = 0;
    showNVGDriver = 0;
    showNVGCommander = 0;
    showNVGGunner = 0;
    showNVGCargo[] = {0};
    soundAttenuationCargo[] = {1};
    countsForScoreboard = 1;
    hullDamageCauseExplosion = 0;
    class MarkerLights {
    };
    class NVGMarkers {
    };
    class NVGMarker {
        diffuse[] = {1, 1, 1, 1};
        ambient[] = {1, 1, 1, 1};
        brightness = 1;
        blinking = 0;
        onlyInNvg = 0;
    };
    class HeadLimits {
        initAngleX = 5;
        minAngleX = -30;
        maxAngleX = 40;
        initAngleY = 0;
        minAngleY = -90;
        maxAngleY = 90;
        minAngleZ = -45;
        maxAngleZ = 45;
        rotZRadius = 0.2;
    };
    transportAmmo = 0;
    transportMaxBackpacks = 0;
    isbackpack = 0;
    transportFuel = 0;
    transportRepair = 0;
    transportVehiclesCount = 0;
    transportVehiclesMass = 0;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    attendant = 0;
    engineer = 0;
    uavHacker = 0;
    class SoundEnvironExt {
    };
    class SoundEquipment {
    };
    class SoundBreath {
    };
    class SoundBreathSwimming {
    };
    class SoundBreathInjured {
    };
    class SoundHitScream {
    };
    class SoundInjured {
    };
    class SoundBreathAutomatic {
    };
    class SoundDrown {
    };
    class SoundChoke {
    };
    class SoundRecovered {
    };
    class SoundBurning {
    };
    class PulsationSound {
    };
    class SoundDrowning {
    };
    soundLandCrash[] = {"", 1, 1};
    soundWaterCrash[] = {"", 0.177828, 1};
    soundGetIn[] = {"", 0.000316228, 1};
    soundGetOut[] = {"", 0.000316228, 1};
    soundServo[] = {"", 0.00316228, 0.5};
    soundElevation[] = {"", 0.00316228, 0.5};
    sounddamage[] = {"", 1, 1};
    soundEngineOnInt[] = {"", 1, 1};
    soundEngineOffInt[] = {"", 1, 1};
    soundEngineOnExt[] = {"", 1, 1};
    soundEngineOffExt[] = {"", 1, 1};
    soundGearUp[] = {"", 1, 1};
    soundGearDown[] = {"", 1, 1};
    soundFlapsUp[] = {"", 1, 1};
    soundFlapsDown[] = {"", 1, 1};
    cabinOpenSound[] = {"", 1, 1};
    cabinCloseSound[] = {"", 1, 1};
    cabinOpenSoundInternal[] = {"", 1, 1};
    cabinCloseSoundInternal[] = {"", 1, 1};
    soundCrashes[] = {"soundCrash", 1};
    soundLandCrashes[] = {"soundLandCrash", 1};
    soundWaterCrashes[] = {"soundWaterCrash", 1};
    emptySound[] = {"", 0, 1};
    soundWoodCrash[] = {"emptySound", 0};
    soundBushCrash[] = {"emptySound", 0};
    soundBuildingCrash[] = {"emptySound", 0};
    soundArmorCrash[] = {"emptySound", 0};
    soundLocked[] = {"", 1, 1};
    soundIncommingMissile[] = {"", 1, 1};
    typicalCargo[] = {};
    cargoIsCoDriver[] = {0};
    driverCompartments = "Compartment1";
    cargoCompartments[] = {"Compartment1"};
    driverOpticsEffect[] = {};
    forceHideDriver = 0;
    canHideDriver = -1;
    castDriverShadow = 0;
    castCargoShadow = 0;
    viewDriverShadow = 1;
    viewDriverShadowDiff = 1;
    viewDriverShadowAmb = 1;
    viewCargoShadow = 1;
    viewCargoShadowDiff = 1;
    viewCargoShadowAmb = 1;
    hiddenSelectionsMaterials[] = {};
    hiddenUnderwaterSelections[] = {};
    shownUnderWaterSelections[] = {};
    hiddenUnderwaterSelectionsTextures[] = {};
    class FxExplo {
        access = 1;
    };
    class AnimationSources {
    };
    class GunFire {
        access = 0;
        cloudletDuration = 0.2;
        cloudletAnimPeriod = 1;
        cloudletSize = 1;
        cloudletAlpha = 1;
        cloudletGrowUp = 0.2;
        cloudletFadeIn = 0.01;
        cloudletFadeOut = 0.5;
        cloudletAccY = 0;
        cloudletMinYSpeed = -100;
        cloudletMaxYSpeed = 100;
        cloudletShape = "cloudletFire";
        cloudletColor[] = {1, 1, 1, 0};
        interval = 0.01;
        size = 3;
        sourceSize = 0.5;
        timeToLive = 0;
        initT = 4500;
        deltaT = -3000;
        class Table {
            class T0 {
                maxT = 0;
                color[] = {0.82, 0.95, 0.93, 0};
            };
            class T1 {
                maxT = 200;
                color[] = {0.75, 0.77, 0.9, 0};
            };
            class T2 {
                maxT = 400;
                color[] = {0.56, 0.62, 0.67, 0};
            };
            class T3 {
                maxT = 600;
                color[] = {0.39, 0.46, 0.47, 0};
            };
            class T4 {
                maxT = 800;
                color[] = {0.24, 0.31, 0.31, 0};
            };
            class T5 {
                maxT = 1000;
                color[] = {0.23, 0.31, 0.29, 0};
            };
            class T6 {
                maxT = 1500;
                color[] = {0.21, 0.29, 0.27, 0};
            };
            class T7 {
                maxT = 2000;
                color[] = {0.19, 0.23, 0.21, 0};
            };
            class T8 {
                maxT = 2300;
                color[] = {0.22, 0.19, 0.1, 0};
            };
            class T9 {
                maxT = 2500;
                color[] = {0.35, 0.2, 0.02, 0};
            };
            class T10 {
                maxT = 2600;
                color[] = {0.62, 0.29, 0.03, 0};
            };
            class T11 {
                maxT = 2650;
                color[] = {0.59, 0.35, 0.05, 0};
            };
            class T12 {
                maxT = 2700;
                color[] = {0.75, 0.37, 0.03, 0};
            };
            class T13 {
                maxT = 2750;
                color[] = {0.88, 0.34, 0.03, 0};
            };
            class T14 {
                maxT = 2800;
                color[] = {0.91, 0.5, 0.17, 0};
            };
            class T15 {
                maxT = 2850;
                color[] = {1, 0.6, 0.2, 0};
            };
            class T16 {
                maxT = 2900;
                color[] = {1, 0.71, 0.3, 0};
            };
            class T17 {
                maxT = 2950;
                color[] = {0.98, 0.83, 0.41, 0};
            };
            class T18 {
                maxT = 3000;
                color[] = {0.98, 0.91, 0.54, 0};
            };
            class T19 {
                maxT = 3100;
                color[] = {0.98, 0.99, 0.6, 0};
            };
            class T20 {
                maxT = 3300;
                color[] = {0.96, 0.99, 0.72, 0};
            };
            class T21 {
                maxT = 3600;
                color[] = {1, 0.98, 0.91, 0};
            };
            class T22 {
                maxT = 4200;
                color[] = {1, 1, 1, 0};
            };
        };
    };
    class GunClouds {
        access = 0;
        cloudletDuration = 0.3;
        cloudletAnimPeriod = 1;
        cloudletSize = 1;
        cloudletAlpha = 1;
        cloudletGrowUp = 1;
        cloudletFadeIn = 0.01;
        cloudletFadeOut = 1;
        cloudletAccY = 0.4;
        cloudletMinYSpeed = 0.2;
        cloudletMaxYSpeed = 0.8;
        cloudletShape = "cloudletClouds";
        cloudletColor[] = {1, 1, 1, 0};
        interval = 0.05;
        size = 3;
        sourceSize = 0.5;
        timeToLive = 0;
        initT = 0;
        deltaT = 0;
        class Table {
            class T0 {
                maxT = 0;
                color[] = {1, 1, 1, 0};
            };
        };
    };
    class MGunClouds {
        access = 0;
        cloudletGrowUp = 0.05;
        cloudletFadeIn = 0;
        cloudletFadeOut = 0.1;
        cloudletDuration = 0.05;
        cloudletAnimPeriod = 1;
        cloudletSize = 1;
        cloudletAlpha = 0.3;
        cloudletAccY = 0;
        cloudletMinYSpeed = -100;
        cloudletMaxYSpeed = 100;
        cloudletShape = "cloudletClouds";
        cloudletColor[] = {1, 1, 1, 0};
        timeToLive = 0;
        interval = 0.02;
        size = 0.3;
        sourceSize = 0.02;
        initT = 0;
        deltaT = 0;
        class Table {
            class T0 {
                maxT = 0;
                color[] = {1, 1, 1, 0};
            };
        };
    };
    selectionDamage = "zbytek";
    HeadAimDown = 0;
    cargoCanEject = 1;
    driverCanEject = 1;
    fireResistance = 10;
    airCapacity = 10;
    waterResistance = 10;
    waterDamageEngine = 0.2;
    maxFordingDepth = 1;
    damageTexDelay = 0;
    coefInside = 2;
    coefInsideHeur = 2;
    coefSpeedInside = 2;
    windSockExist = 0;
    slingLoadCargoMemoryPoints[] = {};
    slingLoadCargoMemoryPointsDir[] = {};
    damageHalf[] = {};
    damageFull[] = {};
    class camShakeGForce {
        power = 1;
        frequency = 20;
        distance = 0;
        minSpeed = 1;
        duration = 3;
    };
    minGForce = 0.2;
    maxGForce = 2;
    gForceShakeAttenuation = 0.5;
    class camShakeDamage {
        power = 0.5;
        frequency = 60;
        distance = -1;
        minSpeed = 1;
        attenuation = 0.5;
        duration = 3;
    };
    soundTurnIn[] = {"", 0.000316228, 1};
    soundTurnOut[] = {"", 0.000316228, 1};
    soundTurnInInternal[] = {"", 0.000316228, 1};
    soundTurnOutInternal[] = {"", 0.000316228, 1};
    insideDetectCoef = 0.05;
};
