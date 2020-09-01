class CfgAmmo
{
	class ammo_Missile_CruiseBase;
	class OPTRE_B_5x23_Caseless;
	class OPTRE_B_762x51_Ball;
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;
	class OPTRE_B_95x40_Ball;
	class OPTRE_B_127x40_Ball;
	class OPTRE_B_8Gauge_Slug;
	class G_40mm_HE;
	
	class Optre_ammo_Missile_Cruise_01: ammo_Missile_CruiseBase
	{
		cameraViewAvailable = 1;
		model = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		proxyShape = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 1600;
			descendDistance = 3200;
			minDistance = 800;
			ascendAngle = 20;
		};
	};
		
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
	
	class MEU_B_8Gauge_Pellet: B_12Gauge_Pellets_Submunition
	{
		submunitionAmmo = "MEU_B_8Gauge_Pellet_Submunition";
		thrust = 20;
		triggerTime = 0.001;
	};

	class OPTRE_B_8Gauge_Beanbags: OPTRE_B_8Gauge_Slug
	{
		hit = 0.1;
		typicalspeed = 350;
	};

	class MEU_B_8Gauge_Pellet_Submunition: B_12Gauge_Pellets_Submunition_Deploy
	{
		hit = 8;
	};
	
	class OPTRE_B_762x51_DMR_AP: OPTRE_B_762x51_Ball
	{
		caliber						= 4;
		hit 						= 22;
		typicalSpeed				= 1150;
	};

	class OPTRE_B_762x51_DMR_APT: OPTRE_B_762x51_DMR_AP
	{
		model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};

	class OPTRE_B_762x51_DMR_FS: OPTRE_B_762x51_Ball
	{
		airFriction					= 0;
		caliber						= 3;
		hit 						= 18;
		typicalSpeed				= 1200;
		sideairFriction				= 0;
	};

	class OPTRE_B_762x51_DMR_FST: OPTRE_B_762x51_Ball
	{
		model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};

	class OPTRE_B_762x51_DMR_JHP: OPTRE_B_762x51_Ball
	{
		caliber						= 1;
		hit 						= 26;
		typicalSpeed				= 1050;
	};

	class OPTRE_B_762x51_DMR_JHPT: OPTRE_B_762x51_DMR_JHP
	{
		model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};

	class OPTRE_B_762x51_DMR_SS: OPTRE_B_762x51_Ball
	{
		hit 						= 26;
		typicalSpeed				= 343;
	};

	class OPTRE_B_762x51_DMR_SST: OPTRE_B_762x51_DMR_SS
	{
		model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	
	class MEU_40mm_HE:G_40mm_HE
	{
		hit = 80;
		indirecthit = 60;
		indirecthitrange = 8;
		timeToLive = 4;
	};
	
	class MEU_40mm_HEDP:MEU_40mm_HE
	{
		hit = 220;
		indirectHit = 100;
		indirectHitRange = 10;
		caliber = 4;
		warheadName = "HEAT";
	};
};