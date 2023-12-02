class CfgMagazines {
	class Default;
	class CA_Magazine: Default {};
	class VehicleMagazine: CA_Magazine {};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine {};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells {};

	class TBD_2B25_HE: 8Rnd_82mm_Mo_shells {
		scope = 2;
		scopeArsenal = 2;
		author = "TBD Team";
		displayNameShort = "TBD HE";
		descriptionShort = QUOTE($STR_TBD_MORTAR_82MM_HE_SHELL_DESC);
		mass = 70;
		count = 1;
		ammo = QUOTE(TBD_2B25_82mm_SHELL_AMMO_HE);
		type = 256;
		displayName = QUOTE($STR_TBD2B25_HE_SHELL);
		picture = QPATHTOF(TBD_2B25_HE\data\icon.paa);
		model = QPATHTOF(TBD_2B25_HE\TBD_2B25_HE);
		initSpeed = 122;
	};  
};																																						
