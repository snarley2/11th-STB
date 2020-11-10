#define _ARMA_
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
class CAWorld;
class cfgPatches
{
    class first_meu_aux
    {
		units[] = {
			"OPTRE_Ammo_SupplyPod_Launcher",
			"OPTRE_Ammo_SupplyPod_Medical",
			"OPTRE_Ammo_SupplyPod_Mortars",
			"OPTRE_Ammo_SupplyPod_LMG",
            "1stMEU_M313_Elephant",
            "Vulkan_Repair_APC",
            "Vulkan_Repair_APC_P",
            "OPTRE_HEV",
            "MEU_IFV",
            "MEU_IFV_A",
            "MEU_M12_AP",
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
			};
        magazines[] = {
            "OPTRE_6Rnd_8Gauge_Pellet",
            "OPTRE_12Rnd_8Gauge_Pellet",
            "OPTRE_6Rnd_8Gauge_Beanbag",
            "OPTRE_12Rnd_8Gauge_Beanbag",
            };
		ammo[] = {
            "OPTRE_B_5x23_Caseless_JHP",
            "OPTRE_B_762x51_JHP",
            "OPTRE_B_95x40_JHP",
            "OPTRE_B_8Gauge_Beanbags",
            "MEU_B_8Gauge_Pellet",
            "MEU_B_8Gauge_Pellet_Submunition",
            };
		weapons[] = {
            "OPTRE_M392_DMR",
            "OPTRE_BR55HB",
            "OPTRE_M295_BMR",
            "OPTRE_M393_DMR",
            "OPTRE_CR77",
            "throw",
            "OPTRE_M319",
        };
        requiredVersion = 0.1;
		requiredAddons[] = 
        {
			"OPTRE_UNSC_Units",
			"OPTRE_Ins_Units",
			"OPTRE_Weapons",
            "OPTRE_ACE_Compat",
            "OPTRE_FC_ACE_Compat",
            "V_FZ_Armor",
			"OPTRE_Core",
			"OPTRE_Misc",
			"A3_Data_F",
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
};
class CfgEditorCategories
{
    class MEU_cat_air
    {   
        displayName = "1st MEU Air Assets";
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_cat_gnd
    {   
        displayName = "1st MEU Ground Assets";
        scopeCurator = 2;
        scopeeditor = 2;
    };
	class MEU_flags
    {   
        displayName = "1st MEU Flags";
        scopeCurator = 2;
        scopeeditor = 2;
    };
};
class CfgEditorSubcategories
{
    class MEU_sub_apc
    {
		displayName = "APC";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_ifv
    {
		displayName = "IFV";
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
		displayName = "WIP";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_car
    {
		displayName = "Warthogs";
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
		displayName = "Rotary";
        scopeCurator = 2;
        scopeeditor = 2;
	};
};
class CfgWorlds
{
 	class Altis : CAWorld
	{
		description = "Altis";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Anizay : CAWorld
	{
		description = "Anizay";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Bariga : CAWorld
	{
		description = "Bariga";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Blood_Gulch : CAWorld
	{
		description = "Blood Gulch";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class BSOC : CAWorld
	{
		description = "BSOC Brasil";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Bukovina : CAWorld
	{
		description = "Bukovina";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Woodland_ACR : CAWorld
	{
		description = "Bystrica";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Chernarus_Autumn : CAWorld
	{
		description = "Chernarus (Autumn)";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Chernarus_Summer : CAWorld
	{
		description = "Chernarus (Summer)";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Chernarus_Winter : CAWorld
	{
		description = "Chernarus (Winter)";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class CLA_Clafghan : CAWorld
	{
		description = "CLA Clafghan";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Desert_E : CAWorld
	{
		description = "Desert";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Desert_Island : CAWorld
	{
		description = "Desert Island";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Dingor_v3_82 : CAWorld
	{
		description = "Dingor v3.82";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Eladeen : CAWorld
	{
		description = "Eladeen";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Everon : CAWorld
	{
		description = "Everon";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class GOS_Al_Rayak : CAWorld
	{
		description = "G.O.S Al Rayak";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class GOS_Gunkizli : CAWorld
	{
		description = "G.O.S Gunkizli";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class GOS_Leskovets : CAWorld
	{
		description = "G.O.S Leskovets";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class GOS_NDjenahoud : CAWorld
	{
		description = "G.O.S N'Djenahoud";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class GOS_NZiwasogo : CAWorld
	{
		description = "G.O.S N'Ziwasogo";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class GOS_Song_Bin_Tanh_APEX : CAWorld
	{
		description = "G.O.S Song Bin Tanh APEX";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Gridlock : CAWorld
	{
		description = "Gridlock";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Hellanmaa : CAWorld
	{
		description = "Hellanmaa";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Hellanmaa_winter : CAWorld
	{
		description = "Hellanmaa winter";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Iberius : CAWorld
	{
		description = "Iberius";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Ihantala_Winter : CAWorld
	{
		description = "Ihantala Winter";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Isla_Abaramia_v3_9 : CAWorld
	{
		description = "Isla Abaramia v3.9";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Isla_Duala_v3_9_5 : CAWorld
	{
		description = "Isla Duala v3.9.5";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Kholo : CAWorld
	{
		description = "Kholo";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Kolgujev : CAWorld
	{
		description = "Kolgujev";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Lingor_v3_9_5 : CAWorld
	{
		description = "Lingor v3.9.5";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Livonia : CAWorld
	{
		description = "Livonia";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Madrigal : CAWorld
	{
		description = "Madrigal";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Malden : CAWorld
	{
		description = "Malden";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Malden_2035 : CAWorld
	{
		description = "Malden 2035";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Mountain_Wilderness : CAWorld
	{
		description = "Mountain Wilderness";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Nam2 : CAWorld
	{
		description = "Nam2";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Nogova : CAWorld
	{
		description = "Nogova";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Pandora : CAWorld
	{
		description = "Pandora";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Panthera_Winter_v3_9 : CAWorld
	{
		description = "Panthera (Winter)v3.9";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Panthera_v3_9 : CAWorld
	{
		description = "Panthera v3.9";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Porto : CAWorld
	{
		description = "Porto";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Proving_Grounds : CAWorld
	{
		description = "Proving Grounds";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Pulau : CAWorld
	{
		description = "Pulau";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Rahmadi : CAWorld
	{
		description = "Rahmadi";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Ruha : CAWorld
	{
		description = "Ruha";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Sahrani : CAWorld
	{
		description = "Sahrani";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Saint_Kapaulio : CAWorld
	{
		description = "Saint Kapaulio";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Sandstorm : CAWorld
	{
		description = "Sandstorm";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Shapur : CAWorld
	{
		description = "Shapur";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Southern_Sahrani : CAWorld
	{
		description = "Southern Sahrani";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Stratis : CAWorld
	{
		description = "Stratis";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Summa : CAWorld
	{
		description = "Summa";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Summa_winter : CAWorld
	{
		description = "Summa winter";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Takistan : CAWorld
	{
		description = "Takistan";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Takistan_Mountains : CAWorld
	{
		description = "Takistan Mountains";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Tanoa : CAWorld
	{
		description = "Tanoa";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Todt : CAWorld
	{
		description = "Todt";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Tria : CAWorld
	{
		description = "Tria";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class United_Sahrani : CAWorld
	{
		description = "United Sahrani";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Utes : CAWorld
	{
		description = "Utes";
		pictureMap = "first_meu_aux\Data\MEUPIC3.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC3.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class VR : CAWorld
	{
		description = "Virtual Reality";
		pictureMap = "first_meu_aux\Data\MEUPIC2.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC2.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};
 	class Zargabad : CAWorld
	{
		description = "Zargabad";
		pictureMap = "first_meu_aux\Data\MEUPIC1.paa";
		pictureShot = "first_meu_aux\Data\MEUPIC1.paa";
		loadingTexts[]=
		{
			  "Report issues to SSgt.Red! (Red_Advisor#9499) Side effects may include server crashing, memory leaks, and sadness ","Report issues to SSgt.Red! (Owner of Redos Banditos Saloon Red_Advisor#9499) If you break it you by it!","Report issues to SSgt.Red! (That one guy who wheezes Red_Advisor#9499) Have a great time in the field!"
		};
	};

};