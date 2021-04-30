#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
//gear
#include "\11th_STB_aux\MEU_Vehicles\CfgVehicles.hpp"
#include "\11th_STB_aux\MEU_Gear\CfgWeapons.hpp"
#include "\11th_STB_aux\MEU_Gear\CfgAmmo.hpp"
#include "\11th_STB_aux\MEU_Gear\CfgEventHandlers.hpp"
#include "\11th_STB_aux\MEU_Gear\CfgMagazines.hpp"
#include "\11th_STB_aux\MEU_Gear\CfgGlasses.hpp"
//misc
#include "\11th_STB_aux\MEU_Misc\Cfgtreatment.hpp"
#include "\11th_STB_aux\MEU_Misc\Cfgtreatmentactions.hpp"
#include "\11th_STB_aux\MEU_Misc\Cfgloadingscreens.hpp"
#include "\11th_STB_aux\MEU_Misc\CfgWorlds.hpp"
#include "\11th_STB_aux\MEU_Misc\CfgACEInjuries.hpp"
//units
#include "\11th_STB_aux\MEU_Units\CfgGroups.hpp"
//oops
#include "\11th_STB_aux\Functions\CfgFunctions.hpp"

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
            "LM_OPCAN_FRI_AutoRifleman",
            "LM_OPCAN_FRI_Breacher",
            "LM_OPCAN_FRI_Medic",
            "LM_OPCAN_FRI_Crewman",
            "LM_OPCAN_FRI_Engineer",
            "LM_OPCAN_FRI_GL",
            "LM_OPCAN_FRI_Marksman",
            "LM_OPCAN_FRI_Officer",
            "LM_OPCAN_FRI_Rifleman",
            "LM_OPCAN_FRI_Rifleman_AT",
            "LM_OPCAN_FRI_Rifleman_AA",
            "LM_OPCAN_FRI_RTO",
            "LM_OPCAN_Frihelm",
            "LM_OPCAN_FRI_SL",
            "LM_OPCAN_FRI_TL",
            "LM_OPCAN_FRI_AutoRifleman_DES",
            "LM_OPCAN_FRI_Breacher_DES",
            "LM_OPCAN_FRI_Medic_DES",
            "LM_OPCAN_FRI_Crewman_DES",
            "LM_OPCAN_FRI_Engineer_DES",
            "LM_OPCAN_FRI_GL_DES",
            "LM_OPCAN_FRI_Marksman_DES",
            "LM_OPCAN_FRI_Officer_DES",
            "LM_OPCAN_FRI_Rifleman_DES",
            "LM_OPCAN_FRI_Rifleman_AT_DES",
            "LM_OPCAN_FRI_Rifleman_AA_DES",
            "LM_OPCAN_FRI_RTO_DES",
            "LM_OPCAN_Frihelm_W_DES",
            "LM_OPCAN_FRI_SL_DES",
            "LM_OPCAN_FRI_TL_DES",
            "LM_OPCAN_FRI_AutoRifleman_WDL",
            "LM_OPCAN_FRI_Breacher_WDL",
            "LM_OPCAN_FRI_Medic_WDL",
            "LM_OPCAN_FRI_Crewman_WDL",
            "LM_OPCAN_FRI_Engineer_WDL",
            "LM_OPCAN_FRI_GL_WDL",
            "LM_OPCAN_FRI_Marksman_WDL",
            "LM_OPCAN_FRI_Officer_WDL",
            "LM_OPCAN_FRI_Rifleman_WDL",
            "LM_OPCAN_FRI_Rifleman_AT_WDL",
            "LM_OPCAN_FRI_Rifleman_AA_WDL",
            "LM_OPCAN_FRI_RTO_WDL",
            "LM_OPCAN_Frihelm_WDL",
            "LM_OPCAN_FRI_SL_WDL",
            "LM_OPCAN_FRI_TL_WDL",
            "LM_OPCAN_KOS_AutoRifleman1",
            "LM_OPCAN_KOS_Breacher1",
            "LM_OPCAN_KOS_Medic1",
            "LM_OPCAN_KOS_Crewman1",
            "LM_OPCAN_KOS_Engineer1",
            "LM_OPCAN_KOS_GL1",
            "LM_OPCAN_KOS_Marksman1",
            "LM_OPCAN_KOS_Officer1",
            "LM_OPCAN_KOS_Rifleman1",
            "LM_OPCAN_KOS_Rifleman_AT1",
            "LM_OPCAN_KOS_Rifleman_AA1",
            "LM_OPCAN_KOS_RTO1",
            "LM_OPCAN_KOS_Marksman1",
            "LM_OPCAN_KOS_SL1",
            "LM_OPCAN_KOS_TL1",
            "LM_OPCAN_KOS_AutoRifleman2",
            "LM_OPCAN_KOS_Breacher2",
            "LM_OPCAN_KOS_Medic2",
            "LM_OPCAN_KOS_Crewman2",
            "LM_OPCAN_KOS_Engineer2",
            "LM_OPCAN_KOS_GL2",
            "LM_OPCAN_KOS_Marksman2",
            "LM_OPCAN_KOS_Officer2",
            "LM_OPCAN_KOS_Rifleman2",
            "LM_OPCAN_KOS_Rifleman_AT2",
            "LM_OPCAN_KOS_Rifleman_AA2",
            "LM_OPCAN_KOS_RTO2",
            "LM_OPCAN_KOS_Marksman2",
            "LM_OPCAN_KOS_SL2",
            "LM_OPCAN_KOS_TL2",
            "LM_OPCAN_KOS_AutoRifleman3",
            "LM_OPCAN_KOS_Breacher3",
            "LM_OPCAN_KOS_Medic3",
            "LM_OPCAN_KOS_Crewman3",
            "LM_OPCAN_KOS_Engineer3",
            "LM_OPCAN_KOS_GL3",
            "LM_OPCAN_KOS_Marksman3",
            "LM_OPCAN_KOS_Officer3",
            "LM_OPCAN_KOS_Rifleman3",
            "LM_OPCAN_KOS_Rifleman_AT3",
            "LM_OPCAN_KOS_Rifleman_AA3",
            "LM_OPCAN_KOS_RTO3",
            "LM_OPCAN_KOS_Marksman3",
            "LM_OPCAN_KOS_SL3",
            "LM_OPCAN_KOS_TL3",
            "LM_OPCAN_KOS_AutoRifleman4",
            "LM_OPCAN_KOS_Breacher4",
            "LM_OPCAN_KOS_Medic4",
            "LM_OPCAN_KOS_Crewman4",
            "LM_OPCAN_KOS_Engineer4",
            "LM_OPCAN_KOS_GL4",
            "LM_OPCAN_KOS_Marksman4",
            "LM_OPCAN_KOS_Officer4",
            "LM_OPCAN_KOS_Rifleman4",
            "LM_OPCAN_KOS_Rifleman_AT4",
            "LM_OPCAN_KOS_Rifleman_AA4",
            "LM_OPCAN_KOS_RTO4",
            "LM_OPCAN_KOS_Marksman4",
            "LM_OPCAN_KOS_SL4",
            "LM_OPCAN_KOS_TL4",
            "MEU_URA_BJ_AutoRifleman",
            "MEU_URA_BJ_Breacher",
            "MEU_URA_BJ_Medic",
            "MEU_URA_BJ_Crewman",
            "MEU_URA_BJ_Engineer",
            "MEU_URA_BJ_GL",
            "MEU_URA_BJ_Marksman",
            "MEU_URA_BJ_Officer",
            "MEU_URA_BJ_Rifleman",
            "MEU_URA_BJ_Rifleman_AT",
            "MEU_URA_BJ_Rifleman_AA",
            "MEU_URA_BJ_RTO",
            "MEU_URA_BJ_Sniper",
            "MEU_URA_BJ_SL",
            "MEU_URA_BJ_TL",
            "LM_OPCAN_URA_AutoRifleman",
            "LM_OPCAN_URA_Breacher",
            "LM_OPCAN_URA_Medic",
            "LM_OPCAN_URA_Crewman",
            "LM_OPCAN_URA_Engineer",
            "LM_OPCAN_URA_GL",
            "LM_OPCAN_URA_Marksman",
            "LM_OPCAN_URA_Officer",
            "LM_OPCAN_URA_Rifleman",
            "LM_OPCAN_URA_Rifleman_AT",
            "LM_OPCAN_URA_Rifleman_AA",
            "LM_OPCAN_URA_RTO",
            "LM_OPCAN_URA_Sniper",
            "LM_OPCAN_URA_SL",
            "LM_OPCAN_URA_TL",
            "LM_OPCAN_M350_INS_WDL",
            "LM_OPCAN_M48_Buzz_URA",
            "LM_OPCAN_M92_BOLT_URA",
            "LM_OPCAN_URA_AutoRifleman_D",
            "LM_OPCAN_URA_Breacher_D",
            "LM_OPCAN_URA_Medic_D",
            "LM_OPCAN_URA_Crewman_D",
            "LM_OPCAN_URA_Engineer_D",
            "LM_OPCAN_URA_GL_D",
            "LM_OPCAN_URA_Marksman_D",
            "LM_OPCAN_URA_Officer_D",
            "LM_OPCAN_URA_Rifleman_D",
            "LM_OPCAN_URA_Rifleman_AT_D",
            "LM_OPCAN_URA_Rifleman_AA_D",
            "LM_OPCAN_URA_RTO_D",
            "LM_OPCAN_URA_Sniper_D",
            "LM_OPCAN_URA_SL_D",
            "LM_OPCAN_URA_TL_D",
            "LM_OPCAN_M350_INS_WDL",
            "LM_OPCAN_M48_Buzz_URA",
            "LM_OPCAN_M92_BOLT_URA",
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
            "MEU_Nyx_AT",
            "MEU_Nyx_AA",
            "MEU_Nyx_Cannon",
            "MEU_Nyx_Radar",
            "MEU_Armata_Koslovic",
            "MEU_Kazan_Koslovic",
            "MEU_Galkin_Koslovic",
            "MEU_Otakar_Koslovic",
            "MEU_Otakar_Koslovic_Unarmed",
            "MEU_Arkhangelsk_Koslovic",
            "MEU_Ural_Transport_Koslovic",
            "MEU_Ural_MLRS_Koslovic",
            "MEU_Warrior_Katie",
			"MEU_SCORPION",
            "MEU_Timberwolf",
            "MEU_Ratt_Koslovic",
            "MEU_Ratt_Koslovic_HMG",
            "MEU_Ratt_Koslovic_AT",
            "MEU_Kajman_Koslovic",
            "MEU_M813_TT",
            "MEU_M12A1_AT",
            "MEU_M12_Unarmed",
            "MEU_M12G1_Gauss",
            "MEU_M12_LAAG",
            "MEU_M412_IFV_URA_DES",
            "MEU_M413_MGS_URA_DES",
            "MEU_M412_IFV_URA_WDL",
            "MEU_M413_MGS_URA_WDL",
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
            "VES_MQ221_URF",
            /*"ChemicalBarrel_NA",
            "ChemicalBarrel_AS",
            "ChemicalBarrel_CS"*/
            "SuperWall_01",
            "shiva_uncovered",
            "logey_Box",
			"OPTRE_Ins_ER_Deserter_GL_Light",
			"OPTRE_Ins_URF_Rifleman_SMG",
			"OPTRE_Ins_URF_Grenadier_Light",
			"OPTRE_Ins_BJ_Soldier_Demolitions",
			"OPTRE_Ins_BJ_Soldier_URB_Demolitions",
			"OPTRE_Ins_BJ_Soldier_Grenadier",
			"OPTRE_Ins_BJ_Soldier_URB_Grenadier",
			"OPTRE_Ins_URF_Rifleman_SMG",
            "MEU_KajMoney",
            "MEU_Speedbag"
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
            "MEU_16x65mm_Slug",
            "MEU_HEV_Landing_Explosive"
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
            "OPTRE_FC_Railgun",
            "OPTRE_GUA23A",
            "MEU_Automag",
            "OPTRE_M6C",
            "MEU_Hopper",
            "MEU_Hopper_v2_Loaded",
            "MEU_Hopper_v2_Used",
            "MEU_Hopper_v3"
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
            "cba_disposable"
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
        displayName = "[11th] UNSC";
        scopeCurator = 2;
        scopeeditor = 2;
    };
	class MEU_Objects
    {   
        displayName = "[11th] Objects";
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_URF
    {
        displayName = "[11th] United Rebel Front"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_ER
    {
        displayName = "[11th] Eridanus Rebels"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_URF_BJ_WDL
    {
        displayName = "[11th] URF Battlejumpers (Woodland)"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_URF_BJ_URB
    {
        displayName = "[11th] URF Battlejumpers (Urban)"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_Friden
    {
        displayName = "[11th] Fridens"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_Friden_Des
    {
        displayName = "[11th] Fridens (Desert)"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_Friden_Wdl
    {
        displayName = "[11th] Fridens (Woodland)"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_Koslovic_Jun
    {
        displayName = "[11th] Koslovic (Jungle)"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_Koslovic_Swa
    {
        displayName = "[11th] Koslovic (Swamp)"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_Koslovic_Wdl
    {
        displayName = "[11th] Koslovic"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_Koslovic_Ard
    {
        displayName = "[11th] Koslovic (Arid)"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_URA_BJ
    {
        displayName = "[11th] URA Battlejumpers"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_URA
    {
        displayName = "[11th] United Rebel Alliance (Woodland)"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_URA_D
    {
        displayName = "[11th] United Rebel Alliance (Desert)"
        scopeCurator = 2;
        scopeeditor = 2;
    };
    class MEU_SU
    {
        displayName = "[11th] Seccesionist Union"
        scopeCurator = 2;
        scopeeditor = 2;
    };
};
class CfgEditorSubcategories
{
    class MEU_sub_Mechanized
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
    class MEU_sub_Motorised
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
		displayName = "Helicopters";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_sub_fix
    {
		displayName = "Planes";
        scopeCurator = 2;
        scopeeditor = 2;
	};
    class MEU_Men
    {
		displayName = "Men";
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

class CBA_DisposableLaunchers {
    MEU_Hopper[] = {"MEU_Hopper_v2_Loaded","MEU_Hopper_v2_Used"};
};

class Extended_PreInit_EventHandlers
{
    class MEU_pre_init_event
	{
        init = "call compile preprocessFileLineNumbers 'first_meu_aux\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers
{
    class MEU_post_init_event
	{
        init = "call compile preprocessFileLineNumbers 'first_meu_aux\XEH_postInit.sqf'";
    };
};
