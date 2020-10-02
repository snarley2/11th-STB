class CfgAmmo
{
	class ammo_Missile_CruiseBase;
	class OPTRE_B_5x23_Caseless;
	class OPTRE_B_762x51_Ball;
	class B_12Gauge_Pellets_Submunition;
	class B_12Gauge_Pellets_Submunition_Deploy;
	class OPTRE_B_95x40_Ball;
	class OPTRE_B_127x40_Ball;
    class B_12Gauge_Slug;
	class G_40mm_HE;
    class CA_Magazine;
	class SatchelCharge_Remote_Mag;
	class ATMine_Range_Mag;
	class C12_Remote_Mag;
    class C7_Remote_Mag;
    class M168_Remote_Mag;
    class OPTRE_G_M9_Frag;
	
    // code name LMAO
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
    // end codename LMAO
	
    // throwable stuff dont forget the ace funtion numb nuts
    class MEU_c7_remote_ammo_thrown : OPTRE_G_M9_Frag
    {
        scope = 1;
        hit = 3000;
		indirectHit = 2500;
		indirectHitRange = 0.7;
		defaultMagazine = "MEU_c7_remote_throwableMag";
		model = "\OPTRE_Weapons\charges\C7Can.p3d";
        timeToLive = 15;
        fuseDistance = 0;
        explosionTime = 7;
        ExplosionEffects = "DirectionalMineExplosion";
		CraterEffects = "";
		craterShape = "\A3\weapons_f\empty.p3d";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet","BigIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
		whistleDist = 10;
        initSpeed = 15;
        pullPinSound[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,50};
    };
    class MEU_c12_remote_ammo_thrown : OPTRE_G_M9_Frag
    {
        scope = 1;
        hit = 6500;
		indirectHit = 6000;
		indirectHitRange = 5;
		defaultMagazine = "MEU_c12_remote_throwableMag";
		model = "\OPTRE_Weapons\charges\c12g.p3d";
        timeToLive = 15;
        fuseDistance = 0;
        explosionTime = 12;
        deflectionSlowDown = 0.1;
        ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet","BigIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
        whistleDist = 10;
        initSpeed = 9;
        pullPinSound[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,50};
    };
    class MEU_m168_remote_ammo_thrown : OPTRE_G_M9_Frag
    {
        scope = 1;
        hit = 9500;
		indirectHit = 8500;
		indirectHitRange = 10;
		defaultMagazine = "MEU_m168_remote_throwableMag"; 
		model = "\OPTRE_Weapons\charges\m168g.p3d";
        timeToLive = 17;
        fuseDistance = 0;
        explosionTime = 15;
        deflectionSlowDown = 0.1;
        ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		SoundSetExplosion[] = {"BigIED_Exp_SoundSet","BigIED_Tail_SoundSet","Explosion_Debris_SoundSet"};
        whistleDist = 10;
        initSpeed = 10;
        pullPinSound[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,50};
    };
	// end throwable explosives
	
	// start ammo reballance
	
	class OPTRE_B_8Gauge_Slug: B_12Gauge_Slug
	{
		caliber	= 6;
		hit = 36;
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
		thrust = 30;
		triggerTime = 0.001;
	};

	class OPTRE_B_8Gauge_Beanbags: OPTRE_B_8Gauge_Slug
	{
		hit = 0.1;
		typicalspeed = 350;
	};

	class MEU_B_8Gauge_Pellet_Submunition: B_12Gauge_Pellets_Submunition_Deploy
	{
		hit = 12;
	};
	
	class OPTRE_B_8Gauge_Incendiary_Submunition: B_12Gauge_Pellets_Submunition_Deploy
	{
		caliber = 4;
		hit = 16;
		
		deflecting = 0;
		thrust = 75;
		model = "\V_SO_Core\data\Effects\fire_effect";
		timeToLive = 1;
		tracerEndTime = 1;
		tracerStartTime = 0;
		tracerScale = 0.75;
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
	
	class MEU_40mm_HE: G_40mm_HE
	{
		hit = 80;
		indirecthit = 60;
		indirecthitrange = 8;
		timeToLive = 30;
	};
	
	class MEU_40mm_HEDP: MEU_40mm_HE
	{
		hit = 220;
		indirectHit = 100;
		indirectHitRange = 10;
		caliber = 4;
		warheadName = "HEAT";
        timeToLive = 30;
	};
};