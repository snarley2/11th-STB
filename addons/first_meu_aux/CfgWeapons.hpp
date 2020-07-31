class CfgWeapons
{

// Imports
	
    class LM_OPCAN_CGC;
    class ItemCore;
	class HeadgearItem;
	class Uniform_Base;
    class ItemInfo;
	class H_HelmetB;
	class VestItem;
    class LM_OPCAN_Beret_CGC;
    class LM_OPCAN_Vest_ODST_Red;
    class G_B_Diving;
	class ItemcTabHCam;
	class A3_TVG_S_F6;
    class v_rebreatherB;
	class MRH_BluForTransponder;
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252_Helmet2_MAR;
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_M52A_Armor;
	class UniformItem;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
    class ace_medical_treatment;
    class ACE_Morphine;
	class U_B_CombatUniform_mcam;
    class OPTRE_UNSC_VX16_Helmet_MaskS;
    class OPTRE_UNSC_VX16_Helmet_MaskS_dp;
    class OPTRE_UNSC_VX16_Helmet_MaskS_broken;
	class LM_OPCAN_CH252D_H3_dp;
	class LM_OPCAN_CH252D_H3_Green_dp;
	class LM_OPCAN_CH252D_H3_Red_dp;
	class LM_OPCAN_CH252D_H3_Yellow_dp;
	class LM_OPCAN_CH252D_H3_Blue_dp;
	class LM_OPCAN_CH252D_H3_broken;
	class LM_OPCAN_CH252D_H3_Green_broken;
	class LM_OPCAN_CH252D_H3_Red_broken;
	class LM_OPCAN_CH252D_H3_Yellow_broken;
	class LM_OPCAN_CH252D_H3_Blue_broken;
	class OPTRE_UNSC_VX16_Helmet_Mask_blk_med;
	class OPTRE_UNSC_VX16_Helmet_Mask_blk_med_dp;
	class OPTRE_UNSC_VX16_Helmet_Mask_blk_med_broken;
	
// Medical Items Start
	
    class MEU_compat_Ibuprofen: ACE_Morphine
	{
		scope = 2;
		author = "1st MEU Mark";
		displayName = "Ibuprofen";
		picture = "\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model = "\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort = "Drink some water and Rest";
		descriptionUse = "Use instead of morphine";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
	
// Medical Items End
// Armor Base Values
		
	class 1stMEU_Base_CH252D_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] CH252D Helmet";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
			hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		subItems[]=
		{
			"ItemcTabHCam"
		};
		allowedFacewear[] = {};
	};

	class 1MEU_BASE_M52D_Armor: OPTRE_UNSC_M52D_Armor 
	{	
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1MEU] M52D Body Armor (BASE)";
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
			"A_KneesMarLeft",
			"A_KneesMarRight",
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
		class ItemInfo: VestItem 
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply200";
			mass = 75;
			modelSides[] = {6};
			vestType = "Rebreather";
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
				"A_KneesMarLeft",
				"A_KneesMarRight",
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
		subItems[]=
		{
			"ItemcTabHCam"
		};
	};
	
	class 1MEU_BASE_M52A_Armor: 1MEU_BASE_M52D_Armor 
	{	
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1MEU] M52A Body Armor (BASE)";
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
			"A_KneesMarLeft",
			"A_KneesMarRight",
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
		class ItemInfo: VestItem 
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply250";
			mass = 75;
			modelSides[] = {6};
			vestType = "Rebreather";
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
				"A_KneesMarLeft",
				"A_KneesMarRight",
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

// Base Armor End
// Centurion Gear Start   
// Centurion Headgear
    
    class first_plt_Beret: LM_OPCAN_Beret_CGC
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 1st Plt Beret";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Centurion1BeretV4.paa"};
    };
	
