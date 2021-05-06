//Base Values
    class 1MEU_BASE_M52D_Armor: OPTRE_UNSC_M52D_Armor 
	{	
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[11th] M52D Body Armor (BASE)";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\ODST_Vest";
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		subItems[]=
		{
			"ItemcTabHCam",
			"MRH_BluForTransponder"
		};
        vestType = "Rebreather";
		class ItemInfo: VestItem 
		{
            vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply200";
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
			hiddenSelectionsTextures[] = 
			{
				"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
				"optre_unsc_units\army\data\armor_odst_co.paa",
				"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
				"optre_unsc_units\army\data\ghillie_desert_co.paa",
				"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
			};
				hiddenSelectionsMaterials[] = 
			{
				"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
				"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
				"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
				"",
				"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 55;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 55;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 55;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};
    
//AutoRifleman
    class M52DAutoRifleman: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D AutoRifleman";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DAutoRiflemanBlue: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D AutoRifleman (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DAutoRiflemanYellow: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D AutoRifleman (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DAutoRiflemanSilver: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D AutoRifleman (Silver)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DAutoRiflemanPurple: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D AutoRifleman (Purple)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DAutoRiflemanRed: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D AutoRifleman (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    
//BreacherShotgun
    class M52DBreacherShotgun: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SHTGN)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_SMG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_SMG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DBreacherBlueShotgun: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SHTGN) (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_SMG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_SMG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DBreacherYellowShotgun: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SHTGN) (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_SMG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_SMG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DBreacherSilverShotgun: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SHTGN) (Silver)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_SMG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_SMG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DBreacherPurpleShotgun: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SHTGN) (Purple)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_SMG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_SMG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DBreacherRedShotgun: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SHTGN) (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_SMG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_SMG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    
//BreacherSMG
    class M52DBreacher: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SMG)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DBreacherBlue: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SMG) (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DBreacherYellow: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SMG) (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DBreacherSilver: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SMG) (Silver)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DBreacherPurple: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SMG) (Purple)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DBreacherRed: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Breacher (SMG) (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    
//Corpsman
    	class M52DCorpsman: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[11th] M52D Corpsman";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"APO_Knife",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"APO_Knife",
				"CustomKit_Scorch"
			};
		};
    };
	class M52DPlatoonCorpsmanSilver: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[11th] M52D Corpsman Leadership (Silver)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
    };
	class M52DPlatoonCorpsmanPurple: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[11th] M52D Corpsman Leadership (Purple)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
		};
        class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
    };
    	class M52DCompanyCorpsman: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[11th] M52D Corpsman Leadership (Red)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
    };
    
//Grenadier
    class M52DGrenadier: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Grenadier";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
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
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
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
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DGrenadierBlue: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Grenadier (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class M52DGrenadierYellow: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Grenadier (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DGrenadierSilver: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Grenadier (Silver)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DGrenadierPurple: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Grenadier (Purple)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DGrenadierRed: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Grenadier (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    
//Marksman
    class M52DMarksman: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Marksman";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DMarksmanBlue:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Marksman (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DMarksmanYellow:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Marksman (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DMarksmanSilver:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Marksman (Silver)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
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
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DMarksmanPurple:1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Marksman (Purple)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
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
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DMarksmanRed:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Marksman (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
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
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    
//Rifleman
   class M52DRifleman: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Rifleman";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DRiflemanBlue:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Rifleman (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DRiflemanYellow:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Rifleman (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DRiflemanSilver:1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Rifleman (Silver)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DRiflemanPurple:1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Rifleman (Purple)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DRiflemanRed:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Rifleman (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
    
//RTO
    class M52DRTO: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D RTO";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Knife",
			"APO_Sniper",
			"APO_SMG",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Knife",
				"APO_Sniper",
				"APO_SMG",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DRTOSilver: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[11th] M52D RTO Leadership (Silver)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Knife",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Knife",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
    };
	class M52DRTOPurple: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[11th] M52D RTO Leadership (Purple)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Knife",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
		};
        class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Knife",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
    };
    class M52DRTORed: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[11th] M52D RTO Leadership (Red)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_BR",
			"APO_Knife",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_BR",
				"APO_Knife",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
    };
    
