class CfgWeapons {
	class CannonCore {
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	class mortar_82mm: CannonCore {
		class Burst1;
		class Burst2;
		class Burst3;
		class Single1;
		class Single2;
		class Single3;
	};
	class TBD_2B25_WEAPON: mortar_82mm {
		displayName = "2B25 Mortar";
		magazines[] = {QUOTE(TBD_2B25_HE)};
	};
};