// centurion heavy helmets

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
	class MEU_Mar_Helm_MAR2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT M52A Heavy Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_DES2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_CEA2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_SNO2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
   
	class MEU_Mar_Helm_URB2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    
    class MEU_Mar_Helm_WDL2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Heavy Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\H\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    class MEU_Mar_Helm_MAR_dp : MEU_Mar_Helm_MAR
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_DES_dp : MEU_Mar_Helm_DES
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_CEA_dp : MEU_Mar_Helm_CEA
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_SNO_dp : MEU_Mar_Helm_SNO
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_URB_dp : MEU_Mar_Helm_URB
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_WDL_dp : MEU_Mar_Helm_WDL
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_MAR2_dp : MEU_Mar_Helm_MAR2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_DES2_dp : MEU_Mar_Helm_DES2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_CEA2_dp : MEU_Mar_Helm_CEA2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_SNO2_dp : MEU_Mar_Helm_SNO2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_URB2_dp : MEU_Mar_Helm_URB2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_WDL2_dp : MEU_Mar_Helm_WDL2
        {
            scopeArsenal = 0;
            scope = 0;
        };
	
// CH252 light helmets

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
    class MEU_Mar_Helm_base_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_DES_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet(Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_CEA_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_SNO_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
	class MEU_Mar_Helm_URB_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_Helm_WDL_L2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Light Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\L\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    class MEU_Mar_Helm_base_L_dp : MEU_Mar_Helm_base_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_DES_L_dp : MEU_Mar_Helm_DES_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_CEA_L_dp : MEU_Mar_Helm_CEA_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_SNO_L_dp : MEU_Mar_Helm_SNO_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_URB_L_dp : MEU_Mar_Helm_URB_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_WDL_L_dp : MEU_Mar_Helm_WDL_L
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_base_L2_dp : MEU_Mar_Helm_base_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_DES_L2_dp : MEU_Mar_Helm_DES_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_CEA_L2_dp : MEU_Mar_Helm_CEA_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_SNO_L2_dp : MEU_Mar_Helm_SNO_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_URB_L2_dp : MEU_Mar_Helm_URB_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_Helm_WDL_L2_dp : MEU_Mar_Helm_WDL_L2
        {
            scopeArsenal = 0;
            scope = 0;
        };
	
// CH252 MOS Helmets

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
     class MEU_Mar_MOS_Helm_BASE2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_DES2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_CEA2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_SNO2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
	class MEU_Mar_MOS_Helm_URB2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_Mar_MOS_Helm_WDL2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 Medical Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\M\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    class MEU_Mar_MOS_Helm_BASE_dp : MEU_Mar_MOS_Helm_BASE
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_DES_dp : MEU_Mar_MOS_Helm_DES
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_CEA_dp : MEU_Mar_MOS_Helm_CEA
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_SNO_dp : MEU_Mar_MOS_Helm_SNO
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_URB_dp : MEU_Mar_MOS_Helm_URB
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_WDL_dp : MEU_Mar_MOS_Helm_WDL
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_BASE2_dp : MEU_Mar_MOS_Helm_BASE2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_DES2_dp : MEU_Mar_MOS_Helm_DES2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_CEA2_dp : MEU_Mar_MOS_Helm_CEA2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_SNO2_dp : MEU_Mar_MOS_Helm_SNO2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_URB2_dp : MEU_Mar_MOS_Helm_URB2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_Mar_MOS_Helm_WDL2_dp : MEU_Mar_MOS_Helm_WDL2
        {
            scopeArsenal = 0;
            scope = 0;
        };
	
// end Medical Helmets start RTO Helmets

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
    class MEU_RTO_Helm_base2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_MAR_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_DES2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_DES_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_CEA2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_CEA_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_SNO2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_SNO_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    
	class MEU_RTO_Helm_URB2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_URB_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	
    class MEU_RTO_Helm_WDL2 : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] 2nd PLT CH252 RTO Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\2ndplt\R\V_CH252_WDL_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
    };
    class MEU_RTO_Helm_base_dp : MEU_rto_Helm_base
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_DES_dp : MEU_rto_Helm_DES
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_CEA_dp : MEU_rto_Helm_CEA
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_SNO_dp : MEU_rto_Helm_SNO
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_URB_dp : MEU_rto_Helm_URB
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_WDL_dp : MEU_rto_Helm_WDL
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_base2_dp : MEU_rto_Helm_base2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_DES2_dp : MEU_rto_Helm_DES2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_CEA2_dp : MEU_rto_Helm_CEA2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_SNO2_dp : MEU_rto_Helm_SNO2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_URB2_dp : MEU_rto_Helm_URB2
        {
            scopeArsenal = 0;
            scope = 0;
        };
    class MEU_RTO_Helm_WDL2_dp : MEU_rto_Helm_WDL2
        {
            scopeArsenal = 0;
            scope = 0;
        };
	
