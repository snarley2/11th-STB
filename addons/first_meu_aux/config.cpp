#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgGroups.hpp"
#include "script.hpp"
#include "CfgMagazines.hpp"
#include "Cfgtreatment.hpp"
#include "Cfgtreatmentactions.hpp"
#include "CfgFunctions.hpp"

class cfgPatches
{
    class first_meu_aux
    {
		units[] = {
			"OPTRE_Ammo_SupplyPod_Launcher",
			"OPTRE_Ammo_SupplyPod_Medical",
			"OPTRE_Ammo_SupplyPod_Mortars",
			"OPTRE_Ammo_SupplyPod_LMG"
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
            "OPTRE_SRS99_Scope_v2",
            "OPTRE_SRS99C_Scope_v2",
            "OPTRE_M73_Smartlink_v2",
            "OPTRE_M6S_Scope",
            "OPTRE_M6GX_Scope",
            "OPTRE_M6D_Smartlink",
            "OPTRE_MA5_SmartLink",
            "OPTRE_MA5_SmartLink_v2",
            "OPTRE_MA5C_SmartLink_v2",
            "OPTRE_MA5_SmartLink_legacy",
            "OPTRE_MA5C_SmartLink_legacy",
            "OPTRE_M7_Sight_v2",
            "OPTRE_M392_Scope_v2",
            "OPTRE_BMR_Scope_v2",
            "OPTRE_M393_Scope_v2",
            "OPTRE_M393_ACOG_v2",
            "OPTRE_M393_EOTECH_v2",
            "OPTRE_BR55HB_Scope_v2",
            "OPTRE_M301X",
            "OPTRE_M319",
            "OPTRE_MA5B",
            "OPTRE_MA5BGL",
            "OPTRE_MA5A",
            "OPTRE_MA5AGL",
            "OPTRE_MA5C",
            "OPTRE_MA5CGL",
            "OPTRE_MA5K",
            "OPTRE_MA37",
            "OPTRE_MA37B",
            "OPTRE_MA37GL",
            "OPTRE_MA37BGL",
            "OPTRE_MA32",
            "OPTRE_MA32B",
            "OPTRE_MA32GL",
            "OPTRE_MA32BGL",
            "OPTRE_M6G",
            "OPTRE_M6C",
            "OPTRE_M33",
            "OPTRE_M33G",
            "OPTRE_M6D",
            "OPTRE_M6D_Flashlight",
            "OPTRE_M392_DMR",
            "OPTRE_M392XD_DMR",
            "OPTRE_M393_DMR",
            "OPTRE_M393S_DMR",
            "OPTRE_M295_BMR",
            "OPTRE_M28A2",
            "OPTRE_MRS10X",
            "OPTRE_CR77",
            "OPTRE_M14X",
            "OPTRE_BR55HB",
            "OPTRE_BR55",
            "OPTRE_BR55AM",
            "OPTRE_M7",
            "OPTRE_M7_Folded",
            "OPTRE_SRS99D",
            "OPTRE_SRS99C",
            "OPTRE_M99",
            "OPTRE_M48_PAW",
            "OPTRE_M73",
            "OPTRE_M73H",
            "OPTRE_M45",
            "OPTRE_M45TAC",
            "OPTRE_M90A",
        };
        requiredVersion = 0.1;
		requiredAddons[] = 
        {
			"OPTRE_UNSC_Units",
			"OPTRE_Ins_Units",
			"OPTRE_Weapons",
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
        };
    };
    class MEU_Vehicles_Elephant
	{
		units[] = 
        {
            "1stMEU_M313_Elephant",
            "Vulkan_Repair_APC",
            "Vulkan_Repair_APC_P",
            "VES_AV22_Sparrowhawk_Base",
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
            "OPTRE_HEV",
        };
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core","A3_Data_F","OPTRE_Weapons"};
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

class CfgVehicleClasses
{
	class MEU_UNSC_Armored_class
	{
		displayName = "MEU Armored";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
    class OPTRE_UNSC_Air_class
	{
		displayName = "MEU Air Assets";
		author = "Article 2 Studios";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
};

