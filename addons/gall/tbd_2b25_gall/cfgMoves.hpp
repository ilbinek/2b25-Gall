//class CfgPatches {
//	class 2B25pose {	
//		author = "Tvoje_mama";
	//	requiredVersion = 0.1;
	//	requiredAddons[]= {
	//		"A3_Anims_F"
	//	};
//		units[] = {};
  //      weapons[] = {};
//	};
//};



class CfgMovesBasic {
	class defaultDie;
	class ManActions {
		2B25pose = "2B25pose";
	};
};


class CfgMovesMaleSdr: CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States {
		class Crew;
		class 2B25pose: Crew {
			file = QPATHTOF(TBD_2B25_GALL\animations\2B25pose.rtm);
		};
	};
};