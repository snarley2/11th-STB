//Base Value
class 1MEU_Base_CH252_Helmet: 1stMEU_Base_CH252D_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ace_overlayCracked = "first_meu_aux\Data\misc\hud_cracked.paa";
		displayName = "[1stMEU] CH252 Helmet Base";
		picture = "\OPTRE_UNSC_Units\Army\icons\army_helmet_des";
		hiddenSelections[] = {"camo","camo2","camo3","H_Neck","H_UNSCVacLower","H_Collar","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",""};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\helmet";
			hiddenSelections[] = {"camo","camo2","camo3","H_Neck","H_UNSCVacLower","H_Collar","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		allowedFacewear[] = {"",0.05,"VES_HUD_Balaclava_Black",2,"VES_HUD_Balaclava_Beast",0.025,"VES_HUD_Balaclava_Punisher",0.025,"VES_HUD_Balaclava_Joker",0.025,"OPTRE_EyePiece",0.25,"OPTRE_HUD_Glasses",0.5,"OPTRE_HUD_w_Glasses",0.5,"murshuncigs_cig_0",0.1,"murshuncigs_cig_1",0.1,"murshuncigs_cig_2",0.1,"murshuncigs_cig_3",0.1,"murshuncigs_cig_4",0.1,"immersion_cigs_cigar0",0.1,"immersion_cigs_cigar1",0.1,"immersion_cigs_cigar2",0.1,"immersion_cigs_cigar3",0.1,"immersion_cigs_cigar4",0.1};
	};
    
//Battalion Leaders
    class MEUA_MarT_HelmH_MARH_Eul : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
        author = "1stMEU Ginger"; 
        displayName = "[1stMEU] CH252 Heavy Helmet (Euler)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\V_CH252_MAR_H_Euler_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
        class ItemInfo: ItemInfo 
        { 
            hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\V_CH252_MAR_H_Euler_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
        }; 
    }; 
    
//Battalion Leaders DP
    class MEUA_MarT_HelmH_MARH_Eul_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\V_CH252_MAR_H_Euler_CO.paa"}; 
	};
    
//Centurion Leaders
    class Marine_Helmet_CA : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] C-A CH252 Heavy Helmet (Steeler)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\CA_V_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Marine_Helmet_CS : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeCurator = 1; 
        scopeArsenal = 1; 
		author = "1st MEU Ginger"; 
		displayName = "[1stMEU] C-S CH252 Heavy Helmet (Red)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\CA_V_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Marine_Helmet_CM : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] C-M CH252 Heavy Helmet (Crolter)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\CM_V_CH252_MAR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Marine_Helmet_CR : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] C-R CH252 Heavy Helmet (Hermes)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\CR_V_CH252_MAR_R3_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    
//Centurion Leaders DP
    class Marine_Helmet_CA_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\CA_V_CH252_MAR_H_CO.paa"}; 
	};
    class Marine_Helmet_CS_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\CA_V_CH252_MAR_H_CO.paa"}; 
	};
    class Marine_Helmet_CR_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\CR_V_CH252_MAR_H_CO.paa"};
	};
    class Marine_Helmet_CM_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\CM_V_CH252_MAR_H_CO.paa"};
	};
    
