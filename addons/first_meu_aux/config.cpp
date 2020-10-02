#define _ARMA_
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#include "CfgSupplyPods.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgGroups.hpp"
#include "CfgMagazines.hpp"
#include "Cfgtreatment.hpp"
#include "Cfgtreatmentactions.hpp"
#include "CfgFunctions.hpp"
#include "CfgLoadingscreens.hpp"

class cfgPatches
{
    class first_meu_aux
    {
		units[] = {
			"OPTRE_Ammo_SupplyPod_Launcher",
			"OPTRE_Ammo_SupplyPod_Medical",
			"OPTRE_Ammo_SupplyPod_Mortars",
			"OPTRE_Ammo_SupplyPod_LMG",
            "B_APC_Wheeled_01_cannon_F",
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
        };
        requiredVersion = 0.1;
		requiredAddons[] = 
        {
			"OPTRE_UNSC_Units",
			"OPTRE_Ins_Units",
			"OPTRE_Weapons",
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
        };
    };
    class MEU_Vehicles
    {
        editorCategory = "MEU_cat_gnd";
		units[] = 
        {
            "1stMEU_M313_Elephant",
            "Vulkan_Repair_APC",
            "Vulkan_Repair_APC_P",
            "OPTRE_HEV",
            "MEU_IFV",
            "MEU_IFV_A",
            "MEU_M12_AP",
        };
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core","A3_Data_F","OPTRE_Weapons"};
	};
    class MEU_Air
    {
        editorCategory = "MEU_cat_air";
		units[] = 
        {
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
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class Throw_Shot_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"Throw_pullPin_SoundShader"};
    };
    class Throw_pullPin_SoundShader
    {
        samples[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",1};
        range = 5;
        volume = 5;
    };
    range = 5;
    volume = 5;
};