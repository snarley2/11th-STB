class CfgWeapons
{
	//OPTRE Armor
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252_Helmet2_MAR;
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_VX16_Helmet_base;
    class OPTRE_UNSC_VX16_Helmet_base_broken;
    class OPTRE_UNSC_VX16_Helmet_base_dp;
	class OPTRE_UNSC_M52A_Armor_Base;
    class OPTRE_FC_VX19_Helmet;
	class OPTRE_HUD_RscPicture;

	//OPCAN Armor
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
	class LM_OPCAN_CGC;
	class LM_OPCAN_Beret_CGC;
    class LM_OPCAN_Vest_ODST_Red;
	
	//Zulu Armor
	class VES_M52A_URB_Security_A;
	class VES_CH252A;
	class VES_CH252D_dp;
	
    //Weapons
	class OPTRE_Rifle_Base;
	class OPTRE_LongRifle_Base;
	class OPTRE_Handgun_Base;
	class OPTRE_SubMachineGun_Base;
    class OPTRE_M7S;
	class OPTRE_M73;
	class OPTRE_BR55;
	class OPTRE_BR55HB_Scope;
	class OPTRE_UnguidedLauncher_Base;
	class autocannon_40mm_CTWS;
	class gatling_30mm;
    class VES_M7_I;
    class UGL_F;
    class Grenadelauncher;
    class ThrowMuzzle;
	class HMG_127;
	class HMG_127_APC;
	class GMG_40mm;
	class LMG_coax;
	class M134_minigun;
	class autocannon_Base_F;
	class MGun;
	class GMG_F;
	class autocannon_35mm;
	class cannon_120mm;
	class mortar_155mm_AMOS;
	class weapon_ShipCannon_120mm;
	class arifle_MSBS65_black_F;
	class arifle_MSBS65_GL_black_F;
	class arifle_MSBS65_Mark_black_F;
	class arifle_MSBS65_UBS_black_F;
    class arifle_MX_Black_F;
    class arifle_MX_GL_Black_F;
    class arifle_CTAR_blk_F;
    class arifle_CTAR_GL_blk_F;
    class arifle_CTARS_blk_F;
    class arifle_Mk20_F;
    class arifle_Mk20C_F;
    class arifle_Mk20_GL_F;
    class OPTRE_M6_Laser;
    class OPTRE_M68_GAUSS;
    class OPTRE_M45;
    class OPTRE_MA32;
    class OPTRE_MA5C;
    class OPTRE_MA5CGL;
    class OPTRE_FC_Railgun;
		
	//Medical
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
    class ACE_Morphine;
	class ACE_plasmaIV;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;
    class ACE_tourniquet;
    class ACE_Epinephrine;
	
	//Generic Classes
    class ItemCore;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
    class ItemInfo;
	class VestItem;
	class BaseSoundModeType;
	class WeaponSlotsInfo;
	class StandardSound;
	class CowsSlot;
	class MuzzleSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class Single;
	class FullAuto;
	class player;
	class CannonCore;
	class Mode_SemiAuto;
	class Mode_Burst;
	class Mode_FullAuto;
	class InventoryOpticsItem_Base_F;
    class H_HelmetO_ViperSP_ghex_F;
    class U_O_V_Soldier_Viper_F;

	
	//Miscelaneous Classes
	class ItemcTabHCam;
	class v_rebreatherB;
    class G_B_Diving;
	class H_HelmetB;
	class MRH_BluForTransponder;
    class A3_TVG_S_F6;
    class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class U_B_CombatUniform_mcam;
    class G_Aviator;
    class H_Beret_Colonel;
    class LM_OPCAN_UP_Shemagh;
    class LM_OPCAN_URB_UP_Shemagh;
    class LM_OPCAN_DES_UP_Shemagh;
    class LM_OPCAN_BRW_Shemagh;
    class plp_ctf_SafetyBarrelBlue;
	
    // Start of Chemical Barrels | 0 = CS | 1 = AS | 2 = NA
    class ChemicalBarrel_NA: plp_ctf_SafetyBarrelBlue
	{
        author = "Romeo" 
		scope = 2;
		scopeCurator = 2;
        armor = 50;
        armorStructural = 4;
        ace_frag_enabled = 0;
        CBRN_chemicalType = 2;
        CBRN_heightOfBurst = 1;
        CBRN_sprayWidth = 15;
        CBRN_lifetime = 90;
        CBRN_isPlacedExplosive = 1;
		displayName = "Chemical Barrel (Nerve Agent)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\first_meu_aux\data\misc\NerveAgentBarrel_co.paa"};
        class DestructionEffects
        {
            class Light1
            {
                simulation = "light";
                type = "ObjectDestructionLight";
                position = "DestructionFire";
                intensity = 0.001;
                interval = 1;
                lifeTime = 0.5;
            };
            class FuelFire1
            {
                simulation = "particles";
                type = "BarelDestructionFire";
                position = "DestructionFire";
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.5;
            };
            class FuelDestr
            {
                simulation = "destroy";
                type = "FuelStationDestr";
                position = "";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
            };
        };
    };
    class ChemicalBarrel_AS: plp_ctf_SafetyBarrelBlue
	{
        author = "Romeo" 
		scope = 2;
		scopeCurator = 2;
        armor = 50;
        armorStructural = 4;
        ace_frag_enabled = 0;
        CBRN_chemicalType = 1;
        CBRN_heightOfBurst = 1;
        CBRN_sprayWidth = 15;
        CBRN_lifetime = 90;
        CBRN_isPlacedExplosive = 1;
		displayName = "Chemical Barrel (Asphyxiant)";
        destrType = "DestructBuilding";
        editorCategory = "MEU_Objects";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\first_meu_aux\data\misc\AsphyxiantBarrel_co.paa"};
        class EventHandlers
        {
            Killed = "(_this select 0) spawn {sleep (random 0.5); _pos = getPosATL _this; _this setVelocity [0,0,2]; sleep (random 0.3); _explo = ""OPTRE_Exp_Hydrogen_Small"" createVehicle _pos; };";
        };
        class DestructionEffects
        {
            class Light1
            {
                simulation = "light";
                type = "ObjectDestructionLight";
                position = "DestructionFire";
                intensity = 0.001;
                interval = 1;
                lifeTime = 0.5;
            };
            class FuelFire1
            {
                simulation = "particles";
                type = "BarelDestructionFire";
                position = "DestructionFire";
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.5;
            };
            class FuelDestr
            {
                simulation = "destroy";
                type = "FuelStationDestr";
                position = "";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
            };
        };
    };