//Marine
    class Marine_Helmet_11H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Heavy Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_11L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Light Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_11M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Corpsman Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_11R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_11R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Sr RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_12H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Heavy Helmet (Marine)";  
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_12L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Light Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_12M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Corpsman Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_12R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_12R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Sr RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_13H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Heavy Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_13L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Light Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_13M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Corpsman Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_13R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_13R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Sr RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
     class Marine_Helmet_16 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-6 CH252 Heavy Helmet (Night)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\16_V_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_17 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-7 CH252 Heavy Helmet (Eli)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\17_V_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Marine_Helmet_1R : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-R CH252 Heavy Helmet (BLANK)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\1R_V_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Marine_Helmet_1M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-M CH252 Heavy Helmet (BLANK)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\1M_V_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Marine_Helmet_21H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Heavy Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_21L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Light Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_21M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Corpsman Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_21R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_21R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Sr RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_22H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Heavy Helmet (Marine)";  
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_22L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Light Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_22M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Corpsman Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_22R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_22R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Sr RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_23H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Heavy Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_23L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Light Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_23M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Corpsman Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_23R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_23R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Sr RTO Helmet (Marine)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Marine_Helmet_26 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-6 CH252 Heavy Helmet (Coward)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Leadership\26_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Marine_Helmet_27 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-7 CH252 Heavy Helmet (BLANK)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Leadership\27_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Marine_Helmet_2R : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-R CH252 Heavy Helmet (BLANK)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Leadership\2R_CH252_MAR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Marine_Helmet_2M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-M CH252 Heavy Helmet (Swedgie)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Leadership\2M_CH252_MAR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class MEU_Mar_Helm_MAR : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Heavy Helmet"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
        }; 
    };
    class MEU_Mar_Helm_base_L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Light Helmet"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_MOS_Helm_BASE : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Medical Helmet"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    }; 
    class MEU_RTO_Helm_base : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 RTO Helmet"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    
//Marine DP
    class Marine_Helmet_11H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_H_CO.paa"};
	}; 
    class Marine_Helmet_11L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_L_CO.paa"};
	}; 
    class Marine_Helmet_11M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_M_CO.paa"};
	}; 
    class Marine_Helmet_11R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_R1_CO.paa"};
	}; 
    class Marine_Helmet_11R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\11_V_CH252_MAR_R2_CO.paa"};
	}; 
    class Marine_Helmet_12H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_H_CO.paa"};
	}; 
    class Marine_Helmet_12L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_L_CO.paa"};
	}; 
    class Marine_Helmet_12M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_M_CO.paa"};
	}; 
    class Marine_Helmet_12R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_R1_CO.paa"};
	}; 
    class Marine_Helmet_12R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\12_V_CH252_MAR_R2_CO.paa"};
	}; 
    class Marine_Helmet_13H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_H_CO.paa"};
	}; 
    class Marine_Helmet_13L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_L_CO.paa"};
	}; 
    class Marine_Helmet_13M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_M_CO.paa"};
	}; 
    class Marine_Helmet_13R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1; 
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_R1_CO.paa"};
	}; 
    class Marine_Helmet_13R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Marine\13_V_CH252_MAR_R2_CO.paa"};
	};
    class Marine_Helmet_16_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\16_V_CH252_MAR_H_CO.paa"};
	}; 
    class Marine_Helmet_17_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\17_V_CH252_MAR_H_CO.paa"};
	};
    class Marine_Helmet_1R_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\1R_V_CH252_MAR_H_CO.paa"};
	};
    class Marine_Helmet_1M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Leadership\1M_V_CH252_MAR_H_CO.paa"};
	};
    class Marine_Helmet_21H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_H_CO.paa"};
	}; 
    class Marine_Helmet_21L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_L_CO.paa"};
	}; 
    class Marine_Helmet_21M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_M_CO.paa"};
	}; 
    class Marine_Helmet_21R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_R1_CO.paa"};
	}; 
    class Marine_Helmet_21R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\21_CH252_MAR_R2_CO.paa"};
	}; 
    class Marine_Helmet_22H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_H_CO.paa"};
	}; 
    class Marine_Helmet_22L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_L_CO.paa"};
	}; 
    class Marine_Helmet_22M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_M_CO.paa"};
	}; 
    class Marine_Helmet_22R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_R1_CO.paa"};
	}; 
    class Marine_Helmet_22R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\22_CH252_MAR_R2_CO.paa"};
	}; 
    class Marine_Helmet_23H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_H_CO.paa"};
	}; 
    class Marine_Helmet_23L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_L_CO.paa"};
	}; 
    class Marine_Helmet_23M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_M_CO.paa"};
	}; 
    class Marine_Helmet_23R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1; 
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_R1_CO.paa"};
	}; 
    class Marine_Helmet_23R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Marine\23_CH252_MAR_R2_CO.paa"};
	};
    class Marine_Helmet_26_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Leadership\26_CH252_MAR_H_CO.paa"};
	}; 
    class Marine_Helmet_27_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Leadership\27_CH252_MAR_H_CO.paa"};
	};
    class Marine_Helmet_2R_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Leadership\27_CH252_MAR_R3_CO.paa"};
	};
    class Marine_Helmet_2M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Leadership\2M_CH252_MAR_M_CO.paa"};
	};
    class MEU_Mar_Helm_MAR_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_Mar_Helm_base_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
	};
    class MEU_Mar_MOS_Helm_BASE_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_RTO_Helm_base_dp : MEU_rto_Helm_base 
    { 
        scopeArsenal = 1; 
        scope = 1; 
    };
    
