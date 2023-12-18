class CfgWeapons {
	class CannonCore {
		class player;
		class close;
		class short;
		class medium;
		class far;
	};

	class mortar_82mm: CannonCore {};

	class TBD_2B25_WEAPON: mortar_82mm {
		displayName = "2B25 Mortar";
		magazines[] = {QUOTE(TBD_2B25_HE)};
		modes[] = {"Single"};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1,1,20};
		magazineReloadTime = 3;
		class Single: Mode_SemiAuto {
			displayName="Gall Mortar";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.2589254,
					1,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.2589254,
					1,
					250
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			reloadTime=1.8;
			artilleryDispersion=1.9;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
			
		};
	};
};