// Medical Items Start
    class MEU_compat_Ibuprofen: ACE_Morphine
	{
		scope = 2;
		author = "1st MEU Mark";
		displayName = "Ibuprofen Bottle";
		picture = "\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model = "\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort = "Drink some water and Rest";
		descriptionUse = "Use instead of morphine";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
    class Atropine : MEU_compat_Ibuprofen
    {
        scope = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "Antidote";
        descriptionShort = "Emergeny Use Only";
		descriptionUse = "Might save you from the cloud";
    };
    class MEU_PlasmaIV : ACE_plasmaIV
    {
        scope = 2;
        displayName = "[1st MEU] Plasma 2.5L";
        descriptionShort = "2.5L of Plasma";
		descriptionUse = "Give Plasma (2.5L)";
        class ItemInfo: ItemInfo
		{
			mass = 16;
        };
    };
	class MEU_Emergency_MedKit: OPTRE_Biofoam
	{
		scope = 2;
		author = "Rave";
		displayName = "[1st MEU] Emergency Medkit";
		picture = "\OPTRE_weapons\items\icons\medkit.paa";
		model = "\OPTRE_Weapons\items\MedKit.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 32;
		};
	};
    class MEU_Biofoam: OPTRE_Biofoam
    {
        scope = 2;
        displayName = "[C] Biofoam Canister";
		picture = "\OPTRE_weapons\items\icons\biofoam.paa";
		model = "\OPTRE_Weapons\items\Biofoam.p3d";
        class ItemInfo: ItemInfo
		{
			mass = 35;
        };
    };
    class MEU_Medigel: OPTRE_Medigel
    {
        scope = 2;
        displayName = "[C] Optican Medigel";
		picture = "\first_meu_aux\data\misc\icons\medigel_icon.paa";
		model = "\OPTRE_Weapons\items\Medigel.p3d";
        class ItemInfo: ItemInfo
		{
			mass = 35;
        };
    };
	class MEU_Biofoam_Light: OPTRE_Biofoam
    {
        scope = 2;
        displayName = "[1st MEU] Biofoam Canister";
		picture = "\OPTRE_weapons\items\icons\biofoam.paa";
		model = "\OPTRE_Weapons\items\Biofoam.p3d";
        class ItemInfo: ItemInfo
		{
			mass = 2;
        };
    };
    class MEU_Medigel_Light: OPTRE_Medigel
    {
        scope = 2;
        displayName = "[1st MEU] Optican Medigel";
		picture = "\first_meu_aux\data\misc\icons\medigel_icon.paa";
		model = "\OPTRE_Weapons\items\Medigel.p3d";
        class ItemInfo: ItemInfo
		{
			mass = 2;
        };
    };
	class MEU_tourniquet : ACE_tourniquet 
    {
        scope = 1;
        displayName = " [P] Armor Patch"; 
        class ItemInfo: CBA_MiscItem_ItemInfo 
        {
            mass = 0.5;
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
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ace_overlayCracked = "first_meu_aux\Data\misc\hud_cracked.paa";
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
		allowedFacewear[] = {};
	};
    class 1stMEU_Base_CH252D_Helmet_dp : VES_CH252D_dp
    {
        dlc = "1st MEU";
		author = "1st MEU Mark";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] CH252D Helmet";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
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
		displayName = "[1stMEU] M52D Body Armor (BASE)";
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
	
	class 1MEU_BASE_Pilot_Armor: VES_M52A_URB_Security_A
	{	
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (BASE)";
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
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
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
        vestType = "Rebreather";
		class ItemInfo: VestItem 
		{
            vestType = "Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			containerClass = "Supply250";
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
					armor = 30;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 30;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 30;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 30;
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
    class fourth_plt_beret : first_plt_Beret
    {
       scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] Beret (4th Plt)";
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
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\4thBeret.paa"};
        visionMode[] = {"Normal","TI","NVG"};
        thermalMode[] = {0,1,2,3,4,5};
    };
    class fifth_plt_beret : first_plt_Beret
    {
       scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1stMEU] Beret (5th Plt)";
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
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\VulcanBeretV2.paa"};
        visionMode[] = {"Normal","TI","NVG"};
        thermalMode[] = {0,1,2,3,4,5};
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
	
// centurion heavy helmets

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
	//5th plt helmets 
	class MEU_Mar_MOS_Helm_Sealed_Base: 1stMEU_Base_CH252D_Helmet
	{
		author = "Rave";
		scope = 1;
		scopeCurator = 1;
		model = "\OPTRE_UNSC_Units\Army\helmet_p";
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
		hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Ghillie"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "OPTRE_UNSC_Units\Army\helmet_p";
			picture = "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[] = {"camo","camo2","camo3","H_Collar","H_Ghillie"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
			hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat4thPltZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"};
		};
	};
	class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-0 ECH252 Helmet (Evolved Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
 	    hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-0 ECH252 Helmet (Evolved Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_CEA_L_CO_GL_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_GL.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Desert Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Desert Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_DES_R_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_56 : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-6 ECH252 Helmet (Marine Gold) (Spades)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_56.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_57 : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-7 ECH252 Helmet (Marine Gold) (Starbuck)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_57.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_5R : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-R ECH252 Helmet (Marine Gold) (Aqyrys)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R3_CO_AQ.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_CEA_L_CO_A_GLD_50 : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-0 ECH252 Helmet (Evolved Gold) (Muffins)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_50.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_5M : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Marine Gold) (Avon)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_5M.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_56_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_56.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_57_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_57.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_5R_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R3_CO_AQ.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_CEA_L_CO_A_GLD_50_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_CEA_L_CO_50.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    class MEU_Mar_Sealed_V_CH252_MAR_L_CO_A_GLD_5M_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_5M.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Marine Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Marine Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_MAR_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Snow Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R1_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Snow Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_SNO_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Urban Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Urban Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_URB_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
          scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
          scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-M ECH252 Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_GU_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_GU.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_L_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_A : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 RTO Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_A_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_H : MEU_Mar_MOS_Helm_Sealed_Base
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 RTO Helmet (Woodland Silver)";
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R1_CO_H_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
		scopeArsenal = 1;
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_A_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-2 ECH252 (SR) RTO Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_A_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_A.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_H_GLD : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-1 ECH252 (SR) RTO Helmet (Woodland Gold)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
	};
	class MEU_Mar_Sealed_V_CH252_WDL_R2_CO_H_GLD_dp : MEU_Mar_MOS_Helm_Sealed_Base
	{
        scope = 1;
        scopeArsenal = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_H.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
	};
    // 5th plt helm end
	//training helmets
	class MEU_Mar_Helm_Training_Red : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Rave & Ginger";
		displayName = "[1stMEU] CH252 Training Helmet (Red)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_RED_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Red_dp : 1MEU_Base_CH252_Helmet
	{
        scope = 1;
		scopeCurator = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_RED_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Blue : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Rave & Ginger";
		displayName = "[1stMEU] CH252 Training Helmet (Blue)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_BLU_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Blue_dp : 1MEU_Base_CH252_Helmet
	{
        scope = 1;
		scopeCurator = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_BLU_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Green : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Rave & Ginger";
		displayName = "[1stMEU] CH252 Training Helmet (Green)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_GRE_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Green_dp : 1MEU_Base_CH252_Helmet
	{
        scope = 1;
		scopeCurator = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_GRE_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	 class MEU_Mar_Helm_Training_Purple : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Rave & Ginger";
		displayName = "[1stMEU] CH252 Training Helmet (Purple)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_PUR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Purple_dp : 1MEU_Base_CH252_Helmet
	{
        scope = 1;
		scopeCurator = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_PUR_H_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};


	class MEU_Mar_Helm_Training_Red_Med : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Rave & Ginger";
		displayName = "[1stMEU] CH252 Training Medical Helmet (Red)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_RED_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Red_Med_dp : 1MEU_Base_CH252_Helmet
	{
        scope = 1;
		scopeCurator = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_RED_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Blue_Med : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Rave & Ginger";
		displayName = "[1stMEU] CH252 Training Medical Helmet (Blue)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_BLU_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Blue_Med_dp : 1MEU_Base_CH252_Helmet
	{
        scope = 1;
		scopeCurator = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_BLU_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Green_Med : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Rave & Ginger";
		displayName = "[1stMEU] CH252 Training Medical Helmet (Green)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_GRE_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Green_Med_dp : 1MEU_Base_CH252_Helmet
	{
        scope = 1;
		scopeCurator = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_GRE_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
  	class MEU_Mar_Helm_Training_Purple_Med : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Rave & Ginger";
		displayName = "[1stMEU] CH252 Training Medical Helmet (Purple)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_PUR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};
	class MEU_Mar_Helm_Training_Purple_Med_dp : 1MEU_Base_CH252_Helmet
	{
        scope = 1;
		scopeCurator = 1;
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\TrainingArmor\MEU_CH252_PUR_M_CO.paa","optre_unsc_units\army\data\helmet_visor_ca"};
	};

	class MEU_Mar_DES_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_DES_A_dp  : MEU_Mar_DES_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_DES_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_DES_R2_A_dp  : MEU_Mar_DES_R2_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_DES_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO (Desert)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_DES_R_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_DES_R1_A_dp  : MEU_Mar_DES_R1_A
	{
		scopeArsenal = 1;
		scope = 1;
	};	
   
	class MEU_Mar_URB_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_URB_A_dp  : MEU_Mar_URB_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_URB_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_URB_R2_A_dp  : MEU_Mar_URB_R2_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_URB_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO (Urban)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_URB_R1_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_URB_R1_A_dp  : MEU_Mar_URB_R1_A
	{
		scopeArsenal = 1;
		scope = 1;
	};	


	class MEU_Mar_MAR_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (Marine)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_MAR_A_dp  : MEU_Mar_MAR_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_MAR_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO (Marine)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_MAR_R2_A_dp  : MEU_Mar_MAR_R2_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_MAR_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO (Marine)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_MAR_R1_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_MAR_R1_A_dp  : MEU_Mar_MAR_A
	{
		scopeArsenal = 1;
		scope = 1;
	};	
	
	class MEU_Mar_SNO_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_SNO_A_dp  : MEU_Mar_SNO_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_SNO_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_SNO_R2_A_dp  : MEU_Mar_SNO_R2_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_SNO_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO (Snow)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_SNO_R1_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_SNO_R1_A_dp  : MEU_Mar_SNO_R1_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_WDL_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_L_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_WDL_A_dp  : MEU_Mar_WDL_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_WDL_R2_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 (SR) RTO (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R2_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_WDL_R2_A_dp  : MEU_Mar_WDL_R2_A
	{
		scopeArsenal = 1;
		scope = 1;
	};

	class MEU_Mar_WDL_R1_A : 1MEU_Base_CH252_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 5-3 CH252 RTO (Woodland)";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\5thPlt\Helmets\V_CH252_WDL_R1_CO_F.paa","optre_unsc_units\army\data\helmet_visor_ca"};
    };
	class MEU_Mar_WDL_R1_A_dp  : MEU_Mar_WDL_R1_A
	{
		scopeArsenal = 1;
		scope = 1;
	};	
    //no more 1st
    class MEU_Mar_Helm_base_L_dp : MEU_Mar_Helm_MAR
	{
		scopeArsenal = 1;
		scope = 1;
	};
    class MEUA_MarT_HelmH_MARH_Eul_dp : MEU_Mar_Helm_MAR
	{
		scopeArsenal = 1;
		scope = 1;
	};
    class MEU_Mar_Helm_DES_L_dp : MEU_Mar_Helm_DES
	{
		scopeArsenal = 1;
		scope = 1;
	};
    class MEU_Mar_Helm_CEA_L_dp : MEU_Mar_Helm_CEA
	{
		scopeArsenal = 01;
		scope = 1;
	};
    class MEU_Mar_Helm_SNO_L_dp : MEU_Mar_Helm_SNO
	{
		scopeArsenal = 1;
		scope = 1;
	};
    class MEU_Mar_Helm_URB_L_dp : MEU_Mar_Helm_URB
	{
		scopeArsenal = 1;
		scope = 1;
	};
    class MEU_Mar_Helm_WDL_L_dp : MEU_Mar_Helm_WDL
	{
		scopeArsenal = 1;
		scope = 1;
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
    //start regular dp end custom
    class MEU_RTO_Helm_base_dp : MEU_rto_Helm_base
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_RTO_Helm_DES_dp : MEU_rto_Helm_DES
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_RTO_Helm_CEA_dp : MEU_rto_Helm_CEA
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_RTO_Helm_SNO_dp : MEU_rto_Helm_SNO
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_RTO_Helm_URB_dp : MEU_rto_Helm_URB
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class MEU_RTO_Helm_WDL_dp : MEU_rto_Helm_WDL
    {
        scopeArsenal = 1;
        scope = 1;
    };
    // M52A Armor 
    // Rifleman
    // end CH252 headgear
    // M52A Armor 
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
	// Crewman
	
    class MEU_M52A_Crewman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_SmallLeft",
			"AS_SmallRight",
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
			"AP_BR",
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
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_SmallLeft",
				"AS_SmallRight",
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
				"AP_BR",
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
	
    class MEU_M52A_Crewman_DES: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Crewman_CEA: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Crewman_SNO: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_Crewman_URB: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_Crewman_WDL: MEU_M52A_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	 class MEU_M52A_NCO_Crewman: 1MEU_BASE_M52A_Armor
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_ODST",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AP_Smoke",
			"AP_GL",
			"AP_MGThigh",
			"AP_BR",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Knife",
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
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_ODST",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
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
	
    class MEU_M52A_NCO_Crewman_DES: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Desert)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_DES_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_DES_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Crewman_CEA: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Evolved)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_CEA_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Crewman_SNO: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Snow)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_SNO_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
	class MEU_M52A_NCO_Crewman_URB: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Urban)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_URB_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_URB_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	
    class MEU_M52A_NCO_Crewman_WDL: MEU_M52A_NCO_Crewman
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52A Crewman NCO (Woodland)";
		hiddenSelectionsTextures[] = 
		{
			"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_WDL_CO",
			"V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO",
			"optre_unsc_units\army\data\ghillie_woodland_co",
			"optre_unsc_units\army\data\odst_armor_co"
		};
	};
	//training armor
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
	
// end M52A gear start praetorian gear          
// praetorian vests

    class Prae37: 1MEU_BASE_M52D_Armor
	{
		author="1st MEU Mark";
		displayName="[1stMEU] M52D D-5 (Mark)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\Data\3rdPlt\ODST_HR_Black_Red_CHQ_Mark.paa"
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
		displayName="[1stMEU] M52D D-6 (Oneill)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\Data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
	
    class Prae3M : 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Mark";
		displayName = "[1stMEU] M52D D-M (FloodedMac)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\Data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
		displayName = "[1stMEU] M52D D-R (Dimitri)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\Data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
		displayName = "[1stMEU] M52D Rifleman (Silver)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
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
		displayName = "[1stMEU] M52D Rifleman (Purple)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
	
    class M52DMarksmanSilver:1MEU_BASE_M52D_Armor
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Marksman (Silver)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
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
		displayName = "[1stMEU] M52D Marksman (Purple)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
    
    class M52DSniperSilver: 1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Sniper (Silver)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
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
		displayName = "[1stMEU] M52D Sniper (Purple)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
		displayName = "[1stMEU] M52D AutoRifleman (Silver)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
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
		displayName = "[1stMEU] M52D AutoRifleman (Purple)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
		displayName = "[1stMEU] M52D Grenadier (Silver)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
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
		displayName = "[1stMEU] M52D Grenadier (Purple)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
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
		displayName = "[1stMEU] M52D Breacher (SMG)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
		displayName = "[1stMEU] M52D Breacher (SMG) (Blue)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
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
		displayName = "[1stMEU] M52D Breacher (SMG) (Yellow)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
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
		displayName = "[1stMEU] M52D Breacher (SMG) (Red)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
		displayName = "[1stMEU] M52D Breacher (SMG) (Silver)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
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
		displayName = "[1stMEU] M52D Breacher (SMG) (Purple)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
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
	
		class M52DBreacherShotgun: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Breacher (SHTGN)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
		displayName = "[1stMEU] M52D Breacher (SHTGN) (Blue)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
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
		displayName = "[1stMEU] M52D Breacher (SHTGN) (Yellow)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Yellow.paa"
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
		displayName = "[1stMEU] M52D Breacher (SHTGN) (Red)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
		displayName = "[1stMEU] M52D Breacher (SHTGN) (Silver)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
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
		displayName = "[1stMEU] M52D Breacher (SHTGN) (Purple)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
	
	class M52DPlatoonCorpsman: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D Corpsman Leadership (Red)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
	
	class M52DPlatoonCorpsmanSilver: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D Corpsman Leadership (Silver)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
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
		displayName = "[1stMEU] M52D Corpsman Leadership (Purple)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
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
		
	class M52DRTO: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D RTO";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
	
	class M52DRTORed: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D RTO Leadership (Red)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Red_CHQ.paa"
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
	
	class M52DRTOSilver: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D RTO Leadership (Silver)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Silver.paa"
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
		displayName = "[1stMEU] M52D RTO Leadership (Purple)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple.paa"
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
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
    //fix this later needs to be here fuck me
	
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
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    
    //praetorian helmets starts with broke shit
    class Praetor_Helmet_Base_Broken : Praetor_Helmet_Black
    {
        scope = 1;
        scopeArsenal = 1;
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ace_overlayCracked = "first_meu_aux\Data\misc\hud_cracked.paa";
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black.paa","first_meu_aux\Data\misc\hud_cracked.paa"};
    };
	class Praetorian_Helmet_4M_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Rave.paa","first_meu_aux\data\MISC\VISR_ODST_NAV_SPD.paa"};
		
    };
    class Praetor_Helmet_Black_broken : Praetor_Helmet_Black
    {
        scope = 1;
        scopeArsenal = 1;
    };
    class Praetor_Helmet_Black_31_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_31.paa"};
    };
    class Praetor_Helmet_Black_32_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_32.paa"};
        
    };
    class Praetor_Helmet_Black_33_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_33.paa"};
    };
    class Praetor_Helmet_Ride_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Ride.paa"};
    };
    
    class Praetor_Helmet_Yellow_broken : Praetor_Helmet_Base_Broken
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class Praetor_Helmet_Yellow_31_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_Yellow_31.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Yellow_32_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_Yellow_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Yellow_33_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_Yellow_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    
    class Praetor_Helmet_Blue_broken : Praetor_Helmet_Base_Broken
    {
        scopeArsenal = 1;
        scope = 1;
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Blue_31_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_Blue_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Blue_32_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_Blue_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Blue_33_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_Blue_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Green_broken : Praetor_Helmet_Base_Broken
    {
        scopeArsenal = 1;
        scope = 1;
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Green_31_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Green_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Green_32_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Green_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Green_33_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Green_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Red_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_Red_Custom.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Black_baseplate_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_32_baseplate.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Com_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_red_custom_Oneill.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Com2_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_red_custom_Mark.paa","first_meu_aux\Data\misc\hud_cracked.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Com3_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_Red_Dimitri.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Mike_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_Red_HM_CHQ_Flooded.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Ride_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Ride.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Red_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_Red.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Black_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Sound_Protec_dp : Praetor_Helmet_Black_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
        
    };
    class Praetor_Helmet_Mike_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_Red_HM_CHQ_Flooded.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Black_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_31.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Black_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_32.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Black_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_33.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Yellow_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Yellow.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Yellow_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Yellow_31.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Yellow_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Yellow_32.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Yellow_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Yellow_33.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Blue_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_blue.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Blue_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Blue_31.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Blue_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Blue_32.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Blue_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Blue_33.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Corpsman_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_color_green.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_corpsman_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_HM_31.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_corpsman_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_HM_32.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_corpsman_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_HM_33.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Com_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_Red_Oneill.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Com2_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Wth_Mark.paa","first_meu_aux\data\misc\VISR_ODST_CLR_SPD.paa"};
    };
    class Praetor_Helmet_Com22_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_Red_Mark.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Com3_dp :  1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_Red_Dimitri.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Cursed_3R_dp :  1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Silver_3HQ_Cursed.paa","first_meu_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Silver_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Silver.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_3HQ_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Silver_3HQ.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_36_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Silver_3HQ.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Ender_3M_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Silver_3HQ_Ender.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    
    //praetorian rto helms
    class Praetor_RTO_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 3-1 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R1_31.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 3-2 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R1_32","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 3-3 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R1_33","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_41: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 4-1 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R1_41.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_42: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 4-2 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R1_42","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
     class Praetor_RTO_43: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 4-3 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R1_43","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 3-1 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R2_31.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 3-2 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R2_32","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 3-3 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R2_33","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_41: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 4-1 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R2_41.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_42: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 4-2 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R2_42","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
     class Praetor_RTO_SR_43: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[1stMEU] 4-3 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R2_43","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    //broken
    class Praetor_RTO_31_broken : Praetor_RTO_31
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R1_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_32_broken : Praetor_RTO_32
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R1_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_33_broken : Praetor_RTO_33
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R1_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "first_meu_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    //depolar rto helms
    class Praetor_RTO_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R1_31.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R1_32.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R1_33.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_41_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R1_41.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_42_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R1_42.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_43_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R1_43.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R2_31.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R2_32.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_R2_33.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_41_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R2_41.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_42_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R2_42.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_43_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_R2_43.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    //regular helms
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
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Ride.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
     class Praetor_Helmet_Black_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] 3-1 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_31.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Black_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] 3-2 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_32.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Black_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] 3-3 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_33.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
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
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Yellow.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Yellow_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] 3-1 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Yellow_31.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Yellow_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] 3-2 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Yellow_32.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Yellow_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[1stMEU] 3-3 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Yellow_33.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
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
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Blue.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Blue_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] 3-1 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Blue_31.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Blue_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] 3-2 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Blue_32.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Blue_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[1stMEU] 3-3 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Blue_33.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
	class Praetor_Helmet_Corpsman: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_HM.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Corpsman_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Romeo";
		displayName = "[1stMEU] 3-1 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_HM_31.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Corpsman_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Romeo";
		displayName = "[1stMEU] 3-2 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_HM_32.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Corpsman_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Romeo";
		displayName = "[1stMEU] 3-3 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_HM_33.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
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
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_Red.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Com: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] D-6 CH252D Helmet (Oneill)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_Red_Oneill.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Com2: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] D-7 CH252D Helmet (Mark Weathered)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Wth_Mark.paa","first_meu_aux\data\MISC\VISR_ODST_NAV_SPD.paa"};
	};
    class Praetor_Helmet_Com22: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] D-7 CH252D Helmet (Mark)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_Red_Mark.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Com3: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] D-R CH252D Helmet (Dimitri)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black_Red_Dimitri.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Mike: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] D-M CH252D Helmet (FloodedMac)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Black_Red_HM_CHQ_Flooded.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Silver: 1stMEU_Base_CH252D_Helmet
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] CH252D Helmet (Silver)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Silver.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_3HQ: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 3HQ CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Silver_3HQ.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_36: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 3-7 CH252D Helmet (Drammon)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Silver_3HQ.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Ender_3M: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 3-M CH252D Helmet (Ender)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Silver_3HQ_Ender.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Cursed_3R: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 3-R CH252D Helmet (Cursed)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\3rdPlt\ODST_H3_Silver_3HQ_Cursed.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
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
		hiddenSelectionsTextures[] = {"first_meu_aux\data\3rdPlt\ODST_H3_Black.paa","first_meu_aux\data\MISC\VISR_ODST_NAV"};
    };
	