// end CH252 headgear start vest

// M52A Armor

// Rifleman
	
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
	
    // Grenadier
	
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
	
	// AutoRifleman
	
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
	
    // Breacher
	
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
	
	// Corpsman
	
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
	
	// RTO
	
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
	
// end M52A gear start praetorian gear
// praetorian vests

    class Prae37: 1MEU_BASE_M52D_Armor
	{
		author="1st MEU Mark";
		displayName="[1stMEU] M52D 3-7 (Mark)";
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
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","first_meu_aux\Data\red37.paa"};
        
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
	
    class Prae36: 1MEU_BASE_M52D_Armor
	{
		author="1st MEU Oneill";
		displayName="[1stMEU] M52D 3-6 (Oneill)";
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
		};
    };
	
    class Prae3M : 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Mark";
		displayName = "[1stMEU] M52D 3-M (FloodedMac)";
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
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","first_meu_aux\Data\Green3M.paa"};
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
	
    class Prae3R: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D 3-R (Dimitri)";
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
	
    class M52DRifleman: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Rifleman";
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
		displayName = "[1stMEU] M52D Rifleman (Blue)";
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
		displayName = "[1stMEU] M52D Rifleman (Yellow)";
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
	
	class M52DRiflemanRed:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Rifleman (Red)";
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

	class M52DMarksman: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Marksman";
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
		displayName = "[1stMEU] M52D Marksman (Blue)";
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
		displayName = "[1stMEU] M52D Marksman (Yellow)";
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
	
	class M52DMarksmanRed:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Marksman (Red)";
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
	
	class M52DSniper: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Sniper";
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
		displayName = "[1stMEU] M52D Sniper (Blue)";
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
		displayName = "[1stMEU] M52D Sniper (Yellow)";
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
	
	class M52DSniperRed: 1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Sniper (Red)";
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
	
	class M52DAutoRifleman: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D AutoRifleman";
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
		displayName = "[1stMEU] M52D AutoRifleman (Blue)";
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
		displayName = "[1stMEU] M52D AutoRifleman (Yellow)";
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
		displayName = "[1stMEU] M52D AutoRifleman (Red)";
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
	
	class M52DGrenadier: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Grenadier";
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
		displayName = "[1stMEU] M52D Grenadier (Blue)";
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
		displayName = "[1stMEU] M52D Grenadier (Yellow)";
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
		displayName = "[1stMEU] M52D Grenadier (Red)";
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
	
	class M52DBreacher: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Breacher";
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
		displayName = "[1stMEU] M52D Breacher (Blue)";
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
		displayName = "[1stMEU] M52D Breacher (Yellow)";
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
		displayName = "[1stMEU] M52D Breacher (Red)";
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
	
	class M52DPlatoonCorpsman: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D Platoon Corpsman";
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
	
	class M52DCorpsman: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D Corpsman";
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
    class Hokage: 1MEU_BASE_M52D_Armor
	{
		author="1st MEU Oneill";
		displayName="[1stMEU] Hokage";
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
		};
    };
    
    class Praetor_Helmet_Black_dp : LM_OPCAN_CH252D_H3_dp
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class Praetor_Helmet_Black_31_dp : LM_OPCAN_CH252D_H3_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_31.paa.paa"};
    };
    class Praetor_Helmet_Black_32_dp : LM_OPCAN_CH252D_H3_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32.paa"};
    };
    class Praetor_Helmet_Black_33_dp : LM_OPCAN_CH252D_H3_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_33.paa"};
    };
    class Praetor_Helmet_Black_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Black_31_broken : LM_OPCAN_CH252D_H3_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_31.paa.paa"};
    };
    class Praetor_Helmet_Black_32_broken : LM_OPCAN_CH252D_H3_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32.paa"};
    };
    class Praetor_Helmet_Black_33_broken : LM_OPCAN_CH252D_H3_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_33.paa"};
    };
    class Praetor_Helmet_Ride_dp : LM_OPCAN_CH252D_H3_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Ride.paa"};
    };
    class Praetor_Helmet_Ride_broken : LM_OPCAN_CH252D_H3_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Ride.paa"};
    };
    class Praetor_Helmet_Yellow_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class Praetor_Helmet_Yellow_31_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_31.paa"};
    };
    class Praetor_Helmet_Yellow_32_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_32.paa"};
    };
    class Praetor_Helmet_Yellow_33_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_33.paa"};
    };
    class Praetor_Helmet_Yellow_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class Praetor_Helmet_Yellow_31_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_31.paa"};
    };
    class Praetor_Helmet_Yellow_32_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_32.paa"};
    };
    class Praetor_Helmet_Yellow_33_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_33.paa"};
    };
    class Praetor_Helmet_Blue_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class Praetor_Helmet_Blue_31_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_31.paa"};
    };
    class Praetor_Helmet_Blue_32_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_32.paa"};
    };
    class Praetor_Helmet_Blue_33_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_33.paa"};
    };
    class Praetor_Helmet_Blue_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class Praetor_Helmet_Blue_31_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_31.paa"};
    };
    class Praetor_Helmet_Blue_32_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_32.paa"};
    };
    class Praetor_Helmet_Blue_33_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_33.paa"};
    };
    class Praetor_Helmet_Green_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class Praetor_Helmet_Green_31_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_31.paa"};
    };
    class Praetor_Helmet_Green_32_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_32.paa"};
    };
    class Praetor_Helmet_Green_33_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_33.paa"};
    };
    class Praetor_Helmet_Green_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        scopeArsenal = 0;
        scope = 0;
    };
    class Praetor_Helmet_Green_31_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_31.paa"};
    };
    class Praetor_Helmet_Green_32_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_32.paa"};
    };
    class Praetor_Helmet_Green_33_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Green_33.paa"};
    };
    class Praetor_Helmet_Red_dp : LM_OPCAN_CH252D_H3_Red_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Red_Custom.paa"};
    };
    class Praetor_Helmet_Red_broken : LM_OPCAN_CH252D_H3_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Red_Custom.paa"};
    };
    class Praetor_Helmet_Black_baseplate_dp : Praetor_Helmet_Red_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32_baseplate.paa"};
    }
    class Praetor_Helmet_Black_baseplate_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32_baseplate.paa"};
    }
    class Praetor_Helmet_Com_dp : Praetor_Helmet_Red_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Oneill.paa"};
    };
    class Praetor_Helmet_Com_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Oneill.paa"};
    };
    class Praetor_Helmet_Com2_dp :Praetor_Helmet_Red_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Mark.paa"};
    };
    class Praetor_Helmet_Com2_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Mark.paa"};
    };
    class Praetor_Helmet_Com3_dp : Praetor_Helmet_Red_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Dimitri.paa"};
    };
    class Praetor_Helmet_Com3_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Dimitri.paa"};
    };
    class Praetor_Helmet_Mike_dp : Praetor_Helmet_Red_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_green_custom_FloodedMac.paa"};
    };
    class Praetor_Helmet_Mike_broken : Praetor_Helmet_Red_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_green_custom_FloodedMac.paa"};
    };
    class Praetor_Sound_Protec_dp : Praetor_Helmet_Black_dp
    {
        
    };
    class Praetor_Helmet_Ride: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Ride Along Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Ride.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
     class Praetor_Helmet_Black_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Black_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black_baseplate: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (Baseplate)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32_baseplate.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Yellow.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Yellow_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Yellow) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Yellow) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Yellow) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Blue: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Blue.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Blue_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (Blue) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Blue_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (Blue) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Blue_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] CH252D Helmet (Blue) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Green: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Green)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_green.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Green_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Corpsman) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_green_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Green_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Corpsman) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_green_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Green_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] CH252D Helmet (Corpsman) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_green_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Red: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Red)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Red.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Com: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Oneill)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Oneill.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Com2: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Mark)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Mark.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Com3: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Dimitri)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_red_custom_Dimitri.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Mike: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (FloodedMac)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_green_custom_FloodedMac.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Sound_Protec: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		displayName = "[1stMEU] CH252D Soundproof Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	
