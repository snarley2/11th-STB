class CBA_Extended_EventHandlers;
class CfgVehicles
{
	#include "CfgSupplyPods.hpp"

    class Helicopter_Base_H;
    class OPTRE_falcon_base;
    class OPTRE_UNSC_falcon_unarmed;
    class OPTRE_Pelican_armed;
    class OPTRE_Pelican_unarmed;
    class B_APC_Tracked_01_base_F;
	class StaticMGWeapon;

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
    class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
    {
	ace_cargo_space = 8;
	ace_cargo_hasCargo = 1;	
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			delete _xx_100Rnd_65x39_caseless_mag;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_SmokeShellOrange;
			delete _xx_SmokeShellBlue;
			delete _xx_NLAW_F;
			delete _xx_Titan_AT;
			delete _xx_Titan_AP;
			delete _xx_Titan_AA;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 20);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_M41_Twin_HEAT, 4);
			mag_xx(OPTRE_M41_Twin_HEAT_G, 4);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			item_xx(ToolKit, 1);	
		};	
    };
        
    class B_T_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
    {
	ace_cargo_space = 8;
	ace_cargo_hasCargo = 1;		
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_khaki_mag;
			delete _xx_100Rnd_65x39_caseless_khaki_mag;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_SmokeShellOrange;
			delete _xx_SmokeShellBlue;
			delete _xx_Titan_AT;
			delete _xx_Titan_AP;
			delete _xx_Titan_AA;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 20);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_M41_Twin_HEAT, 4);
			mag_xx(OPTRE_M41_Twin_HEAT_G, 4);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_khk_F;
			delete _xx_arifle_MX_SW_khk_F;
			delete _xx_launch_NLAW_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;	
			item_xx(ToolKit, 1);
		};
    };
    class Pandur2_Medical_F;
	class Pandur2_Medical_E: Pandur2_Medical_F
	{
		ace_medical_isMedicalVehicle = 1;
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			delete _xx_100Rnd_65x39_caseless_mag;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_SmokeShellOrange;
			delete _xx_SmokeShellBlue;
			delete _xx_NLAW_F;
			delete _xx_Titan_AT;
			delete _xx_Titan_AP;
			delete _xx_Titan_AA;
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			item_xx(ACE_elasticBandage, 100);
			item_xx(ACE_packingBandage, 80);
			item_xx(ACE_plasmaIV_500, 40);
			item_xx(ACE_epinephrine, 80);
			item_xx(ACE_tourniquet, 80);
			item_xx(ACE_quikclot, 80);
			item_xx(ACE_morphine, 80);
			item_xx(ACE_plasmaIV, 40);
			item_xx(ACE_splint, 80);
			item_xx(ACE_personalAidKit, 10);
			item_xx(ACE_surgicalKit, 10);	
		};
	};

	class Pandur2_Medical_D: Pandur2_Medical_F
	{
		ace_medical_isMedicalVehicle = 1;
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			delete _xx_100Rnd_65x39_caseless_mag;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_SmokeShellOrange;
			delete _xx_SmokeShellBlue;
			delete _xx_NLAW_F;
			delete _xx_Titan_AT;
			delete _xx_Titan_AP;
			delete _xx_Titan_AA;
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			item_xx(ACE_elasticBandage, 100);
			item_xx(ACE_packingBandage, 80);
			item_xx(ACE_plasmaIV_500, 40);
			item_xx(ACE_epinephrine, 80);
			item_xx(ACE_tourniquet, 80);
			item_xx(ACE_quikclot, 80);
			item_xx(ACE_morphine, 80);
			item_xx(ACE_plasmaIV, 40);
			item_xx(ACE_splint, 80);
			item_xx(ACE_personalAidKit, 10);
			item_xx(ACE_surgicalKit, 10);	
		};
	};

	class Pandur2_Medical_WD: Pandur2_Medical_F
	{
		ace_medical_isMedicalVehicle = 1;
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			delete _xx_100Rnd_65x39_caseless_mag;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeGreen_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeBlue_Grenade_shell;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellGreen;
			delete _xx_SmokeShellOrange;
			delete _xx_SmokeShellBlue;
			delete _xx_NLAW_F;
			delete _xx_Titan_AT;
			delete _xx_Titan_AP;
			delete _xx_Titan_AA;
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			item_xx(ACE_elasticBandage, 100);
			item_xx(ACE_packingBandage, 80);
			item_xx(ACE_plasmaIV_500, 40);
			item_xx(ACE_epinephrine, 80);
			item_xx(ACE_tourniquet, 80);
			item_xx(ACE_quikclot, 80);
			item_xx(ACE_morphine, 80);
			item_xx(ACE_plasmaIV, 40);
			item_xx(ACE_splint, 80);
			item_xx(ACE_personalAidKit, 10);
			item_xx(ACE_surgicalKit, 10);	
		};
	};
    
    class OPTRE_HEV: StaticMGWeapon
	{
        class TransportBackpacks
        {
            class xx_OPTRE_OPTRE_ILCS_HEAVY
			{
				backpack = "OPTRE_ILCS_Rucksack_Heavy";
				count = 1;
			};
        };
		class TransportMagazines
		{
			mag_xx(OPTRE_M9_Frag, 3);
            mag_xx(ACE_M84, 2);
            mag_xx(OPTRE_M2_Smoke_Orange, 1);
            mag_xx(SmokeShell, 5);
            mag_xx(C7_Remote_Mag, 1);
            mag_xx(OPTRE_200Rnd_95x40_Box_HPSAPT, 1);
            mag_xx(OPTRE_1Rnd_50x137_HEAT, 1);
            mag_xx(OPTRE_16Rnd_127x40_Mag_NARQT, 1);
            mag_xx(OPTRE_16Rnd_127x40_Mag_APT, 2);
            mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 5);
            mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
            mag_xx(3Rnd_HE_Grenade_shell, 2);
            delete xx_OPTRE_OPTRE_ELB47_Strobe;
            delete xx_OPTRE_OPTRE_OPTRE_M8_Flare;
            delete xx_OPTRE_M2_Smoke_Purple;
		};
		class TransportWeapons{};
		class TransportItems
		{
            item_xx(ACE_elasticBandage, 8);
            item_xx(ACE_packingBandage, 14);
            item_xx(ACE_plasmaIV_500, 2);
            item_xx(ACE_epinephrine, 3);
            item_xx(ACE_adenosine, 2);
            item_xx(ACE_tourniquet, 2);
            item_xx(ACE_quikclot, 8);
            item_xx(ACE_morphine, 1);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 2);
            delete _xx_Biofoam;
        };
		class userActions
        {
            class door_EmergencyEject
            {
                displayName = "!!Emergency Eject!!";
                position = "";
                radius = 4;
                condition = "gunner this == player";
                statement = "0 = [this, 0, true] spawn OPTRE_Fnc_HEVDoor; this setVariable [""OPTRE_HEV_DoorEjectedWanted"",false,true]; resetCamShake; moveOut player; player allowDamage true;";
                onlyforplayer = 1;
            };
        };
    };
	class OPTRE_Static_M41: StaticMGWeapon
	{
		armor = 1000;
	};
	class StaticATWeapon;
	class OPTRE_Static_ATGM: StaticATWeapon
	{
		armor = 1000;
	};
	class StaticAAWeapon;
	class OPTRE_Static_AA: StaticAAWeapon
	{
		armor = 1000;
	};
};