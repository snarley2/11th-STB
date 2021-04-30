//Backpack Classes
	class OPTRE_S12_SOLA_Jetpack;
	class OPTRE_ANPRC_515;
    class OPTRE_ANPRC_521_Black;
	class OPTRE_ANPRC_521_Green;
    class OPTRE_ILCS_Rucksack_Heavy;
	class OPTRE_ILCS_Rucksack_Black;
	class OPTRE_UNSC_Rucksack;
	class OPTRE_UNSC_Rucksack_Heavy;
	class OPTRE_UNSC_Rucksack_Medic;
	class B_parachute;
    class B_RadioBag_01_black_F;
    class SensorTemplateDataLink;
	class DataLinkSensorComponent;

//  Start Backpacks
//	Start Jump Packs

	class Praetor_Jumpack : OPTRE_ILCS_Rucksack_Black	
    {
        author = "NSM & Oneill & Mark";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] ODST Reconnaissance Jumpack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_range = 120000;
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack_on.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 100;
		NSM_jumppack_recharge = 4;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Short Jump",{14,7,20,0,1,1}}};
		maximumload = 100;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"NSM_Objects\Data\XD_1_JumpPack_CO.paa"};
    };
	
    class Para_Jumpack : Praetor_Jumpack
    {
        author = "NSM & Oneill & Mark";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] Pararescue Jumpack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 100;
		NSM_jumppack_recharge = .5;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Short Jump",{14,7,20,0,1,1}}};
		maximumload = 300;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"NSM_Objects\Data\XD_1_JumpPack_CO.paa"};
    };
	
    class MEU_Cent_RTO_Pack : Praetor_Jumpack
    {
        author = "NSM & Oneill & Mark";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] Centurion Reconnaissance RTO/NCO Jumpack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 200;
		NSM_jumppack_recharge = 0;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Forward Jump",{12,20,25,0,0,0}},{"Short Jump",{14,7,10,0,1,1}}};
		maximumload = 100;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"NSM_Objects\Data\XD_1_JumpPack_CO.paa"};
    };
	
    class MEU_Cent_Pack : Praetor_Jumpack
    {
        author = "NSM (Namenai) & Oneill & Mark";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] Centurion Reconnaissance Jumpack";
        picture="\OPTRE_weapons\backpacks\icons\icon_jetpack_ca.paa";
		model="\OPTRE_weapons\backpacks\jetpack.p3d";
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 200;
		NSM_jumppack_recharge = 0;
		NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[] = {{"spine3",{0,-0.3,-0.1}}};
		NSM_jumppack_sound_ignite[] = {"NSM_Main\sounds\cdv21Start.ogg"};
		NSM_jumppack_sound_land[] = {"NSM_Main\sounds\cdv21End.ogg"};
		NSM_jumppack_sound_idle[] = {"NSM_Main\sounds\cdv21Idle.ogg"};
		NSM_jumppack_jump_types[] = {{"Forward Jump",{12,20,25,0,0,0}},{"Short Jump",{14,7,10,0,1,1}}};
		maximumload = 100;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"NSM_Objects\Data\XD_1_JumpPack_CO.paa"};
    };
	
    class MEU_Testpack : Praetor_Jumpack
    {
		scope = 1;
		scopeCurator = 1;
        scopeArsenal = 1;
        displayName = "[11th] Test Pack";
        NSM_jumppack_jump_types[] = {{"Forward Jump",{12,20,50,0,0,0}},{"Short Jump",{25,7,20,0,1,1}},{"Full Power",{30,5,1,0,1,0}}};
    };
	
	class MEU_Parachute : B_parachute
    {
        author = "1st MEU Mark";
        displayName = "[11th] Parachute";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_isolatedAmount = 0.65;
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };
	
    class stukasbackpack : B_RadioBag_01_black_F
    {
        author = "1st MEU Mark";
        displayName = "[11th] [JTAC] Radio Pack";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_isolatedAmount = 0.80;
        tf_range = 200000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 700;
    };
	
