class CfgVehicles
{
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
};