//Desert
    class Desert_Helmet_11H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Heavy Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_11L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Light Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_11M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Corpsman Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_11R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_11R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Sr RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_12H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Heavy Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_12L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Light Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_12M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Corpsman Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_12R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2: 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_12R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2: 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Sr RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_13H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Heavy Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_13L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Light Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_13M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Corpsman Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_13R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_13R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Sr RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Desert_Helmet_21H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Heavy Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_21L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Light Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_21M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Corpsman Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_21R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_21R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Sr RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_22H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Heavy Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_22L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Light Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_22M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Corpsman Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_22R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2: 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_22R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2: 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Sr RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_23H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Heavy Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_23L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Light Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_23M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Corpsman Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_23R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Desert_Helmet_23R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Sr RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class MEU_Mar_Helm_DES : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Heavy Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_Helm_DES_L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Light Helmet(Desert)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_MOS_Helm_DES : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Medical Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_RTO_Helm_DES : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 RTO Helmet (Desert)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    
//Desert DP
    class Desert_Helmet_11H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_H_CO.paa"};
	}; 
    class Desert_Helmet_11L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_L_CO.paa"};
	}; 
    class Desert_Helmet_11M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1; 
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_M_CO.paa"};
	}; 
    class Desert_Helmet_11R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_R1_CO.paa"};
	}; 
    class Desert_Helmet_11R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\11_V_CH252_DES_R2_CO.paa"};
	}; 
    class Desert_Helmet_12H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_H_CO.paa"};
	}; 
    class Desert_Helmet_12L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_L_CO.paa"};
	}; 
    class Desert_Helmet_12M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_M_CO.paa"};
	}; 
    class Desert_Helmet_12R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_R1_CO.paa"};
	}; 
    class Desert_Helmet_12R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\12_V_CH252_DES_R2_CO.paa"};
	}; 
    class Desert_Helmet_13H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_H_CO.paa"};
	}; 
	class Desert_Helmet_13L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_L_CO.paa"};
	}; 
    class Desert_Helmet_13M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_M_CO.paa"};
	}; 
    class Desert_Helmet_13R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_R1_CO.paa"};
	}; 
    class Desert_Helmet_13R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Desert\13_V_CH252_DES_R2_CO.paa"};
	};
    class Desert_Helmet_21H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_H_CO.paa"};
	}; 
    class Desert_Helmet_21L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_L_CO.paa"};
	}; 
    class Desert_Helmet_21M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1; 
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_M_CO.paa"};
	}; 
    class Desert_Helmet_21R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_R1_CO.paa"};
	}; 
    class Desert_Helmet_21R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\21_CH252_DES_R2_CO.paa"};
	}; 
    class Desert_Helmet_22H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_H_CO.paa"};
	}; 
    class Desert_Helmet_22L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_L_CO.paa"};
	}; 
    class Desert_Helmet_22M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_M_CO.paa"};
	}; 
    class Desert_Helmet_22R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_R1_CO.paa"};
	}; 
    class Desert_Helmet_22R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\22_CH252_DES_R2_CO.paa"};
	}; 
    class Desert_Helmet_23H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_H_CO.paa"};
	}; 
	class Desert_Helmet_23L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_L_CO.paa"};
	}; 
    class Desert_Helmet_23M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_M_CO.paa"};
	}; 
    class Desert_Helmet_23R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_R1_CO.paa"};
	}; 
    class Desert_Helmet_23R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Desert\23_CH252_DES_R2_CO.paa"};
	};
    class MEU_Mar_Helm_DES_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
 
    };
    class MEU_Mar_Helm_DES_L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
	};
    class MEU_Mar_MOS_Helm_DES_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_RTO_Helm_DES_dp : MEU_rto_Helm_DES 
    { 
        scopeArsenal = 1; 
        scope = 1; 
    };
  
