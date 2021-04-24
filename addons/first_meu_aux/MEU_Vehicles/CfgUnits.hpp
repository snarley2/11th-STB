//AI
    class O_Soldier_SL_F;
    class O_Soldier_F;
    class O_Soldier_GL_F;
    class O_Soldier_AR_F;
    class O_Soldier_M_F;
    class O_Soldier_LAT_F;
    class O_Medic_F;
    class O_Officer_F;
    class O_Engineer_F;
    class O_Soldier_TL_F;
	class O_Soldier_base_F;
	class B_Soldier_base_F;
	class B_RangeMaster_F;
    class I_Soldier_base_F;
    class I_G_Soldier_AR_F;
    class I_G_Soldier_LAT_F;
    class I_officer_F;
	class I_G_Soldier_M_F;
    class I_G_Soldier_A_F;
    class C_man_hunter_1_F;
    class B_UAV_AI;
    class B_Soldier_F;
    //Uniforms
	class OPTRE_UNSC_Soldier_Base;
	class OPTRE_FC_Elite_Undersuit;

    class LM_OPCAN_FRI_Officer: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"LM_OPCAN_M18AR","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR","optre_hgun_comet_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_SL: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"LM_OPCAN_M18AR","OPTRE_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_TL: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Rifleman: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_GL: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Medic: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Marksman: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_RTO: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_Frihelm: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_AutoRifleman: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Crewman: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Rifleman_AT: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_FRI_Rifleman_AA: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Breacher: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Engineer: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
// Friden Woodland 
	class LM_OPCAN_FRI_Officer_WDL: O_Officer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"LM_OPCAN_M18AR","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR","optre_hgun_comet_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_SL_WDL: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_TL_WDL: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Rifleman_WDL: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_GL_WDL: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Medic_WDL: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Marksman_WDL: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_RTO_WDL: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_Frihelm_W_WDL: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_AutoRifleman_WDL: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Crewman_WDL: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Rifleman_AT_WDL: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_FRI_Rifleman_AA_WDL: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Breacher_WDL: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Engineer_WDL: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_WDL"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_W"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_W","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
// Friden Destert 
	class LM_OPCAN_FRI_Officer_DES: O_Officer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"LM_OPCAN_M18AR","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR","optre_hgun_comet_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_RIG","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_SL_DES: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_TL_DES: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Rifleman_DES: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_GL_DES: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_M18AR_GL","Throw","Put"}; 
		Items[] = {"FirstAidKit"}; 
		RespawnItems[] = {"FirstAidKit"}; 
		magazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Medic_DES: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Marksman_DES: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_RTO_DES: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_Frihelm_W_DES: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagheye","LM_OPCAN_FRI_VEST","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_AutoRifleman_DES: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Crewman_DES: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_FRI_RIG","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Rifleman_AT_DES: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_FRI_Rifleman_AA_DES: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Breacher_DES: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_FRI_Engineer_DES: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_FRI_DES"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Friden_Des"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_FRI_Uni_Base_D"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_FRI_VEST_UP","LM_OPCAN_Frihelm_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
