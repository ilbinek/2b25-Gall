class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class TBD_MORTAR_82mm_spigot_HE: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "Ilbinek´s mom";
		displayName = 82mm spigot shell;
		displayNameShort = "TBD HE";
		model = 2B25mine\2B25mine;
		picture = 2B25mine\data\picture.paa);
		descriptionShort = idk;
		initSpeed = 211;
		mass = 70;
		count = 1;
		ammo = TBD_MORTAR_82mm_SPIGOT_SHELL_AMMO_HE;
		type = 256;
	};  
};																																						