//Snow
    class Snow_Helmet_11H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Heavy Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\11_V_CH252_SNO_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_11L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Light Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\11_V_CH252_SNO_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_11M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Corpsman Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\11_V_CH252_SNO_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_11R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\11_V_CH252_SNO_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_11R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Sr RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\11_V_CH252_SNO_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_12H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Heavy Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\12_V_CH252_SNO_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_12L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Light Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\12_V_CH252_SNO_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_12M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Corpsman Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\12_V_CH252_SNO_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_12R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\12_V_CH252_SNO_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_12R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Sr RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\12_V_CH252_SNO_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_13H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Heavy Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\13_V_CH252_SNO_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_13L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Light Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\13_V_CH252_SNO_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_13M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Corpsman Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\13_V_CH252_SNO_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_13R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\13_V_CH252_SNO_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_13R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Sr RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\arctic\13_V_CH252_SNO_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Snow_Helmet_21H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Heavy Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\21_CH252_SNO_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_21L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Light Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\21_CH252_SNO_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_21M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Corpsman Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\21_CH252_SNO_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_21R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\21_CH252_SNO_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_21R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Sr RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\21_CH252_SNO_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_22H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Heavy Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\22_CH252_SNO_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_22L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Light Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\22_CH252_SNO_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_22M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Corpsman Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\22_CH252_SNO_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_22R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\22_CH252_SNO_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_22R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Sr RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\22_CH252_SNO_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_23H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Heavy Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\23_CH252_SNO_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_23L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Light Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\23_CH252_SNO_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_23M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Corpsman Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\23_CH252_SNO_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_23R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\23_CH252_SNO_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Snow_Helmet_23R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Sr RTO Helmet (Arctic)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\arctic\23_CH252_SNO_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_Mar_Helm_SNO : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Heavy Helmet (Snow)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_Helm_SNO_L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Light Helmet (Snow)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_MOS_Helm_SNO : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Medical Helmet (Snow)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_RTO_Helm_SNO : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 RTO Helmet (Snow)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    
