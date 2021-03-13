#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgGroups.hpp"
#include "CfgMagazines.hpp"
#include "Cfgtreatment.hpp"
#include "Cfgtreatmentactions.hpp"
#include "CfgFunctions.hpp"
#include "Cfgloadingscreens.hpp"
#include "CfgGlasses.hpp"
class CAWorld;
class cfgPatches
{
    class first_meu_aux
    {
		units[] = 
		{
			"OPTRE_Ammo_SupplyPod_Launcher",
			"OPTRE_Ammo_SupplyPod_Medical",
			"OPTRE_Ammo_SupplyPod_Mortars",
			"OPTRE_Ammo_SupplyPod_LMG",
            "1stMEU_CTF_Flag_VulcanHQ",
            "1stMEU_CTF_Flag_50",
            "1stMEU_CTF_Flag_5M",
            "1stMEU_CTF_Flag_53",
            "1stMEU_CTF_Flag_3HQ",
            "1stMEU_CTF_Flag_31",
            "1stMEU_CTF_Flag_32",
            "1stMEU_CTF_Flag_33",
            "1stMEU_CTF_Flag_4HQ",
            "1stMEU_CTF_Flag_41",
            "1stMEU_CTF_Flag_42",
            "1stMEU_CTF_Flag_43",
            "1stMEU_CTF_Flag_1stMEU",
            "1stMEU_CTF_Flag_1HQ",
            "1stMEU_CTF_Flag_11",
            "1stMEU_CTF_Flag_12",
            "1stMEU_CTF_Flag_13",
            "1stMEU_CTF_Flag_2HQ",
            "1stMEU_CTF_Flag_21",
            "1stMEU_CTF_Flag_22",
            "1stMEU_CTF_Flag_23",
            "1stMEU_CTF_Flag_51",
            "1stMEU_CTF_Flag_52",
            "1stMEU_M313_Elephant",
            "Vulkan_Repair_APC",
            "Vulkan_Repair_APC_P",
            "MEU_blackfish",
            "MEU_wyvern",
            "OPTRE_HEV",
            "MEU_IFV",
            "MEU_IFV_A",
            "MEU_M12_AP",
			"MEU_Leopard_APC",
			"MEU_Leopard_Medical_APC",
            "MEU_Antelope_WDL",
            "MEU_Antelope_ARC",
            "MEU_Antelope_DES",
            "MEU_Antelope_EVOURB",
            "MEU_Ansaldo_Friden",
            "MEU_Champion_Friden",
            "MEU_Warrior_WDL",
            "MEU_Raptor_Friden_IFV",
            "MEU_Raptor_Friden_APC",
            "MEU_Tusk_Friden",
            "MEU_Gungoose",
            "MEU_GGNR_AA",
            "MEU_Witherwing_Friden",
            "MEU_Wasp_Friden",
            "MEU_Felix_Rotary_Friden",
            "MEU_Arthur_Rotary_Friden",
            "MEU_Viper_Helmet_Friden",
            "MEU_Hyena_Friden",
            "MEU_Arcane_IFV_Friden",
            "MEU_Arcane_APC_Friden",
            "MEU_Arcane_AA_Friden",
            "MEU_Nyx_AT_Koslovic",
            "MEU_Nyx_AA_Koslovic",
            "MEU_Nyx_Cannon_Koslovic",
            "MEU_Nyx_Radar_Koslovic",
			"MEU_SCORPION",
			"M910_Point_Defense_Cannon_Active",
			"M910_Point_Defense_Cannon_Active_Inverted",
           "MEU_M412_IFV_UNSC",
           "MEU_M413_MGS_UNSC",
            "OPTRE_AV22_Sparrowhawk_Base",
            "VES_AV22_Sparrowhawk_Base_F",
            "OPTRE_UNSC_falcon",
            "OPTRE_Pelican_F",
            "OPTRE_Hornet_base",
            "VES_UH144_A",
            "VES_AV14_AIM",
            "VES_AV14_AGM",
            "VES_AV14_Rockets",
            "VES_AV14",
            "VES_UH144",
            "VES_D77HTCI_A",
            "VES_D77HTCI",
            "OPTRE_holotable_sm_in",
            "OPTRE_holotable_sm_at",
            "OPTRE_holotable_sm",
            "OPTRE_holotable_sm_wd",
            "OPTRE_holotable_sm_dt",
            "OPTRE_Weapon_Crate_ODST_HW",
            "OPTRE_Weapon_Crate_ODST_LR",
            "OPTRE_Weapon_Crate_ODST_S",
            "OPTRE_Weapon_Crate_Army_HW",
            "OPTRE_Weapon_Crate_Army_LR",
            "OPTRE_Weapon_Crate_Army_S",
            "OPTRE_Weapon_Crate_Marines_HW",
            "OPTRE_Weapon_Crate_Marines_LR",
            "OPTRE_Weapon_Crate_Marines_S",
            "OPTRE_serverrack",
            "OPTRE_tree_Blue_1",
            "OPTRE_tree_Blue_2",
            "OPTRE_tree_Red_1",
            "OPTRE_tree_Red_2",
            "OPTRE_tree_Purp_1",
            "OPTRE_tree_Purp_2",
            "OPTRE_AI_Ball",
            "OPTRE_Civilian_DataPad",
            "OPTRE_Civilian_DataPad_BlurText",
            "OPTRE_RS_ConsoleDoor",
            "OPTRE_MRE_01",
            "OPTRE_MRE_02",
            "OPTRE_holo_elephant",
            "OPTRE_holo_falcon",
            "OPTRE_holo_warthog",
            "OPTRE_holo_bison",
            "OPTRE_holo_warthog",
            "OPTRE_holo_hornet",
            "OPTRE_holo_pelican",
            "OPTRE_holo_longsword",
            "OPTRE_holo_corvette",
            "OPTRE_holo_eridanus",
            "OPTRE_holo_data_chip",
            "Land_OPTRE_Light_Column_snow_orange",
            "Land_OPTRE_Light_Column_orange",
            "Land_OPTRE_landingpad",
            "Land_OPTRE_landingpad_snow",
            "Land_OPTRE_ConstructionBarrier1",
            "Land_OPTRE_ConstructionBarrier2",
            "Land_ModularOutPostBuildingQuarters",
            "Land_OPTRE_fusion_coil",
            "MEU_AWACS",
            "ChemicalBarrel_NA",
            "ChemicalBarrel_AS",
            "ChemicalBarrel_CS",
            "SuperWall_01",
            "shiva_uncovered",
            "logey_Box",
			"OPTRE_Ins_URF_Rifleman_SMG",
            "MEU_KajMoney",
		};
        magazines[] = 
		{
            "OPTRE_6Rnd_8Gauge_Pellet",
            "OPTRE_12Rnd_8Gauge_Pellet",
            "OPTRE_6Rnd_8Gauge_Beanbag",
            "OPTRE_12Rnd_8Gauge_Beanbag",
            "MEU_Railgun_Slug"
        };
		ammo[] = 
		{
            "OPTRE_B_5x23_Caseless_JHP",
            "OPTRE_B_762x51_JHP",
            "OPTRE_B_95x40_JHP",
            "OPTRE_B_8Gauge_Beanbags",
            "MEU_B_8Gauge_Pellet",
            "MEU_B_8Gauge_Pellet_Submunition",
            "OPTRE_FC_BubbleShield_Ammo",
            "MEU_16x65mm_Slug"
        };
		weapons[] = 
		{
            "OPTRE_M392_DMR",
            "OPTRE_BR55HB",
            "OPTRE_M295_BMR",
            "OPTRE_M393_DMR",
			"OPTRE_M247";
            "OPTRE_CR77",
			"OPTRE_M7",
			"OPTRE_BR45",
			"OPTRE_BR45_Scope",
			"OPTRE_M319s",
            "throw",
            "OPTRE_M319",
			"OPAEX_M41_Launcher",
			"LM_OPCAN_AR0M37";
			"LM_OPCAN_AR0M37_GL";
			"LM_OPCAN_AR0M37_SHT";
			"LM_OPCAN_DMR0M37";
			"LM_OPCAN_ARMX",
			"LM_OPCAN_ARMX_GL",
			"LM_OPCAN_CTAR",
			"LM_OPCAN_CTAR_GL",
			"LM_OPCAN_CTAR_SAW",
			"LM_OPCAN_M18AR",
			"LM_OPCAN_M18AR_C",
			"LM_OPCAN_M18AR_GL",
            "optre_hgun_SAS10_F",
            "OPTRE_FC_Railgun"
        };
        requiredVersion = 0.1;
		requiredAddons[] = 
        {
            "ace_goggles",
			"OPTRE_UNSC_Units",
			"OPTRE_Ins_Units",
			"OPTRE_Weapons",
            "OPTRE_ACE_Compat",
            "OPTRE_FC_ACE_Compat",
            "V_FZ_Armor",
			"OPTRE_Core",
			"OPTRE_Misc",
			"OPTRE_Misc_Crates",
            "OPTRE_Vehicles",
			"OPTRE_Modules",
            "V_FZ_Core",
            "LM_OPCAN_UNSC",
            "V_SO_Core",
            "V_SO_Magazines",
            "V_SO_Weapons",
            "OPTRE_FC_Units",
            "ace_medical_engine",
            "ace_medical_treatment",
            "ace_common",
            "task_force_radio",
            "A3_Map_Altis",
            "A3_Map_Stratis",
            "A3_Map_Stratis_Scenes",
            "A3_Map_Altis_Scenes",
            "A3_Characters_F",
            "A3_Weapons_F",
            "A3_Data_F",
            "A3_Anims_F",
            "A3_UI_F",
            "NSM_patch_main",
            "NSM_patch_particle_effects",
            "V_FZ_Vehicles",
            "task_force_radio",
        };
    };
};
class CfgFactionClasses
{
	class MEU_UNSC
	{
		displayName = "1st MEU BLUFOR";
		priority = 1;
		side = 1;
		primaryLanguage = "EN";
		backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
	};
    class MEU_Insurrectionist
	{
		displayName = "1st MEU OPFOR";
		priority = 1;
		side = 0;
		primaryLanguage = "EN";
		backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
	};
};
class CfgEditorCategories
{
    class MEU_cat_A
    {   
        displayName = "1st MEU Assets";
        scopeCurator = 2;
        scopeeditor = 2;
    };
	class MEU_Objects
    {   
        displayName = "1st MEU Objects";
        scopeCurator = 2;
        scopeeditor = 2;
    };
};
class CfgEditorSubcategories
{
    class MEU_sub_ifv
    {
		displayName = "Mechanized";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_arm
    {
		displayName = "Tanks";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_WIP
    {
		displayName = "[WIP]";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_car
    {
		displayName = "Motorized";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_trt
    {
		displayName = "Turrets";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_rot
    {
		displayName = "Air Vehicles";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_fix
    {
		displayName = "Planes";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class Objects
    {
		displayName = "Hidden Objects";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class Flags
    {
		displayName = "Flags";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_Flood
    {
		displayName = "Flood";
        scopeCurator = 2;
        scopeeditor = 2;
	};
};
class CfgWorlds
{
 	class Altis : CAWorld
	{
		description = "Altis";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Anizay : CAWorld
	{
		description = "Anizay";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Bariga : CAWorld
	{
		description = "Bariga";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Blood_OPTRE : CAWorld
	{
		description = "Blood Gulch";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class bsoc_brasil : CAWorld
	{
		description = "BSOC Brasil";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Bootcamp_ACR : CAWorld
	{
		description = "Bukovina";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Woodland_ACR : CAWorld
	{
		description = "Bystrica";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class chernarus : CAWorld
	{
		description = "Chernarus (Autumn)";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class chernarus_summer : CAWorld
	{
		description = "Chernarus (Summer)";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Chernarus_Winter : CAWorld
	{
		description = "Chernarus (Winter)";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class clafghan : CAWorld
	{
		description = "CLA Clafghan";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Desert_E : CAWorld
	{
		description = "Desert";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class desert_island : CAWorld
	{
		description = "Desert Island";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class dingor : CAWorld
	{
		description = "Dingor v3.82";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class eladeen_terrain : CAWorld
	{
		description = "Eladeen";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class eden : CAWorld
	{
		description = "Everon";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class pja310 : CAWorld
	{
		description = "G.O.S Al Rayak";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class pja308 : CAWorld
	{
		description = "G.O.S Gunkizli";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class pja314 : CAWorld
	{
		description = "G.O.S Leskovets";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class pja319 : CAWorld
	{
		description = "G.O.S N'Djenahoud";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class pja305 : CAWorld
	{
		description = "G.O.S N'Ziwasogo";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class pja312 : CAWorld
	{
		description = "G.O.S Song Bin Tanh APEX";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class OPTRE_Gridlock : CAWorld
	{
		description = "Gridlock";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class hellanmaa : CAWorld
	{
		description = "Hellanmaa";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class hellanmaaw : CAWorld
	{
		description = "Hellanmaa winter";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class OPTRE_iberius : CAWorld
	{
		description = "Iberius";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class tem_ihantalaw : CAWorld
	{
		description = "Ihantala Winter";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class abramia : CAWorld
	{
		description = "Isla Abaramia v3.9";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class isladuala3 : CAWorld
	{
		description = "Isla Duala v3.9.5";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class OPTRE_Kholo : CAWorld
	{
		description = "Kholo";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class cain : CAWorld
	{
		description = "Kolgujev";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class lingor3 : CAWorld
	{
		description = "Lingor v3.9.5";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Enoch : CAWorld
	{
		description = "Livonia";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class OPTRE_Madrigal : CAWorld
	{
		description = "Madrigal";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class abel : CAWorld
	{
		description = "Malden";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Malden : CAWorld
	{
		description = "Malden 2035";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Mountain_Wilderness : CAWorld
	{
		description = "Mountain Wilderness";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Nam2 : CAWorld
	{
		description = "Nam2";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class noe : CAWorld
	{
		description = "Nogova";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Pandora : CAWorld
	{
		description = "Pandora";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Winthera3 : CAWorld
	{
		description = "Panthera (Winter)v3.9";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class panthera3 : CAWorld
	{
		description = "Panthera v3.9";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class porto : CAWorld
	{
		description = "Porto";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class ProvingGrounds_PMC : CAWorld
	{
		description = "Proving Grounds";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class pulau : CAWorld
	{
		description = "Pulau";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class intro : CAWorld
	{
		description = "Rahmadi";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class ruha : CAWorld
	{
		description = "Ruha";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class sara : CAWorld
	{
		description = "Sahrani";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Kapaulio : CAWorld
	{
		description = "Saint Kapaulio";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class OPTRE_Sandstorm : CAWorld
	{
		description = "Sandstorm";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Shapur_BAF : CAWorld
	{
		description = "Shapur";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class saralite : CAWorld
	{
		description = "Southern Sahrani";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Stratis : CAWorld
	{
		description = "Stratis";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class tem_summa : CAWorld
	{
		description = "Summa";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class tem_summawcup : CAWorld
	{
		description = "Summa winter";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Takistan : CAWorld
	{
		description = "Takistan";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Mountains_ACR : CAWorld
	{
		description = "Takistan Mountains";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Tanoa : CAWorld
	{
		description = "Tanoa";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class Todt : CAWorld
	{
		description = "Todt";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class jns_tria : CAWorld
	{
		description = "Tria";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class United_Sahrani : CAWorld
	{
		description = "United Sahrani";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class utes : CAWorld
	{
		description = "Utes";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class VR : CAWorld
	{
		description = "Virtual Reality";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
 	class zargabad : CAWorld
	{
		description = "Zargabad";
		pictureMap = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you buy it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!";
		};
	};
};