// KOS Jungle 
    class LM_OPCAN_KOS_Officer1: O_Soldier_F 
    { 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_KOS_Gorka1_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_comet_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_SL1: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_TL1: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Rifleman1: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_GL1: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Medic1: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Marksman1: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_RTO1: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Sniper1: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_AutoRifleman1: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_SAW","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_SAW","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Crewman1: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_KOS_Vest","H_Tank_Black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Rifleman_AT1: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_KOS_Rifleman_AA1: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Breacher1: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Engineer1: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Jun"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_KOS_Gorka_uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
// Koslovic Arid 
    class LM_OPCAN_KOS_Officer2: O_Soldier_F 
    { 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_comet_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_SL2: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_TL2: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Rifleman2: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_GL2: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Medic2: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Marksman2: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_RTO2: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Sniper2: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_AutoRifleman2: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_SAW","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_SAW","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Crewman2: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_KOS_Vest","H_Tank_Black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_KOS_Vest","H_Tank_Black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Rifleman_AT2: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_KOS_Rifleman_AA2: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Breacher2: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Engineer2: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Ard"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    // Koslovic Swamp 
    class LM_OPCAN_KOS_Officer3: O_Soldier_F 
    { 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_comet_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_SL3: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_KOS_Gorka2_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_TL3: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Rifleman3: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_GL3: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Medic3: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Marksman3: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_RTO3: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Sniper3: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_AutoRifleman3: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_SAW","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_SAW","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Crewman3: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_KOS_Vest","H_Tank_Black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_KOS_Vest","H_Tank_Black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Rifleman_AT3: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_KOS_Rifleman_AA3: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Breacher3: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Engineer3: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Swa"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_KOS_Gorka3_uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
// Koslovic Woodland 
    class LM_OPCAN_KOS_Officer4: O_Soldier_F 
    { 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_comet_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_SL4: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_TL4: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Rifleman4: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_GL4: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Medic4: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Marksman4: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_RTO4: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Sniper4: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_AutoRifleman4: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"LM_OPCAN_CTAR_SAW","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"LM_OPCAN_CTAR_SAW","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","100Rnd_580x42_Mag_F","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Crewman4: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_KOS_Vest","H_Tank_Black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_KOS_Vest","H_Tank_Black_F","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Rifleman_AT4: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_KOS_Rifleman_AA4: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Breacher4: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_KOS_Engineer4: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_KOS"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_KOS_Gorka4_uni_Base"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"G_Balaclava_oli","LM_OPCAN_KOS_Vest","LM_OPCAN_KOShelm4","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
// United Rebel Alliance (Woodland) 
    class LM_OPCAN_URA_Officer: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_comet_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_SL: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_TL: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Rifleman: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_GL: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Medic: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Marksman: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_RTO: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Sniper: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_SRS99C_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99C_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_AutoRifleman: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Crewman: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Rifleman_AT: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_URA_Rifleman_AA: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Breacher: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Engineer: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_URA_Uni"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
// United Rebel Alliance (Desert) 
    class LM_OPCAN_URA_Officer_D: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_SL_D: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_TL_D: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Rifleman_D: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_GL_D: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Medic_D: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_D"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Marksman_D: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_D"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_RTO_D: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Sniper_D: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_D"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_SRS99C_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99C_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_AutoRifleman_D: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Crewman_D: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_MTMV_VEST","LM_OPCAN_ACH43","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Rifleman_AT_D: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_URA_Rifleman_AA_D: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Breacher_D: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_Engineer_D: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_D"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_URA_Uni_D"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_UP_Shemagh","LM_OPCAN_MTMV_VEST_D","LM_OPCAN_ACH43_D","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
// Seccessionist Union 
    class LM_OPCAN_SU_Officer: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_SU2_Uni"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_comet_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_BRW_Shemagh","LM_OPCAN_SU_FLAK_VEST","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_BRW_Shemagh","LM_OPCAN_SU_FLAK_VEST","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_SL: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_SU2_Uni"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_TL: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_SU_Uni"; 
		weapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_Rifleman: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_SU_Uni"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_GL: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_SU_Uni"; 
		weapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_Medic: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_SU_Uni"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_Marksman: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_SU2_Uni"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_RTO: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_SU_Uni"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_Sniper: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_SU2_Uni"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_SU_Sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_BRW_UP_Shemagheye","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_SU_Sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_AutoRifleman: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_SU_Uni"; 
		weapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_Crewman: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_SU2_Uni"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_SU_Sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_SU_Sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_Rifleman_AT: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_SU2_Uni"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class LM_OPCAN_SU_Rifleman_AA: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_SU2_Uni"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42_2","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_Breacher: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_SU_Uni"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_SU_Engineer: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_SU"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_SU"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_SU_Uni"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_DES_UP_Shemagh","LM_OPCAN_SU_FLAK_VEST","LM_OPCAN_TP42","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class OPTRE_FC_Elite_Minor: OPTRE_FC_Elite_Undersuit 
	{ 
		scope = 2; 
		scopeCurator = 2; 
		faceType = "Elite"; 
		author = "Article 2 Studios"; 
		displayName = "Sangheili Minor"; 
		linkedItems[] = {"OPTRE_FC_Elite_Armor_Minor","OPTRE_FC_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_Minor","OPTRE_FC_Elite_Helmet_Minor","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		weapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"}; 
		magazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery"}; 
		respawnMagazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery"}; 
	}; 
	class OPTRE_FC_Elite_Major: OPTRE_FC_Elite_Minor 
	{ 
		scope = 2; 
		scopeCurator = 2; 
		author = "Article 2 Studios"; 
		displayName = "Sangheili Major"; 
		linkedItems[] = {"OPTRE_FC_Elite_Armor_Major","OPTRE_FC_Elite_Helmet_Major","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_Major","OPTRE_FC_Elite_Helmet_Major","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		weapons[] = {"OPTRE_FC_T51_Repeater","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_FC_T51_Repeater","Throw","Put"}; 
		magazines[] = {"OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery"}; 
		respawnMagazines[] = {"OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery","OPTRE_FC_T51_Repeater_Battery"}; 
	}; 
	class OPTRE_FC_Elite_SpecOps: OPTRE_FC_Elite_Minor 
	{ 
		scope = 2; 
		scopeCurator = 2; 
		author = "Article 2 Studios"; 
		displayName = "Sangheili Ranger"; 
		linkedItems[] = {"OPTRE_FC_Elite_Armor_SpecOps","OPTRE_FC_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_SpecOps","OPTRE_FC_Elite_Helmet_SpecOps","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		weapons[] = {"OPTRE_FC_T50_SRS","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_FC_T50_SRS","Throw","Put"}; 
		magazines[] = {"OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery"}; 
		respawnMagazines[] = {"OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery","OPTRE_FC_T50_SRS_Battery"}; 
	}; 
	class OPTRE_FC_Elite_Ultra: OPTRE_FC_Elite_Minor 
	{ 
		scope = 2; 
		scopeCurator = 2; 
		author = "Article 2 Studios"; 
		displayName = "Sangheili Ultra"; 
		linkedItems[] = {"OPTRE_FC_Elite_Armor_Ultra","OPTRE_FC_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_Ultra","OPTRE_FC_Elite_Helmet_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		weapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_FC_T51_Carbine","Throw","Put"}; 
		magazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge"}; 
		respawnMagazines[] = {"OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge","OPTRE_FC_T51_Ammo_Cartridge"}; 
	}; 
	class OPTRE_FC_Elite_Zealot: OPTRE_FC_Elite_Ultra 
	{ 
		scope = 2; 
		scopeCurator = 2; 
		author = "Article 2 Studios"; 
		displayName = "Sangheili Zealot"; 
		linkedItems[] = {"OPTRE_FC_Elite_Armor_Zealot","OPTRE_FC_Elite_Helmet_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_Zealot","OPTRE_FC_Elite_Helmet_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		weapons[] = {"OPTRE_FC_T51J_Repeater","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_FC_T51J_Repeater","Throw","Put"}; 
		magazines[] = {"OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery"}; 
		respawnMagazines[] = {"OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery"}; 
	}; 
	class OPTRE_FC_Elite_FieldMarshal: OPTRE_FC_Elite_Zealot 
	{ 
		scope = 2; 
		scopeCurator = 2; 
		author = "Article 2 Studios"; 
		displayName = "Sangheili Field Marshal"; 
		linkedItems[] = {"OPTRE_FC_Elite_Armor_FieldMarshal","OPTRE_FC_Elite_Helmet_FieldMarshal","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_FieldMarshal","OPTRE_FC_Elite_Helmet_FieldMarshal","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
	}; 
	class OPTRE_FC_Elite_HonorGuard: OPTRE_FC_Elite_Zealot 
	{ 
		scope = 2; 
		scopeCurator = 2; 
		author = "Article 2 Studios"; 
		displayName = "Sangheili Honor Guard"; 
		linkedItems[] = {"OPTRE_FC_Elite_Armor_HonorGuard","OPTRE_FC_Elite_Helmet_HonorGuard","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_HonorGuard","OPTRE_FC_Elite_Helmet_HonorGuard","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		weapons[] = {"OPTRE_FC_T25J_Rifle","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_FC_T25J_Rifle","Throw","Put"}; 
		magazines[] = {"OPTRE_FC_T25J_Rifle_Battery","OPTRE_FC_T25J_Rifle_Battery","OPTRE_FC_T25J_Rifle_Battery"}; 
		respawnMagazines[] = {"OPTRE_FC_T25J_Rifle_Battery","OPTRE_FC_T25J_Rifle_Battery","OPTRE_FC_T25J_Rifle_Battery"}; 
	}; 
	class OPTRE_FC_Elite_HonorGuard_Ultra: OPTRE_FC_Elite_Zealot 
	{ 
		scope = 2; 
		scopeCurator = 2; 
		author = "Article 2 Studios"; 
		displayName = "Ves 'Padee"; 
		editorSubcategory = "OPTRE_FC_EditorSubcategory_SangheiliS"; 
		linkedItems[] = {"OPTRE_FC_Elite_Armor_HonorGuard_Ultra","OPTRE_FC_Elite_Helmet_HonorGuard_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_FC_Elite_Armor_HonorGuard_Ultra","OPTRE_FC_Elite_Helmet_HonorGuard_Ultra","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"}; 
		weapons[] = {"OPTRE_FC_T51J_Repeater","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_FC_T51J_Repeater","Throw","Put"}; 
		magazines[] = {"OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery"}; 
		respawnMagazines[] = {"OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery","OPTRE_FC_T51J_Repeater_Battery"}; 
	}; 
    class OPTRE_Ins_BJ_Soldier_Base: OPTRE_UNSC_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		author = "Article 2 Studios"; 
		scope = 1; 
		scopeCurator = 0; 
		faction = "OPTRE_Ins"; 
		side = 0; 
		vehicleClass = "OPTRE_Ins_Man_URF_class"; 
		uniformClass = "OPTRE_Ins_BJ_Undersuit"; 
		model = "\OPTRE_Ins_Units\BJ\uniform.p3d"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"OPTRE_Ins_BJ_Armor","OPTRE_Ins_BJ_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor","OPTRE_Ins_BJ_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		class Wounds 
		{ 
			tex[] = {}; 
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"}; 
		}; 
		editorSubcategory = "OPTRE_EditorSubcategory_MenBJ"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Base: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		author = "Article 2 Studios"; 
		linkedItems[] = {"OPTRE_Ins_BJ_Armor_URB","OPTRE_Ins_BJ_Helmet_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor_URB","OPTRE_Ins_BJ_Helmet_URB","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Scout: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Scout"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_M7S","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7S","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Demolitions: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Demolitions"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		engineer = 1; 
		weapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Grenadier: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Rifleman (HMG38)"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Rifleman_AR: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Rifleman (HMG38)"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Rifleman_BR: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Rifleman (BR55)"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Rifleman_AT: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Rifleman (AT)"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManAT"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Automatic_Rifleman: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Automatic Rifleman"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_M73","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManMG"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Marksman: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Marksman"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_M392_DMR_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Scout_Sniper: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Scout Sniper"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_TeamLeader: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Team Leader"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		backpack = "OPTRE_ANPRC_521_Black"; 
		weapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManLeader"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Corpsman: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		attendant = 1; 
		displayName = "Corpsman"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		weapons[] = {"OPTRE_M7S","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7S","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball"}; 
		icon = "iconManMedic"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_Engineer: OPTRE_Ins_BJ_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		engineer = 1; 
		displayName = "Engineer"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_WDL"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
		icon = "iconManExplosive"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Scout: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Scout"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_M7S","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7S","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Demolitions: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Demolitions"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		engineer = 1; 
		weapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Rifleman_AR: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Rifleman (HMG38)"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Grenadier: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Rifleman (HMG38)"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Rifleman_BR: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Rifleman (BR55)"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Rifleman_AT: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Rifleman (AT)"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put","OPTRE_M41_SSR"}; 
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManAT"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Automatic_Rifleman: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Automatic Rifleman"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_M73","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManMG"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Marksman: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Marksman"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_M392_DMR_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Scout_Sniper: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Scout Sniper"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_TeamLeader: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		displayName = "Team Leader"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		backpack = "OPTRE_ANPRC_521_Black"; 
		weapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManLeader"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Corpsman: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		attendant = 1; 
		displayName = "Corpsman"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		weapons[] = {"OPTRE_M7S","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7S","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball"}; 
		icon = "iconManMedic"; 
	}; 
	class OPTRE_Ins_BJ_Soldier_URB_Engineer: OPTRE_Ins_BJ_Soldier_URB_Base 
	{ 
		dlc = "OPTRE"; 
		engineer = 1; 
		displayName = "Engineer"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF_BJ_URB"; 
        editorsubCategory = "MEU_Men"; 
		weapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_HMG38_Rifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
		respawnMagazines[] = {"OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","OPTRE_40Rnd_30x06_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
		icon = "iconManExplosive"; 
	}; 
    class OPTRE_Ins_ER_soldier_base: I_Soldier_base_F 
	{ 
		dlc = "OPTRE"; 
		scope = 0; 
		faction = "OPTRE_Ins"; 
		side = 0; 
		author = "Article 2 Studios"; 
		displayName = "Innie_Base"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		identityTypes[] = {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO","G_IRAN_default"}; 
		genericNames = "NATOMen"; 
		uniformAccessories[] = {}; 
		nakedUniform = "U_BasicBody"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		hiddenSelections[] = {"camo"}; 
		editorSubcategory = "OPTRE_EditorSubcategory_MenINS"; 
	}; 
	class OPTRE_Ins_ER_Rebel_tan: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 1; 
		displayName = "Ins_Base [Sweater Tan]"; 
		uniformAccessories[] = {}; 
		nakedUniform = "U_BasicBody"; 
		uniformClass = "OPTRE_INS_ER_uniform_GAtan"; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\Data\innie_apparel_tan_CO.paa"}; 
	}; 
	class OPTRE_Ins_ER_Rebel_green: OPTRE_Ins_ER_Rebel_tan 
	{ 
		dlc = "OPTRE"; 
		scope = 1; 
		displayName = "Ins_Base [Sweater Green]"; 
		uniformClass = "OPTRE_INS_ER_uniform_GAgreen"; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\Data\innie_apparel_green_CO.paa"}; 
	}; 
	class OPTRE_Ins_ER_Insurgent_OD: I_G_Soldier_A_F 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Insurgent (OD)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_uniform_GGod"; 
		identityTypes[] = {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO","G_IRAN_default"}; 
		genericNames = "NATOMen"; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo1","camo2"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\Data\innie_garments_od_co.paa","OPTRE_Ins_Units\Data\inne_CombatUniformOD_co.paa"}; 
		editorSubcategory = "OPTRE_EditorSubcategory_MenINS"; 
	}; 
	class OPTRE_Ins_ER_Insurgent_Grey: OPTRE_Ins_ER_Insurgent_OD 
	{ 
		dlc = "OPTRE"; 
		scope = 1; 
		displayName = "Insurgent (Grey)"; 
		uniformClass = "OPTRE_Ins_ER_uniform_GGod"; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\Data\innie_garments_grey_co.paa","OPTRE_Ins_Units\Data\inne_CombatUniformOD_co.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_jacket_surplus_OD: I_G_Soldier_M_F 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Insurgent (Surplus Jacket 1)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_OD"; 
		identityTypes[] = {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO","G_IRAN_default"}; 
		genericNames = "NATOMen"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surplus_OD2.paa"}; 
		editorSubcategory = "OPTRE_EditorSubcategory_MenINS"; 
	}; 
	class OPTRE_Ins_ER_man_jacket_surplus_redshirt: OPTRE_Ins_ER_man_jacket_surplus_OD 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Insurgent (Surplus Jacket 4)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_redshirt"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surplus_redshirt.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_jacket_surplus_brown: OPTRE_Ins_ER_man_jacket_surplus_OD 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Insurgent (Surplus Jacket 5)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_brown"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surplus_brown.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_jacket_brown_surplus: OPTRE_Ins_ER_man_jacket_surplus_OD 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Insurgent (Brown Jacket)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_jacket_brown_surplus"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_brown_surplus.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_jacket_od_surplus: OPTRE_Ins_ER_man_jacket_surplus_OD 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Insurgent (OD Jacket)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_jacket_OD_surplus"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_OD_surplus.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_jacket_surgeon1: OPTRE_Ins_ER_man_jacket_surplus_OD 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Insurgent (Surgeon1)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_jacket_surgeon1"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surgeon1.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_jacket_surgeon2: OPTRE_Ins_ER_man_jacket_surplus_OD 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Insurgent (Surgeon Jacket 2)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_jacket_surgeon2"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_jacket_surgeon2.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_rolled_surplus_black: I_G_Soldier_AR_F 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Rebel (Surplus/Black)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_rolled_surplus_black"; 
		identityTypes[] = {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO","G_IRAN_default"}; 
		genericNames = "NATOMen"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_surplus_black.paa"}; 
		editorSubcategory = "OPTRE_EditorSubcategory_MenINS"; 
	}; 
	class OPTRE_Ins_ER_man_rolled_surplus_crimson: OPTRE_Ins_ER_man_rolled_surplus_black 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Rebel (Surplus/Crimson)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_surplus_crimson.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_rolled_jean_orca: OPTRE_Ins_ER_man_rolled_surplus_black 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Rebel (Jeans/Orca)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_rolled_jean_orca"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_OD_orca.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_rolled_OD_crimson: OPTRE_Ins_ER_man_rolled_surplus_black 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Rebel (OD/Crimson)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_rolled_OD_crimson"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_OD_crimson.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_rolled_OD_blknblu: OPTRE_Ins_ER_man_rolled_surplus_black 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Rebel (OD/Black and Blue)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_rolled_jean_blknblu"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_OD_blknblu.paa"}; 
	}; 
	class OPTRE_Ins_ER_man_rolled_OD_blknred: OPTRE_Ins_ER_man_rolled_surplus_black 
	{ 
		dlc = "OPTRE"; 
		modelSides[] = {0,1,2,3}; 
		side = 0; 
		scope = 1; 
		faction = "OPTRE_Ins"; 
		author = "Article 2 Studios"; 
		displayName = "Rebel (OD/Black and Red)"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_rolled_OD_blknred"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		headgearProbability = 0; 
		allowedHeadgear[] = {}; 
		backpack = ""; 
		hiddenSelections[] = {"camo"}; 
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\er\data\ins_uniform_OD_blknred.paa"}; 
	}; 
	class OPTRE_Ins_ER_Surgeon: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		attendant = 1; 
		displayName = "Surgeon"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		icon = "iconManMedic"; 
		uniformClass = "OPTRE_Ins_ER_jacket_surgeon2"; 
		backpack = "OPTRE_B_TacticalPack_blk_Medic"; 
		weapons[] = {"optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"optre_hgun_sas10_f","Throw","Put"}; 
		linkedItems[] = {"V_BandollierB_blk","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"V_BandollierB_blk","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_ER_Guerilla_AR: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Guerilla (MA5)"; 
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_redshirt"; 
		linkedItems[] = {"V_Chestrig_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"V_Chestrig_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		weapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_ER_Insurgent_BR: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Hunter"; 
		uniformClass = "OPTRE_Ins_ER_uniform_GGgrey"; 
		linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		weapons[] = {"OPTRE_M392_DMR_ScopedRifle","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","Throw","Put"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_ER_Rebel_AT: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Rebel (AT)"; 
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_OD"; 
		backpack = "OPTRE_B_TacticalPack_blk_M41"; 
		linkedItems[] = {"V_BandollierB_blk","H_Bandanna_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"V_BandollierB_blk","H_Bandanna_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT_G","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT_G","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManAT"; 
	}; 
	class OPTRE_Ins_ER_Farmer: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Farmer (M45)"; 
		uniformClass = "OPTRE_Ins_ER_jacket_brown_surplus"; 
		linkedItems[] = {"V_BandollierB_blk","H_cap_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"V_BandollierB_blk","H_cap_red","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		weapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
	}; 
	class OPTRE_Ins_ER_Deserter_GL: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Deserter (GL MA5B)"; 
		uniformClass = "OPTRE_Ins_ER_rolled_surplus_crimson"; 
		linkedItems[] = {"V_BandollierB_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		respawnLinkedItems[] = {"V_BandollierB_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		weapons[] = {"OPTRE_MA5AGL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA5AGL","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
	}; 
	class OPTRE_Ins_ER_Deserter_GL_Light: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Deserter (GL M319)"; 
		uniformClass = "OPTRE_Ins_ER_jacket_brown_surplus"; 
		linkedItems[] = {"V_BandollierB_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		respawnLinkedItems[] = {"V_BandollierB_blk","OPTRE_Ins_URF_Helmet3","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		weapons[] = {"OPTRE_M319","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M319","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
	}; 
	class OPTRE_Ins_ER_Militia_MG: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Militia (MG)"; 
		uniformClass = "OPTRE_Ins_ER_rolled_OD_blknblu"; 
		backpack = "OPTRE_B_TacticalPack_blk_M73"; 
		linkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","H_Bandanna_khk_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"OPTRE_UNSC_M52A_Armor_Soft","H_Bandanna_khk_hs","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		weapons[] = {"OPTRE_M73","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73","Throw","Put"}; 
		magazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManMG"; 
	}; 
	class OPTRE_Ins_ER_Assassin: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Assassin"; 
		uniformClass = "OPTRE_Ins_ER_rolled_surplus_black"; 
		linkedItems[] = {"V_Chestrig_blk","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"}; 
		respawnLinkedItems[] = {"V_Chestrig_blk","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"}; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_ER_Terrorist: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Terrorist"; 
		backpack = "OPTRE_B_TacticalPack_blk_Demo"; 
		uniformClass = "OPTRE_Ins_ER_rolled_jean_orca"; 
		linkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"V_BandollierB_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		engineer = 1; 
		weapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"}; 
		icon = "iconManExplosive"; 
	}; 
	class OPTRE_Ins_ER_Hacker: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Hacker"; 
		backpack = "OPTRE_ANPRC_515"; 
		uniformClass = "OPTRE_Ins_ER_rolled_jean_orca"; 
		linkedItems[] = {"V_BandollierB_blk","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"V_BandollierB_blk","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		engineer = 1; 
		weapons[] = {"OPTRE_M7","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M7","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_ER_Unarmed: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Unarmed"; 
		uniformClass = "OPTRE_Ins_ER_jacket_surplus_OD"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
	}; 
	class OPTRE_Ins_ER_Warlord: OPTRE_Ins_ER_soldier_base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
        editorCategory = "MEU_ER"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Warlord"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		uniformClass = "OPTRE_Ins_ER_jacket_od_surplus"; 
		linkedItems[] = {"V_BandollierB_blk","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"}; 
		respawnLinkedItems[] = {"V_BandollierB_blk","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"}; 
		weapons[] = {"optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"optre_hgun_comet_f","Throw","Put"}; 
		magazines[] = {"4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull4rnd_454casull","4rnd_454casull","4rnd_454casull","OPTRE_M2_Smoke"}; 
		icon = "iconManOfficer"; 
	}; 
	class OPTRE_Ins_URF_Soldier_Base: OPTRE_UNSC_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		author = "Article 2 Studios"; 
		scope = 1; 
		scopeCurator = 0; 
		faction = "OPTRE_Ins"; 
		side = 0; 
		vehicleClass = "OPTRE_Ins_Man_URF_class"; 
		uniformClass = "OPTRE_Ins_URF_Combat_Uniform"; 
		model = "\OPTRE_Ins_Units\URF\uniform.p3d"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
		linkedItems[] = {"OPTRE_Ins_URF_Armor1","OPTRE_Ins_URF_Helmet1","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_Ins_URF_Armor1","OPTRE_Ins_URF_Helmet1","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		class Wounds 
		{ 
			tex[] = {}; 
			mat[] = {"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"}; 
		}; 
		editorSubcategory = "OPTRE_EditorSubcategory_MenURF"; 
	}; 
    class OPTRE_Ins_URF_TeamLead: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Team Leader"; 
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"}; 
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"}; 
		icon = "iconManLeader"; 
	}; 
	class OPTRE_Ins_ER_MAdvisor: OPTRE_Ins_URF_TeamLead 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
        scopeCurator = 2; 
		displayName = "Militia Advisor"; 
		vehicleClass = "OPTRE_Ins_Man_ER_class"; 
		icon = "iconManLeader"; 
	}; 
	class OPTRE_Ins_URF_Medic: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Medic"; 
		attendant = 1; 
		icon = "iconManMedic"; 
		backpack = "OPTRE_B_TacticalPack_blk_Medic"; 
		weapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"}; 
	}; 
	class OPTRE_Ins_URF_Radioman: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Radio Operator"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_Pilot: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		author = "Article 2 Studios"; 
		displayName = "Pilot"; 
		weapons[] = {"optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_Rifleman_SMG: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Rifleman (M7)"; 
		weapons[] = {"OPTRE_M7","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_Rifleman_AR: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Rifleman (MA5)"; 
		weapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_Rifleman_BR: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Rifleman (BR55)"; 
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","Throw","Put"}; 
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_Rifleman_AT: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Rifleman (AT)"; 
		backpack = "OPTRE_B_TacticalPack_blk_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManAT"; 
	}; 
	class OPTRE_Ins_URF_Rifleman_Light: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Rifleman (Light)"; 
		linkedItems[] = {"OPTRE_Ins_URF_Armor1","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"}; 
		respawnLinkedItems[] = {"OPTRE_Ins_URF_Armor1","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"}; 
		weapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_AT_Specialist: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "AT Specialist"; 
		backpack = "OPTRE_B_TacticalPack_blk_M41G"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M2_Smoke"}; 
		icon = "iconManAT"; 
	}; 
	class OPTRE_Ins_URF_AA_Specialist: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "AA Specialist"; 
		backpack = "OPTRE_B_TacticalPack_blk_M41G"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR_G"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke"}; 
		icon = "iconManAT"; 
	}; 
	class OPTRE_Ins_URF_Engineer: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Engineer"; 
		engineer = 1; 
		backpack = "OPTRE_B_TacticalPack_blk_Demo"; 
		weapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		icon = "iconManEngineer"; 
	}; 
	class OPTRE_Ins_URF_Breacher: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Breacher"; 
		weapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
	}; 
	class OPTRE_Ins_URF_SquadLead: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Squad Leader"; 
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"}; 
		icon = "iconManLeader"; 
	}; 
	class OPTRE_Ins_URF_Grenadier: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Grenadier"; 
		weapons[] = {"OPTRE_MA5AGL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA5AGL","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
	}; 
	class OPTRE_Ins_URF_Grenadier_Light: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Grenadier M319"; 
		weapons[] = {"OPTRE_M319","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M319","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"}; 
	}; 
	class OPTRE_Ins_URF_Autorifleman: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Autorifleman"; 
		backpack = "OPTRE_B_TacticalPack_blk_M73"; 
		weapons[] = {"OPTRE_M73","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73","Throw","Put"}; 
		magazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_100Rnd_95x40_Box_Tracer_Yellow","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		icon = "iconManMG"; 
	}; 
	class OPTRE_Ins_URF_Assist_Autorifleman: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Assistant Autorifleman"; 
		backpack = "OPTRE_B_TacticalPack_blk_M73"; 
		weapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA5A","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow","OPTRE_60Rnd_762x51_Mag_Tracer_Yellow"}; 
	}; 
	class OPTRE_Ins_URF_Marksman: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Designated Marksman"; 
		weapons[] = {"OPTRE_M392_DMR_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M392_DMR_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","OPTRE_15Rnd_762x51_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_Sniper: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Sniper"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_Observer: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Observer"; 
		Items[] = {"OPTRE_Biofoam","Item_Laserdesignator"}; 
		RespawnItems[] = {"OPTRE_Biofoam","Item_Laserdesignator"}; 
		weapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_BR55HB_ScopedRifle","optre_hgun_sas10_f","Throw","Put"}; 
		magazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"}; 
		respawnMagazines[] = {"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","OPTRE_36Rnd_95x40_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"}; 
	}; 
	class OPTRE_Ins_URF_Crewman: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Crewman"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		linkedItems[] = {"OPTRE_Ins_URF_Armor1","OPTRE_Ins_URF_Helmet2","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"}; 
		respawnlinkedItems[] = {"OPTRE_Ins_URF_Armor1","OPTRE_Ins_URF_Helmet2","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"}; 
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_Demolitions: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Demolitions"; 
		engineer = 1; 
		backpack = "OPTRE_B_TacticalPack_blk_Demo"; 
		weapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"}; 
		icon = "iconManExplosive"; 
	}; 
	class OPTRE_Ins_URF_UAV_Op: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "UAV Operator"; 
		backpack = "O_UAV_01_backpack_F"; 
		uavHacker = 1; 
		weapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_m45","Throw","Put","optre_hgun_sas10_f"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"}; 
	}; 
	class OPTRE_Ins_URF_Unarmed: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Unarmed"; 
		weapons[] = {"Throw","Put"}; 
		respawnWeapons[] = {"Throw","Put"}; 
		magazines[] = {}; 
		respawnMagazines[] = {}; 
	}; 
	class OPTRE_Ins_URF_Officer: OPTRE_Ins_URF_Soldier_Base 
	{ 
		dlc = "OPTRE"; 
		scope = 2; 
		scopeCurator = 2; 
        editorCategory = "MEU_URF"; 
        editorsubCategory = "MEU_Men"; 
		displayName = "Officer"; 
		linkedItems[] = {"OPTRE_Ins_URF_Armor1","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		respawnLinkedItems[] = {"OPTRE_Ins_URF_Armor1","H_beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"}; 
		weapons[] = {"OPTRE_M7","optre_hgun_comet_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_comet_f","Throw","Put"}; 
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","4rnd_454casull","4rnd_454casull","4rnd_454casull","OPTRE_M2_Smoke"}; 
		respawnMagazines[] = {"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow","4rnd_454casull","4rnd_454casull","4rnd_454casull","OPTRE_M2_Smoke"}; 
		icon = "iconManOfficer"; 
	}; 
// BattleJumper URA 
    class MEU_URA_BJ_Officer: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Officer"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_SL: O_Soldier_SL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Squad Leader"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_TL: O_Soldier_TL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA"; 
		backpack = "OPTRE_UNSC_Rucksack"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Team Leader"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_Rifleman: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_GL: O_Soldier_GL_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Grenadier"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_MA32GL","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","OPTRE_32rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_Medic: O_Medic_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Corpsman"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		attendant = 1; 
		backpack = "OPTRE_UNSC_Rucksack_Medic_Filled"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_Marksman: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "marksman"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M295_BMR","OPTRE_M6G","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		respawnMagazines[] = {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_RTO: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "RTO Operator"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		backpack = "OPTRE_ANPRC_521_URF"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class LM_OPCAN_URA_BJ_Sniper: O_Soldier_M_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Sniper"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_SRS99D_SC_LS","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_AutoRifleman: O_Soldier_AR_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "AutoRifleman"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M73_AC","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_Crewman: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Crewman"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		respawnWeapons[] = {"OPTRE_M7","optre_hgun_sas10_f","Throw","Put"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","OPTRE_48Rnd_5x23mm_Mag_FMJ","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_Rifleman_AT: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AT)"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
    class MEU_URA_BJ_Rifleman_AA: O_Soldier_LAT_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Rifleman (AA)"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		backpack = "OPTRE_UNSC_Rucksack_M41"; 
		weapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		respawnWeapons[] = {"Throw","Put","OPTRE_M41_SSR"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		respawnMagazines[] = {"OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","Chemlight_green","Chemlight_green","OPTRE_M9_Frag","OPTRE_M9_Frag"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_Breacher: O_Soldier_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Breacher"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	}; 
	class MEU_URA_BJ_Engineer: O_Engineer_F 
	{ 
		author = "J.Burgess"; 
		faction = "LM_OPCAN_URA_BJ"; 
		backpack = "OPTRE_UNSC_Rucksack_Heavy_Demo"; 
		engineer = 1; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_URA_BJ"; 
        editorsubCategory = "MEU_Men"; 
		identityTypes[] = {"LanguageENG_F","NoGlassesï»¿","Head_NATO"}; 
		displayName = "Engineer"; 
		uniformClass = "LM_OPCAN_Battlejumper_Uni"; 
		weapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		respawnWeapons[] = {"OPTRE_M45","Throw","Put","optre_hgun_sas10_f"}; 
		Items[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		RespawnItems[] = {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_Biofoam"}; 
		magazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		respawnMagazines[] = {"16rnd_10mm_ball","16rnd_10mm_ball","16rnd_10mm_ball","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug","OPTRE_6Rnd_8Gauge_Pellet","OPTRE_6Rnd_8Gauge_Slug"}; 
		linkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
		respawnLinkedItems[] = {"LM_OPCAN_URB_UP_Shemagh","LM_OPCAN_Battlejumper_VEST","LM_OPCAN_TH56","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
	};