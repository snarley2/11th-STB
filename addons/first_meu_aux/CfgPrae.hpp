class CfgPrae
{
// holy import
    class LM_OPCAN_CGC;
    class ItemCore;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
    class ItemInfo;
	class H_HelmetB;
	class VestItem;
    class LM_OPCAN_Beret_CGC;
    class LM_OPCAN_Vest_ODST_Red;
    class G_B_Diving;
	class ItemcTabHCam;
	class A3_TVG_S_F6;
	class LM_OPCAN_CH252D_H3;
    class LM_OPCAN_Vest_ODST_REACH;
    class v_rebreatherB;
	class MRH_BluForTransponder;
    class VES_BDU_Urban_Slim;
    class LM_OPCAN_Vest_ODST_Green;
    class LM_OPCAN_CH252D_H3_dp;
    class LM_OPCAN_CH252D_H3_broken;
    class LM_OPCAN_CH252D_H3_Yellow_dp;
    class LM_OPCAN_CH252D_H3_Yellow_broken;
    class LM_OPCAN_CH252D_H3_Blue_dp;
    class LM_OPCAN_CH252D_H3_Blue_broken;
    class LM_OPCAN_CH252D_H3_Green_dp;
    class LM_OPCAN_CH252D_H3_Green_broken;
    class LM_OPCAN_CH252D_H3_Red_dp;
    class LM_OPCAN_CH252D_H3_Red_broken;
    class HitpointsProtectionInfo;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;

//start praetorian gear
// praetorian vests

    class Prae37: LM_OPCAN_Vest_ODST_Red
	{
		author="1st MEU Mark";
		displayName="[1st MEU] Praetorian 3-7 (Mark)";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","first_meu_aux\Data\red37.paa"};
        
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
        class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
	
    class Prae36: LM_OPCAN_Vest_ODST_Red
	{
		author="1st MEU Oneill";
		displayName="[1st MEU] Praetorian 3-6 (Oneill)";
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
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_AR",
			"APO_Sniper",
			"APO_Knife"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
        
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
        class ItemInfo: VestItem
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
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_AR",
				"APO_Sniper",
				"APO_Knife"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
	
    class Prae3M : Prae37
	{
		author = "1st MEU Mark";
		displayName = "[1st MEU] Praetorian 3-M (FloodedMac)";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","first_meu_aux\Data\Green3M.paa"};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
        class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
        };
    };
	
    class Prae3R: LM_OPCAN_Vest_ODST_Red
	{
		author = "1st MEU Oneill";
		displayName = "[1st MEU] Praetorian 3-R (Dimitri)";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
        };
    };
	
    class PraetorianRifleman: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Rifleman";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
	
	class PraetorianRiflemanBlue:PraetorianRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Rifleman (Blue)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianRiflemanYellow:PraetorianRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Rifleman (Yellow)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianRiflemanRed:PraetorianRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Rifleman (Red)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};

	class PraetorianMarksman: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Marksman";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
	
	class PraetorianMarksmanBlue:PraetorianMarksman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Marksman (Blue)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianMarksmanYellow:PraetorianMarksman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Marksman (Yellow)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianMarksmanRed:PraetorianMarksman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Marksman (Red)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianSniper: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Sniper";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
	
	class PraetorianSniperBlue:PraetorianSniper
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Sniper (Blue)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianSniperYellow:PraetorianSniper
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Sniper (Yellow)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianSniperRed:PraetorianSniper
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Sniper (Red)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianAutoRifleman: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Auto Rifleman";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
	
	class PraetorianAutoRiflemanBlue:PraetorianAutoRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian AutoRifleman (Blue)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianAutoRiflemanYellow:PraetorianAutoRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian AutoRifleman (Yellow)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianAutoRiflemanRed:PraetorianAutoRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian AutoRifleman (Red)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianGrenadier: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Grenadier";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
	
	class PraetorianGrenadierBlue:PraetorianGrenadier
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Grenadier (Blue)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianGrenadierYellow:PraetorianGrenadier
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Grenadier (Yellow)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianGrenadierRed:PraetorianGrenadier
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Grenadier (Red)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianBreacher: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Breacher";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
	
	class PraetorianBreacherBlue:PraetorianBreacher
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Breacher (Blue)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianBreacherYellow:PraetorianBreacher
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Breacher (Yellow)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianBreacherRed:PraetorianBreacher
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Breacher (Red)";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
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
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianPlatoonCorpsman: LM_OPCAN_Vest_ODST_Green
	{
		author = "1st MEU Oneill";
		displayName = "[1st MEU] Praetorian Platoon Corpsman";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Green.paa"
		};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
	
	class PraetorianCorpsman: LM_OPCAN_Vest_ODST_Green
	{
		author = "1st MEU Oneill";
		displayName = "[1st MEU] Praetorian Corpsman";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Green.paa"
		};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
    class Hokage: LM_OPCAN_Vest_ODST_Red
	{
		author="1st MEU Oneill";
		displayName="[1st MEU] Hokage";
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
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_GL",
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
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
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
        
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
        class ItemInfo: VestItem
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
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_GL",
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
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
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
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
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
    
    class Praetor_Helmet_Black_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Black_31_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Black_32_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Black_33_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Black_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Black_31_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Black_32_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Black_33_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Ride_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Ride_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Yellow_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        
    };
    class Praetor_Helmet_Yellow_31_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        
    };
    class Praetor_Helmet_Yellow_32_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        
    };
    class Praetor_Helmet_Yellow_33_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        
    };
    class Praetor_Helmet_Yellow_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        
    };
    class Praetor_Helmet_Yellow_31_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        
    };
    class Praetor_Helmet_Yellow_32_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        
    };
    class Praetor_Helmet_Yellow_33_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        
    };
    class Praetor_Helmet_Blue_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        
    };
    class Praetor_Helmet_Blue_31_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        
    };
    class Praetor_Helmet_Blue_32_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        
    };
    class Praetor_Helmet_Blue_33_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        
    };
    class Praetor_Helmet_Blue_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        
    };
    class Praetor_Helmet_Blue_31_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        
    };
    class Praetor_Helmet_Blue_32_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        
    };
    class Praetor_Helmet_Blue_33_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        
    };
    class Praetor_Helmet_Green_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        
    };
    class Praetor_Helmet_Green_31_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        
    };
    class Praetor_Helmet_Green_32_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        
    };
    class Praetor_Helmet_Green_33_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        
    };
    class Praetor_Helmet_Green_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        
    };
    class Praetor_Helmet_Green_31_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        
    };class Praetor_Helmet_Green_32_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        
    };class Praetor_Helmet_Green_33_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        
    };
    class Praetor_Helmet_Red_dp : LM_OPCAN_CH252D_H3_Red_dp
    {
        
    };
    class Praetor_Helmet_Red_broken : LM_OPCAN_CH252D_H3_Red_broken
    {
        
    };
    class Praetor_Helmet_Ride: LM_OPCAN_CH252D_H3
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Kestrel";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Ride Along Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Ride.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black: LM_OPCAN_CH252D_H3
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Kestrel";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
     class Praetor_Helmet_Black_31: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black_32: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black_33: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow:Praetor_Helmet_Black
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Yellow.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Yellow_31: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Yellow) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow_32: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Yellow) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow_33: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Yellow) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Blue:Praetor_Helmet_Black
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Blue.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Blue_31: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Blue) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Blue_32: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Blue) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Blue_33: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Blue) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Green:Praetor_Helmet_Black
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Green)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Green.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Green_31: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Green) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Green_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Green_32: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Green) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Green_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Green_33: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Green) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Green_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Red:Praetor_Helmet_Black
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Red)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Red.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Sound_Protec: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.50;
		displayName = "[1stMEU] Praetorian Soundproof Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
};
	
	//Praetorian Helmet End