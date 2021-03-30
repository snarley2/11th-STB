class CfgGroups 
{ 
	class East 
	{ 
        name = "$STR_A3_CfgGroups_East0"; 
		side = 0; 
        class MEU_Zeus_Spacer 
        { 
            name = "[1stMEU] OPFOR";    
//United Rebel Front		 
			class OPTRE_Ins_URF 
            { 
                dlc = "OPTRE"; 
                name = "United Rebel Front"; 
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
                        vehicle = "OPTRE_Ins_URF_Rifleman_SMG"; 
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
                        vehicle = "OPTRE_Ins_URF_Rifleman_SMG"; 
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
                        vehicle = "OPTRE_Ins_URF_Rifleman_SMG"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-10,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_URF_Marksman"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-10,0}; 
                    }; 
					class Unit7 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_URF_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-15,0}; 
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
                        vehicle = "OPTRE_Ins_URF_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_URF_Rifleman_SMG"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_URF_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPTRE_Ins_URF_Inf_MachineGunTeam 
                { 
                    name = "URF Machine Gun Team"; 
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
                        vehicle = "OPTRE_Ins_URF_Assist_Autorifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
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
                        vehicle = "OPTRE_Ins_URF_Officer"; 
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
                        vehicle = "OPTRE_Ins_URF_TeamLead"; 
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
			}; 
//Eridanus Rebellion 
			class OPTRE_Ins_ER 
            { 
                dlc = "OPTRE"; 
                name = "Eridanus Rebels"; 
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
                        vehicle = "OPTRE_Ins_ER_Hacker"; 
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
                        vehicle = "OPTRE_Ins_ER_Guerilla_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_ER_Guerilla_AR"; 
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
                        vehicle = "OPTRE_Ins_ER_Hacker"; 
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
				class OPTRE_Ins_ER_MG_Group 
                { 
                    name = "ER Militia Machine Gun Group"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_ER_Hacker"; 
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
                        vehicle = "OPTRE_Ins_ER_Guerilla_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPTRE_Ins_ER_AT_Group 
                { 
                    name = "ER Militia Anti-Tank Group"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_ER_Hacker"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_ER_Rebel_AT"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
				class OPTRE_Ins_ER_AA_Group 
                { 
                    name = "ER Militia Anti-Air Team"; 
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
                        vehicle = "OPTRE_Ins_ER_Rebel_AT"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
				class OPTRE_Ins_ER_Sniper_Team 
                { 
                    name = "ER Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_ER_Assassin"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_ER_Insurgent_BR"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
            }; 
//URF BJ Urban 
			class OPTRE_BJ_URB 
            { 
                dlc = "OPTRE"; 
                name = "URF Battlejumpers (Urban)"; 
                class OPTRE_Ins_BJ_Inf_Sentry 
                { 
                    name = "Battlejumper Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_AR"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_RifleSquad 
                { 
                    name = "Battlejumper Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_BR"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_TeamLeader"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Grenadier"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Marksman"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Automatic_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Demolitions"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Corpsman"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_Fireteam 
                { 
                    name = "Battlejumper Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_BR"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPTRE_Ins_BJ_Inf_MachineGunTeam 
                { 
                    name = "Battlejumper Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_BR"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Automatic_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_CmdSquad 
                { 
                    name = "Battlejumper Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_BR"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_TeamLeader"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Demolitions"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Corpsman"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_AntiTank 
                { 
                    name = "Battlejumper Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_AR"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Rifleman_AT"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_Sniper 
                { 
                    name = "Battlejumper Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Scout_Sniper"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_URB_Marksman"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// URF BJ Woodland 
            class OPTRE_BJ_WDL 
            { 
                dlc = "OPTRE"; 
                name = "URF Battlejumpers (Woodland)"; 
                class OPTRE_Ins_BJ_Inf_Sentry 
                { 
                    name = "Battlejumper Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_AR"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_RifleSquad 
                { 
                    name = "Battlejumper Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_BR"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_TeamLeader"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Grenadier"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Marksman"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Automatic_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Demolitions"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Corpsman"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_Fireteam 
                { 
                    name = "Battlejumper Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_BR"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPTRE_Ins_BJ_Inf_MachineGunTeam 
                { 
                    name = "Battlejumper Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_BR"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Automatic_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_CmdSquad 
                { 
                    name = "Battlejumper Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_BR"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_TeamLeader"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Scout"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Demolitions"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Corpsman"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_AR"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_AntiTank 
                { 
                    name = "Battlejumper Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_AR"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Rifleman_AT"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPTRE_Ins_BJ_Inf_Sniper 
                { 
                    name = "Battlejumper Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Scout_Sniper"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "OPTRE_Ins_BJ_Soldier_Marksman"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// Friden Regulars 
            class OPCAN_FRI_Reg 
            { 
                dlc = "OPCAN"; 
                name = "Fridens"; 
                class OPCAN_Friden_Sentry 
                { 
                    name = "Friden Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
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
                        vehicle = "LM_OPCAN_FRI_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_RifleSquad 
                { 
                    name = "Friden Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_TL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_GL"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Marksman"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_AutoRifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Engineer"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_Fireteam 
                { 
                    name = "Friden Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Breacher"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_Friden_MachineGunTeam 
                { 
                    name = "Friden Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_AutoRifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_CmdSquad 
                { 
                    name = "Friden Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_TL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Engineer"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_AntiTank 
                { 
                    name = "Friden Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_Rifleman_AT"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_AntiAir 
                { 
                    name = "Friden Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_Rifleman_AA"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_Sniper 
                { 
                    name = "Friden Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_Frihelm"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Marksman"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// Friden Desert 
            class OPCAN_FRI_Des 
            { 
                dlc = "OPCAN"; 
                name = "Fridens (Desert)"; 
                class OPCAN_Friden_Sentry_DES 
                { 
                    name = "Friden Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
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
                        vehicle = "LM_OPCAN_FRI_Medic_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_RifleSquad_DES 
                { 
                    name = "Friden Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_TL_DES"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_GL_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Medic_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Marksman_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_AutoRifleman_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Engineer_DES"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Medic_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_Fireteam 
                { 
                    name = "Friden Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Breacher_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_Friden_MachineGunTeam_DES 
                { 
                    name = "Friden Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_AutoRifleman_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_CmdSquad_DES 
                { 
                    name = "Friden Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_TL_DES"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Engineer_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Medic_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_AntiTank_DES 
                { 
                    name = "Friden Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_Rifleman_AT_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_AntiAir_DES 
                { 
                    name = "Friden Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_Rifleman_AA_DES"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_Sniper_DES 
                { 
                    name = "Friden Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_Frihelm_W_DES"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Marksman_DES"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// Friden Woodland 
            class OPCAN_FRI_WDL 
            { 
                dlc = "OPCAN"; 
                name = "Fridens (Woodland)"; 
                class OPCAN_Friden_Sentry_WDL 
                { 
                    name = "Friden Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
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
                        vehicle = "LM_OPCAN_FRI_Medic_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_RifleSquad_WDL 
                { 
                    name = "Friden Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_TL_WDL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_GL_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Medic_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Marksman_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_AutoRifleman_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Engineer_WDL"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Medic_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_Fireteam 
                { 
                    name = "Friden Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Breacher_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_Friden_MachineGunTeam_WDL 
                { 
                    name = "Friden Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_AutoRifleman_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_CmdSquad_WDL 
                { 
                    name = "Friden Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_TL_WDL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Engineer_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Medic_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Rifleman_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_AntiTank_DES 
                { 
                    name = "Friden Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_Rifleman_AT_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_AntiAir_DES 
                { 
                    name = "Friden Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_FRI_Rifleman_AA_WDL"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Friden_Sniper_WDL 
                { 
                    name = "Friden Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_Frihelm_W_WDL"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_FRI_Marksman_WDL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// Koslovic Jungle 
            class OPCAN_KOS_JUN 
            { 
                dlc = "OPCAN"; 
                name = "Koslovic (Jungle)"; 
                class OPCAN_Koslovic_Sentry_Jungle 
                { 
                    name = "Koslovic Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic1"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_RifleSquad_Jungle 
                { 
                    name = "Koslovic Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_SL1"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_TL1"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_GL1"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic1"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman1"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_AutoRifleman1"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Engineer1"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic1"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_Fireteam_Jungle 
                { 
                    name = "Koslovic Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Breacher1"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_Koslovic_MachineGunTeam_Jungle 
                { 
                    name = "Koslovic Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_AutoRifleman1"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_CmdSquad_Jungle 
                { 
                    name = "Koslovic Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_SL1"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_TL1"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Engineer1"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic1"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_AntiTank_Jungle 
                { 
                    name = "Koslovic Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman_AT1"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_AntiAir_Jungle 
                { 
                    name = "Koslovic Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman1"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman_AA1"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_Sniper_Jungle 
                { 
                    name = "Koslovic Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman1"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman1"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// Koslovic Arid 
            class OPCAN_KOS_ARD 
            { 
                dlc = "OPCAN"; 
                name = "Koslovic (Arid)"; 
                class OPCAN_Koslovic_Sentry_Arid 
                { 
                    name = "Koslovic Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic2"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_RifleSquad_Arid 
                { 
                    name = "Koslovic Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_SL2"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_TL2"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_GL2"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic2"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman2"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_AutoRifleman2"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Engineer2"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic2"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_Fireteam_Arid 
                { 
                    name = "Koslovic Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Breacher2"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_Koslovic_MachineGunTeam_Arid 
                { 
                    name = "Koslovic Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_AutoRifleman2"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_CmdSquad_Arid 
                { 
                    name = "Koslovic Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_SL2"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_TL2"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Engineer2"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic2"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_AntiTank_Arid 
                { 
                    name = "Koslovic Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman_AT2"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_AntiAir_Arid 
                { 
                    name = "Koslovic Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman2"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman_AA2"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_Sniper_Arid 
                { 
                    name = "Koslovic Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman2"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman2"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// Koslovic Swamp 
            class OPCAN_KOS_SWA 
            { 
                dlc = "OPCAN"; 
                name = "Koslovic (Swamp)"; 
                class OPCAN_Koslovic_Sentry_Swamp 
                { 
                    name = "Koslovic Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic3"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_RifleSquad_Swamp 
                { 
                    name = "Koslovic Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_SL3"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_TL3"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_GL3"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic3"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman3"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_AutoRifleman3"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Engineer3"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic3"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_Fireteam_Swamp 
                { 
                    name = "Koslovic Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Breacher3"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_Koslovic_MachineGunTeam_Swamp 
                { 
                    name = "Koslovic Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_AutoRifleman3"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_CmdSquad_Swamp 
                { 
                    name = "Koslovic Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_SL3"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_TL3"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Engineer3"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic3"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_AntiTank_Swamp 
                { 
                    name = "Koslovic Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman_AT3"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_AntiAir_Swamp 
                { 
                    name = "Koslovic Anti-AirTeam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman3"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman_AA3"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_Sniper_Swamp 
                { 
                    name = "Koslovic Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman3"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman3"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// Koslovic 
            class OPCAN_KOS_WDL 
            { 
                dlc = "OPCAN"; 
                name = "Koslovic"; 
                class OPCAN_Koslovic_Sentry_Woodland 
                { 
                    name = "Koslovic Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic4"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_RifleSquad_Woodland 
                { 
                    name = "Koslovic Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_SL4"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_TL4"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_GL4"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic4"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman4"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_AutoRifleman4"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Engineer4"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic4"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_Fireteam_Woodland 
                { 
                    name = "Koslovic Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Breacher4"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_Koslovic_MachineGunTeam_Woodland 
                { 
                    name = "Koslovic Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_AutoRifleman4"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_CmdSquad_Woodland 
                { 
                    name = "Koslovic Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_SL4"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_TL4"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Engineer4"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Medic4"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_AntiTank_Woodland 
                { 
                    name = "Koslovic Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman_AT4"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_AntiAir_Woodland 
                { 
                    name = "Koslovic Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman4"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Rifleman_AA4"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Koslovic_Sniper_Woodland 
                { 
                    name = "Koslovic Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman4"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_KOS_Marksman4"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// Seccessionist 
            class OPCAN_SU 
            { 
                dlc = "OPCAN"; 
                name = "Seccessionist Union"; 
                class OPCAN_SU_Sentry 
                { 
                    name = "Seccessionist Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
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
                        vehicle = "LM_OPCAN_SU_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Seccessionist_RifleSquad 
                { 
                    name = "Seccessionist Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_SU_TL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_GL"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Marksman"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_AutoRifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Engineer"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_Seccessionist_Fireteam 
                { 
                    name = "Seccessionist Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Breacher"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_Seccessionist_MachineGunTeam 
                { 
                    name = "Seccessionist Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_SU_AutoRifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Seccessionist_CmdSquad 
                { 
                    name = "Seccessionist Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_SU_TL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Engineer"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_Seccessionist_AntiTank 
                { 
                    name = "Seccessionist Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_SU_Rifleman_AT"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Seccessionist_AntiAir 
                { 
                    name = "Seccessionist Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_SU_Rifleman_AA"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_Seccessionist_Sniper 
                { 
                    name = "Seccesionist Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Sniper"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_SU_Marksman"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// United Rebel Alliance (Woodland) 
            class OPCAN_URA_W 
            { 
                dlc = "OPCAN"; 
                name = "United Rebel Army (Woodland)"; 
                class OPCAN_URA_Sentry 
                { 
                    name = "URA Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
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
                        vehicle = "LM_OPCAN_URA_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_RifleSquad 
                { 
                    name = "URA Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_URA_TL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_GL"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Marksman"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_AutoRifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Engineer"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_Fireteam 
                { 
                    name = "URA Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Breacher"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_URA_MachineGunTeam 
                { 
                    name = "URA Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_URA_AutoRifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_CmdSquad 
                { 
                    name = "URA Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_URA_TL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Engineer"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_AntiTank 
                { 
                    name = "URA Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_URA_Rifleman_AT"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_AntiAir 
                { 
                    name = "URA Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
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
                        vehicle = "LM_OPCAN_URA_Rifleman_AA"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_Sniper 
                { 
                    name = "URA Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Sniper"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Marksman"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// United Rebel Alliance (Desert) 
            class OPCAN_URA_D 
            { 
                dlc = "OPCAN"; 
                name = "United Rebel Army (Desert)"; 
                class OPCAN_URA_Sentry 
                { 
                    name = "URA Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Medic_D"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_RifleSquad_D 
                { 
                    name = "URA Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_SL_D"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_TL_D"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_GL_D"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Medic_D"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Marksman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_AutoRifleman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Engineer_D"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Medic_D"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_Fireteam_D 
                { 
                    name = "URA Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Breacher_D"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_URA_MachineGunTeam_D 
                { 
                    name = "URA Machine Gun Team_D"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_AutoRifleman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_CmdSquad_D 
                { 
                    name = "URA Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_SL_D"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_TL_D"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Engineer_D"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Medic_D"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_AntiTank_D 
                { 
                    name = "URA Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_AT_D"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_AntiAir_D 
                { 
                    name = "URA Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_D"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Rifleman_AA_D"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_Sniper_D 
                { 
                    name = "URA Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Sniper_D"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "LM_OPCAN_URA_Marksman_D"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
// URA BattleJumpers 
            class OPCAN_URA_BJ 
            { 
                dlc = "OPCAN"; 
                name = "URA Battlejumpers"; 
                class OPCAN_URA_BJ_Sentry 
                { 
                    name = "Battlejumper Sentry"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPCAN"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_BJ_RifleSquad 
                { 
                    name = "Battlejumper Rifle Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_SL"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_TL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_GL"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                    class Unit6 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Marksman"; 
                        rank = "PRIVATE"; 
                        position[] = {-15,-5,0}; 
                    }; 
                    class Unit7 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_AutoRifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {20,-5,0}; 
                    }; 
                    class Unit8 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Engineer"; 
                        rank = "CORPORAL"; 
                        position[] = {-20,-5,0}; 
                    }; 
					class Unit9 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {-25,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_BJ_Fireteam 
                { 
                    name = "Battlejumper Fireteam"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Breacher"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                }; 
				class OPCAN_URA_BJ_MachineGunTeam 
                { 
                    name = "Battlejumper Machine Gun Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_AutoRifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_BJ_CmdSquad 
                { 
                    name = "Battlejumper Command Squad"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_SL"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_TL"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                    class Unit2 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {-5,-5,0}; 
                    }; 
                    class Unit3 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Engineer"; 
                        rank = "PRIVATE"; 
                        position[] = {10,-5,0}; 
                    }; 
                    class Unit4 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Medic"; 
                        rank = "PRIVATE"; 
                        position[] = {-10,-5,0}; 
                    }; 
                    class Unit5 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "PRIVATE"; 
                        position[] = {15,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_BJ_AntiTank 
                { 
                    name = "Battlejumper Anti-Tank Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman_AT"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_BJ_AntiAir 
                { 
                    name = "Battlejumper Anti-Air Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman"; 
                        rank = "CORPORAL"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Rifleman_AA"; 
                        rank = "PRIVATE"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
                class OPCAN_URA_BJ_Sniper 
                { 
                    name = "Battlejumper Sniper Team"; 
                    side = 0; 
                    faction = "OPTRE_Ins"; 
                    rarityGroup = 0.3; 
                    dlc = "OPTRE"; 
                    class Unit0 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Sniper"; 
                        rank = "SERGEANT"; 
                        position[] = {0,0,0}; 
                    }; 
                    class Unit1 
                    { 
                        side = 0; 
                        vehicle = "MEU_URA_BJ_Marksman"; 
                        rank = "CORPORAL"; 
                        position[] = {5,-5,0}; 
                    }; 
                }; 
			}; 
//Covenant 
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
        }; 
    }; 
};