// Praetorian Helmet End
// pilot helmet Start
	
    class MEU_UNSC_VX16_Helmet_Mask_blk_med : OPTRE_UNSC_VX16_Helmet_Mask_blk_med
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
        displayName = "[1stMEU] Pilot Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\PegBasicPilot.paa"};
    }
    class MEU_UNSC_VX16_Helmet_Mask_blk_med_dp : OPTRE_UNSC_VX16_Helmet_Mask_blk_med_dp
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\PegBasicPilot.paa"};
    };
    class MEU_UNSC_VX16_Helmet_Mask_blk_med_broken : OPTRE_UNSC_VX16_Helmet_Mask_blk_med_broken
    {
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\PegBasicPilot.paa"};
    };
	
    class Siffy_Helmet : OPTRE_UNSC_VX16_Helmet_MaskS
    {
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Pilot Helmet (Siffy)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\helm_black_CO_Testing.paa"};
    };
    class Siffy_Helmet_dp : OPTRE_UNSC_VX16_Helmet_MaskS_dp
    {
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\helm_black_CO_Testing.paa"};
    };
    class Siffy_Helmet_broken : OPTRE_UNSC_VX16_Helmet_MaskS_broken
    {
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\helm_black_CO_Testing.paa"};
    };
	
// Pilot helmet end
// BDU Start
	
	class Praetorian_BDU : U_B_CombatUniform_mcam
	{
		author = "1stMEU Oneill";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		class ItemInfo: UniformItem
		{
			uniformClass = "BDU_V_Praetorian_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
    class Centurion_BDU : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Urban_Evolved : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Urban/Evolved)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Urban_Evolved_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Desert : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Desert)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Desert_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Snow : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Snow)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Snow_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Woodland : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Woodland)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Woodland_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Pegasus_Pilot_Uniform : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pegasus Pilot Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		ACE_GForceCoef = 0.1;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Pegasus_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
// BDU End
// Weapons Start
	
	class WeaponSlotsInfo;
	class StandardSound;
	class CowsSlot;
	class MuzzleSlot;
	class Single;
	class FullAuto;
	class OPTRE_M247;
	
	class M247HMG: OPTRE_M247
	{
		dlc = "OPTRE";
		author = "[1stMEU] Oneill";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\MG\data\anim\OPTRE_M247_handanim.rtm","Spartan_ManSkeleton","\OPTRE_Weapons\MG\data\anim\M247_Spartan.rtm"};
		model = "\OPTRE_Weapons\MG\M247.p3d";
		displayName = "M247 Heavy Machine Gun";
		descriptionShort = "UNSC Heavy Machine Gun (man portable)";
		magazines[] = {"OPTRE_100Rnd_127x99_M247HMG", "OPTRE_100Rnd_127x99_HE_M247HMG"};
		recoil = "recoil_mk200";
		baseWeapon = "M247HMG";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 150;
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {};
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
			reloadTime = 0.095;
			dispersion = 0.000065;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
			reloadTime = 0.095;
			dispersion = 0.000065;
		};
	};
// Weapon end
};