//Snow DP
    class Snow_Helmet_11H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\11_V_CH252_SNO_H_CO.paa"};
	}; 
	class Snow_Helmet_11L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\11_V_CH252_SNO_L_CO.paa"};
	}; 
	class Snow_Helmet_11M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\11_V_CH252_SNO_M_CO.paa"};
	}; 
	class Snow_Helmet_11R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\11_V_CH252_SNO_R1_CO.paa"};
	}; 
	class Snow_Helmet_11R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\11_V_CH252_SNO_R2_CO.paa"};
	}; 
	class Snow_Helmet_12H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\12_V_CH252_SNO_H_CO.paa"};
	}; 
    class Snow_Helmet_12L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\12_V_CH252_SNO_L_CO.paa"};
	}; 
    class Snow_Helmet_12M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\12_V_CH252_SNO_M_CO.paa"};
	}; 
    class Snow_Helmet_12R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\12_V_CH252_SNO_R1_CO.paa"};
	}; 
    class Snow_Helmet_12R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\12_V_CH252_SNO_R2_CO.paa"};
	}; 
    class Snow_Helmet_13H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\13_V_CH252_SNO_H_CO.paa"};
	}; 
    class Snow_Helmet_13L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\13_V_CH252_SNO_L_CO.paa"};
	}; 
    class Snow_Helmet_13M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\13_V_CH252_SNO_M_CO.paa"};
	}; 
    class Snow_Helmet_13R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\13_V_CH252_SNO_R1_CO.paa"};
	}; 
    class Snow_Helmet_13R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Arctic\13_V_CH252_SNO_R2_CO.paa"};
	};
    class Snow_Helmet_21H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\21_CH252_SNO_H_CO.paa"};
	}; 
	class Snow_Helmet_21L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\21_CH252_SNO_L_CO.paa"};
	}; 
	class Snow_Helmet_21M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\21_CH252_SNO_M_CO.paa"};
	}; 
	class Snow_Helmet_21R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\21_CH252_SNO_R1_CO.paa"};
	}; 
	class Snow_Helmet_21R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\21_CH252_SNO_R2_CO.paa"};
	}; 
	class Snow_Helmet_22H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\22_CH252_SNO_H_CO.paa"};
	}; 
    class Snow_Helmet_22L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\22_CH252_SNO_L_CO.paa"};
	}; 
    class Snow_Helmet_22M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\22_CH252_SNO_M_CO.paa"};
	}; 
    class Snow_Helmet_22R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\22_CH252_SNO_R1_CO.paa"};
	}; 
    class Snow_Helmet_22R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\22_CH252_SNO_R2_CO.paa"};
	}; 
    class Snow_Helmet_23H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\23_CH252_SNO_H_CO.paa"};
	}; 
    class Snow_Helmet_23L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\23_CH252_SNO_L_CO.paa"};
	}; 
    class Snow_Helmet_23M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\23_CH252_SNO_M_CO.paa"};
	}; 
    class Snow_Helmet_23R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\23_CH252_SNO_R1_CO.paa"};
	}; 
    class Snow_Helmet_23R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Arctic\23_CH252_SNO_R2_CO.paa"};
	};
    class MEU_Mar_Helm_SNO_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_Mar_Helm_SNO_L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
	};
    class MEU_Mar_MOS_Helm_SNO_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_RTO_Helm_SNO_dp : MEU_rto_Helm_SNO 
    { 
        scopeArsenal = 1; 
        scope = 1; 
    };
    
