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
	class OPTRE_6Rnd_8Gauge_Slugs;
    
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
		mass = 100;
		tracersEvery = 2;
		lastRoundsTracer = 1;
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
		mass = 100;
		tracersEvery = 2;
		lastRoundsTracer = 1;
	};
	
	class OPTRE_6Rnd_8Gauge_Pellets: 2Rnd_12Gauge_Pellets
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ammo = "OPTRE_B_8Gauge_Pellet";
		displayname = "6Rnd 8 Gauge Pellets";
		displayNameShort = "8 Gauge Pellets";
		descriptionShort = "6 Rounds<br>8 Gauge<br>Pellets";
		
		// Overwriting of the OPTRE classes back to the inherited...
		initSpeed = 500;
		
		model = "\OPTRE_Weapons\Shotgun\Shell_mag_S";
		picture = "\a3\weapons_F\data\ui\m_12gauge_ca";
	};
	
	class OPTRE_12Rnd_8Gauge_Pellets: OPTRE_6Rnd_8Gauge_Pellets
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		
		count = 12;
		mass = 20;
		displayname = "12Rnd 8 Gauge Pellets";
		descriptionShort = "12 Rounds<br>8 Gauge<br>Pellets";
	};
	
	class OPTRE_6Rnd_8Gauge_Beanbags: OPTRE_6Rnd_8Gauge_Slugs
	{
		dlc = "SO";
		author = "Fireteam Zulu";
		scope = 2;
		scopeArsenal = 2;
		
		ammo = "OPTRE_B_8Gauge_Beanbags";
		displayname = "6Rnd 8 Gauge Beanbags";
		displayNameShort = "8 Gauge Beanbags";
		descriptionShort = "6 Rounds<br>8 Gauge<br>Beanbags";
	};
	
	class OPTRE_12Rnd_8Gauge_Beanbags: OPTRE_6Rnd_8Gauge_Beanbags
	{
		dlc	= "SO";
		author = "Fireteam Zulu";
		
		count = 12;
		mass = 20;
		displayname = "12Rnd 8 Gauge Beanbags";
		descriptionShort = "12 Rounds<br>8 Gauge<br>Beanbags";
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
};
	
// Ammo Reballance
	
class CfgAmmo
{
	class OPTRE_B_5x23_Caseless;
	class OPTRE_B_762x51_Ball;
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;
	class OPTRE_B_95x40_Ball;
	class OPTRE_B_127x40_Ball;
	class OPTRE_B_8Gauge_Slug;
	
	class OPTRE_B_5x23_Caseless_JHP: OPTRE_B_5x23_Caseless
	{
		caliber	= 0.25;
		hit = 14;
		typicalSpeed = 380;
	};
	
	class OPTRE_B_762x51_JHP: OPTRE_B_762x51_Ball
	{
		caliber = 0.4;
		hit = 18;
		typicalSpeed = 860;
	};
	
	class OPTRE_B_95x40_JHP: OPTRE_B_95x40_Ball
	{
		caliber = .75;
		hit = 20;
		typicalSpeed = 1000;
	};
	
	class OPTRE_B_8Gauge_Pellet: B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo = "OPTRE_B_8Gauge_Pellet_Submunition";
		thrust = 20;
		triggerTime = 0.001;
	};

	class OPTRE_B_8Gauge_Beanbags: OPTRE_B_8Gauge_Slug
	{
		hit = 0.1;
		typicalspeed = 350;
	};

	class OPTRE_B_8Gauge_Pellet_Submunition: B_12Gauge_Pellets_Submunition_Deploy
	{
		hit = 8;
	};
};
 
	