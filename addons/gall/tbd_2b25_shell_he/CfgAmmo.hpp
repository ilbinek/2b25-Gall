class CfgAmmo {
	class ShellCore;
	class ShellBase: ShellCore {};
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};

	class TBD_2B25_82mm_SHELL_AMMO_HE: Sh_82mm_AMOS {
		model = QPATHTOF(TBD_2B25_HE\TBD_2B25_HE);
	};
};