//Urban
    class Urban_Helmet_11H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Heavy Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_11L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Light Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_11M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Corpsman Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_11R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_11R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Sr RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_12H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Heavy Helmet (Urban)"; 
        hiddenSelectionsTextures[] ={"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_12L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Light Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_12M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Corpsman Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_12R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_12R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Sr RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_13H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Heavy Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_13L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Light Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_13M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Corpsman Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_13R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
     class Urban_Helmet_13R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Sr RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Urban_Helmet_21H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Heavy Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_21L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Light Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_21M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Corpsman Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_21R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_21R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Sr RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_22H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Heavy Helmet (Urban)"; 
        hiddenSelectionsTextures[] ={"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_22L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Light Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_22M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Corpsman Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_22R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_22R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Sr RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_23H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Heavy Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_23L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Light Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_23M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Corpsman Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Urban_Helmet_23R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
     class Urban_Helmet_23R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Sr RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class MEU_Mar_Helm_URB : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Heavy Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_Helm_URB_L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Light Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_MOS_Helm_URB : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Medical Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_RTO_Helm_URB : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 RTO Helmet (Urban)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    
//Urban DP
    class Urban_Helmet_11H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_H_CO.paa"};
	}; 
    class Urban_Helmet_11L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_L_CO.paa"};
	}; 
    class Urban_Helmet_11M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_M_CO.paa"};
	}; 
    class Urban_Helmet_11R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_R1_CO.paa"};
	}; 
    class Urban_Helmet_11R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\11_V_CH252_URB_R2_CO.paa"};
	}; 
    class Urban_Helmet_12H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_H_CO.paa"};
	}; 
    class Urban_Helmet_12L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_L_CO.paa"};
	}; 
    class Urban_Helmet_12M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_M_CO.paa"};
	}; 
    class Urban_Helmet_12R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_R1_CO.paa"};
	}; 
    class Urban_Helmet_12R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\12_V_CH252_URB_R2_CO.paa"};
	}; 
    class Urban_Helmet_13H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_H_CO.paa"};
	}; 
    class Urban_Helmet_13L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_L_CO.paa"};
	}; 
    class Urban_Helmet_13M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_M_CO.paa"};
	}; 
    class Urban_Helmet_13R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_R1_CO.paa"};
	}; 
    class Urban_Helmet_13R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Urban\13_V_CH252_URB_R2_CO.paa"};
	};
    class Urban_Helmet_21H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_H_CO.paa"};
	}; 
    class Urban_Helmet_21L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_L_CO.paa"};
	}; 
    class Urban_Helmet_21M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_M_CO.paa"};
	}; 
    class Urban_Helmet_21R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_R1_CO.paa"};
	}; 
    class Urban_Helmet_21R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\21_CH252_URB_R2_CO.paa"};
	}; 
    class Urban_Helmet_22H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_H_CO.paa"};
	}; 
    class Urban_Helmet_22L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_L_CO.paa"};
	}; 
    class Urban_Helmet_22M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_M_CO.paa"};
	}; 
    class Urban_Helmet_22R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_R1_CO.paa"};
	}; 
    class Urban_Helmet_22R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\22_CH252_URB_R2_CO.paa"};
	}; 
    class Urban_Helmet_23H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_H_CO.paa"};
	}; 
    class Urban_Helmet_23L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_L_CO.paa"};
	}; 
    class Urban_Helmet_23M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_M_CO.paa"};
	}; 
    class Urban_Helmet_23R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_R1_CO.paa"};
	}; 
    class Urban_Helmet_23R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Urban\23_CH252_URB_R2_CO.paa"};
	};
    class MEU_Mar_Helm_URB_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_Mar_Helm_URB_L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
	};
    class MEU_Mar_MOS_Helm_URB_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_RTO_Helm_URB_dp : MEU_rto_Helm_URB 
    { 
        scopeArsenal = 1; 
        scope = 1; 
    };
    