//Sniper
    class M52DSniper: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Sniper";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_TacPad",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_TacPad",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DSniperBlue: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Sniper (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_BR",
			"APO_SMG",
			"APO_AR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_BR",
				"CustomKit_Scorch"
			};
		};
	};
	class M52DSniperYellow: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Sniper (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_BR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_BR",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DSniperSilver: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Sniper (Silver)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
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
			"APO_BR",
			"APO_SMG",
			"APO_AR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
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
				"APO_BR",
				"APO_SMG",
				"APO_AR",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DSniperPurple: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Sniper (Purple)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
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
			"APO_BR",
			"APO_SMG",
			"APO_AR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
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
				"APO_BR",
				"APO_SMG",
				"APO_AR",
				"CustomKit_Scorch"
			};
		};
	};
    class M52DSniperRed: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Sniper (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
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
			"APO_BR",
			"APO_SMG",
			"APO_AR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
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
				"APO_BR",
				"APO_SMG",
				"APO_AR",
				"CustomKit_Scorch"
			};
		};
	};
    
//Custom
    class Prae36: 1MEU_BASE_M52D_Armor
	{
		author="1st MEU Oneill";
		displayName="[11th] M52D D-6 (Oneill)";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_GL",
			"AP_AR",
			"AP_Pack",
			"AP_MGThigh",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_AR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\Data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
       
        class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply450";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_GL",
				"AP_AR",
				"AP_Pack",
				"AP_MGThigh",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_AR",
				"CustomKit_Scorch"
			};
		};
    };
    class Prae37: 1MEU_BASE_M52D_Armor
	{
		author="1st MEU Mark";
		displayName="[11th] M52D D-5 (Mark)";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"APO_Knife"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\Data\3rdPlt\ODST_HR_Black_Red_CHQ_Mark.paa"
		};
        
        class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"APO_Knife"
			};
		};
    };
    class Prae3R: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[11th] M52D D-R (Dimitri)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
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
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\Data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
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
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
        };
    };
    class Prae3M : 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Mark";
		displayName = "[11th] M52D D-M (FloodedMac)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\Data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
		};
        class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
        };
    };
    class Prae46: 1MEU_BASE_M52D_Armor 
	{ 
		author="Romeo"; 
		displayName="[11th] M52D 4-6 (Romeo)"; 
		scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		model = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
		hiddenSelections[] = 	 
		{ 
			"camo", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			"A_Ghillie", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft", 
			"AS_SmallRight", 
			"AP_AR", 
			"AP_BR", 
			"AP_Canteen", 
			"AP_Knife", 
			"AP_GL", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"APO_AR", 
			"APO_BR", 
			"APO_SMG", 
			"APO_Sniper", 
			"APO_Knife" 
		}; 
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\Data\4thPlt\ODST_HR_Black_Purple3.paa" 
		}; 
         
        class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				"A_Ghillie", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft", 
				"AS_SmallRight", 
				"AP_AR", 
				"AP_BR", 
				"AP_Canteen", 
				"AP_Knife", 
				"AP_GL", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"APO_AR", 
				"APO_BR", 
				"APO_SMG", 
				"APO_Sniper", 
				"APO_Knife" 
			}; 
		}; 
    }; 
    class Prae4M : 1MEU_BASE_M52D_Armor 
	{ 
		author = "Romeo"; 
		displayName = "[11th] M52D 4-M (Rave)"; 
		scope = 2; 
        scopeCurator = 2; 
		scopeArsenal = 2; 
		model = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
		hiddenSelections[] = 	 
		{ 
			"camo", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			"A_Ghillie", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft", 
			"AS_SmallRight", 
			"AP_AR", 
			"AP_BR", 
			"AP_Frag", 
			"AP_GL", 
			"AP_Knife", 
			"AP_MGThigh", 
			"AP_AR", 
			"AP_Pack", 
			"AP_Smoke", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"APO_BR", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch" 
		}; 
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\Data\4thPlt\ODST_HR_Black_Purple2.paa" 
		}; 
        class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				"A_Ghillie", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft", 
				"AS_SmallRight", 
				"AP_AR", 
				"AP_BR", 
				"AP_Frag", 
				"AP_GL", 
				"AP_Knife", 
				"AP_MGThigh", 
				"AP_AR", 
				"AP_Pack", 
				"AP_Smoke", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"APO_BR", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch" 
			}; 
        }; 
    }; 
    /*class Prae4R: 1MEU_BASE_M52D_Armor 
	{ 
		author = "1st MEU Oneill"; 
		displayName = "[11th] M52D 4-R (Kenobi)"; 
		scope = 2; 
		scopeArsenal = 2; 
		model = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
		hiddenSelections[] = 	 
		{ 
			"camo", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			"A_Ghillie", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
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
			"APO_AR", 
			"APO_SMG", 
			"APO_Sniper", 
			"CustomKit_Scorch" 
		}; 
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\4thPlt\ODST_HR_Black_Purple1.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				"A_Ghillie", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
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
				"APO_AR", 
				"APO_SMG", 
				"APO_Sniper", 
				"CustomKit_Scorch" 
			}; 
        }; 
    };*/
    class M52DGinger:1MEU_BASE_M52D_Armor 
	{ 
        author = "1st MEU Ginger"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] M52D 4-1 (Ginger)"; 
		hiddenSelections[] = 	 
		{ 
			"camo", 
			"camo2", 
			"camo3", 
			"camo4", 
			"camo5", 
			"A_KneesMarLeft", 
			"A_KneesMarRight", 
			"A_Ghillie", 
			"AS_LargeLeft", 
			"AS_LargeRight", 
			"AS_MediumLeft", 
			"AS_MediumRight", 
			"AS_ODSTCQBLeft", 
			"AS_ODSTCQBRight", 
			"AS_ODSTSniperLeft", 
			"AS_ODSTSniperRight", 
			"AS_SmallLeft", 
			"AS_SmallRight", 
			"AP_AR", 
			"AP_BR", 
			"AP_Canteen", 
			"AP_GL", 
			"AP_Knife", 
			"AP_AR", 
			"AP_Pack", 
			"AP_Pistol", 
			"AP_Rounds", 
			"AP_SG", 
			"AP_SMG", 
			"AP_Sniper", 
			"AP_Thigh", 
            "APO_AR", 
			"APO_BR", 
			"APO_SMG", 
			"APO_Sniper", 
            "APO_Knife" 
		}; 
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
				"camo", 
				"camo2", 
				"camo3", 
				"camo4", 
				"camo5", 
				"A_KneesMarLeft", 
				"A_KneesMarRight", 
				"A_Ghillie", 
				"AS_LargeLeft", 
				"AS_LargeRight", 
				"AS_MediumLeft", 
				"AS_MediumRight", 
				"AS_ODSTCQBLeft", 
				"AS_ODSTCQBRight", 
				"AS_ODSTSniperLeft", 
				"AS_ODSTSniperRight", 
				"AS_SmallLeft", 
				"AS_SmallRight", 
				"AP_AR", 
				"AP_BR", 
				"AP_Canteen", 
				"AP_GL", 
				"AP_Knife", 
				"AP_AR", 
				"AP_Pack", 
				"AP_Pistol", 
				"AP_Rounds", 
				"AP_SG", 
				"AP_SMG", 
				"AP_Sniper", 
				"AP_Thigh", 
                "APO_AR", 
				"APO_BR", 
				"APO_Sniper", 
                "APO_Knife" 
			}; 
		}; 
	}; 

