class CfgPatches
{
	class 2B25
	{
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"A3_Armor_F_Beta","A3_Data_F","A3_Weapons_F_Gamma"};
		requiredVersion = 0.1;
		weapons[] = {""};
		units[] = {"2B25"};
	};
};

class cfgVehicles
{
class All;
class AllVehicles: All
{};

class Land: AllVehicles
{};

class LandVehicle: Land
{};

class StaticWeapon: LandVehicle
{};

class StaticMortar: StaticWeapon
{};

class rhs_2b14_82mm_Base: StaticMortar
{};

class rhsgref_ins_2b14: rhs_2b14_82mm_Base
{};

class 2B25: rhsgref_ins_2b14
	{
        scope = 2;
		scopeCurator = 2;
        //mapSize = 3;
        //icon = "iconObject_2x2"; 
		model = QPATHTOF(2b25-Gall\2B25); 
		displayName = "2B25";

        textSingular = $STR_A3_NAMESOUND_VEH_STATIC_MORTAR_S;
        textPlural = $STR_A3_NAMESOUND_VEH_STATIC_MORTAR_P;
        nameSound = "veh_static_mortar_s";
       _generalMacro = "StaticMortar";
        threat[] = {0.8,0.8,0.1};
        accuracy = 0.12;
        cost = 10000;
        getInAction = "GetInLow";
        getOutAction = "GetOutLow";
        ace_artillerytables_showGunLaying = 2;
        epeImpulseDamageCoef = 8;
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
    GhostPreview = "M2StaticMGPreview";

																																			