//Woodland
    class Woodland_Helmet_11H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Heavy Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_11L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Light Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_11M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Corpsman Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_11R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
     class Woodland_Helmet_11R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-1 CH252 Sr RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_12H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurato = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Heavy Helmet (Woodland)";  
        hiddenSelectionsTextures[] ={"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_12L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Light Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_12M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Corpsman Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_12R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
     class Woodland_Helmet_12R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-2 CH252 Sr RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_13H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Heavy Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_13L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Light Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_13M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Corpsman Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_13R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_13R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 1-3 CH252 Sr RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class Woodland_Helmet_21H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Heavy Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_21L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Light Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_21M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Corpsman Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_21R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
     class Woodland_Helmet_21R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-1 CH252 Sr RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_22H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurato = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Heavy Helmet (Woodland)";  
        hiddenSelectionsTextures[] ={"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_22L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Light Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_22M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Corpsman Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_22R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
     class Woodland_Helmet_22R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-2 CH252 Sr RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_23H : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Heavy Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_23L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Light Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_L_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_23M : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Corpsman Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_23R1 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_R1_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class Woodland_Helmet_23R2 : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] 2-3 CH252 Sr RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_R2_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_Mar_Helm_WDL : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Heavy Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_Helm_WDL_L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Light Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_MOS_Helm_WDL : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Medical Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_RTO_Helm_WDL : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 RTO Helmet (Woodland)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    
//Woodland DP
    class  Woodland_Helmet_11H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_H_CO.paa"};
	}; 
    class Woodland_Helmet_11L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_L_CO.paa"};
	}; 
    class Woodland_Helmet_11M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_M_CO.paa"};
	}; 
    class Woodland_Helmet_11R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_R1_CO.paa"};
	}; 
    class Woodland_Helmet_11R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\11_V_CH252_WDL_R2_CO.paa"};
	}; 
    class Woodland_Helmet_12H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_H_CO.paa"};
	}; 
    class Woodland_Helmet_12L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_L_CO.paa"};
	}; 
    class Woodland_Helmet_12M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_M_CO.paa"};
	}; 
    class Woodland_Helmet_12R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_R1_CO.paa"};
	}; 
    class Woodland_Helmet_12R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\12_V_CH252_WDL_R2_CO.paa"};
	}; 
    class Woodland_Helmet_13H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_H_CO.paa"};
	}; 
    class Woodland_Helmet_13L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_L_CO.paa"};
	}; 
    class Woodland_Helmet_13M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_M_CO.paa"};
	}; 
    class Woodland_Helmet_13R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_R1_CO.paa"};
	}; 
    class Woodland_Helmet_13R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Woodland\13_V_CH252_WDL_R2_CO.paa"};
	};
    class  Woodland_Helmet_21H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_H_CO.paa"};
	}; 
    class Woodland_Helmet_21L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_L_CO.paa"};
	}; 
    class Woodland_Helmet_21M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_M_CO.paa"};
	}; 
    class Woodland_Helmet_21R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_R1_CO.paa"};
	}; 
    class Woodland_Helmet_21R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\21_CH252_WDL_R2_CO.paa"};
	}; 
    class Woodland_Helmet_22H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_H_CO.paa"};
	}; 
    class Woodland_Helmet_22L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_L_CO.paa"};
	}; 
    class Woodland_Helmet_22M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_M_CO.paa"};
	}; 
    class Woodland_Helmet_22R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_R1_CO.paa"};
	}; 
    class Woodland_Helmet_22R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\22_CH252_WDL_R2_CO.paa"};
	}; 
    class Woodland_Helmet_23H_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_H_CO.paa"};
	}; 
    class Woodland_Helmet_23L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_L_CO.paa"};
	}; 
    class Woodland_Helmet_23M_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_M_CO.paa"};
	}; 
    class Woodland_Helmet_23R1_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_R1_CO.paa"};
	}; 
    class Woodland_Helmet_23R2_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\Woodland\23_CH252_WDL_R2_CO.paa"};
	};
    class MEU_Mar_Helm_WDL_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_Mar_Helm_WDL_L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 1; 
		scope = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
	};
    class MEU_Mar_MOS_Helm_WDL_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_RTO_Helm_WDL_dp : MEU_rto_Helm_WDL 
    { 
        scopeArsenal = 1; 
        scope = 1; 
    }; 
    
//Evolved
    class MEU_Mar_Helm_CEA : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Heavy Helmet (Evolved)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_Helm_CEA_L : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Light Helmet (Evolved)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_Mar_MOS_Helm_CEA : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 Medical Helmet (Evolved)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    class MEU_RTO_Helm_CEA : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] CH252 RTO Helmet (Evolved)"; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		class ItemInfo: ItemInfo 
		{ 
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_R_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
		}; 
    };
    
//Evolved DP
    class MEU_Mar_Helm_CEA_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    };
    class MEU_Mar_Helm_CEA_L_dp : 1MEU_Base_CH252_Helmet 
	{ 
		scopeArsenal = 01; 
		scope = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
	};
    class MEU_Mar_MOS_Helm_CEA_dp : 1MEU_Base_CH252_Helmet 
    { 
        scope = 1; 
        scopeArsenal = 1; 
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"}; 
    }; 
    class MEU_RTO_Helm_CEA_dp : MEU_rto_Helm_CEA 
    { 
        scopeArsenal = 1; 
        scope = 1; 
    };

//Beret
    class first_plt_Beret: LM_OPCAN_Beret_CGC
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] Beret (1st Plt)";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\1stplt\Centurion1BeretV4.paa"};
    };
    class Battalion_Beret: LM_OPCAN_Beret_CGC
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Romeo";
		displayName = "[1stMEU] Beret (Battalion)";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\first_meu_aux\data\misc\V_B_Army_MP_CA_1st.paa"};
    };