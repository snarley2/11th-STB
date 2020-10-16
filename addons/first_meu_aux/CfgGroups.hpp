//Groups worksheet
#define _ARMA_
class CfgGroups
{
	class East
	{
		name = "$STR_A3_CfgGroups_East0";
		side = 0;
        class MEU_Zeus_Spacer
        {
            name = "1st MEU OPFOR";
            class LM_OPCAN_FRI_groups
            {
                name = "(OPCAN)Fridens";
                    class LM_OPCAN_FRI_patrol
                    {
                        name = "Sentry";
                        side = 0;
                        faction = "LM_OPCAN_FRI";
                        class Unit0
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_Rifleman";
                            rank = "CORPORAL";
                            position[] = {0,0,0};
                        };
                        class Unit1
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_Rifleman";
                            rank = "PRIVATE";
                            position[] = {0,-5,0};
                        };
                    };
                    class LM_OPCAN_FRI_Fireteam
                    {
                        name = "Fireteam";
                        side = 0;
                        faction = "LM_OPCAN_FRI";
                        class Unit0
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_TL";
                            rank = "CORPORAL";
                            position[] = {0,0,0};
                        };
                        class Unit1
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_Rifleman";
                            rank = "PRIVATE";
                            position[] = {0,-5,0};
                        };
                        class Unit2
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_AutoRifleman";
                            rank = "PRIVATE";
                            position[] = {-5,-5,0};
                        };
                        class Unit3
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_Rifleman_AT";
                            rank = "PRIVATE";
                            position[] = {0,-10,0};
                        };
                    };
                    class LM_OPCAN_FRI_Squad
                    {
                        name = "Rifle Squad";
                        side = 0;
                        faction = "LM_OPCAN_FRI";
                        class Unit0
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_SL";
                            rank = "SERGEANT";
                            position[] = {0,0,0};
                        };
                        class Unit1
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_Rifleman";
                            rank = "PRIVATE";
                            position[] = {0,-5,0};
                        };
                        class Unit2
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_Rifleman_AT";
                            rank = "PRIVATE";
                            position[] = {-5,-5,0};
                        };
                        class Unit3
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_TL";
                            rank = "CORPORAL";
                            position[] = {0,-10,0};
                        };
                        class Unit4
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_Marksman";
                            rank = "PRIVATE";
                            position[] = {-10,-5,0};
                        };
                        class Unit5
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_GL";
                            rank = "PRIVATE";
                            position[] = {-10,-10,0};
                        };
                        class Unit6
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_AutoRifleman";
                            rank = "PRIVATE";
                            position[] = {-10,-15,0};
                        };
                        class Unit7
                        {
                            side = 0;
                            vehicle = "LM_OPCAN_FRI_Medic";
                            rank = "PRIVATE";
                            position[] = {-15,-15,0};
                        };
                    };
                };
                class LM_OPCAN_FRI_WDL_groups
                {
                    name = "(OPCAN)Fridens (Woodland)";
                        class LM_OPCAN_FRI_patrol_WDL
                        {
                            name = "Sentry";
                            side = 0;
                            faction = "LM_OPCAN_FRI_WDL";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_WDL";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_WDL";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                        };
                        class LM_OPCAN_FRI_Fireteam_WDL
                        {
                            name = "Fireteam";
                            side = 0;
                            faction = "LM_OPCAN_FRI_WDL";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_TL_WDL";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_WDL";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_AutoRifleman_WDL";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_AT_WDL";
                                rank = "PRIVATE";
                                position[] = {0,-10,0};
                            };
                        };
                        class LM_OPCAN_FRI_Squad_WDL
                        {
                            name = "Rifle Squad";
                            side = 0;
                            faction = "LM_OPCAN_FRI_WDL";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_SL_WDL";
                                rank = "SERGEANT";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_WDL";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_AT_WDL";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_TL_WDL";
                                rank = "CORPORAL";
                                position[] = {0,-10,0};
                            };
                            class Unit4
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Marksman_WDL";
                                rank = "PRIVATE";
                                position[] = {-10,-5,0};
                            };
                            class Unit5
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_GL_WDL";
                                rank = "PRIVATE";
                                position[] = {-10,-10,0};
                            };
                            class Unit6
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_AutoRifleman_WDL";
                                rank = "PRIVATE";
                                position[] = {-10,-15,0};
                            };
                            class Unit7
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Medic_WDL";
                                rank = "PRIVATE";
                                position[] = {-15,-15,0};
                            };
                        };
                };
                class LM_OPCAN_FRI_DES_groups
                {
                    name = "(OPCAN)Fridens (Desert)";
                        class LM_OPCAN_FRI_patrol_DES
                        {
                            name = "Sentry";
                            side = 0;
                            faction = "LM_OPCAN_FRI_DES";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_DES";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_DES";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                        };
                        class LM_OPCAN_FRI_Fireteam_DES
                        {
                            name = "Fireteam";
                            side = 0;
                            faction = "LM_OPCAN_FRI_DES";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_TL_DES";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_DES";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_AutoRifleman_DES";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_AT_DES";
                                rank = "PRIVATE";
                                position[] = {0,-10,0};
                            };
                        };
                        class LM_OPCAN_FRI_Squad_DES
                        {
                            name = "Rifle Squad";
                            side = 0;
                            faction = "LM_OPCAN_FRI_DES";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_SL_DES";
                                rank = "SERGEANT";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_DES";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Rifleman_AT_DES";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_TL_DES";
                                rank = "CORPORAL";
                                position[] = {0,-10,0};
                            };
                            class Unit4
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Marksman_DES";
                                rank = "PRIVATE";
                                position[] = {-10,-5,0};
                            };
                            class Unit5
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_GL_DES";
                                rank = "PRIVATE";
                                position[] = {-10,-10,0};
                            };
                            class Unit6
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_AutoRifleman_DES";
                                rank = "PRIVATE";
                                position[] = {-10,-15,0};
                            };
                            class Unit7
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_FRI_Medic_DES";
                                rank = "PRIVATE";
                                position[] = {-15,-15,0};
                            };
                        };
                    };
                    class LM_OPCAN_KOS_groups
                    {
                        name = "(OPCAN)Koslovics";
                        class LM_OPCAN_KOS_patrol
                        {
                            name = "Sentry";
                            side = 0;
                            faction = "LM_OPCAN_KOS";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_Rifleman";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_Rifleman";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                        };
                        class LM_OPCAN_KOS_Fireteam
                        {
                            name = "Fireteam";
                            side = 0;
                            faction = "LM_OPCAN_KOS";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_TL";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_Rifleman";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_AutoRifleman";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_Rifleman_AT";
                                rank = "PRIVATE";
                                position[] = {0,-10,0};
                            };
                        };
                        class LM_OPCAN_KOS_Squad
                        {
                            name = "Rifle Squad";
                            side = 0;
                            faction = "LM_OPCAN_KOS";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_SL";
                                rank = "SERGEANT";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_Rifleman";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_Rifleman_AT";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_TL";
                                rank = "CORPORAL";
                                position[] = {0,-10,0};
                            };
                            class Unit4
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_Marksman";
                                rank = "PRIVATE";
                                position[] = {-10,-5,0};
                            };
                            class Unit5
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_GL";
                                rank = "PRIVATE";
                                position[] = {-10,-10,0};
                            };
                            class Unit6
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_AutoRifleman";
                                rank = "PRIVATE";
                                position[] = {-10,-15,0};
                            };
                            class Unit7
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_KOS_Medic";
                                rank = "PRIVATE";
                                position[] = {-15,-15,0};
                            };
                        };
                    };
                    class LM_OOPCAN_SU_groups
                    {
                        name = "(OPCAN)Secessionist Union";
                        class LM_OPCAN_SU_patrol
                        {
                            name = "Sentry";
                            side = 0;
                            faction = "LM_OPCAN_SU";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_Rifleman";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_Rifleman";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                        };
                        class LM_OPCAN_SU_Fireteam
                        {
                            name = "Fireteam";
                            side = 0;
                            faction = "LM_OPCAN_SU";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_TL";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_Rifleman";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_AutoRifleman";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_Rifleman_AT";
                                rank = "PRIVATE";
                                position[] = {0,-10,0};
                            };
                        };
                        class LM_OPCAN_SU_Squad
                        {
                            name = "Rifle Squad";
                            side = 0;
                            faction = "LM_OPCAN_SU";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_SL";
                                rank = "SERGEANT";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_Rifleman";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_Rifleman_AT";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_TL";
                                rank = "CORPORAL";
                                position[] = {0,-10,0};
                            };
                            class Unit4
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_Marksman";
                                rank = "PRIVATE";
                                position[] = {-10,-5,0};
                            };
                            class Unit5
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_GL";
                                rank = "PRIVATE";
                                position[] = {-10,-10,0};
                            };
                            class Unit6
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_AutoRifleman";
                                rank = "PRIVATE";
                                position[] = {-10,-15,0};
                            };
                            class Unit7
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_SU_Medic";
                                rank = "PRIVATE";
                                position[] = {-15,-15,0};
                            };
                        };
                    };
                    class LM_OPCAN_URA_groups
                    {
                        name = "(OPCAN)United Rebel Alliance";
                        class LM_OPCAN_URA_patrol
                        {
                            name = "Sentry";
                            side = 0;
                            faction = "LM_OPCAN_URA";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_Rifleman";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_Rifleman";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                        };
                        class LM_OPCAN_URA_Fireteam
                        {
                            name = "Fireteam";
                            side = 0;
                            faction = "LM_OPCAN_URA";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_TL";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_Rifleman";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_AutoRifleman";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_Rifleman_AT";
                                rank = "PRIVATE";
                                position[] = {0,-10,0};
                            };
                        };
                        class LM_OPCAN_URA_Squad
                        {
                            name = "Rifle Squad";
                            side = 0;
                            faction = "LM_OPCAN_URA";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_SL";
                                rank = "SERGEANT";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_Rifleman";
                                rank = "PRIVATE";
                                position[] = {0,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_Rifleman_AT";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_TL";
                                rank = "CORPORAL";
                                position[] = {0,-10,0};
                            };
                            class Unit4
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_Marksman";
                                rank = "PRIVATE";
                                position[] = {-10,-5,0};
                            };
                            class Unit5
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_GL";
                                rank = "PRIVATE";
                                position[] = {-10,-10,0};
                            };
                            class Unit6
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_AutoRifleman";
                                rank = "PRIVATE";
                                position[] = {-10,-15,0};
                            };
                            class Unit7
                            {
                                side = 0;
                                vehicle = "LM_OPCAN_URA_Medic";
                                rank = "PRIVATE";
                                position[] = {-15,-15,0};
                            };
                        };
                    };
                    class OPTRE_FC_Covenant
                    {      
                        dlc = "OPTRE";
                        name = "Covenant";
                        class OPTRE_Covenant_InfS_Section
                        {
                            name = "Section";
                            side = 0;
                            faction = "OPTRE_FC_Covenant";
                            rarityGroup = 0.3;
                            dlc = "OPTRE_FC";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_FC_Elite_Major";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_FC_Elite_Minor";
                                rank = "PRIVATE";
                                position[] = {5,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "OPTRE_FC_Elite_Minor";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "OPTRE_FC_Elite_Minor";
                                rank = "PRIVATE";
                                position[] = {10,-5,0};
                            };
                        };
                        class OPTRE_Covenant_InfS_Patrol
                        {
                            name = "Patrol";
                            side = 0;
                            faction = "OPTRE_FC_Covenant";
                            rarityGroup = 0.3;
                            dlc = "OPTRE_FC";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_FC_Elite_Minor";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_FC_Elite_Minor";
                                rank = "PRIVATE";
                                position[] = {5,-5,0};
                            };
                        };
                    };
                    class OPTRE_Ins
                    {
                        dlc = "OPTRE";
                        name = "Insurrectionists";
                        class OPTRE_Ins_URF_Inf_Sentry
                        {
                            name = "URF Sentry";
                            side = 0;
                            faction = "OPTRE_Ins";
                            rarityGroup = 0.3;
                            dlc = "OPTRE";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Rifleman_AR";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Rifleman_AR";
                                rank = "PRIVATE";
                                position[] = {5,-5,0};
                            };
                        };
                        class OPTRE_Ins_URF_Inf_RifleSquad
                        {
                            name = "URF Rifle Squad";
                            side = 0;
                            faction = "OPTRE_Ins";
                            rarityGroup = 0.3;
                            dlc = "OPTRE";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_SquadLead";
                                rank = "SERGEANT";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_TeamLead";
                                rank = "CORPORAL";
                                position[] = {5,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Grenadier";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Grenadier";
                                rank = "PRIVATE";
                                position[] = {10,-5,0};
                            };
                            class Unit4
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Autorifleman";
                                rank = "PRIVATE";
                                position[] = {-10,-5,0};
                            };
                            class Unit5
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Rifleman_AR";
                                rank = "PRIVATE";
                                position[] = {15,-5,0};
                            };
                            class Unit6
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Marksman";
                                rank = "PRIVATE";
                                position[] = {-15,-5,0};
                            };
                            class Unit7
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Rifleman_AT";
                                rank = "PRIVATE";
                                position[] = {20,-5,0};
                            };
                            class Unit8
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_TeamLead";
                                rank = "CORPORAL";
                                position[] = {-20,-5,0};
                            };
                        };
                        class OPTRE_Ins_URF_Inf_Fireteam
                        {
                            name = "URF Fireteam";
                            side = 0;
                            faction = "OPTRE_Ins";
                            rarityGroup = 0.3;
                            dlc = "OPTRE";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_TeamLead";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Autorifleman";
                                rank = "PRIVATE";
                                position[] = {5,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Rifleman_AR";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Rifleman_AT";
                                rank = "PRIVATE";
                                position[] = {10,-5,0};
                            };
                        };
                        class OPTRE_Ins_URF_Inf_CmdSquad
                        {
                            name = "URF Command Squad";
                            side = 0;
                            faction = "OPTRE_Ins";
                            rarityGroup = 0.3;
                            dlc = "OPTRE";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_SquadLead";
                                rank = "SERGEANT";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_TeamLead";
                                rank = "CORPORAL";
                                position[] = {5,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Radioman";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Observer";
                                rank = "PRIVATE";
                                position[] = {10,-5,0};
                            };
                            class Unit4
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Medic";
                                rank = "PRIVATE";
                                position[] = {-10,-5,0};
                            };
                            class Unit5
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Rifleman_AR";
                                rank = "PRIVATE";
                                position[] = {15,-5,0};
                            };
                        };
                        class OPTRE_Ins_URF_Inf_AntiTank
                        {
                            name = "URF Anti-Tank Team";
                            side = 0;
                            faction = "OPTRE_Ins";
                            rarityGroup = 0.3;
                            dlc = "OPTRE";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_AT_Specialist";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_AT_Specialist";
                                rank = "PRIVATE";
                                position[] = {5,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_TeamLead";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Observer";
                                rank = "PRIVATE";
                                position[] = {10,-5,0};
                            };
                        };
                        class OPTRE_Ins_URF_Inf_AntiAir
                        {
                            name = "URF Anti-Air Team";
                            side = 0;
                            faction = "OPTRE_Ins";
                            rarityGroup = 0.3;
                            dlc = "OPTRE";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_TeamLead";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_AA_Specialist";
                                rank = "PRIVATE";
                                position[] = {5,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_AA_Specialist";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Observer";
                                rank = "PRIVATE";
                                position[] = {10,-5,0};
                            };
                        };
                        class OPTRE_Ins_URF_Inf_Sniper
                        {
                            name = "URF Sniper Team";
                            side = 0;
                            faction = "OPTRE_Ins";
                            rarityGroup = 0.3;
                            dlc = "OPTRE";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Sniper";
                                rank = "SERGEANT";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_URF_Observer";
                                rank = "CORPORAL";
                                position[] = {5,-5,0};
                            };
                        };
                        class OPTRE_Ins_ER_Inf_Patrol
                        {
                            name = "ER Militia Patrol";
                            side = 0;
                            faction = "OPTRE_Ins";
                            rarityGroup = 0.3;
                            dlc = "OPTRE";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Guerilla_AR";
                                rank = "CORPORAL";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Guerilla_AR";
                                rank = "PRIVATE";
                                position[] = {5,-5,0};
                            };
                        };
                        class OPTRE_Ins_ER_Inf_MSquad
                        {
                            name = "ER Militia Squad";
                            side = 0;
                            faction = "OPTRE_Ins";
                            rarityGroup = 0.3;
                            dlc = "OPTRE";
                            class Unit0
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_MAdvisor";
                                rank = "SERGEANT";
                                position[] = {0,0,0};
                            };
                            class Unit1
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Terrorist";
                                rank = "CORPORAL";
                                position[] = {5,-5,0};
                            };
                            class Unit2
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Deserter_GL";
                                rank = "PRIVATE";
                                position[] = {-5,-5,0};
                            };
                            class Unit3
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Insurgent_BR";
                                rank = "PRIVATE";
                                position[] = {10,-5,0};
                            };
                            class Unit4
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Militia_MG";
                                rank = "PRIVATE";
                                position[] = {-10,-5,0};
                            };
                            class Unit5
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Farmer";
                                rank = "PRIVATE";
                                position[] = {15,-5,0};
                            };
                            class Unit6
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Assassin";
                                rank = "PRIVATE";
                                position[] = {-15,-5,0};
                            };
                            class Unit7
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Rebel_AT";
                                rank = "PRIVATE";
                                position[] = {20,-5,0};
                            };
                            class Unit8
                            {
                                side = 0;
                                vehicle = "OPTRE_Ins_ER_Guerilla_AR";
                                rank = "CORPORAL";
                                position[] = {-20,-5,0};
                            };
                        };
                    class OPTRE_Ins_ER_Inf_Group
                    {
                        name = "ER Militia Group";
                        side = 0;
                        faction = "OPTRE_Ins";
                        rarityGroup = 0.3;
                        dlc = "OPTRE";
                        class Unit0
                        {
                            side = 0;
                            vehicle = "OPTRE_Ins_ER_MAdvisor";
                            rank = "CORPORAL";
                            position[] = {0,0,0};
                        };
                        class Unit1
                        {
                            side = 0;
                            vehicle = "OPTRE_Ins_ER_Militia_MG";
                            rank = "PRIVATE";
                            position[] = {5,-5,0};
                        };
                        class Unit2
                        {
                            side = 0;
                            vehicle = "OPTRE_Ins_ER_Insurgent_BR";
                            rank = "PRIVATE";
                            position[] = {-5,-5,0};
                        };
                        class Unit3
                        {
                            side = 0;
                            vehicle = "OPTRE_Ins_ER_Guerilla_AR";
                            rank = "PRIVATE";
                            position[] = {10,-5,0};
                        };
                    };
                };
            };
        };
    };
