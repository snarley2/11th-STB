class CfgMagazines
{
	
    class OPTRE_60Rnd_762x51_Mag;
    class B_127x99_Ball;
	class OPTRE_B_127x99_HE;
    class 150Rnd_762x51_Box;
    class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_Smoke_white;
	class 8Rnd_82mm_Mo_Flare_white;
	class 8Rnd_82mm_Mo_guided;
	class 8Rnd_82mm_Mo_LG;
	class 2Rnd_12Gauge_Pellets;
	class OPTRE_6Rnd_8Gauge_Slug;
	class OPTRE_15Rnd_762x51_Mag;
	class 1Rnd_HE_Grenade_shell;
    class CA_Magazine;
    class OPTRE_M9_Frag;
    class ACE_CTS9;
    class M168_Remote_Mag;
    
    class OPTRE_100Rnd_762x51_Box: OPTRE_60Rnd_762x51_Mag
	{
		ace_isbelt = 1;
	};
	
	class OPTRE_100Rnd_762x51_Box_Tracer: OPTRE_100Rnd_762x51_Box
	{
		ace_isbelt = 1;
	};
	
	class OPTRE_100Rnd_762x51_Box_Tracer_Yellow: OPTRE_100Rnd_762x51_Box_Tracer
	{
		ace_isbelt = 1;
	};
	
	class OPTRE_400Rnd_762x51_Box_Tracer: OPTRE_100Rnd_762x51_Box_Tracer
	{
		ace_isbelt = 1;
	};
	
    class OPTRE_100Rnd_95x40_Box: 150Rnd_762x51_Box
	{
		ace_isbelt = 1;
	};
	
	class OPTRE_100Rnd_95x40_Box_Tracer: OPTRE_100Rnd_95x40_Box
	{
		ace_isbelt = 1;
	};
	
	class OPTRE_100Rnd_95x40_Box_Tracer_Yellow: OPTRE_100Rnd_95x40_Box_Tracer
	{
		ace_isbelt = 1;
	};
	
	class OPTRE_200Rnd_95x40_Box: OPTRE_100Rnd_95x40_Box
	{
		ace_isbelt = 1;
	};
	
	class OPTRE_200Rnd_95x40_Box_Tracer: OPTRE_200Rnd_95x40_Box
	{
		ace_isbelt = 1;
	};
	
	class OPTRE_200Rnd_95x40_Box_Tracer_Yellow: OPTRE_200Rnd_95x40_Box_Tracer
	{
		ace_isbelt = 1;
	};
   
    class OPTRE_100Rnd_127x99_M250HMG: OPTRE_100Rnd_762x51_Box
	{
		dlc = "OPTRE";
        author = "[1stMEU] Oneill";
        ace_isbelt = 1;
		model = "\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname = "100Rnd 12.7x99mm Box Magazine";
		displaynameshort = "12.7x99mm";
		ammo = "B_127x99_Ball";
		count = 100;
		initspeed = 900;
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort = "100 Round Box Magazine<br>12.7x99mm";
		mass = 80;
		tracersEvery = 4;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_100Rnd_127x99_HE_M250HMG: OPTRE_100Rnd_762x51_Box
	{
		dlc = "OPTRE";
        author = "[1stMEU] Oneill";
        ace_isbelt = 1;
		model = "\OPTRE_Weapons\MG\magazine_1.p3d";
		displayname = "100Rnd 12.7x99mm HE Box Magazine";
		displaynameshort = "12.7x99mm HE";
		ammo = "OPTRE_B_127x99_HE";
		count = 100;
		initspeed = 900;
		picture = "\OPTRE_Weapons\MG\icons\magazine.paa";
		descriptionshort = "100 Round Box Magazine<br>12.7x99mm";
		mass = 80;
		tracersEvery = 4;
		lastRoundsTracer = 5;
	};
	
	class OPTRE_6Rnd_8Gauge_Pellet: 2Rnd_12Gauge_Pellets
	{
		scope = 2;
		scopeArsenal = 2;
		ammo = "MEU_B_8Gauge_Pellet";
		displayname = "6Rnd 8 Gauge Pellets";
		displayNameShort = "8 Gauge Pellets";
		descriptionShort = "6 Rounds<br>8 Gauge test<br>Pellets";
		// Overwriting of the OPTRE classes back to the inherited...
		initSpeed = 500;
		model = "\OPTRE_Weapons\Shotgun\Shell_mag_S";
		picture = "\a3\weapons_F\data\ui\m_12gauge_ca";
	};
	
	class OPTRE_12Rnd_8Gauge_Pellet: OPTRE_6Rnd_8Gauge_Pellet
	{
        scope = 2;
		scopeArsenal = 2;
		count = 12;
		mass = 20;
		displayname = "12Rnd 8 Gauge Pellets";
		descriptionShort = "12 Rounds<br>8 Gauge test<br>Pellets";
	};
	
	class OPTRE_6Rnd_8Gauge_Beanbag: OPTRE_6Rnd_8Gauge_Slug
	{
		scope = 2;
		scopeArsenal = 2;
		ammo = "OPTRE_B_8Gauge_Beanbags";
		displayname = "6Rnd 8 Gauge Beanbags";
		displayNameShort = "8 Gauge Beanbags";
		descriptionShort = "6 Rounds<br>8 Gauge test<br>Beanbags";
	};
	class OPTRE_12Rnd_8Gauge_Beanbag: OPTRE_6Rnd_8Gauge_Beanbag
	{
        scope = 2;
		scopeArsenal = 2;
		count = 12;
		mass = 20;
		displayname = "12Rnd 8 Gauge Beanbags";
		descriptionShort = "12 Rounds<br>8 Gauge test<br>Beanbags";
	};
	
	class ACE_1Rnd_82mm_Mo_HE: 8Rnd_82mm_Mo_shells 
	{
		mass = 35;
	};
	
	class ACE_1Rnd_82mm_Mo_Smoke: 8Rnd_82mm_Mo_Smoke_white 
	{
		mass = 35;
	};
	
	class ACE_1Rnd_82mm_Mo_Illum: 8Rnd_82mm_Mo_Flare_white 
	{
		mass = 35;
	};
	
	class ACE_1Rnd_82mm_Mo_HE_Guided: 8Rnd_82mm_Mo_guided 
	{
		mass = 35;
	};
	
	class ACE_1Rnd_82mm_Mo_HE_LaserGuided: 8Rnd_82mm_Mo_LG 
	{
		mass = 35;
	};
		
	class OPTRE_15Rnd_DMR_762x51_Mag_AP: OPTRE_15Rnd_762x51_Mag
	{
		dlc							= "SO";
		author						= "Fireteam Zulu";
		scope						= 2;
		scopeArsenal				= 2;
		
		initspeed 					= 1150;
		ammo 						= "OPTRE_B_762x51_DMR_AP";
		displayname 				= "15Rnd 7.62x51mm DMR AP Magazine";
		displaynameshort 			= "7.62x51mm AP";
		descriptionShort			= "15 Round Magazine<br>7.62x51mm<br>Armor-Piercing";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_APT: OPTRE_15Rnd_DMR_762x51_Mag_AP
	{
		dlc							= "SO";
		author						= "Fireteam Zulu";
		
		tracersEvery				= 1;
		
		ammo 						= "OPTRE_B_762x51_DMR_APT";
		displayname 				= "15Rnd 7.62x51mm DMR AP Magazine (Tracer)";
		displaynameshort 			= "7.62x51mm AP Tracer";
		descriptionShort			= "15 Round Magazine<br>7.62x51mm<br>Armor-Piercing<br>Tracers";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_JHP: OPTRE_15Rnd_762x51_Mag
	{
		dlc							= "SO";
		author						= "Fireteam Zulu";
		scope						= 2;
		scopeArsenal				= 2;
		
		initspeed 					= 1050;
		ammo 						= "OPTRE_B_762x51_DMR_JHP";
		displayname 				= "15Rnd 7.62x51mm DMR JHP Magazine";
		displaynameshort 			= "7.62x51mm JHP";
		descriptionShort			= "15 Round Magazine<br>7.62x51mm<br>Jacketed Hollow-Point";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_JHPT: OPTRE_15Rnd_DMR_762x51_Mag_JHP
	{
		dlc							= "SO";
		author						= "Fireteam Zulu";
		
		tracersEvery				= 1;
		
		ammo 						= "OPTRE_B_762x51_DMR_JHPT";
		displayname 				= "15Rnd 7.62x51mm DMR JHP Magazine (Tracer)";
		displaynameshort 			= "7.62x51mm JHP Tracer";
		descriptionShort			= "15 Round Magazine<br>7.62x51mm<br>Jacketed Hollow-Point<br>Tracers";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_SS: OPTRE_15Rnd_762x51_Mag
	{
		dlc							= "SO";
		author						= "Fireteam Zulu";
		scope						= 2;
		scopeArsenal				= 2;
		
		initspeed 					= 340;
		ammo 						= "OPTRE_B_762x51_DMR_SS";
		displayname 				= "15Rnd 7.62x51mm DMR SS Magazine";
		displaynameshort 			= "7.62x51mm SS";
		descriptionShort			= "15 Round Magazine<br>7.62x51mm<br>Subsonic";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_SST: OPTRE_15Rnd_DMR_762x51_Mag_SS
	{
		dlc							= "SO";
		author						= "Fireteam Zulu";
		
		tracersEvery				= 1;
		
		ammo 						= "OPTRE_B_762x51_DMR_SST";
		displayname 				= "15Rnd 7.62x51mm DMR SS Magazine (Tracer)";
		displaynameshort 			= "7.62x51mm SS Tracer";
		descriptionShort			= "15 Round Magazine<br>7.62x51mm<br>Subsonic<br>Tracers";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_FS: OPTRE_15Rnd_762x51_Mag
	{
		dlc							= "SO";
		author						= "Fireteam Zulu";
		scope						= 2;
		scopeArsenal				= 2;
		
		initspeed 					= 1200;
		ammo 						= "OPTRE_B_762x51_DMR_FS";
		displayname 				= "15Rnd 7.62x51mm DMR FS Magazine";
		displaynameshort 			= "7.62x51mm FS";
		descriptionShort			= "15 Round Magazine<br>7.62x51mm<br>Fin-Stabalized";
	};

	class OPTRE_15Rnd_DMR_762x51_Mag_FST: OPTRE_15Rnd_DMR_762x51_Mag_FS
	{
		dlc							= "SO";
		author						= "Fireteam Zulu";
		
		tracersEvery				= 1;
		
		ammo 						= "OPTRE_B_762x51_DMR_FST";
		displayname 				= "15Rnd 7.62x51mm DMR FS Magazine (Tracer)";
		displaynameshort 			= "7.62x51mm FS Tracer";
		descriptionShort			= "15 Round Magazine<br>7.62x51mm<br>Fin-Stabalized<br>Tracers";
	};
	
	class 1Rnd_HE_MEU_shell:1Rnd_HE_Grenade_shell
	{
		author = "1stMEUKestrelOneill";
		displayName = "M301 1 Rnd 40mm HE Shell";
		displayNameShort = "1Rnd 40mm HE";
		descriptionShort = "40mm High Explosive Rifle Grenade";
		initSpeed = 100;
		ammo = "MEU_40mm_HE";
		fuseDistance = 3;
		mass = 7;
	};
		
	class 3Rnd_HE_MEU_shell:1Rnd_HE_MEU_shell
	{
		author = "1stMEUKestrelOneill";
		displayname = "M301 3 Rnd 40mm HE Shell";
		displayNameShort = "3Rnd 40mm HE";
		count = 3;
		mass = 21;
	};
	
	class 1Rnd_HEDP_MEU_shell:1Rnd_HE_MEU_shell
	{
		author = "1stMEUKestrelOneill";
		displayName = "M301 1 Rnd 40mm HEDP Shell";
		displayNameShort = "1Rnd 40mm HEDP";
		descriptionShort = "40mm Dual-Purpose Rifle Grenade";
		initspeed = 100;
		ammo = "MEU_40mm_HEDP";
		mass = 21;
	};
    class MEU_c7_remote_throwable_Mag : OPTRE_M9_Frag
    {
        author = "1st MEU Mark"
        scope = 2;
        scopeArsenal = 2;
        displayName = "[1st MEU] Throwable C7";
		ammo = "MEU_c7_remote_ammo_thrown";
		model = "\OPTRE_Weapons\charges\C7Can.p3d";
		picture = "\OPTRE_weapons\charges\icons\c7.paa";
		mass = 8;
        descriptionShort = "An explosive and a detonator stuck together with gum";
		displayNameShort = "C7";
        initSpeed = 15;
    };
    class MEU_c12_remote_throwable_Mag : OPTRE_M9_Frag
    {
        author = "1st MEU Mark"
        scope = 2;
        scopeArsenal = 2;
        displayName = "[1st MEU] Throwable C12";
		ammo = "MEU_c12_remote_ammo_thrown";
		model = "\OPTRE_Weapons\charges\c12G.p3d";
		picture = "\OPTRE_weapons\charges\icons\c12.paa";
		mass = 12;
        descriptionShort = "An explosive wand a detonator stuck together with gum";
		displayNameShort = "C12";
        initSpeed = 9;
    };
    class MEU_9bang_Mag : ACE_CTS9
    {
        author = "1st MEU Mark"
        scope = 2;
        scopeArsenal = 2;
        displayName = "[1st MEU] Praetorian 9 Bang";
        descriptionShort = "ODSTs shouldn't play with grenades";
		displayNameShort = "P9B";
    };
    class MEU_C168_Mag : OPTRE_M9_Frag
    {
        author = "1st MEU Mark"
        scope = 2;
        scopeArsenal = 2;
        displayName = "[1st MEU] Throwable M168";
		ammo = "MEU_C168_ammo_thrown";
		model = "\OPTRE_Weapons\charges\c12G.p3d";
		picture = "\OPTRE_weapons\charges\icons\m168.paa";
		mass = 40;
        descriptionShort = "An explosive and a detonator stuck together with gum";
		displayNameShort = "M168";
        initSpeed = 9;
    };
};