//	End Jump Packs
//	RTO Back Packs     
	 
	class MEU_Zeus_Pack : OPTRE_ANPRC_521_Black
    {
        displayName = "[11th] Zeus LR";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 1000;
    };
	
    class Praetor_LR_backpack_big: OPTRE_ANPRC_521_Black
    {
        displayName = "[11th] ODST LR Rucksack";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 1;
    };
    
	class Praetor_LR_backpack: OPTRE_ANPRC_515
    {
        displayName = "[11th] ODST NCO Rucksack";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 1;
    };
	
	class MEU_ANPRC_515: OPTRE_ANPRC_515
    {
        displayName = "[11th] AN/PRC-515";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 150;
    };
	
	class MEU_ILCS_ANPRC_515: OPTRE_ANPRC_515
    {
        displayName = "[11th] ILCS AN/PRC-515";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\como_pack_black_co.paa"};
        maximumLoad = 250;
    };
	
	class MEU_ILCS_Recon: OPTRE_ILCS_Rucksack_Black
    {
        displayName = "[11th] ILCS Recon";
		picture = "\OPTRE_weapons\backpacks\icons\como_pack.paa";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
		model = "\A3\weapons_f\empty";
        maximumLoad = 0;
    };
	
	class MEU_Marine_ANPRC_521: OPTRE_ANPRC_521_Green
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] AN/PRC-521 (Marine)";
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_mar_co.paa","11th_STB_aux\data\misc\packs\common_pack_mar_co.paa"};
        descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 100;
	};
	
    class MEU_Woodland_ANPRC_521: OPTRE_ANPRC_521_green
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] AN/PRC-521 (Woodland)";
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_wdl_co.paa","11th_STB_aux\data\misc\packs\common_pack_wdl_co.paa"};
        descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 100;
	};
	
    class MEU_Arctic_ANPRC_521: OPTRE_ANPRC_521_green
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] AN/PRC-521 (Arctic)";
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_arc_co.paa","11th_STB_aux\data\misc\packs\common_pack_arc_co.paa"};
        descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 100;
	};
	
    class MEU_Desert_ANPRC_521: OPTRE_ANPRC_521_green
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] AN/PRC-521 (Desert)";
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_des_co.paa","11th_STB_aux\data\misc\packs\common_pack_des_co.paa"};
        descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 100;
	};
	
    class MEU_EvoUrb_ANPRC_521: OPTRE_ANPRC_521_green
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] AN/PRC-521 (Evolved/Urban)";
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_evourb_co.paa","11th_STB_aux\data\misc\packs\common_pack_evourb_co.paa"};
        descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 100;
	};
	
	class MEU_ILCS_ANPRC_521: OPTRE_ANPRC_521_green
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] ILCS AN/PRC-521";
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_evourb_co.paa","11th_STB_aux\data\misc\packs\common_pack_prae_co.paa"};
        descriptionShort = "AN/PRC-521<br>UNSC Long Range Radio<br>30km Effective Range";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 200;
	};
	
//	Redacted

	class MEU_Prae_Ruck_Base_Heavy : OPTRE_ILCS_Rucksack_Heavy
    {
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        author = "1st MEU Oneill";
        displayName = "[11th] ODST Trooper Heavy Rucksack";
        maximumLoad = 1;
		mass = 50;
		hiddenSelections[] = {"camo1","biofoam"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\ruck_black_co.paa"};
    };
    
	class uplinkpack : MEU_Prae_Ruck_Base_Heavy
    {
        author = "1st MEU Mark";
        displayName = "[11th] ODST Uplink Rucksack";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        maximumLoad = 1;
        class components :  DataLinkSensorComponent
        {
            class SensorsManagerComponent : SensorTemplateDataLink
            {
                setVehicleReportRemoteTargets = 1;
                setVehicleReportOwnPosition = 1;
            };
        };
    };
	
//	End Redacted
//	Praetorian Back Packs

	class MEU_Prae_Ruck_Base : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[11th] ODST Trooper Rucksack";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        maximumLoad = 1;
		mass = 50;
		hiddenSelections[] = {"camo1","AP_Heavy","biofoam"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\ruck_black_co.paa"};
    };
	
	class MEU_Prae_Ruck_Heavy : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[11th] ODST Trooper Heavy Rucksack";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        maximumLoad = 1;
		mass = 50;
		hiddenSelections[] = {"camo1","biofoam"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\ruck_black_co.paa"};
    };
    
	class MEU_Prae_Corpsman_Ruck_Base : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[11th] ODST Corpsman Rucksack";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
		hiddenSelections[] = {"camo1","AP_Heavy"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\ruck_black_co.paa"};
		maximumLoad = 1;
    };
	
	class MEU_Prae_Corpsman_Ruck_Heavy : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[11th] ODST Corpsman Heavy Rucksack";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		maximumLoad = 1;
		mass = 50;
		hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\ruck_black_co.paa"};
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
    };
	
	class MEU_ILCS_Ruck : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[11th] ILCS Rucksack";
        maximumLoad = 200;
		mass = 50;
		hiddenSelections[] = {"camo1","AP_Heavy","biofoam"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\prae_ruck_black_CO.paa"};
    };
	
	class MEU_ILCS_Ruck_Heavy : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[11th] ILCS Heavy Rucksack";
        maximumLoad = 350;
		mass = 50;
		hiddenSelections[] = {"camo1","biofoam"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\prae_ruck_black_CO.paa"};
    };
    
	class MEU_ILCS_Corpsman_Ruck : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[11th] ILCS Corpsman Rucksack";
		tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
		hiddenSelections[] = {"camo1","AP_Heavy"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\prae_ruck_black_CO.paa"};
		maximumLoad = 300;
    };
	
	class MEU_ILCS_Corpsman_Ruck_Heavy : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "1st MEU Oneill";
        displayName = "[11th] ILCS Heavy Corpsman Rucksack";
		maximumLoad = 400;
		mass = 50;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\prae_ruck_black_CO.paa"};
    };
	
