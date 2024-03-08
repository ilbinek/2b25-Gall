class CfgVehicles {
    class NATO_Box_Base;

    class TBD_2B25_BOX_HE : NATO_Box_Base {
        scope = 2;
        author = "TBD Team";
        displayName = "$STR_TBD_2B25_BOX_HE";
        model = QPATHTOF(TBD_2B25_BOX_HE\TBD_2B25_BOX_HE);
        editorPreview = QPATHTOF(TBD_2B25_BOX_HE\data\preview.paa);
        ace_cargo_size = 0.5;
        ace_cargo_canLoad = 1;
        transportMaxWeapons = 0;
        transportMaxMagazines = 0;
        transportMaxBackpacks = 0;

        class AnimationSources {
            class top_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
                sound="GenericDoorsSound";
            };
            class mine_1_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
            };
            class mine_2_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
            };
            class mine_3_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
            };
            class mine_4_source {
                source = "user";  
                initPhase = 0;
                animPeriod = 1;
            };
        };

        class ACE_Actions {
            ///////////////////// Lid /////////////////////
            class openBox {
                displayName = "$STR_TBD_MORTAR_82MM_OPEN";
                condition = QUOTE([ARR_1(_target)] call FUNC(canOpen));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(openLid));
                distance = 2;
                selection = "int_box_open";
            };

            class closeBox {
                displayName = "$STR_TBD_MORTAR_82MM_CLOSE";
                condition = QUOTE([ARR_1(_target)] call FUNC(canClose));
                exceptions[] = {};
                statement = QUOTE([ARR_1(_target)] call FUNC(closeLid));
                distance = 2;
                selection = "int_box_close";
            };

            ///////////////////// Take mines /////////////////////

            class ACE_Round_1_Take {
                displayName = "$STR_TBD_MORTAR_82MM_TAKE_SHELL";
                distance = 2;
                showDisabled=0;
				exceptions[]={};
				priority=5;
                condition = QUOTE([ARR_2(_target,1)] call FUNC(canTake));
                statement = QUOTE([ARR_2(_target,1)] call FUNC(takeMine));
                selection = "int_mine_1"; 
            };

            class ACE_Round_2_Take : ACE_Round_1_Take {
                condition = QUOTE([ARR_2(_target,2)] call FUNC(canTake));
                statement = QUOTE([ARR_2(_target,2)] call FUNC(takeMine));
                selection = "int_mine_2"; 
            };

            class ACE_Round_3_Take : ACE_Round_1_Take {
                condition = QUOTE([ARR_2(_target,3)] call FUNC(canTake));
                statement = QUOTE([ARR_2(_target,3)] call FUNC(takeMine));
                selection = "int_mine_3"; 
            };

            class ACE_Round_4_Take : ACE_Round_1_Take {
                condition = QUOTE([ARR_2(_target,4)] call FUNC(canTake));
                statement = QUOTE([ARR_2(_target,4)] call FUNC(takeMine));
                selection = "int_mine_4"; 
            };

            ///////////////////// Put /////////////////////
            class ACE_Round_1_Put {
                displayName = "$STR_TBD_MORTAR_82MM_STORE_HE_SHELL";
                distance = 2;
                showDisabled=0;
				exceptions[]={};
				priority=5;
                condition = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_2B25_HE)))] call FUNC(canLoadMine));
                statement = QUOTE([ARR_3(_target,1,QUOTE(QUOTE(TBD_2B25_HE)))] call FUNC(loadMine));
                selection = "int_mine_1"; 
            };

            class ACE_Round_2_Put: ACE_Round_1_Put {
                condition = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_2B25_HE)))] call FUNC(canLoadMine));
                statement = QUOTE([ARR_3(_target,2,QUOTE(QUOTE(TBD_2B25_HE)))] call FUNC(loadMine));
                selection = "int_mine_2"; 
            };

            class ACE_Round_3_Put: ACE_Round_1_Put {
                condition = QUOTE([ARR_3(_target,3,QUOTE(QUOTE(TBD_2B25_HE)))] call FUNC(canLoadMine));
                statement = QUOTE([ARR_3(_target,3,QUOTE(QUOTE(TBD_2B25_HE)))] call FUNC(loadMine));
                selection = "int_mine_3"; 
            };

            class ACE_Round_4_Put: ACE_Round_1_Put {
                condition = QUOTE([ARR_3(_target,4,QUOTE(QUOTE(TBD_2B25_HE)))] call FUNC(canLoadMine));
                statement = QUOTE([ARR_3(_target,4,QUOTE(QUOTE(TBD_2B25_HE)))] call FUNC(loadMine));
                selection = "int_mine_4"; 
            };
        };

    };
};
