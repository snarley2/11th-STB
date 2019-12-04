class CfgVehicles
{
    class Helicopter_Base_H;
    class OPTRE_falcon_base;
    class OPTRE_UNSC_falcon_unarmed;
    class OPTRE_Pelican_armed;
    class OPTRE_Pelican_unarmed;
	class OPTRE_Ammo_SupplyPod_Empty;
    class OPTRE_Ammo_SupplyPod_Launcher: OPTRE_Ammo_SupplyPod_Empty
	{
		dlc 				= "OPTRE";
		displayName			= "[UNSC] Supply Pod (M41)";
		model 				= "\OPTRE_misc\crates\Supply_pod.p3d";
		author 				= "Article 2 Studios";
		class TransportMagazines
		{
			delete xx_OPTRE_M41_Twin_HEAT;
			delete xx_OPTRE_M41_Twin_HEAP;
			
			mag_xx(OPTRE_M41_Twin_HEAT_G, 6);
			mag_xx(OPTRE_M41_Twin_HEAT, 6);
		};
		class TransportWeapons
		{
			delete xx_OPTRE_M41_SSR; //class xx_OPTRE_M41_SSR {weapon = "OPTRE_M41_SSR"; count = 1;};
		};
		class TransportItems{};
	};

    class OPTRE_Ammo_SupplyPod_Medical: OPTRE_Ammo_SupplyPod_Empty
	{
		dlc 				= "OPTRE";
		displayName 		= "[UNSC] Supply Pod (Medical)";
		model 				= "\OPTRE_misc\crates\Supply_pod.p3d";
		author 				= "Article 2 Studios";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			delete xx_OPTRE_Biofoam;
			delete xx_OPTRE_MedKit; 

			item_xx(adv_aceSplint_splint, 40);
			item_xx(ACE_elasticBandage, 40);
			item_xx(ACE_packingBandage, 40);
			item_xx(ACE_plasmaIV_500, 20);
			item_xx(ACE_epinephrine, 40);
			item_xx(ACE_tourniquet, 40);
			item_xx(OPTRE_Biofoam, 10);
			item_xx(OPTRE_Medigel, 10);
			item_xx(ACE_quickclot, 40);
			item_xx(ACE_morphine, 40);
			item_xx(ACE_plasmaIV, 20);
			item_xx(OPTRE_MedKit, 10);
			item_xx(ACE_Banana, 40);
			
		};
	};

	class OPTRE_Ammo_SupplyPod_LMG: OPTRE_Ammo_SupplyPod_Empty
	{
		class TransportMagazines
		{
			delete xx_OPTRE_200Rnd_95x40_Box_tracer;
			delete xx_OPTRE_200Rnd_95x40_Box;
			
			mag_xx(OPTRE_400Rnd_762x51_Box_Tracer, 3);
			mag_xx(OPTRE_100Rnd_762x51_Box_Tracer, 6);
		};
		class TransportWeapons
		{
			delete xx_OPTRE_M73;

			weap_xx(OPTRE_M247, 1);
		};
		class TransportItems
		{
			item_xx(optic_arco_blk_f, 1)
		};
	};

	class OPTRE_Ammo_SupplyPod_ARC: OPTRE_Ammo_SupplyPod_Empty
	{
		dlc 				= "OPTRE";
		displayName 		= "[UNSC] Supply Pod (Mortars)";
		author 				= "Article 2 Studios";
        
		class TransportMagazines
		{
			delete xx_OPTRE_32Rnd_762x51_Mag_tracer;
			delete xx_OPTRE_32Rnd_762x51_Mag;
			
			mag_xx(ACE_1Rnd_82mm_Mo_Smoke, 3);
			mag_xx(ACE_1Rnd_82mm_Mo_Illum, 3);
			mag_xx(ACE_1Rnd_82mm_Mo_HE, 18);
		};
		class TransportWeapons
		{
			delete xx_OPTRE_MA5C;
		};
		class TransportItems{};
	};
    
    class OPTRE_UNSC_falcon: OPTRE_falcon_base
    {
        tf_range=30000;
         class pilotCamera
        {
            class OpticsIn
            {
                class Wide
                {
                    opticsDisplayName = "WFOV";
                    initAngleX = 0;
                    minAngleX = 0;
                    maxAngleX = 0;
                    initAngleY = 0;
                    minAngleY = 0;
                    maxAngleY = 0;
                    initFov = "(75 / 120)";
                    minFov = "(75 / 120)";
                    maxFov = "(75 / 120)";
                    directionStabilized = 1;
                    visionMode[] = {"Normal","NVG","Ti"};
                    thermalMode[] = {0,1};
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
                    opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
                };
                class Medium: Wide
                {
                    opticsDisplayName = "MFOV";
                    initFov = "(14.4 / 120)";
                    minFov = "(14.4 / 120)";
                    maxFov = "(14.4 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
                };
                class Narrow: Wide
                {
                    opticsDisplayName = "NFOV";
                    initFov = "(4.8 / 120)";
                    minFov = "0.01";
                    maxFov = "(4.8 / 120)";
                    gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
                };
            };
            minTurn = -90;
            maxTurn = 90;
            initTurn = 0;
            minElev = -10;
            maxElev = 90;
            initElev = 25;
            maxXRotSpeed = 1;
            maxYRotSpeed = 1;
            maxMouseXRotSpeed = 0.5;
            maxMouseYRotSpeed = 0.5;
            pilotOpticsShowCursor = 1;
            controllable = 1;
        };
        memoryPointDriverOptics = "gunnerview";
    };
    
	class OPTRE_Pelican_F: Helicopter_Base_H
    {
        tf_range=30000;
    };
    
    class OPTRE_Hornet_base: Helicopter_Base_H
    {
        tf_range=30000;
    };
    
	class VES_UH144_A: OPTRE_UNSC_falcon
    {
        tf_range=30000;
    };
    
	class VES_UH144: OPTRE_UNSC_falcon_unarmed
    {
        tf_range=30000;
    };
    
	class VES_D77HTCI_A: OPTRE_Pelican_armed
    {
        tf_range=30000;
    };
    
	class VES_D77HTCI: OPTRE_Pelican_unarmed
    {
        tf_range=30000;
    };
    
};