		class Turrets
    {
        class MainTurret
        {
            gunnerAction = "rhs_D30_Cargo";
            turretInfoType = "rhs_gui_optic_mortar";
            gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg1";
            gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur2","OpticsCHAbera3"};
            class OpticsIn
            {
                class PanoramicSight
                {
                    hitpoint = "Hit_Optic_MPM44M";
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.175;
                    minFov = 0.175;
                    maxFov = 0.175;
                    visionMode[] = {"Normal"};
                    gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pg1.p3d";
                };
            };
            weapons[] = {"lex_rhs_weap_2b14"};
            magazines[] = {};
            cameraDir = "usti hlavne";
            memoryPointGunnerOptics = "gunnerview";
            elevationMode = 1;
            initCamElev = 0;
            minCamElev = -15;
            maxCamElev = 35;
            initElev = 0;
            initTurn = 0;
            minElev = -15;
            maxElev = 30;
            minTurn = -180;
            maxTurn = 180;
            usePiP = 2;
            disableSoundAttenuation = 1;
            stabilizedInAxes = 0;
            class HitPoints
            {
                class Hit_Optic_MPM44M
                {
                    armor = -40;
                    explosionShielding = 0.1;
                    name = "Hit_Optic";
                    visual = "vis_optic";
                    armorComponent = "Hit_Optic";
                    passThrough = 0;
                };
            };
            discreteDistance[] = {};
            discreteDistanceInitIndex = 0;
            gunnerGetInAction = "GetInLow";
            gunnerGetOutAction = "GetOutLow";
            class ViewOptics
            {
                initAngleX = 0;
                minAngleX = -30;
                maxAngleX = 30;
                initAngleY = 0;
                minAngleY = -100;
                maxAngleY = 100;
                minFov = 0.25;
                maxFov = 1.25;
                initFov = 0.75;
                minMoveX = 0;
                maxMoveX = 0;
                minMoveY = 0;
                maxMoveY = 0;
                minMoveZ = 0;
                maxMoveZ = 0;
            };
            class Components
            {
                class VehicleSystemsDisplayManagerComponentLeft
                {
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay
                        {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay
                        {
                            componentType = "UAVFeedDisplayComponent";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    left = 1;
                    defaultDisplay = "EmptyDisplay";
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
                };
                class VehicleSystemsDisplayManagerComponentRight
                {
                    class Components
                    {
                        class EmptyDisplay
                        {
                            componentType = "EmptyDisplayComponent";
                        };
                        class MinimapDisplay
                        {
                            componentType = "MinimapDisplayComponent";
                            resource = "RscCustomInfoMiniMap";
                        };
                        class UAVDisplay
                        {
                            componentType = "UAVFeedDisplayComponent";
                        };
                    };
                    componentType = "VehicleSystemsDisplayManager";
                    right = 1;
                    defaultDisplay = "EmptyDisplay";
                    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
                    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
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
            ejectDeadGunner = 0;
            canEject = 0;
            gunnerForceOptics = 0;
            body = "mainTurret";
            gun = "mainGun";
            animationSourceBody = "mainTurret";
            animationSourceGun = "mainGun";
            animationSourceHatch = "hatchGunner";
            animationSourceCamElev = "camElev";
            proxyType = "CPGunner";
            proxyIndex = 1;
            gunnerName = $STR_POSITION_GUNNER;
            gunnerType = "";
            primaryGunner = 1;
            primaryObserver = 0;
            soundServo[] = {"",0.00316228,1};
            soundElevation[] = {"",0.00316228,1};
            minOutElev = -4;
            maxOutElev = 20;
            initOutElev = 0;
            minOutTurn = -60;
            maxOutTurn = 60;
            initOutTurn = 0;
            maxHorizontalRotSpeed = 1.2;
            maxVerticalRotSpeed = 1.2;
            primary = 1;
            hasGunner = 1;
            commanding = 1;
            turretCanSee = 0;
            canUseScanners = 1;
            class ViewGunner
            {
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
            class TurretSpec
            {
                showHeadPhones = 0;
            };
            gunnerOpticsColor[] = {0,0,0,1};
            gunnerOpticsShowCursor = 0;
            gunnerOutOpticsModel = "";
            gunnerOutOpticsColor[] = {0,0,0,1};
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
            class Reflectors
            {
            };
            aggregateReflectors[] = {};
            class GunFire
            {
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
                cloudletColor[] = {1,1,1,0};
                interval = 0.01;
                size = 3;
                sourceSize = 0.5;
                timeToLive = 0;
                initT = 4500;
                deltaT = -3000;
                class Table
                {
                    class T0
                    {
                        maxT = 0;
                        color[] = {0.82,0.95,0.93,0};
                    };
                    class T1
                    {
                        maxT = 200;
                        color[] = {0.75,0.77,0.9,0};
                    };
                    class T2
                    {
                        maxT = 400;
                        color[] = {0.56,0.62,0.67,0};
                    };
                    class T3
                    {
                        maxT = 600;
                        color[] = {0.39,0.46,0.47,0};
                    };
                    class T4
                    {
                        maxT = 800;
                        color[] = {0.24,0.31,0.31,0};
                    };
                    class T5
                    {
                        maxT = 1000;
                        color[] = {0.23,0.31,0.29,0};
                    };
                    class T6
                    {
                        maxT = 1500;
                        color[] = {0.21,0.29,0.27,0};
                    };
                    class T7
                    {
                        maxT = 2000;
                        color[] = {0.19,0.23,0.21,0};
                    };
                    class T8
                    {
                        maxT = 2300;
                        color[] = {0.22,0.19,0.1,0};
                    };
                    class T9
                    {
                        maxT = 2500;
                        color[] = {0.35,0.2,0.02,0};
                    };
                    class T10
                    {
                        maxT = 2600;
                        color[] = {0.62,0.29,0.03,0};
                    };
                    class T11
                    {
                        maxT = 2650;
                        color[] = {0.59,0.35,0.05,0};
                    };
                    class T12
                    {
                        maxT = 2700;
                        color[] = {0.75,0.37,0.03,0};
                    };
                    class T13
                    {
                        maxT = 2750;
                        color[] = {0.88,0.34,0.03,0};
                    };
                    class T14
                    {
                        maxT = 2800;
                        color[] = {0.91,0.5,0.17,0};
                    };
                    class T15
                    {
                        maxT = 2850;
                        color[] = {1,0.6,0.2,0};
                    };
                    class T16
                    {
                        maxT = 2900;
                        color[] = {1,0.71,0.3,0};
                    };
                    class T17
                    {
                        maxT = 2950;
                        color[] = {0.98,0.83,0.41,0};
                    };
                    class T18
                    {
                        maxT = 3000;
                        color[] = {0.98,0.91,0.54,0};
                    };
                    class T19
                    {
                        maxT = 3100;
                        color[] = {0.98,0.99,0.6,0};
                    };
                    class T20
                    {
                        maxT = 3300;
                        color[] = {0.96,0.99,0.72,0};
                    };
                    class T21
                    {
                        maxT = 3600;
                        color[] = {1,0.98,0.91,0};
                    };
                    class T22
                    {
                        maxT = 4200;
                        color[] = {1,1,1,0};
                    };
                };
            };
            class GunClouds
            {
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
                cloudletColor[] = {1,1,1,0};
                interval = 0.05;
                size = 3;
                sourceSize = 0.5;
                timeToLive = 0;
                initT = 0;
                deltaT = 0;
                class Table
                {
                    class T0
                    {
                        maxT = 0;
                        color[] = {1,1,1,0};
                    };
                };
            };
            class MGunClouds
            {
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
                cloudletColor[] = {1,1,1,0};
                timeToLive = 0;
                interval = 0.02;
                size = 0.3;
                sourceSize = 0.02;
                initT = 0;
                deltaT = 0;
                class Table
                {
                    class T0
                    {
                        maxT = 0;
                        color[] = {1,1,1,0};
                    };
                };
            };
            class Turrets
            {
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
            class TurnIn
            {
                turnOffset = 0;
            };
            class TurnOut
            {
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
};
};
