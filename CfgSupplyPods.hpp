//imports
class OPTRE_Ammo_SupplyPod_Empty;
class Module_F;

////////////Base Pods
//Guided SPNKr
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
//Ace medical 
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
//M247 LMG (the shitty one)
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
///////// 1-4's CSW Memes
//Mortar
class OPTRE_Ammo_SupplyPod_Mortar_Ammo: OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Mortar Ammo)";        
	class TransportMagazines
	{			
		mag_xx(ACE_1Rnd_82mm_Mo_Smoke, 3);
		mag_xx(ACE_1Rnd_82mm_Mo_Illum, 3);
		mag_xx(ACE_1Rnd_82mm_Mo_HE, 18);
	};
};
class OPTRE_Ammo_SupplyPod_Mortar: OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Mortar Tube)";        
	class TransportMagazines
	{
		mag_xx(ACE_1Rnd_82mm_Mo_HE, 5);
	};
	// 5lbs for mortar round, mortar tube is 62lbs, mortar base is 29lbs, 120lbs max for carryable.
	class TransportWeapons
	{
		weap_xx(ace_csw_staticMortarCarry, 1); 
		weap_xx(ace_csw_carryMortarBaseplate, 1);
	};
};
//HMG
class OPTRE_SupplyPod_StaticHMG : OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Static HMG)";
	class TransportMagazines
	{
		mag_xx(ace_csw_100Rnd_127x99_mag, 3); //9.6lbs
	};
	class TransportWeapons
	{
		weap_xx(ace_csw_staticHMGCarry, 1); //84lbs
		weap_xx(ace_csw_m3CarryTripod, 1); //44lbs //total 156.8, max draggable 160lbs.
	};
};
class OPTRE_SupplyPod_StaticHMGAmmo : OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Static HMG Ammo)";
	class TransportMagazines
	{
		mag_xx(ace_csw_100Rnd_127x99_mag, 12); //9.6lbs
	};
};
//GMG
class OPTRE_SupplyPod_StaticGMG : OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Static GMG)";
	class TransportMagazines
	{
		mag_xx(ace_csw_20Rnd_20mm_G_belt, 3); //9.6lbs
	};
	class TransportWeapons
	{
		weap_xx(ace_csw_staticGMGCarry, 1); //84lbs
		weap_xx(ace_csw_m3CarryTripod, 1); //44lbs //total 156.8, max draggable 160lbs.
	};
};
class OPTRE_SupplyPod_StaticGMGAmmo : OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Static GMG Ammo)";
	class TransportMagazines
	{
		mag_xx(ace_csw_20Rnd_20mm_G_belt, 12); //9.6lbs
	};
};
//AT
class OPTRE_SupplyPod_StaticAT : OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Static AT)";
	class TransportMagazines
	{
		mag_xx(Titan_AT, 4); //10lbs
	};
	class TransportWeapons
	{
		weap_xx(ace_csw_staticATCarry, 1); //32lbs
		weap_xx(ace_csw_m3CarryTripod, 1); //44lbs max draggable 160lbs.
	};
};
class OPTRE_SupplyPod_StaticATAmmo : OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Static AT Ammo)";
	class TransportMagazines
	{
		mag_xx(Titan_AT, 9); //10lbs
		mag_xx(Titan_AP, 5); //6lbs
	};
};
//AA
class OPTRE_SupplyPod_StaticAA : OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Static AA)";
	class TransportMagazines
	{
		mag_xx(Titan_AA, 4); //10lbs
	};
	class TransportWeapons
	{
		weap_xx(ace_csw_staticAACarry, 1); //32lbs
		weap_xx(ace_csw_m3CarryTripod, 1); //44lbs max draggable 160lbs.
	};
};
class OPTRE_SupplyPod_StaticAAAmmo : OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Static AA Ammo)";
	class TransportMagazines
	{
		mag_xx(Titan_AA, 12); //10lbs
	};
};
///////// 1-4's Vehicle Memes
//ammo
class OPTRE_SupplyPod_VehicleAmmo: OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Vehicle Ammo)"; 
	ace_rearm_defaultSupply = 400;
};
//repair
class OPTRE_SupplyPod_VehicleRepair: OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Vehicle Repair)"; 
	ace_repair_canRepair = 1;
	ace_cargo_space = 8;
	ace_cargo_hasCargo = 1;
	class TransportItems
	{
		item_xx(ToolKit, 1);
	};
};
//fuel
class OPTRE_SupplyPod_VehicleRefuel: OPTRE_Ammo_SupplyPod_Empty
{
	displayName 		= "[UNSC] Supply Pod (Vehicle Refuel)";
};


////////////////////////Pelican Resupply Module (Override this to change supply pod dropdown list.)
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
					name = "Mortar Ammo Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_Mortar_Ammo";
				};
				class n6
				{
					name = "Mortar Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_Mortar";
				};
				class n7
				{
					name = "MA5B AR Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_AR";
				};
				class n8
				{
					name = "MA5BGL AR-GL Supply Pod";
					value = "OPTRE_Ammo_SupplyPod_AR_GL";
				};
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