class CfgWeapons
{
    class LM_OPCAN_CGC;
    class ItemCore;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
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
    
    class first_plt_Beret: LM_OPCAN_Beret_CGC
	{
		scope = 2;
		author = "1st MEU Studios";
		displayName = "[1st MEU] 1st Plt Beret";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0;
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Centurion1BeretV4.paa"};
    };
    
    class Prae37: LM_OPCAN_Vest_ODST_Red
	{
		author="1st MEU Studios";
		displayName="[1st MEU] Praetorian 3-7";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","first_meu_aux\Data\red37.paa"};
    };
    class Prae3M: LM_OPCAN_Vest_ODST_Red
	{
		author = "1st MEU Studios";
		displayName = "[1st MEU] Praetorian 3-M";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","first_meu_aux\Data\red3M.paa"};
    };
    class Praetor_chest_armor_Black: Prae3M
    {
		author = "1stMEU Kestrel";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Armor Plate (Black)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = {"camo","camo2","camo3","camo4","camo5","A_KneesMarLeft","A_KneesMarRight","A_Ghillie","A_TacPad","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_AR","AP_BR","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
			containerClass = "Supply120";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
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
	class Praetor_chest_armor_Blue:Praetor_chest_armor_Black
	{
		displayName = "[1stMEU] Praetorian Armor Plate (Blue)";
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"};
	};
	class Praetor_chest_armor_Yellow:Praetor_chest_armor_Black
	{
		displayName = "[1stMEU] Praetorian Armor Plate (Yellow)";
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"};
	};
	class Praetor_chest_armor_Green:Praetor_chest_armor_Black
	{
		displayName = "[1stMEU] Praetorian Armor Plate (Green)";\
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Green.paa"};
	};
	class Praetor_chest_armor_Red:Praetor_chest_armor_Black
	{
		displayName = "[1stMEU] Praetorian Armor Plate (Red)";
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat","LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat","","LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"};
	};
    class Praetor_Helmet_Black_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    }
    class Praetor_Helmet_Black_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    }
    class Praetor_Helmet_Yellow_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        
    }
    class Praetor_Helmet_Yellow_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        
    }class Praetor_Helmet_Blue_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        
    }
    class Praetor_Helmet_Blue_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        
    }class Praetor_Helmet_Green_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        
    }
    class Praetor_Helmet_Green_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        
    }class Praetor_Helmet_Red_dp : LM_OPCAN_CH252D_H3_Red_dp
    {
        
    }
    class Praetor_Helmet_Red_broken : LM_OPCAN_CH252D_H3_Red_broken
    {
        
    }
    class Praetor_Helmet_Black: LM_OPCAN_CH252D_H3
	{
		scope = 2;
		author = "1stMEU Kestrel";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0;
		displayName = "[1stMEU] Praetorian Helmet (Black)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow:Praetor_Helmet_Black
	{
		displayName = "[1stMEU] Praetorian Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Yellow.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
	class Praetor_Helmet_Blue:Praetor_Helmet_Black
	{
		displayName = "[1stMEU] Praetorian Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Blue.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
	class Praetor_Helmet_Green:Praetor_Helmet_Black
	{
		displayName = "[1stMEU] Praetorian Helmet (Green)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Green.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
	class Praetor_Helmet_Red:Praetor_Helmet_Black
	{
		displayName = "[1stMEU] Praetorian Helmet (Red)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Red.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_CU_INF:VES_BDU_Urban_Slim
	{
		author = "1stMEU Kestrel";
		scope = 2;
		displayName = "[1stMEU] Praetorian Combat Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass = "VES_BDU_V_Urban_Slim";
			armor = 100;
			armorStructural = 5;
			explosionShielding = 2;
			impactDamageMultiplier = -100;
			uniformType = "Neopren";
			containerClass = "Supply120";
			mass = 40;
		};
	};
};
