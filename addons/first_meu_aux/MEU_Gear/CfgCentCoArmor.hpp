//Base Values
    class 1MEU_BASE_M52A_Armor: OPTRE_UNSC_M52A_Armor_Base
	{	
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Body Armor (BASE)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Base",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesLeft",
			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
			"AS_BaseLeft",
			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_des";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		hiddenSelectionsMaterials[] = 
		{
			"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat",
			"V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat",
			"",
			""
		};
		subItems[]=
		{
			"ItemcTabHCam"
		};
        vestType = "Rebreather";
		class ItemInfo: VestItem 
		{
            vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply300";
			mass = 75;
			modelSides[] = {6};
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Base",
				"A_ChestArmor",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 40;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 40;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					passThrough = 0.1;
				};
			};
		};
	};
    
//AutoRifleman
    class MEU_M52A_AutoRifleman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_AutoRifleman_DES: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_AutoRifleman_CEA: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_AutoRifleman_SNO: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_AutoRifleman_URB: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_AutoRifleman_WDL: MEU_M52A_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_AutoRifleman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_AutoRifleman_DES: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_AutoRifleman_CEA: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_AutoRifleman_SNO: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_AutoRifleman_URB: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_AutoRifleman_WDL: MEU_M52A_NCO_AutoRifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A AutoRifleman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    
//Breacher
    class MEU_M52A_Breacher: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_BR",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Breacher_DES: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Breacher_CEA: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Breacher_SNO: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Breacher_URB: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Breacher_WDL: MEU_M52A_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Breacher: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_BR",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Breacher_DES: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Breacher_CEA: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Breacher_SNO: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Breacher_URB: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Breacher_WDL: MEU_M52A_NCO_Breacher
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Breacher NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    
//Corpsman
    class MEU_M52A_Corpsman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman";
        hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_M_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
            "A_TacPad",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AP_Smoke",
            "AP_GL",
            "AP_Knife",
            "AP_BR",
            "AP_AR",
            "AP_Frag",
            "AP_Rounds",
            "AP_SG",
            "AP_Sniper",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
		
    class MEU_M52A_Corpsman_DES: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Desert)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_Corpsman_CEA: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Evolved)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_Corpsman_SNO: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Snow)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	class MEU_M52A_Corpsman_URB: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Urban)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_Corpsman_WDL: MEU_M52A_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman (Woodland)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	 class MEU_M52A_NCO_Corpsman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO";
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
            "A_TacPad",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AP_Smoke",
            "AP_GL",
            "AP_BR",
            "AP_AR",
            "AP_Frag",
            "AP_Rounds",
            "AP_SG",
            "AP_Sniper",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_MAR_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Corpsman_DES: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Desert)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_Corpsman_CEA: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_Corpsman_SNO: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Snow)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	class MEU_M52A_NCO_Corpsman_URB: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Urban)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_Corpsman_WDL: MEU_M52A_NCO_Corpsman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Corpsman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
    
//Grenadier
    class MEU_M52A_Grenadier: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Grenadier_DES: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Grenadier_CEA: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Grenadier_SNO: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Grenadier_URB: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Grenadier_WDL: MEU_M52A_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Grenadier: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_MGThigh",
			"AP_BR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Grenadier_DES: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Grenadier_CEA: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Grenadier_SNO: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Grenadier_URB: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Grenadier_WDL: MEU_M52A_NCO_Grenadier
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Grenadier NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    
//Marksman
    class MEU_M52A_Marksman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Marksman_DES: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Marksman_CEA: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Marksman_SNO: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Marksman_URB: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Marksman_WDL: MEU_M52A_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Marksman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Marksman_DES: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Marksman_CEA: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Marksman_SNO: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Marksman_URB: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Marksman_WDL: MEU_M52A_NCO_Marksman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Marksman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    
//Rifleman
    class MEU_M52A_Rifleman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_BR",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Rifleman_DES: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Rifleman_CEA: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Rifleman_SNO: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Rifleman_URB: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Rifleman_WDL: MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Rifleman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_BR",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Rifleman_DES: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Rifleman_CEA: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Rifleman_SNO: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Rifleman_URB: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Rifleman_WDL: MEU_M52A_NCO_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Rifleman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    
