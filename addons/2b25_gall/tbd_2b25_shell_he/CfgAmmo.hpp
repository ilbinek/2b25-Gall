class CfgAmmo {
	class ShellCore;
	class ShellBase: ShellCore {};
	class Sh_155mm_AMOS: ShellBase {};
	class Sh_82mm_AMOS: Sh_155mm_AMOS {};

	class TBD_MORTAR_82mm_SPIGOT_SHELL_AMMO_HE: Sh_82mm_AMOS {
	model = 2B25mine\2B25mine;
	};
};