// Praetorian Helmet End
// pilot helmet Start

    class VX19_1stMEU : OPTRE_FC_VX19_Helmet
	{
                scope = 2;
                author = "1st MEU Chaotic";
                scopeCurator = 2;
                scopeArsenal = 2;
                weaponPoolAvailable = 1;
		displayName = "[1stMEU] Pegasus VX-19";
		optreVarietys[] = {"", "_broken"};
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\first_meu_aux\data\pegasus\h3_pilothelmet_BK.paa",
			"\first_meu_aux\data\pegasus\h3_pilothelmet_visor_CO.paa"
		};
                class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsTextures[] = {"\first_meu_aux\data\pegasus\h3_pilothelmet_BK.paa","\first_meu_aux\data\pegasus\h3_pilothelmet_visor_CO.paa"};
		};
	};
    class Siffy_Helmet : OPTRE_UNSC_VX16_Helmet_base
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
		displayName = "[1stMEU] 0-6 Squadron CO (Siffy)";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_6.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_6.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class peg_flight : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Flight Commander";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Helios_section : Siffy_Helmet
    {
        displayName = "[1stMEU] 1-1 VX-16 Helios SL";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Axios_section : Siffy_Helmet
    {
        displayName = "[1stMEU] 1-2 VX-16 Axios SL";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_ilithios_section : Siffy_Helmet
    {
        displayName = "[1stMEU] 1-3 VX-16 Ilithios SL";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Helios : Siffy_Helmet
    {
        displayName = "[1stMEU] 1-1 VX-16 Helios";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Axios : Siffy_Helmet
    {
        displayName = "[1stMEU] 1-2 VX-16 Axios";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_ilithios : Siffy_Helmet
    {
        displayName = "[1stMEU] 1-3 VX-16 Ilithios";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Base : Siffy_Helmet
    {
        displayName = "[1stMEU] Pegasus Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Deck1 : Siffy_Helmet
    {
        displayName = "[1stMEU] 1-0 VX-16 Prometheus";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		};
    };
    class Peg_Deck2 : Siffy_Helmet
    {
        displayName = "[1stMEU] 2-0 VX-16 Prometheus";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		};
    };
    class peg_chaotic : Siffy_Helmet
    {
        displayName = "[1stMEU] 1-3 VX-16 Ilithios (Chaotic)";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Chaotic.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Chaotic.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class peg_1stFC : Siffy_Helmet
    {
        displayName = "[1stMEU] 1-6 Commmander (Torres)";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_1stFC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_1stFC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class peg_2ndFC : Siffy_Helmet
    {
        displayName = "[1stMEU] 2-6 Flight Commander (Iron)";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_2ndFC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_2ndFC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class peg_Five : Siffy_Helmet
    {
        displayName = "[1stMEU] 0-5 Squadron XO (Butch)";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_5.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_5.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    //dp and broken shit for pilots
    class Siffy_Helmet_dp : Siffy_Helmet
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP1";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_6.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_6.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Deck_dp : Siffy_Helmet
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Deck Officer Helmet DP";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		};
    };
    class peg_flight_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP2";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    }
    class Peg_Axios_section_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 11;
        displayName = "[1stMEU] Pegasus Helmet DP3";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Helios_section_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP4";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_ilithios_section_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP6";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
            hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Axios_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP7";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Helios_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP8";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_ilithios_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP10";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_chaotic_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Chaotic.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Chaotic.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_1stFC_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_1stFC.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_1stFC.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_2ndFC_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_2ndFC.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_2ndFC.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Five_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_5.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_5.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Base_dp : Siffy_Helmet_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    //broken stuff
    class Siffy_Helmet_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Custom_Siffy.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class peg_flight_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    }
    class Peg_Axios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_Helios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_ilithios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_Axios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_Helios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_ilithios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_Base_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
	class Peg_Deck_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[1stMEU] Pegasus Deck Officer Helmet DP";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
    };
// Pilot Helmet End
// Pilot Armor Start

class Pilot_Recruit: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (Recruit)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_ChestArmor",
			"A_Ghillie",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
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
			"AP_Rounds",
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
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_ChestArmor",
				"A_Ghillie",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
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
				"AP_Rounds",
				"AP_SG",
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
	
	class Pilot_WO1: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (WO1)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ChestArmor",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
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
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
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
				"A_ChestArmor",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
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
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_WO2: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (WO2)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
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
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
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
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
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
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
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
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_CWO3: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (CWO3)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
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
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
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
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
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
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
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
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_CWO4: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (CWO4)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
			"A_ThighArmorLeft",
			"A_ThighArmorRight",
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
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
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
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
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
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_CWO5: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (CWO5)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
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
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"AP_Frag",
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
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class Pilot_Officer: 1MEU_BASE_Pilot_Armor 
	{	
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		displayName = "[1stMEU] Pilot Body Armor (Officer)";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
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
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_MGThigh",
			"AP_Rounds",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
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
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"AP_Frag",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
// Pilot Armor End

// Recon Armor
	class M52DRecon: 1MEU_BASE_M52D_Armor
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D Recon";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black.paa"
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
	
// Recon End

// BDU Start

	class Praetorian_BDU : U_B_CombatUniform_mcam
	{
		author = "1stMEU Oneill";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = "4 + 8";
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
        CBRN_protectionLevel = "4 + 8";
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
        CBRN_protectionLevel = "4 + 8";
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
        CBRN_protectionLevel = "4 + 8";
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
        CBRN_protectionLevel = "4 + 8";
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
        CBRN_protectionLevel = "4 + 8";
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
        CBRN_protectionLevel = "4 + 8";
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
	
	class Centurion_BDU_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
		
	class Centurion_BDU_Urban_Evolved_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Urban/Evolved)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Urban_Evolved_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Desert_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Desert)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Desert_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Snow_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Snow)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Snow_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Woodland_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Woodland)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Woodland_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Pegasus_Pilot_Uniform_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pegasus Pilot Uniform Rolled Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
		ACE_GForceCoef = 0.1;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Pegasus_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
		
	class Centurion_BDU_Urban_Evolved_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Urban/Evolved)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Urban_Evolved_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Desert_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Desert)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Desert_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Snow_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Snow)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Snow_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Woodland_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Woodland)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Woodland_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Pegasus_Pilot_Uniform_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pegasus Pilot Uniform Short Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
		ACE_GForceCoef = 0.1;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Pegasus_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