//	Praetorian Back Packs End
// 	Centuron Back Packs

	class MEU_Desert_Rucksack_Soft: OPTRE_UNSC_Rucksack
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Basic Rucksack (Desert)";
        maximumLoad = 100;
		mass = 40;
		hiddenSelections[] = {"camo","camo2","B_Addons","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_des_co.paa"};
	};
	
    class MEU_Desert_Rucksack_Soft_Heavy: OPTRE_UNSC_Rucksack_Heavy
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Heavy Rucksack (Desert)";
        maximumLoad = 250;
		mass = 50;
		hiddenSelections[] = {"camo","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_des_co.paa"};
	};
	
    class MEU_Desert_Rucksack_Soft_Medical: OPTRE_UNSC_Rucksack_Medic
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Corpsman Rucksack (Desert)";
        maximumLoad = 300;
		mass = 50;
		hiddenSelections[] = {"camo","B_Addons","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_des_co.paa"};
	};
	
    class MEU_Arctic_Rucksack_Soft: OPTRE_UNSC_Rucksack
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Basic Rucksack (Arctic)";
        maximumLoad = 100;
		mass = 40;
		hiddenSelections[] = {"camo","camo2","B_Addons","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_arc_co.paa"};
	};
	
    class MEU_Arctic_Rucksack_Soft_Heavy: OPTRE_UNSC_Rucksack_Heavy
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Heavy Rucksack (Arctic)";
        maximumLoad = 250;
		mass = 50;
		hiddenSelections[] = {"camo","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_arc_co.paa"};
	};
	
    class MEU_Arctic_Rucksack_Soft_Medical: OPTRE_UNSC_Rucksack_Medic
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Corpsman Rucksack (Arctic)";
        maximumLoad = 300;
		mass = 50;
		hiddenSelections[] = {"camo","B_Addons","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_arc_co.paa"};
	};
	
    class MEU_Woodland_Rucksack_Soft: OPTRE_UNSC_Rucksack
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Basic Rucksack (Woodland)";
        maximumLoad = 100;
		mass = 40;
		hiddenSelections[] = {"camo","camo2","B_Addons","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_wdl_co.paa"};
	};
	
    class MEU_Woodland_Rucksack_Soft_Heavy: OPTRE_UNSC_Rucksack_Heavy
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Heavy Rucksack (Woodland)";
        maximumLoad = 250;
		mass = 50;
		hiddenSelections[] = {"camo","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_wdl_co.paa"};
	};
	
    class MEU_Woodland_Rucksack_Soft_Medical: OPTRE_UNSC_Rucksack_Medic
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Corpsman Rucksack (Woodland)";
        maximumLoad = 300;
		mass = 50;
		hiddenSelections[] = {"camo","B_Addons","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_wdl_co.paa"};
	};
	
    class MEU_EvoUrb_Rucksack_Soft: OPTRE_UNSC_Rucksack
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Basic Rucksack (Evolved/Urban)";
        maximumLoad = 100;
		mass = 40;
		hiddenSelections[] = {"camo","camo2","B_Addons","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_evourb_co.paa"};
	};
	
    class MEU_EvoUrb_Rucksack_Soft_Heavy: OPTRE_UNSC_Rucksack_Heavy
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Heavy Rucksack (Evolved/Urban)";
        maximumLoad = 250;
		mass = 50;
		hiddenSelections[] = {"camo","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_evourb_co.paa"};
	};
	
    class MEU_EvoUrb_Rucksack_Soft_Medical: OPTRE_UNSC_Rucksack_Medic
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Corpsman Rucksack (Evolved/Urban)";
        maximumLoad = 300;
		mass = 50;
		hiddenSelections[] = {"camo","B_Addons","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_evourb_co.paa"};
	};
	
    class MEU_Marine_Rucksack_Soft: OPTRE_UNSC_Rucksack
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Basic Rucksack (Marine)";
        maximumLoad = 100;
		mass = 40;
		hiddenSelections[] = {"camo","camo2","B_Addons","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_mar_co.paa"};
	};
	
    class MEU_Marine_Rucksack_Soft_Heavy: OPTRE_UNSC_Rucksack_Heavy
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Heavy Rucksack (Marine)";
        maximumLoad = 250;
		mass = 50;
		hiddenSelections[] = {"camo","B_Medic","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_mar_co.paa"};
	};
	
    class MEU_Marine_Rucksack_Soft_Medical: OPTRE_UNSC_Rucksack_Medic
	{
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] UNSC Corpsman Rucksack (Marine)";
        maximumLoad = 300;
		mass = 50;
		hiddenSelections[] = {"camo","B_Addons","B_Radio"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\misc\packs\Soft_Backpack_mar_co.paa"};
	};

//	End Centurion Backpacks		
//  End Backpacks