//RTO
    class MEU_M52A_RTO: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO";
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
            "A_TacPad",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_BR",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[] = 
            {
                "V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
                "V_FZ_Armor\Data\Vests\V_M52_R_MAR_CO",
                "V_FZ_Armor\Data\Vests\V_M52_L2_MAR_CO",
                "optre_unsc_units\army\data\ghillie_woodland_co",
                "optre_unsc_units\army\data\odst_armor_co"
            };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_RTO_DES: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Desert)";
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_DES_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_RTO_CEA: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Evolved)";
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_CEA_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_RTO_SNO: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Snow)";
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_SNO_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_RTO_URB: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Urban)";
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_RTO_WDL: MEU_M52A_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO (Woodland)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_WDL_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
	class MEU_M52A_NCO_RTO: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO";
        hiddenSelections[] = 
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_Ghillie",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_ODST",
            "A_TacPad",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AP_Canteen",
            "AP_MGThigh",
            "AP_BR",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
		};
        hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_MAR_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_MAR_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_RTO_DES: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Desert)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_DES_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_DES_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_RTO_CEA: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Evolved)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_CEA_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_CEA_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_RTO_SNO: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Snow)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_SNO_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_SNO_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_RTO_URB: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Urban)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_URB_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_URB_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
	
    class MEU_M52A_NCO_RTO_WDL: MEU_M52A_NCO_RTO
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A RTO NCO (Woodland)";
		hiddenSelectionsTextures[] = 
        {
            "V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_R_WDL_CO",
            "V_FZ_Armor\Data\Vests\V_M52_L2_WDL_CO",
            "optre_unsc_units\army\data\ghillie_woodland_co",
            "optre_unsc_units\army\data\odst_armor_co"
        };
	};
    
//Sniper
    class MEU_M52A_Sniper: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_SG",
			"AP_SMG",
			"AP_BR",
			"AP_Rounds",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_Sniper_DES: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Sniper_CEA: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Sniper_SNO: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Sniper_URB: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Sniper_WDL: MEU_M52A_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Sniper: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_SG",
			"AP_SMG",
			"AP_BR",
			"AP_Rounds",
			"APO_AR",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_MAR_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
    class MEU_M52A_NCO_Sniper_DES: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Sniper_CEA: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Sniper_SNO: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Sniper_URB: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Sniper_WDL: MEU_M52A_NCO_Sniper
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Sniper NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
    
//Training
    class MEU_M52A_Training_Red : MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "Rave & Ginger";
		displayName = "[1stMEU] M52A Training (Red)";
		hiddenSelectionsTextures[] = 
		{
			"first_meu_aux\Data\TrainingArmor\MEU_M52_V_RED_CO.paa",
			"first_meu_aux\Data\TrainingArmor\MEU_M52_A_RED_CO.paa",
			"first_meu_aux\Data\TrainingArmor\MEU_M52_L_RED_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	class MEU_M52A_Training_Blue : MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "Rave & Ginger";
		displayName = "[1stMEU] M52A Training (Blue)";
		hiddenSelectionsTextures[] = 
		{
			"first_meu_aux\Data\TrainingArmor\MEU_M52_V_BLU_CO.paa",
			"first_meu_aux\Data\TrainingArmor\MEU_M52_A_BLU_CO.paa",
			"first_meu_aux\Data\TrainingArmor\MEU_M52_L_BLU_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	class MEU_M52A_Training_Green : MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "Rave & Ginger";
		displayName = "[1stMEU] M52A Training (Green)";
		hiddenSelectionsTextures[] = 
		{
			"first_meu_aux\Data\TrainingArmor\MEU_M52_V_GRE_CO.paa",
			"first_meu_aux\Data\TrainingArmor\MEU_M52_A_GRE_CO.paa",
			"first_meu_aux\Data\TrainingArmor\MEU_M52_L_GRE_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};	
	class MEU_M52A_Training_Purple : MEU_M52A_Rifleman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "Rave & Ginger";
		displayName = "[1stMEU] M52A Training (Purple)";
		hiddenSelectionsTextures[] = 
		{
			"first_meu_aux\Data\TrainingArmor\MEU_M52_V_PUR_CO.paa",
			"first_meu_aux\Data\TrainingArmor\MEU_M52_A_PUR_CO.paa",
			"first_meu_aux\Data\TrainingArmor\MEU_M52_L_PUR_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};