// BDU End
// Air Assault Helmet start
	
	class MEU_CH252A_Pararescue_Dino: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Dino)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_Dino","V_FZ_Armor\Data\Helmets\V_CH252A_GLD_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};	
    class MEU_CH252A_Pararescue_Blue: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Blue)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Silver: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Silver)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_SLV_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Gold: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Gold)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_GLD_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Dino_dp : VES_CH252A
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Dino)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_Dino","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};	
    class MEU_CH252A_Pararescue_Blue_dp : VES_CH252A
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Blue)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Silver_dp : VES_CH252A
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Silver)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Gold_dp : VES_CH252A
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[1stMEU] CH252A Helmet (Pararescue Gold)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
// Praetorian 4th Helmet and Vests Start
    class Praetorian_Helmet_46: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-6 CH252D Helmet (Romeo)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Romeo.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_4M: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-M CH252D Helmet (Rave)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Rave.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_4R: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-R CH252D Helmet (Kenobi)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Kenobi.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_41: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_41.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_41_HM: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_HM_41.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_41TL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Blue_41.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_41SL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_41.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_41SL_Silent: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-1 CH252D Helmet (Silent)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_41_Silent.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_42: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_42.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
     class Praetorian_Helmet_42_HM: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_HM_42.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
        class Helmet_HOK: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Hokage";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\misc\hokHelm.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_42TL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Blue_42.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_42SL_Bjorn: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 CH252D Helmet (Bjorn)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_42_Bjorn.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_42SL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-2 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_42.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_43.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43_HM: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_HM_43.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43TL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Blue_43.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43SL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_43.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43SL_Mutt: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] 4-3 CH252D Helmet (Mutt)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_43_Mutt.paa","first_meu_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Prae46: 1MEU_BASE_M52D_Armor
	{
		author="Romeo";
		displayName="[1stMEU] M52D 4-6 (Romeo)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\Data\4thPlt\ODST_HR_Black_Purple3.paa"
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
		displayName = "[1stMEU] M52D 4-M (Rave)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\Data\4thPlt\ODST_HR_Black_Purple2.paa"
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
    class Prae4R: 1MEU_BASE_M52D_Armor
	{
		author = "1st MEU Oneill";
		displayName = "[1stMEU] M52D 4-R (Kenobi)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\4thPlt\ODST_HR_Black_Purple1.paa"
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
    class M52DGinger:1MEU_BASE_M52D_Armor
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] M52D 4-1A (Ginger)";
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
			"first_meu_aux\data\misc\Armor\V\vest_odst_co.paa",
			"first_meu_aux\data\misc\Armor\A\armor_odst_co.paa",
			"first_meu_aux\data\misc\Armor\L\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"first_meu_aux\data\3rdPlt\ODST_HR_Black_Blue.paa"
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
// Praetorian 4th Platoon Helmets Depolarised
    class Helmet_HOK_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\misc\hokHelm.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_46_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Romeo.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_4M_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Rave.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_4R_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Kenobi.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_41_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_41.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_41_HM_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_HM_41.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_41TL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Blue_41.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
     class Praetorian_Helmet_41SL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_41.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_41SL_Silent_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_41_Silent.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_42_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_42.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_42_HM_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_HM_42.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_42TL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Blue_42.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_42SL_Bjorn_dp : 1stMEU_Base_CH252D_Helmet_dp
	{
        scope = 1;
        scopeArsenal = 1;
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_42_Bjorn.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
	};
    class Praetorian_Helmet_42SL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_42.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_43_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_43.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_43_HM_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Black_HM_43.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_43TL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Blue_43.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
     class Praetorian_Helmet_43SL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_43.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
     class Praetorian_Helmet_43SL_Mutt_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\4thPlt\ODST_H3_Yellow_43_Mutt.paa","first_meu_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    // Cent Comp Leadership Start
    class Marine_Helmet_CA : 1MEU_Base_CH252_Helmet 
    { 
        scope = 2; 
        scopeCurator = 2; 
        scopeArsenal = 2; 
		author = "1st MEU Mark"; 
		displayName = "[1stMEU] C-A CH252 Heavy Helmet (Steeler)"; 
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
    // Cent Comp Leadership End
    // Cent Comp Leadership DP Start
    class Marine_Helmet_CA_dp : 1MEU_Base_CH252_Helmet 
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
    // Cent Comp Leadership DP End
    // 1stPlt Helm Start
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
    //1stPlt Helm End 
    // 1stplt dp 
     
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
    // 1st Platoon DP END
     // 2nd Platoon Start
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
		displayName = "[1stMEU] 1-2 CH252 Light Helmet (Marine)"; 
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
    //2ndPlt Helm End 
    // 2ndplt dp 
     
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
    // Friden Vipers
	class MEU_Viper_Helmet_Friden: H_HelmetO_ViperSP_ghex_F
	{
		author = "Romeo";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
		displayName = "[RIE] Special Purpose Helmet (Friden)";
		hiddenSelectionsTextures[] = {"\first_meu_aux\Data\opfor\Viper_Helmet_Friden_co.paa"};
	};
    // Weapons Start
    class Throw : Grenadelauncher
	{
		muzzles[] += 
		{
			"MEU_C7_Muzzle",
			"MEU_C12_Muzzle",
			"MEU_9bang_Muzzle",
			"MEU_C168_Muzzle",
			"MEU_Fury_Muzzle",
			"MEU_Bubble_Muzzle",
			"MEU_M3_CS_Muzzle"
		};
		class MEU_C7_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_c7_remote_throwable_Mag"};
        };
        class MEU_C12_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_c12_remote_throwable_Mag"};
		};
        class MEU_9bang_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_9bang_Mag"};
		};
        class MEU_C168_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_C168_Mag"};
		};
		class MEU_Fury_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_Fury_Mag"};
		};
		class MEU_M3_CS_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_M3_CS_Mag"};
			class EventHandlers
			{
				fired = "_this execVM 'first_meu_aux\Functions\CS_Grenade.sqf'";
			};
		};
        class MEU_Bubble_Muzzle : ThrowMuzzle
        {
            reloadtime = 0;
            magazines[] = {"MEU_Bubble_Mag"}; 
			class EventHandlers
			{
				fired = "_this execVM 'first_meu_aux\Functions\Bubbleshield_throw.sqf'";
			};
        };
    };
	class OPTRE_M7: OPTRE_SubMachineGun_Base
	{
		magazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_5x23mm_Mag_FMJ",
			"OPTRE_60Rnd_5x23mm_Mag_FMJT",
			"OPTRE_60Rnd_5x23mm_Mag_HV",
			"OPTRE_60Rnd_5x23mm_Mag_HVT",
			"OPTRE_60Rnd_5x23mm_Mag_JHP",
			"OPTRE_60Rnd_5x23mm_Mag_JHPT",
			"OPTRE_60Rnd_5x23mm_Mag_SS",
			"OPTRE_60Rnd_5x23mm_Mag_SST",
			"OPTRE_48Rnd_5x23mm_Mag",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer_Yellow",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJT",
			"OPTRE_48Rnd_5x23mm_Mag_HV",
			"OPTRE_48Rnd_5x23mm_Mag_HVT",
			"OPTRE_48Rnd_5x23mm_Mag_JHP",
			"OPTRE_48Rnd_5x23mm_Mag_JHPT",
			"OPTRE_48Rnd_5x23mm_Mag_SS",
			"OPTRE_48Rnd_5x23mm_Mag_SST",
			"OPTRE_60Rnd_5x23mm_Mag_NARQ",
			"OPTRE_60Rnd_5x23mm_Mag_NARQT"
		};
	};
	
    class MEU_M7v2: OPTRE_M7
    {
        baseweapon = "MEU_M7v2";
        dlc = "SO";
        author = "1st MEU Mark";
		scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "[1stMEU] M7X-T2";
        magazineReloadTime = 2.0;
        reloadAction = "";
        class LinkedItems
		{
            class WeaponSlotsInfo
            {
                mass = 29;
                class MuzzleSlot: MuzzleSlot
                {
                    compatibleitems[] = {"muzzle_snds_b","muzzle_snds_h_mg_blk_f","ace_muzzle_mzls_b","optre_m7_silencer","optre_m6_silencer"};
                };
                class CowsSlot: CowsSlot
                {
                    compatibleitems[] ={"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRS99_Scope_v2","OPTRE_SRS99C_Scope_v2","OPTRE_M73_Smartlink_v2","OPTRE_M6S_Scope","OPTRE_M6GX_Scope","OPTRE_M6D_Smartlink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M7_Sight_v2","OPTRE_M392_Scope_v2","OPTRE_BMR_Scope_v2","OPTRE_M393_Scope_v2","OPTRE_M393_ACOG_v2","OPTRE_M393_EOTECH_v2","OPTRE_BR55HB_Scope_v2"};
                };
                class PointerSlot: PointerSlot
                {
				    compatibleitems[] = {"acc_pointer_ir","ace_acc_pointer_green","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","optre_m7_laser","optre_m7_flashlight","OPTRE_BMR_Laser"};
                };
            };
		};
    };
	
	class OPTRE_M301X: UGL_F
	{
		magazines[] = 
		{
			"UGL_8Gauge_Pellet",
			"UGL_8Gauge_Slug",
			"UGL_8Gauge_Beanbag",
			"UGL_FlareBlue_F",
			"3Rnd_UGL_8Gauge_Pellet",
			"3Rnd_UGL_8Gauge_Slug",
			"3Rnd_UGL_8Gauge_Beanbag",
			"3Rnd_UGL_FlareBlue_F",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_HE_MEU_shell",
			"1Rnd_HEDP_MEU_shell",
			"3Rnd_HE_MEU_shell"
		};
	};
	
	class OPTRE_M319s: OPTRE_Handgun_Base
	{
		magazines[] = 
		{
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"M319_Smoke",
			"M319_Smoke_Orange",
			"M319_Smoke_Green",
			"M319_Smoke_Red"
		};
	};
		
	class OPTRE_M247: OPTRE_M73
	{
		displayName = "M247X General Purpose Machine Gun";
		magazines[] = 
			{
				"OPTRE_100Rnd_762x51_Box",
				"OPTRE_100Rnd_762x51_Box_AP",
				"OPTRE_100Rnd_762x51_Box_JHP",
				"OPTRE_100Rnd_762x51_Box_Tracer",
				"OPTRE_100Rnd_762x51_Box_APT",
				"OPTRE_100Rnd_762x51_Box_JHPT",
				"OPTRE_100Rnd_762x51_Box_Tracer_Yellow",
				"OPTRE_400Rnd_762x51_Box",
				"OPTRE_400Rnd_762x51_Box_AP",
				"OPTRE_400Rnd_762x51_Box_JHP",
				"OPTRE_400Rnd_762x51_Box_Tracer",
				"OPTRE_400Rnd_762x51_Box_APT",
				"OPTRE_400Rnd_762x51_Box_JHPT",
			};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRS99_Scope_v2","OPTRE_SRS99C_Scope_v2","OPTRE_M73_Smartlink_v2","OPTRE_M6S_Scope","OPTRE_M6GX_Scope","OPTRE_M6D_Smartlink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M7_Sight_v2","OPTRE_M392_Scope_v2","OPTRE_BMR_Scope_v2","OPTRE_M393_Scope_v2","OPTRE_M393_ACOG_v2","OPTRE_M393_EOTECH_v2","OPTRE_BR55HB_Scope_v2"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"acc_pointer_ir","ace_acc_pointer_green","acc_flashlight","OPTRE_BMR_Laser"};
			};
		};
	};
    
	class M250HMG: OPTRE_M247
	{
		dlc = "1STMEUAUX";
		author = "[1stMEU] Oneill";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\MG\data\anim\OPTRE_M247_handanim.rtm","Spartan_ManSkeleton","\OPTRE_Weapons\MG\data\anim\M247_Spartan.rtm"};
		model = "\OPTRE_Weapons\MG\M247.p3d";
		displayName = "[1stMEU] M250 Heavy Machine Gun";
		descriptionShort = "UNSC Heavy Machine Gun (man portable)";
		magazines[] = {"OPTRE_100Rnd_127x99_M250HMG", "OPTRE_100Rnd_127x99_HE_M250HMG", "OPTRE_100Rnd_127x99_Tracer_M250HMG", "OPTRE_100Rnd_127x99_Tracer_HE_M250HMG"};
		recoil = "recoil_trg21";
		baseWeapon = "M250HMG";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 150;
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRS99_Scope_v2","OPTRE_SRS99C_Scope_v2","OPTRE_M73_Smartlink_v2","OPTRE_M6S_Scope","OPTRE_M6GX_Scope","OPTRE_M6D_Smartlink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M7_Sight_v2","OPTRE_M392_Scope_v2","OPTRE_BMR_Scope_v2","OPTRE_M393_Scope_v2","OPTRE_M393_ACOG_v2","OPTRE_M393_EOTECH_v2","OPTRE_BR55HB_Scope_v2"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"OPTRE_SRS99D_Suppressor","optre_m7_silencer"};
			};
		};
        modes[] = {"FullAuto","Single"};
		class Single: Single
		{
            sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
            class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",1.5848932,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",1.5848932,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",1.5848932,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",1.4125376,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0030;
		};
		class FullAuto: FullAuto
		{
            sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",1.5848932,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",1.5848932,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",1.5848932,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",1.4125376,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0030;
		};
	};
	
	class OPTRE_BR55HB: OPTRE_Rifle_Base
	{
		modes[] = 
		{
			"Single",
			"Burst"
		};
	};
	
	class OPTRE_BR45_Scope: OPTRE_BR55HB_Scope
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			opticType = 1;
			optics = 1;
			modelOptics = "\OPTRE_Weapons\BR\BR_Scope_V2.p3d";
			class OpticsModes
			{
				class BR55HB_BUIS
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.275;
					opticsZoomMax = 0.99;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticView2";
					visionMode[] = {"Normal","NVG"};
					discreteDistance[] = {50,100,150,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					cameraDir = "";
				};
				class BR55HB_Scope: BR55HB_BUIS
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.0525;
					opticsZoomInit = 0.125;
					discretefov[] = {0.125,0.0525};
					discreteinitIndex = 0;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\OPTRE_Weapons\BR\BR45_Optic_2x.p3d","\OPTRE_Weapons\BR\BR45_Optic_4x.p3d"};
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {0,1};
				};
			};
		};
	};
	
	class OPTRE_M392_DMR: OPTRE_LongRifle_Base
	{
		magazines[]=
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_SST",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST",
			"OPTRE_15Rnd_DMR_762x51_Mag_AP",
			"OPTRE_15Rnd_DMR_762x51_Mag_APT",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHP",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
			"OPTRE_15Rnd_DMR_762x51_Mag_SS",
			"OPTRE_15Rnd_DMR_762x51_Mag_SST",
			"OPTRE_15Rnd_DMR_762x51_Mag_FS",
			"OPTRE_15Rnd_DMR_762x51_Mag_FST"
		};
		magazineWell[] = {};
		
		modes[] = 
		{
			"Single"
		};
	};
	
	class OPTRE_M393_DMR: OPTRE_M392_DMR
	{
		displayName = "M393X DMR";
	};
	
	class OPTRE_M393S_DMR: OPTRE_M393_DMR
	{
		displayName	= "M393X/S DMR";
	};
	
	class OPTRE_M295_BMR: OPTRE_M393_DMR
    {
        magazines[] = 
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST",
			"OPTRE_15Rnd_DMR_762x51_Mag_AP",
			"OPTRE_15Rnd_DMR_762x51_Mag_APT",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHP",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
			"OPTRE_15Rnd_DMR_762x51_Mag_SS",
			"OPTRE_15Rnd_DMR_762x51_Mag_SST",
			"OPTRE_15Rnd_DMR_762x51_Mag_FS",
			"OPTRE_15Rnd_DMR_762x51_Mag_FST"
		};
		magazineWell[] = {};
		
		modes[] = 
		{
			"Single",
			"FullAuto"
		};
    };
    
    class OPTRE_CR77: OPTRE_M393_DMR
    {
        modes[] = 
		{
			"Single",
			"FullAuto"
		};
    };
	
	class LM_OPCAN_AR0M37: arifle_MSBS65_black_F
    {
        picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_black_F_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_AR0M37_GL: arifle_MSBS65_GL_black_F
    {
        picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_GL_black_F_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_AR0M37_SHT: arifle_MSBS65_UBS_black_F
    {
        picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_UBS_black_F_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_DMR0M37: arifle_MSBS65_Mark_black_F
    {
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_Mark_black_F_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    
    class LM_OPCAN_ARMX: arifle_MX_Black_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_ARMX_GL: arifle_MX_GL_Black_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_CTAR: arifle_CTAR_blk_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_CTAR_GL: arifle_CTAR_GL_blk_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_CTAR_SAW: arifle_CTARS_blk_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_M18AR: arifle_Mk20_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
	class LM_OPCAN_M18AR_C: arifle_Mk20C_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
	class LM_OPCAN_M18AR_GL: arifle_Mk20_GL_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_M90A: OPTRE_M45
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
        };
    };
    class OPTRE_M12_SOC: OPTRE_M7
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor",
                    "OPTRE_M12_Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2",
                    "OPTRE_M12_Optic"
                    
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser",
                    "optre_m12_laser"
                };
            };
        };
    };
    class OPTRE_BR45: OPTRE_BR55
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2",
                    "optre_br45_scope"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser",
                    "optre_m12_laser"
                };
            };
        };
    };
    
    class OPTRE_SRS99D : OPTRE_LongRifle_Base
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2",
                    "optre_srs99c_scope",
                    "optre_srs99c_scope_v2",
                    "optre_srs99_scope",
                    "optre_srs99_scope_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_MA37: OPTRE_MA5C
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_MA37B: OPTRE_MA37
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_MA37GL: OPTRE_MA5CGL
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_MA37BGL: OPTRE_MA37GL
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	class OPAEX_M41_Launcher: OPTRE_UnguidedLauncher_Base
	{
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		scope = 2;
		scopeArsenal = 2;
		displayname = "M41 SSR MAV/AW SPNKr";
		descriptionshort = "Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon";
		magazines[] =
		{
			"M41_Twin_HEAT_WireGuided",
			"M41_Twin_HEAT_HeatSeeking",
			"M41_Twin_HEAT",
			"M41_Twin_HEAP"
		};
		magazineWell[] = {};
	};	
	
    class OPTRE_M319 : OPTRE_Rifle_Base
    {
        magazines[] = {"UGL_8Gauge_Pellet","UGL_8Gauge_Slug","UGL_8Gauge_Beanbag","UGL_FlareBlue_F","3Rnd_UGL_8Gauge_Pellet","3Rnd_UGL_8Gauge_Slug","3Rnd_UGL_8Gauge_Beanbag","3Rnd_UGL_FlareBlue_F","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","1Rnd_HE_MEU_shell","1Rnd_HEDP_MEU_shell","3Rnd_HE_MEU_shell"};
    };
	
	class M247_APC: LMG_coax
	{
		displayName = "M247 7.62mm GPMG";
		magazines[] = 
		{
			"OPTRE_100Rnd_762x51_Box",
			"OPTRE_100Rnd_762x51_Box_AP",
			"OPTRE_100Rnd_762x51_Box_JHP",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_100Rnd_762x51_Box_APT",
			"OPTRE_100Rnd_762x51_Box_JHPT",
			"OPTRE_100Rnd_762x51_Box_Tracer_Yellow",
			"OPTRE_400Rnd_762x51_Box",
			"OPTRE_400Rnd_762x51_Box_AP",
			"OPTRE_400Rnd_762x51_Box_JHP",
			"OPTRE_400Rnd_762x51_Box_Tracer",
			"OPTRE_400Rnd_762x51_Box_APT",
			"OPTRE_400Rnd_762x51_Box_JHPT",
		};
		class manual: MGun
		{
			displayName = "M247 7.62mm GPMG";
			reloadTime = 0.07;
		};
	};
	
	class M250_APC: HMG_127_APC
	{
		displayName = "M250 12.7mm HMG";
		magazines[] = 
		{
			"OPTRE_400Rnd_127x99_M250HMG",
			"OPTRE_400Rnd_127x99_HE_M250HMG"
		};
		class manual: MGun
		{
			displayName = "M250 12.7mm HMG";
			reloadTime = 0.09;
		};
	};
	
	class MG460_APC: GMG_40mm
	{
		displayName = "MG460 40mm AGL";
		magazines[] = 
		{
			"40Rnd_HEDP_Belt"
		};
		class manual: GMG_F
		{
			displayName = "MG460 40mm AGL";
			reloadTime = 0.35;
		};
	};
	
	class M1024_30mm: autocannon_40mm_CTWS
	{
		displayName = "M1024 ASW/AC 30mm ALA Cannon";
		muzzles[] = {"HE","AP"};
		class HE: autocannon_Base_F
		{
			displayName = "M1024 ASW/AC 30mm ALA Cannon";
			reloadTime = 0.25;
			magazines[] = 
			{
				"80Rnd_30mm_HEAT",
			};
		};
		class AP: autocannon_Base_F
		{
			displayName = "M1024 ASW/AC 30mm ALA Cannon";
			reloadTime = 0.25;
			magazines[] = 
			{
				"60Rnd_30mm_APFSDS",
			};
		};
	};
	
	class M512_90mm: cannon_120mm
	{
		magazinereloadTime = 4.0;
		displayName = "M512 Smoothbore High-Velocity Cannon";
		descriptionShort = "90mm";
		magazines[] = 
		{
			"60Rnd_90mm_APBC",
			"30Rnd_90mm_SAPHE",
			"30Rnd_90mm_HEAT"
		};
		class gunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class ejectshellcase
			{
				directionName = "nabojniceend";
				effectName = "OPTRE_90mmShellcase";
				positionName = "nabojnicestart";
			};
		};
	};
	
	class M910_Point_Defense_Cannon: autocannon_35mm
	{
		displayName = "M910 ASW/AC 50mm";
		holdsterAnimValue = 0;
		ballisticsComputer = 4;
		canLock = 1;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M231";
		nameSound = "cannon";
		shotFromTurret = 0;
		muzzlePos = "Usti hlavne1R";
		muzzleEnd = "konec hlavne1R";
		selectionFireAnim = "Usti hlavne1R";
		magazines[] = 
		{
			"20Rnd_50mm_HEAT"
		};
		magazinereloadTime = 6.0;
		modes[] = {"Point_Defense", "close_range", "short_range", "medium_range", "long_range"}; 
		class Point_Defense: CannonCore
		{
			displayName = "M910 ASW/AC 50mm";
			textureType = "fullAuto";
			autoFire = 1;
			dispersion = 0.0015;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			recoil = "Empty";
			reloadTime = 0.25;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 800;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.5;
			artilleryDispersion = 2.5;
			artilleryCharge = 0.18;
		};
		class close_range: Point_Defense
		{
			recoil = "Empty";
			minRange = 2000;
			minRangeProbab = 0.4;
			midRange = 3000;
			midRangeProbab = 0.6;
			maxRange = 5200;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.25;
		};
		class short_range: Point_Defense
		{
			recoil = "Empty";
			minRange = 5200;
			minRangeProbab = 0.3;
			midRange = 8000;
			midRangeProbab = 0.4;
			maxRange = 13300;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.5;
		};
		class medium_range: Point_Defense
		{
			recoil = "Empty";
			minRange = 14600;
			minRangeProbab = 0.2;
			midRange = 25000;
			midRangeProbab = 0.3;
			maxRange = 37000;
			maxRangeProbab = 0.2;
			artilleryCharge = 0.75;
		};
		class long_range: Point_Defense
		{
			recoil = "Empty";
			minRange = 25000;
			minRangeProbab = 0.1;
			midRange = 40000;
			midRangeProbab = 0.2;
			maxRange = 58000;
			maxRangeProbab = 0.1;
			artilleryCharge = 1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne 1";
				directionName = "konec hlavne 1";
				effectName = "AutoCannonFired";
			};
			class effect2: effect1
			{
				positionName = "usti hlavne 2";
				directionName = "konec hlavne 2";
			};
		};
	};
	
    class MEU_Railgun: OPTRE_FC_Railgun
	{
		author = "Romeo";
		scope = 2;
		scopeArsenal = 2;
        scopeCurator = 2;
		baseWeapon = "MEU_Railgun";
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_FC_Weapons\Railgun\data\anim\Railgun_HandAnim.rtm","Spartan_ManSkeleton","\OPTRE_FC_Weapons\Railgun\data\anim\Railgun_HandAnim_Spartan.rtm"};
		model = "\OPTRE_FC_Weapons\Railgun\Railgun.p3d";
		displayName = "[1stMEU] ARC-920";
		descriptionShort = "Compact-Channel Linear Accelerator Weapon";
		magazines[] = {"MEU_Railgun_Slug"};
		magazineWell[] = {"MEU_Railgun_Slug"};
		modelOptics = "-";
	};
};
											 