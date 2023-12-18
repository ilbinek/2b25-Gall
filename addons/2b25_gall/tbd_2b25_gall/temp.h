/*
    INCLUDE INHERITED ENTRIES: true
    SHOW CLASSES ONLY: false
    UNLOCALIZED TEXT: true
    CONFIG PATH: bin\config.bin/CfgWeapons/mortar_82mm
    SOURCE ADD-ON(S): A3_Weapons_F, tbd_mortars_mk6
*/

class mortar_82mm
{
    scope = 1;
    displayname = $STR_A3_MORTAR_82MM0;
    nameSound = "CannonCore";
    cursor = "mortar";
    cursorAim = "EmptyCursor";
    sounds[] = {"StandardSound"};
    class StandardSound
    {
        begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
        begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
        soundBegin[] = {"begin1",0.5,"begin2",0.5};
        SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
    };
    reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
    reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1,1,20};
    soundServo[] = {"",0.0001,1};
    reloadTime = 1.8;
    autoReload = 1;
    canLock = 0;
    magazines[] = {"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_guided","8Rnd_82mm_Mo_LG","tbd_mortar_82mm_shell_he","tbd_mortar_82mm_shell_smoke","tbd_mortar_82mm_shell_illum"};
    ballisticsComputer = 2;
    class GunParticles
    {
        class FirstEffect
        {
            effectName = "MortarFired";
            positionName = "Usti Hlavne";
            directionName = "Konec Hlavne";
        };
    };
    modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
    class Single1
    {
        displayName = $STR_A3_MORTAR_82MM_SINGLE10;
        sounds[] = {"StandardSound"};
        class StandardSound
        {
            begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
            begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
        };
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
        reloadTime = 1.8;
        artilleryDispersion = 1.9;
        artilleryCharge = 0.35;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 10;
        minRange = 0;
        minRangeProbab = 0.01;
        midRange = 1;
        midRangeProbab = 0.01;
        maxRange = 2;
        maxRangeProbab = 0.01;
        multiplier = 1;
        burst = 1;
        burstRangeMax = -1;
        dispersion = 0.0002;
        sound[] = {"",10,1};
        soundBegin[] = {"sound",1};
        soundBeginWater[] = {"sound",1};
        soundClosure[] = {"sound",1};
        soundEnd[] = {};
        soundLoop[] = {};
        soundContinuous = 0;
        weaponSoundEffect = "";
        ffCount = 1;
        ffMagnitude = 0.5;
        ffFrequency = 11;
        flash = "gunfire";
        flashSize = 0.1;
        autoFire = 0;
        useAction = 0;
        useActionTitle = "";
        showToPlayer = 1;
        canShootInWater = 0;
        textureType = "semi";
        recoil = "recoil_single_primary_3outof10";
        recoilProne = "recoil_single_primary_prone_3outof10";
        aiDispersionCoefY = 1.7;
        aiDispersionCoefX = 1.4;
        soundBurst = 0;
        requiredOpticType = -1;
        aiRateOfFireDispersion = 1;
    };
    class Single2
    {
        displayName = $STR_A3_MORTAR_82MM_SINGLE20;
        artilleryCharge = 0.7;
        sounds[] = {"StandardSound"};
        class StandardSound
        {
            begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
            begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
        };
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
        reloadTime = 1.8;
        artilleryDispersion = 1.9;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 10;
        minRange = 0;
        minRangeProbab = 0.01;
        midRange = 1;
        midRangeProbab = 0.01;
        maxRange = 2;
        maxRangeProbab = 0.01;
        multiplier = 1;
        burst = 1;
        burstRangeMax = -1;
        dispersion = 0.0002;
        sound[] = {"",10,1};
        soundBegin[] = {"sound",1};
        soundBeginWater[] = {"sound",1};
        soundClosure[] = {"sound",1};
        soundEnd[] = {};
        soundLoop[] = {};
        soundContinuous = 0;
        weaponSoundEffect = "";
        ffCount = 1;
        ffMagnitude = 0.5;
        ffFrequency = 11;
        flash = "gunfire";
        flashSize = 0.1;
        autoFire = 0;
        useAction = 0;
        useActionTitle = "";
        showToPlayer = 1;
        canShootInWater = 0;
        textureType = "semi";
        recoil = "recoil_single_primary_3outof10";
        recoilProne = "recoil_single_primary_prone_3outof10";
        aiDispersionCoefY = 1.7;
        aiDispersionCoefX = 1.4;
        soundBurst = 0;
        requiredOpticType = -1;
        aiRateOfFireDispersion = 1;
    };
    class Single3
    {
        displayName = $STR_A3_MORTAR_82MM_SINGLE30;
        artilleryCharge = 1;
        sounds[] = {"StandardSound"};
        class StandardSound
        {
            begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
            begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
        };
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
        reloadTime = 1.8;
        artilleryDispersion = 1.9;
        aiRateOfFire = 1;
        aiRateOfFireDistance = 10;
        minRange = 0;
        minRangeProbab = 0.01;
        midRange = 1;
        midRangeProbab = 0.01;
        maxRange = 2;
        maxRangeProbab = 0.01;
        multiplier = 1;
        burst = 1;
        burstRangeMax = -1;
        dispersion = 0.0002;
        sound[] = {"",10,1};
        soundBegin[] = {"sound",1};
        soundBeginWater[] = {"sound",1};
        soundClosure[] = {"sound",1};
        soundEnd[] = {};
        soundLoop[] = {};
        soundContinuous = 0;
        weaponSoundEffect = "";
        ffCount = 1;
        ffMagnitude = 0.5;
        ffFrequency = 11;
        flash = "gunfire";
        flashSize = 0.1;
        autoFire = 0;
        useAction = 0;
        useActionTitle = "";
        showToPlayer = 1;
        canShootInWater = 0;
        textureType = "semi";
        recoil = "recoil_single_primary_3outof10";
        recoilProne = "recoil_single_primary_prone_3outof10";
        aiDispersionCoefY = 1.7;
        aiDispersionCoefX = 1.4;
        soundBurst = 0;
        requiredOpticType = -1;
        aiRateOfFireDispersion = 1;
    };
    class Burst1
    {
        showToPlayer = 0;
        displayName = $STR_A3_MORTAR_82MM_BURST10;
        burst = 4;
        aiBurstTerminable = 1;
        sounds[] = {"StandardSound"};
        class StandardSound
        {
            begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
            begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
        };
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
        soundServo[] = {"",0.0001,1};
        soundBurst = 0;
        reloadTime = 1.8;
        artilleryDispersion = 2.2;
        artilleryCharge = 0.35;
        minRange = 60;
        minRangeProbab = 0.5;
        midRange = 290;
        midRangeProbab = 0.7;
        maxRange = 665;
        maxRangeProbab = 0.5;
        sound[] = {"",10,1};
        soundLoop[] = {"sound",1};
        soundEnd[] = {"sound",1};
        dispersion = 0.0005;
        textureType = "burst";
        recoil = "recoil_auto_primary_3outof10";
        recoilProne = "recoil_auto_primary_prone_3outof10";
        aiDispersionCoefY = 2.4;
        aiDispersionCoefX = 1.9;
        multiplier = 1;
        burstRangeMax = -1;
        soundBegin[] = {"sound",1};
        soundBeginWater[] = {"sound",1};
        soundClosure[] = {"sound",1};
        soundContinuous = 0;
        weaponSoundEffect = "";
        ffCount = 1;
        ffMagnitude = 0.5;
        ffFrequency = 11;
        flash = "gunfire";
        flashSize = 0.1;
        autoFire = 0;
        useAction = 0;
        useActionTitle = "";
        canShootInWater = 0;
        requiredOpticType = -1;
        aiRateOfFire = 2;
        aiRateOfFireDispersion = 1;
        aiRateOfFireDistance = 500;
    };
    class Burst2
    {
        showToPlayer = 0;
        displayName = $STR_A3_MORTAR_82MM_BURST20;
        artilleryCharge = 0.7;
        minRange = 230;
        minRangeProbab = 0.4;
        midRange = 1175;
        midRangeProbab = 0.6;
        maxRange = 2660;
        maxRangeProbab = 0.4;
        burst = 4;
        aiBurstTerminable = 1;
        sounds[] = {"StandardSound"};
        class StandardSound
        {
            begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
            begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
        };
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
        soundServo[] = {"",0.0001,1};
        soundBurst = 0;
        reloadTime = 1.8;
        artilleryDispersion = 2.2;
        sound[] = {"",10,1};
        soundLoop[] = {"sound",1};
        soundEnd[] = {"sound",1};
        dispersion = 0.0005;
        textureType = "burst";
        recoil = "recoil_auto_primary_3outof10";
        recoilProne = "recoil_auto_primary_prone_3outof10";
        aiDispersionCoefY = 2.4;
        aiDispersionCoefX = 1.9;
        multiplier = 1;
        burstRangeMax = -1;
        soundBegin[] = {"sound",1};
        soundBeginWater[] = {"sound",1};
        soundClosure[] = {"sound",1};
        soundContinuous = 0;
        weaponSoundEffect = "";
        ffCount = 1;
        ffMagnitude = 0.5;
        ffFrequency = 11;
        flash = "gunfire";
        flashSize = 0.1;
        autoFire = 0;
        useAction = 0;
        useActionTitle = "";
        canShootInWater = 0;
        requiredOpticType = -1;
        aiRateOfFire = 2;
        aiRateOfFireDispersion = 1;
        aiRateOfFireDistance = 500;
    };
    class Burst3
    {
        showToPlayer = 0;
        displayName = $STR_A3_MORTAR_82MM_BURST30;
        artilleryCharge = 1;
        minRange = 540;
        minRangeProbab = 0.3;
        midRange = 2355;
        midRangeProbab = 0.4;
        maxRange = 5500;
        maxRangeProbab = 0.3;
        burst = 4;
        aiBurstTerminable = 1;
        sounds[] = {"StandardSound"};
        class StandardSound
        {
            begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.25893,1,250};
            begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.25893,1,250};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            SoundSetShot[] = {"Mortar82mm_Shot_SoundSet","Mortar82mm_Tail_SoundSet"};
        };
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
        soundServo[] = {"",0.0001,1};
        soundBurst = 0;
        reloadTime = 1.8;
        artilleryDispersion = 2.2;
        sound[] = {"",10,1};
        soundLoop[] = {"sound",1};
        soundEnd[] = {"sound",1};
        dispersion = 0.0005;
        textureType = "burst";
        recoil = "recoil_auto_primary_3outof10";
        recoilProne = "recoil_auto_primary_prone_3outof10";
        aiDispersionCoefY = 2.4;
        aiDispersionCoefX = 1.9;
        multiplier = 1;
        burstRangeMax = -1;
        soundBegin[] = {"sound",1};
        soundBeginWater[] = {"sound",1};
        soundClosure[] = {"sound",1};
        soundContinuous = 0;
        weaponSoundEffect = "";
        ffCount = 1;
        ffMagnitude = 0.5;
        ffFrequency = 11;
        flash = "gunfire";
        flashSize = 0.1;
        autoFire = 0;
        useAction = 0;
        useActionTitle = "";
        canShootInWater = 0;
        requiredOpticType = -1;
        aiRateOfFire = 2;
        aiRateOfFireDispersion = 1;
        aiRateOfFireDistance = 500;
    };
    magazineReloadTime = 0.2;
    type = 65536;
    class GunClouds
    {
    };
    access = 3;
    value = 2;
    picture = "";
    uiPicture = "";
    ammo = "";
    cursorSize = 1;
    showAimCursorInternal = 1;
    cursorAimOn = "";
    laser = 0;
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};
    hiddenUnderwaterSelections[] = {};
    shownUnderwaterSelections[] = {};
    hiddenUnderwaterSelectionsTextures[] = {};
    simulation = "Weapon";
    count = 0;
    multiplier = 1;
    burst = 1;
    magazineReloadSwitchPhase = 1;
    sound[] = {"",1,1};
    soundBegin[] = {"sound",1};
    soundBeginWater[] = {"sound",1};
    soundClosure[] = {"sound",1};
    soundEnd[] = {"sound",1};
    soundLoop[] = {"sound",1};
    soundContinuous = 0;
    weaponSoundEffect = "";
    soundBurst = 1;
    drySound[] = {"",1,1};
    zeroingSound[] = {"",1,1};
    changeFiremodeSound[] = {"",1,1};
    emptySound[] = {"",1,1};
    soundBullet[] = {"emptySound",1};
    initSpeed = 0;
    irDistance = 0;
    irDotIntensity = 0.001;
    dispersion = 0.002;
    aiDispersionCoefX = 1;
    aiDispersionCoefY = 1;
    lockAcquire = 1;
    enableAttack = 1;
    ffMagnitude = 0;
    ffFrequency = 1;
    ffCount = 1;
    recoil = "empty";
    recoilProne = "";
    maxRecoilSway = 0.008;
    swayDecaySpeed = 2;
    model = "";
    modelSpecial = "";
    modelMagazine = "";
    muzzlePos = "usti hlavne";
    muzzleEnd = "konec hlavne";
    irLaserPos = "laser pos";
    irLaserEnd = "laser dir";
    cartridgePos = "nabojnicestart";
    cartridgeVel = "nabojniceend";
    selectionFireAnim = "zasleh";
    memoryPointCamera = "eye";
    fireSpreadAngle = 3;
    useModelOptics = 1;
    opticsID = 0;
    modelOptics = "";
    opticsPPEffects[] = {};
    opticsFlare = 1;
    optics = 1;
    forceOptics = 0;
    useAsBinocular = 0;
    opticsDisablePeripherialVision = 0.67;
    opticsZoomMin = 0.25;
    opticsZoomMax = 1.25;
    opticsZoomInit = 0.75;
    distanceZoomMin = 400;
    distanceZoomMax = 400;
    primary = 10;
    showSwitchAction = 0;
    showEmpty = 1;
    autoFire = 0;
    showToPlayer = 1;
    canShootInWater = 0;
    aiRateOfFire = 5;
    aiRateOfFireDistance = 500;
    aiRateOfFireDispersion = 0;
    fireLightDuration = 0.05;
    fireLightIntensity = 0.2;
    fireLightDiffuse[] = {0.937,0.631,0.259};
    fireLightAmbient[] = {0,0,0};
    class Eventhandlers
    {
    };
    backgroundReload = 0;
    reloadAction = "";
    muzzles[] = {"this"};
    useAction = 0;
    useActionTitle = "";
    canDrop = 1;
    weaponLockDelay = 0;
    weaponLockSystem = 0;
    cmImmunity = 1;
    weight = 0;
    minRange = 1;
    minRangeProbab = 0.3;
    midRange = 150;
    midRangeProbab = 0.58;
    maxRange = 500;
    maxRangeProbab = 0.04;
    handAnim[] = {};
    lockingTargetSound[] = {"",0.000316228,2};
    lockedTargetSound[] = {"",0.000316228,6};
    detectRange = 0;
    artilleryDispersion = 1;
    artilleryCharge = 1;
    fireAnims[] = {};
    class Library
    {
        libTextDesc = "";
    };
    descriptionShort = "";
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
        cloudletDensityCoef = -1;
        interval = -0.01;
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
    textureType = "default";
    inertia = 0.5;
    aimTransitionSpeed = 1;
};