//Recon
    class M52DRecon: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[11th] M52D Recon";
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
            "A_ODST",
            "A_KneesLeft",
            "A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
            "A_ShinArmorLeft",
            "A_ShinArmorRight",
            "A_ThighArmorLeft",
            "A_ThighArmorRight",
			"A_Ghillie",
            "A_TacPad",
            "AS_BaseLeft",
            "AS_BaseLight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
            "AP_Thigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
            "AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa",
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
//Hades classes
    class Hades_Base_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Base"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            "A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            //"AS_ODSTRight",
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
		}; 
	}; 

    class Hades_Rifleman_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Rifleman"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            "A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            //"AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            //"AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            //"AP_AR",
            "AP_Pack",
            //"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            "AP_Frag",
            //"AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_Corpsman_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Corpsman"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            //"A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            //"AS_ODSTRight",
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
            //"AP_AR",
            "AP_Pack",
            //"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            "AP_Frag",
            //"AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            //"APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_RTO_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST RTO"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            //"A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            //"AS_ODSTRight",
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
            //"AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            //"AP_Frag",
            //"AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_Shotgun_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Shotgun"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            "A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            //"AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_GL",
            //"AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            //"AP_SG",
            "AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            //"AP_Frag",
            //"AP_Smoke",
            //"APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_SMG_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST SMG"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            "A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            //"AS_ODSTRight",
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
            //"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            //"AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            //"AP_Frag",
            //"AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            //"APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_Marksman_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Marksman"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_Sniper_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Sniper"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_TacPad",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_GL_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Grenadier"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            "A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            //"AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            //"AP_AR",
            "AP_BR",
            "AP_Canteen",
            //"AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            //"AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            //"AP_Frag",
            //"AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_SL_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST SL"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            //"A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            //"AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            //"AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            //"AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_GL",
            //"AP_Knife",
            "AP_MGThigh",
            //"AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            //"AP_Frag",
            //"AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	};
    class Hades_Ghillie_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Ghillie"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            //"A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            //"A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
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
            //"AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            //"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "AP_Frag",
            "AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            //"APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	};
    class Hades_AutoRifleman_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST AutoRifleman"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            "A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            //"AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            //"AP_AR",
            "AP_BR",
            //"AP_Canteen",
            "AP_GL",
            "AP_Knife",
            //"AP_MGThigh",
            //"AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            //"AP_Frag",
            "AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
