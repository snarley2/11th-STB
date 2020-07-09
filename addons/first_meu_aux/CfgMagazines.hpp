class CfgMagazines
{
	
    class OPTRE_60Rnd_762x51_Mag;
    class 150Rnd_762x51_Box;
    
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

	class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_Smoke_white;
	class 8Rnd_82mm_Mo_Flare_white;
	class 8Rnd_82mm_Mo_guided;
	class 8Rnd_82mm_Mo_LG;

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