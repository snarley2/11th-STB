class CfgVehicles
{
    class Helicopter_Base_H;
    class OPTRE_falcon_base;
    class OPTRE_UNSC_falcon_unarmed;
    class OPTRE_Pelican_armed;
    class OPTRE_Pelican_unarmed;
	class OPTRE_Ammo_SupplyPod_Empty;
	class Module_F;
	
    class OPTRE_Ammo_SupplyPod_Launcher_Guided: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName			= "[UNSC] Supply Pod (M41-G)";
		class TransportMagazines
		{		
			mag_xx(OPTRE_M41_Twin_HEAT_G, 12);
		};
		class TransportWeapons
		{
			weap_xx(OPTRE_M41_SSR_G, 1);
		};
	};

    class OPTRE_Ammo_SupplyPod_ACE_Medical: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName 		= "[UNSC] Supply Pod (ACE Medical)";
		class TransportItems
		{
			item_xx(ACE_elasticBandage, 40);
			item_xx(ACE_packingBandage, 40);
			item_xx(ACE_plasmaIV_500, 20);
			item_xx(ACE_epinephrine, 40);
			item_xx(ACE_tourniquet, 40);
			item_xx(ACE_quickclot, 40);
			item_xx(ACE_morphine, 40);
			item_xx(ACE_plasmaIV, 20);
			item_xx(ACE_Banana, 40);
			item_xx(ACE_splint, 40);
			
		};
	};

	class OPTRE_Ammo_SupplyPod_M247: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName 		= "[UNSC] Supply Pod (M247)";
		class TransportMagazines
		{			
			mag_xx(OPTRE_400Rnd_762x51_Box_Tracer, 3);
			mag_xx(OPTRE_100Rnd_762x51_Box_Tracer, 6);
		};
		class TransportWeapons
		{
			weap_xx(OPTRE_M247, 1);
		};
		class TransportItems
		{
			item_xx(optic_arco_blk_f, 1)
		};
	};

	class OPTRE_Ammo_SupplyPod_Mortar: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName 		= "[UNSC] Supply Pod (Mortars)";        
		class TransportMagazines
		{			
			mag_xx(ACE_1Rnd_82mm_Mo_Smoke, 3);
			mag_xx(ACE_1Rnd_82mm_Mo_Illum, 3);
			mag_xx(ACE_1Rnd_82mm_Mo_HE, 18);
		};
	};
	class Module_OPTRE_PelicanSupplyDrop: Module_F
	{
		class Arguments
		{
			class box1
			{
				defaultValue = "OPTRE_Ammo_SupplyPod_Medical";
				class values
				{
					class n1
					{
						name = "none";
						value = "none";
					};
					class n2
					{
						name = "ACE Medical Supply Pod";
						value = "OPTRE_Ammo_SupplyPod_Medical";
					};
					class n3
					{
						name = "SPNKr/Guided Supply Pod";
						value = "OPTRE_Ammo_SupplyPod_Launcher_Guided";
					};
					class n4
					{
						name = "M247 LMG Supply Pod";
						value = "OPTRE_Ammo_SupplyPod_M247";
					};
					class n5
					{
						name = "Mortar Supply Pod";
						value = "OPTRE_Ammo_SupplyPod_Mortar";
					};
					class n6
					{
						name = "MA5B AR Supply Pod";
						value = "OPTRE_Ammo_SupplyPod_AR";
					};
					class n7
					{
						name = "MA5BGL AR-GL Supply Pod";
						value = "OPTRE_Ammo_SupplyPod_AR_GL";
					};
					delete n8;
					delete n9;
					delete n10;
					delete n11;
					delete n12;
					delete n13;
					delete n14;
					delete n15;
					delete n16;
					delete n17;
					delete n18;
					delete n19;
					delete n20;
				};
			};
		};
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