//personal vests
    class Hades_Snarley_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Snarley"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            //"A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            //"AP_Canteen",
            "AP_GL",
            //"AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            //"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            //"AP_Sniper",
            "AP_Thigh",
            "AP_Frag",
            "AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_SnarleyF_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST SnarleyF"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            //"A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            "A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
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
            //"AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            //"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "AP_Frag",
            "AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            //"APO_SMG",
            //"APO_Sniper",
            //"CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_Weiss_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Weiss"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
            //"A_ShinArmorLeft",
            //"A_ShinArmorRight",
            //"A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            //"AS_ODSTRight",
            //"AS_ODSTSniperLeft",
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
            //"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            "AP_Frag",
            //"AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_Tuff_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Tuff"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            //"A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            //"AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            //"AP_BR",
            "AP_Canteen",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            //"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            "AP_Frag",
            //"AP_Smoke",
            "APO_AR",
            "APO_BR",
            "APO_Knife",
            //"APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 
    class Hades_Ash_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Ash"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            //"A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            //"AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            //"AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            //"AP_AR",
            "AP_BR",
            "AP_Canteen",
            //"AP_GL",
            //"AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            //"AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            "AP_Frag",
            //"AP_Smoke",
            //"APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	};
    class Hades_Sandman_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Sandman"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            //"A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
            //"AS_ODSTLeft",
            //"AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_GL",
            //"AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            //"AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            //"AP_Frag",
            //"AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	};
    class Hades_Dragon_Armor :1MEU_BASE_M52D_Armor 
	{ 
        author = "Tom(s) & Jerry(s)"; 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		displayName = "[11th] ODST Dragon"; 
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
		hiddenSelectionsMaterials[] =  
		{ 
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat", 
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat", 
			"", 
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat" 
		}; 
		hiddenSelectionsTextures[] =  
		{ 
			"11th_STB_aux\data\misc\Armor\V\vest_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\A\armor_odst_co.paa", 
			"11th_STB_aux\data\misc\Armor\L\ODST_H3_Legs.paa", 
			"optre_unsc_units\army\data\ghillie_desert_co.paa", 
			"11th_STB_aux\data\3rdPlt\ODST_HR_Black.paa" 
		}; 
		class ItemInfo: ItemInfo 
		{ 
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d"; 
			hiddenSelections[] = 	 
			{ 
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            //"A_Base",
            //"A_ChestArmor",
            "A_Ghillie",
            //"A_KneesLeft",
            //"A_KneesRight",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            //"A_ODST",
           //"A_ShinArmorLeft",
           //"A_ShinArmorRight",
            "A_TacPad",
            //"A_ThighArmorLeft",
            //"A_ThighArmorRight",
            //"AS_BaseLeft",
            //"AS_BaseRight",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            //"AS_ODSTCQBLeft",
            //"AS_ODSTCQBRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            //"AP_AR",
            "AP_BR",
            //"AP_Canteen",
            "AP_GL",
            //"AP_Knife",
            //"AP_MGThigh",
            //"AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            //"AP_Thigh",
            //"AP_Frag",
            "AP_Smoke",
            "APO_AR",
            "APO_BR",
            //"APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
			}; 
		}; 
	}; 