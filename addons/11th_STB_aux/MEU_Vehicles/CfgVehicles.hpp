class CfgVehicles
{
    #include "\11th_STB_aux\MEU_Vehicles\CfgSupplyPods.hpp"
    #include "\11th_STB_aux\MEU_Vehicles\CfgMedication.hpp"
    #include "\11th_STB_aux\MEU_Vehicles\CfgBackpacks.hpp"
    #include "\11th_STB_aux\MEU_Vehicles\CfgObjects.hpp"
    #include "\11th_STB_aux\MEU_Vehicles\CfgUniforms.hpp"
    #include "\11th_STB_aux\MEU_Vehicles\CfgUnits.hpp"
    
    //Base Arma Vehicle Classes
	class Helicopter_Base_H;
	class B_APC_Tracked_01_base_F;
	class APC_Wheeled_02_base_v2_F;
	class B_T_VTOL_01_armed_F;
	class B_Ship_Gun_01_base_F;
    class O_MRAP_02_F;
    class O_MRAP_02_HMG_F;
    class I_APC_tracked_03_cannon_F;
    class I_APC_Wheeled_03_cannon_F;
    class I_MBT_03_cannon_F;
    class I_Heli_light_03_F;
    class I_Heli_Transport_02_F;
    class Plane_Fighter_03_base_f;
    class I_Plane_Fighter_03_CAS_F;
    class I_Plane_Fighter_04_F;
    class O_APC_Tracked_02_cannon_F;
    class B_UGV_01_rcws_F;
    class O_APC_Tracked_02_cannon_ghex_F;
    class O_APC_Tracked_02_AA_F;
    class O_T_MBT_04_command_F;
    class O_MBT_02_cannon_F;
    class I_LT_01_AA_F;
    class I_LT_01_Scout_F;
    class I_LT_01_AT_F;
    class I_LT_01_Cannon_F;
    class O_Heli_Attack_02_dynamicLoadout_F;
    class O_APC_Wheeled_02_rcws_v2_F;
    class O_MBT_02_arty_base_F;
    class O_Truck_02_covered_F;
    class I_Truck_02_MRL_F;
    class B_AFV_Wheeled_01_up_cannon_F;
    class B_AAA_System_01_F;
    class B_SAM_System_01_F;
    class B_MBT_01_cannon_F;
    class O_T_VTOL_02_infantry_dynamicLoadout_F;
    class O_LSV_02_unarmed_F;
    class O_LSV_02_armed_F;
    class O_LSV_02_AT_F;
    class B_T_UAV_03_dynamicLoadout_F;
    class B_Plane_CAS_01_dynamicLoadout_F;
    class B_Heli_Attack_01_Dynamicloadout_F;
    class B_APC_Tracked_01_AA_F;
    class B_APC_Wheeled_01_cannon_F;
    class I_MRAP_03_F;
    class I_MRAP_03_gmg_F;
    class O_T_LSV_02_armed_F;
    class O_T_LSV_02_unarmed_F;
    class O_T_LSV_02_AT_F;
		
	//Base Optre Classes
	class OPTRE_falcon_base;
    class OPTRE_UNSC_falcon_unarmed;
    class OPTRE_Pelican_armed;
    class OPTRE_Pelican_unarmed;
    class OPTRE_UNSC_hornet_CAP;
    class OPTRE_UNSC_hornet_CAS;
    class OPTRE_UNSC_hornet;
    class OPTRE_M313_UNSC;
	class OPTRE_M808B_UNSC;
	class OPTRE_Corvette_M910_Turret;
    class OPTRE_M274_ATV;
    class Land_optre_milcrate_h3_long;
    class OPTRE_M412_IFV_UNSC;
    class OPTRE_M413_MGS_UNSC;
    class OPTRE_M12_LRV;
    class OPTRE_M12_FAV;
    class OPTRE_M12A1_LRV;
    class OPTRE_M813_TT;
    class OPTRE_archer_system_base;
    class OPTRE_M12R_AA;
    class OPTRE_M914_RV;


	//Base FZ Classes
	class VES_AV22_Sparrowhawk_Base;
    class VES_AV22_Sparrowhawk;
	class VES_IFV76;
    class VES_IFV76_A;
    class VES_M808B_MBT;
    class VES_M12_APC;
    class VES_M813_TT;
    class VES_M12;
    class VES_M12A1_LRV;
    class VES_M12_LRV;
    class VES_M12G1_LRV;
    class VES_M12_APC_Base;
    
    //flud
    //class JMM_O_IMarineMU;
    //class JMM_O_IMarineSU;
	//class JMM_O_IMarineFU;
    
	//Misc Classes
	class GunnerTurret;
	class CargoTurret;
    class CargoTurret_01;
    class CargoTurret_02;
	class ViewOptics;
	class CommanderOptics;
	class Optics_Commander_01;
	class Optics_Gunner_APC_01;
	class VehicleSystemsTemplateLeftCommander;
	class VehicleSystemsTemplateRightCommander;
    class RCWSOptics;
	class viewGunner;
	class ViewCargo;
	class Wide;
	class Medium;
	class Narrow;
	class Components;
	class SensorTemplateIR;
	class StaticWeapon;
	class StaticMGWeapon;
	class Item_Base_F;
	class UniformItem;
    class textureSources;
    class Turrets;
    class MainTurret;
	class ItemInfo;
    class Man;
    class DefaultEventHandlers;
    class EventHandlers;
    class plp_ctf_SafetyBarrelBlue;
    class Land_OPTRE_barrel_hydrogen;
    class CBRN_putMaskOn;
    class NewTurret;
    class Optics_Commander_02;
    class Optics_Gunner_MBT_03;
    class VehicleSystemsDisplayManagerComponentLeft;
    class VehicleSystemsDisplayManagerComponentRight;
    class VehicleSystemsTemplateLeftGunner;
    class VehicleSystemsTemplateRightGunner;
    class ACE_SelfActions;
	class SensorTemplateVisual;
	class SensorTemplateActiveRadar;
	class SensorTemplatePassiveRadar;
	class SensorTemplateLaser;
	class SensorTemplateNV;
	class DefaultVehicleSystemsDisplayManagerLeft;
	class DefaultVehicleSystemsDisplayManagerRight;
	//class ViewPilot;
	//class AnimationSources;
	//class Reflectors;
	//class HitPoints;
    
    /*//chemwar
	class CAManBase: Man
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class MEU_Maskon : CBRN_putMaskOn
				{};
            };
        };
    };*/
	//speedbag
    class MEU_Speedbag : Land_optre_milcrate_h3_long
    {
        scope = 2;
        scopeCurator = 2;
        scopeEditor = 2;
        displayName = "[1st MEU] Speedbag";
        author = "1st MEU Mark";
        editorCategory = "MEU_Objects";
        editorSubcategory = "Objects";
        ace_cargo_canLoad = 1;
        ace_cargo_size = 1;
        ace_dragging_canDrag = 1; 
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;
        mass = 40;

        class TransportMagazines
        {    
            mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 20);
            mag_xx(30rnd_556x45_mag_AP, 20);
            mag_xx(30rnd_65x39_mag_AP, 20);
            mag_xx(30rnd_65x39_mag_msbs_AP, 20);
            mag_xx(1Rnd_HEDP_MEU_shell, 10);
            mag_xx(3Rnd_HE_MEU_shell, 10);
            mag_xx(3Rnd_Smoke_Grenade_shell, 10);
            mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
            mag_xx(OPTRE_20Rnd_86x70_Mag_JHP,20);
            mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
            mag_xx(OPTRE_12Rnd_8Gauge_Pellets, 20);
            mag_xx(OPTRE_12Rnd_8Gauge_Slugs, 20);
            mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
            mag_xx(OPTRE_15Rnd_DMR_762x51_Mag_AP, 20);
            mag_xx(OPTRE_15Rnd_DMR_762x51_Mag_JHP, 20);
            mag_xx(OPTRE_4Rnd_145x114_APFSDS_Mag, 20);
            mag_xx(OPTRE_4Rnd_145x114_HEDP_Mag, 10);
            mag_xx(OPTRE_4Rnd_145x114_Mag_NARQ, 2);
            mag_xx(OPTRE_4Rnd_145x114_HVAP_Mag, 10);
            mag_xx(OPTRE_100Rnd_127x99_M250HMG, 10);
            mag_xx(OPTRE_100Rnd_127x99_HE_M250HMG, 10);
            mag_xx(OPTRE_200Rnd_95x40_Box_HPSAP, 10);
            mag_xx(OPTRE_200Rnd_95x40_Box_JHP, 10);
            mag_xx(MEU_200Rnd_556_Mag_Tracer, 10);
            mag_xx(OPTRE_1Rnd_50x137_HE, 2);
            mag_xx(OPTRE_1Rnd_50x137_HEAT, 2);
            mag_xx(OPTRE_1Rnd_50x137_PEN, 1);
            mag_xx(OPTRE_1Rnd_50x137_THERMO, 1);
            mag_xx(M41_Twin_HEAT, 2);
            mag_xx(M41_Twin_HEAP, 2);
            mag_xx(M41_Twin_HEAT_WireGuided, 2);
            mag_xx(M41_Twin_HEAT_HeatSeeking, 2);
            mag_xx(ACE_SpareBarrel,10);
        };
        class TransportItems
        {
            item_xx(ACE_elasticBandage, 60);
            item_xx(ACE_packingBandage, 60);
            item_xx(ACE_plasmaIV_500, 10);
            item_xx(MEU_Biofoam_Light, 40);
            item_xx(MEU_Medigel_Light, 40);
            item_xx(MEU_PlasmaIV, 10);
            item_xx(MEU_compat_Ibuprofen, 40);
            item_xx(MEU_Emergency_MedKit, 2);
            item_xx(ACE_epinephrine, 20);
            item_xx(ACE_tourniquet, 16);
            item_xx(ACE_quikclot, 40);
            item_xx(ACE_morphine, 10);
            item_xx(ACE_plasmaIV, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
        };
    };
    class MEU_KajMoney : O_Heli_Attack_02_dynamicLoadout_F
    {
        crewCrashProtection = 0.001;
		crewExplosionProtection = 0.001;
        armor = 250;
        damageResistance = 0.01555;
		scope = 2;
        scopecurator = 2;
		displayName = "[1st MEU] 'Babushka-class' Kajman";
        faction = "MEU_UNSC";
        editorCategory = "MEU_cat_A";
		editorSubcategory = "MEU_sub_rot";
		crewVulnerable = 0;
        transportSoldier = 13;
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.65;
        tf_range = 120000;
        side = 1;
        crew = "VES_Rifleman_MA5B_MAR";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Vehicles\Kashmoney_body1_co.paa","11th_STB_aux\data\Vehicles\Kashmoney_body2_co.paa"};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 2;
                };
            };
        };
        class TextureSources
        {
            class UNSC
            {
                displayName = "UNSC";
                author = "Mark";
                textures[] = {"11th_STB_aux\data\vehicles\Kashmoney_body1_co.paa","11th_STB_aux\data\vehicles\Kashmoney_body2_co.paa"};
                faction = "MEU_UNSC";
            };
        };
        textureList[] = {"UNSC",1};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 13;
			};
		};
		
		class TransportMagazines
		{
			mag_xx(OPTRE_60Rnd_762x51_Mag_JHP, 20);
            mag_xx(30rnd_556x45_mag_AP, 20);
            mag_xx(30rnd_65x39_mag_AP, 20);
            mag_xx(30rnd_65x39_mag_msbs_AP, 20);
            mag_xx(1Rnd_HE_MEU_shell, 15);
            mag_xx(3Rnd_HE_MEU_shell, 15);
            mag_xx(1Rnd_HEDP_MEU_shell, 15);
            mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 40);
            mag_xx(OPTRE_20Rnd_86x70_Mag_JHP,20);
            mag_xx(OPTRE_12Rnd_8Gauge_Slugs, 20);
            mag_xx(OPTRE_15Rnd_DMR_762x51_Mag_JHP, 20);
            mag_xx(OPTRE_4Rnd_145x114_APFSDS_Mag, 10);
            mag_xx(OPTRE_4Rnd_145x114_Mag_NARQ, 2);
            mag_xx(OPTRE_1Rnd_50x137_HEAT, 10);
            mag_xx(M41_Twin_HEAT_WireGuided, 4);
            mag_xx(M41_Twin_HEAT_HeatSeeking, 2);
		};
		class TransportWeapons
		{
			weap_xx(OPTRE_MA5BGL, 2);
            weap_xx(OPTRE_BR55, 2);
            weap_xx(OPTRE_M393_DMR, 2);
		};
		class TransportItems
		{
            item_xx(ACE_elasticBandage, 40);
		    item_xx(ACE_packingBandage, 40);
		    item_xx(ACE_plasmaIV_500, 40);
		    item_xx(MEU_Biofoam_Light, 40);
		    item_xx(MEU_Medigel_Light, 40);
		    item_xx(MEU_PlasmaIV, 20);
		    item_xx(MEU_compat_Ibuprofen, 40);
		    item_xx(MEU_Emergency_MedKit, 10);
		    item_xx(ACE_epinephrine, 20);
		    item_xx(ACE_tourniquet, 10);
		    item_xx(ACE_quikclot, 40);
		    item_xx(ACE_morphine, 10);
		    item_xx(ACE_plasmaIV, 40);
		    item_xx(ACE_Banana, 5);
		    item_xx(ACE_splint, 20);
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"192Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine"};
		class HitPoints
		{
			class HitHull
			{
				armor = 999;
				visual = "camo1";
				minimalHit = 0.05;
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel
			{
				armor = 4;
				radius = 0.125;
				minimalHit = 0.05;
				explosionShielding = 4;
			};
			class HitAvionics
			{
				armor = 3;
				radius = 0.4;
				minimalHit = 0.15;
				explosionShielding = 3;
				visual = "podsvit pristroju";
			};
			class HitEngine1
			{
				armor = 6;
				radius = 0.35;
				name = "engine_1_hit";
				explosionShielding = 6;
				minimalHit = 0.1;
				visual = "motor";
				passThrough = 1;
				convexComponent = "engine_1_hit";
				material = 51;
			};
			class HitEngine2: HitEngine1
			{
				name = "engine_2_hit";
				convexComponent = "engine_2_hit";
			};
			class HitEngine
			{
				armor = 999;
				radius = 0.05;
				minimalHit = 1;
				visual = "camo2";
				depends = "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.1;
				explosionShielding = 4;
			};
			class HitVRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.1;
				explosionShielding = 4;
			};
			class HitGlass1
			{
				name = "glass1";
				visual = "glass1";
				radius = 0.2;
				armor = 4.5;
				explosionShielding = 4;
				minimalHit = 0.05;
			};
			class HitGlass2: HitGlass1
			{
				name = "glass2";
				visual = "glass2";
				radius = 0.35;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass4: HitGlass1
			{
				name = "glass4";
				visual = "glass4";
				radius = 0.22;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass7: HitGlass1
			{
				name = "glass7";
				visual = "glass7";
				radius = 0.35;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass5: HitGlass1
			{
				name = "glass5";
				visual = "glass5";
				radius = 0.25;
				armor = 9;
				explosionShielding = 4;
				minimalHit = 0.05;
			};
			class HitGlass3: HitGlass1
			{
				name = "glass3";
				visual = "glass3";
				radius = 0.34;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass6: HitGlass1
			{
				name = "glass6";
				visual = "glass6";
				radius = 0.18;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass8: HitGlass1
			{
				name = "glass8";
				visual = "glass8";
				radius = 0.34;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass9: HitGlass1
			{
				name = "glass9";
				visual = "glass9";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass10: HitGlass1
			{
				name = "glass10";
				visual = "glass10";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass11: HitGlass1
			{
				name = "glass11";
				visual = "glass11";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass12: HitGlass1
			{
				name = "glass12";
				visual = "glass12";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass13: HitGlass1
			{
				name = "glass13";
				visual = "glass13";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass14: HitGlass1
			{
				name = "glass14";
				visual = "glass14";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass15: HitGlass1
			{
				name = "glass15";
				visual = "glass15";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
		};
		class AnimationSources
		{
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint = "HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint = "HitGlass8";
			};
			class HitGlass9: HitGlass1
			{
				hitpoint = "HitGlass9";
			};
			class HitGlass10: HitGlass1
			{
				hitpoint = "HitGlass10";
			};
			class HitGlass11: HitGlass1
			{
				hitpoint = "HitGlass11";
			};
			class HitGlass12: HitGlass1
			{
				hitpoint = "HitGlass12";
			};
			class HitGlass13: HitGlass1
			{
				hitpoint = "HitGlass13";
			};
			class HitGlass14: HitGlass1
			{
				hitpoint = "HitGlass14";
			};
			class Gatling
			{
				source = "revolving";
				weapon = "gatling_30mm";
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "gatling_30mm";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "rockets_Skyfire";
			};
			class Hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class door_L
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class door_R
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class door_L_pop
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class door_R_pop
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenRdoor
			{
				displayName = "Open Right Door";
				position = "door_R";
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase ""door_R"" < 0.5 AND Alive(this) AND driver this != player AND gunner this != player AND false";
				statement = "this animateDoor [""door_R"",1];";
			};
			class CloseRdoor
			{
				displayName = "Close Right Door";
				position = "door_R";
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase ""door_R"" > 0.5 AND Alive(this) AND driver this != player AND gunner this != player AND false";
				statement = "this animateDoor [""door_R"",0];";
			};
			class OpenLdoor
			{
				displayName = "Open Left Door";
				position = "door_L";
				radius = 1.8;
				onlyForplayer = 0;
				condition = "this animationPhase ""door_L"" < 0.5 AND Alive(this) AND driver this != player AND gunner this != player AND false";
				statement = "this animateDoor [""door_L"",1];";
			};
			class CloseLdoor
			{
				displayName = "Close Left Door";
				position = "door_L";
				radius = 1.8;
				onlyForplayer = 0;
				condition = "this animationPhase ""door_L"" > 0.5 AND Alive(this) AND driver this != player AND gunner this != player AND false";
				statement = "this animateDoor [""door_L"",0];";
			};
		};
		enableManualFire = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				startEngine = 0;
				minElev = -30;
				maxElev = 20;
				initElev = 15;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				weapons[] = {"gatling_30mm","FIR_9K121","Laserdesignator_mounted"};
				magazines[] = {"250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_HE_shells_Tracer_Green","Laserbatteries","FIR_APKWS_M282_P_38rnd_M","FIR_9K121_P_8rnd_M","FIR_9K121_P_8rnd_M"};
				canEject = 0;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.5;
			};
		};
    };
    class MEU_SCORPION : VES_M808B_MBT
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        dlc = "1stMEU";
        author = "Oneill";
        displayName = "[11th] M808B Scorpion";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
        faction = "MEU_UNSC";
        side = 1;
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6"};
		editorCategory = "MEU_cat_A";
		editorsubCategory = "MEU_sub_arm";
		crew = "VES_Rifleman_MA5B_MAR";	
		class Turrets: Turrets
		{
            visionMode[] = {"Normal","TI","NVG"};
            thermalMode[] = {0,1,2,3,4,5};
			class CargoTurret1: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo1";
				memoryPointsGetInGunnerDir = "pos cargo1 dir";
				memoryPointGunnerOptics = "gunnerview";
				gunnerName = "Passenger Gunner 1";
				proxyIndex = 1;
				maxElev = 15;
				minElev = -25;
				maxTurn = 60;
				minTurn = -60;
				isPersonTurret = 2;
				ejectDeadGunner = 0;
				gunnerInAction = "passenger_inside_3";
				startEngine = 0;
				allowLauncherIn = 1;
				allowLauncherOut = 1;
			};
			class CargoTurret2: CargoTurret1
			{
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos cargo2";
				memoryPointsGetInGunnerDir = "pos cargo2 dir";
				gunnerName = "Passenger Gunner 2";
				proxyIndex = 2;
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex = 3;
				gunnerName = "Passenger Gunner 3";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargo3";
				memoryPointsGetInGunnerDir = "pos cargo3 dir";
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex = 4;
				gunnerName = "Passenger Gunner 4";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargo4";
				memoryPointsGetInGunnerDir = "pos cargo4 dir";
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex = 5;
				gunnerName = "Passenger Gunner 5";
				gunnerCompartments = "Compartment4";
				memoryPointsGetInGunner = "pos cargo5";
				memoryPointsGetInGunnerDir = "pos cargo6 dir";
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex = 6;
				gunnerName = "Passenger Gunner 6";
				gunnerCompartments = "Compartment4";
				memoryPointsGetInGunner = "pos cargo6";
				memoryPointsGetInGunnerDir = "pos cargo6 dir";
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex = 7;
				gunnerName = "Passenger Gunner 7";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos cargo7";
				memoryPointsGetInGunnerDir = "pos cargo7 dir";
			};
			class CargoTurret8: CargoTurret1
			{
				proxyIndex = 8;
				gunnerName = "Passenger Gunner 8";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos cargo8";
				memoryPointsGetInGunnerDir = "pos cargo8 dir";
			};
			class MainTurret: MainTurret
			{
                visionMode[] = {"Normal","TI","NVG"};
                thermalMode[] = {0,1,2,3,4,5};
                class Viewoptics : RCWSOptics
                {
                    visionMode[] = {"Normal","TI","NVG"};
                    thermalMode[] = {0,1,2,3,4,5};
                };
				weapons[] = {"M512_90mm","M247_APC","SmokeLauncher"};
				magazines[] = 
				{
					"30Rnd_90mm_SAPHE",
					"30Rnd_90mm_HEAT",
					"60Rnd_90mm_APBC",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
        };
	};
	
    class MEU_IFV : VES_IFV76
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] APC-76 Honeybadger";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
        transportSoldier = 16;
        faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Motorised"; 
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 10);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
    };
	
    class MEU_IFV_A : VES_IFV76_A
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] IFV-76 Honeybadger";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
        transportSoldier = 12;
        faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Motorised";
        visionMode[] = {"Normal","TI","NVG"};
        thermalMode[] = {0,1,2,3,4,5};
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 10);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"M1024_30mm","M247_APC","SmokeLauncher"};
				magazines[] = 
				{
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
        };
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
    };
    class MEU_GGNR_AA : VES_IFV76_A
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] Hound-920 LAV [WIP]";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
        transportSoldier = 12;
        faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet","CamoSlat"};
        hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\VEH\AFV_MC_B.paa","LM_OPCAN3.0\BLU\UNSC\VEH\AFV_MC_E.paa","LM_OPCAN3.0\BLU\UNSC\VEH\AFV_MC_G.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","11th_STB_aux\Data\Vehicles\cage_Black_CO.paa"};
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_WIP";
        visionMode[] = {"Normal","TI","NVG"};
        thermalMode[] = {0,1,2,3,4,5};
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 10);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"MEU_Railgun_auto","Laserdesignator_mounted","SmokeLauncher"};
				magazines[] = {"MEU_Railgun_Slug_Auto","MEU_Railgun_Slug_Auto","MEU_Railgun_Slug_Auto","MEU_Railgun_Slug_Auto","MEU_Railgun_Slug_Auto","MEU_Railgun_Slug_Auto","MEU_Railgun_Slug_Auto"};

			};
        };
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
    };
    class MEU_Timberwolf: B_AFV_Wheeled_01_up_cannon_F
	{
		author = "Romeo";
		side = 1;
		faction = "MEU_Insurrectionists";
		displayName = "[11th] MGS-32 Timberwolf";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\VEH\MGS1.rvmat","LM_OPCAN3.0\BLU\UNSC\VEH\MGS2.rvmat"};
		crew = "VES_Rifleman_MA5B_MAR";
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Motorised";
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","CamoNet","CamoSlat"};
        hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\VEH\MGS_MC_B.paa","LM_OPCAN3.0\BLU\UNSC\VEH\MGS_MC_G.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","11th_STB_aux\data\vehicles\afv_wheeled_01_Timberwolf_EXT3_CO.paa","11th_STB_aux\data\vehicles\afv_commander_tow_Timberwolf_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","11th_STB_aux\data\vehicles\afv_wheeled_01_Timberwolf_EXT3_CO.paa"};
		textureList[] = {"Marines",1};
		class TextureSources
		{
			class Marines
			{
				displayName = "UNSCMC";
				textures[] = {"LM_OPCAN3.0\BLU\UNSC\VEH\MGS_MC_B.paa","LM_OPCAN3.0\BLU\UNSC\VEH\MGS_MC_G.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","11th_STB_aux\data\vehicles\afv_wheeled_01_Timberwolf_EXT3_CO.paa","11th_STB_aux\data\vehicles\afv_commander_tow_Timberwolf_CO.paa","a3\Armor_F\Data\camonet_NATO_Green_CO.paa","11th_STB_aux\data\vehicles\afv_wheeled_01_Timberwolf_EXT3_CO.paa"};
				factions[] = {"LM_OPCAN_UNSC_MC"};
			};
		};
	};
    class MEU_Nyx_AA : I_LT_01_AA_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Mechanized";
		side = 1;
		faction = "MEU_UNSC";
		displayName = "[11th] MK12 Chipmunk-A";
		crew = "VES_Rifleman_MA5B_MAR";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\LT_01_Main_Rust_CO.paa","11th_STB_aux\data\vehicles\LT_01_AT_AA_Rust_CO.paa"};
		class TextureSources
		{
			class UNSC_Camo
			{
				displayName = "UNSC";
				author = "Romeo";
				textures[] = {"11th_STB_aux\data\vehicles\LT_01_Main_Rust_CO.paa","11th_STB_aux\data\vehicles\LT_01_AT_AA_Rust_CO.paa"};
				faction = "MEU_UNSC";
			};
		};
		textureList[] = {"UNSC",1};
		typicalCargo[] = {"VES_Rifleman_MA5B_MAR","VES_Rifleman_MA5B_MAR"};
	};
    class MEU_Nyx_AT : I_LT_01_AT_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Mechanized";
		side = 1;
		faction = "MEU_UNSC";
		displayName = "[11th] MK12 Chipmunk-T";
		crew = "VES_Rifleman_MA5B_MAR";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\LT_01_Main_Rust_CO.paa","11th_STB_aux\data\vehicles\LT_01_AT_AA_Rust_CO.paa"};
		class TextureSources
		{
			class UNSC_Camo
			{
				displayName = "UNSC";
				author = "Romeo";
				textures[] = {"11th_STB_aux\data\vehicles\LT_01_Main_Rust_CO.paa","11th_STB_aux\data\vehicles\LT_01_AT_AA_Rust_CO.paa"};
				faction = "MEU_UNSC";
			};
		};
		textureList[] = {"UNSC",1};
		typicalCargo[] = {"VES_Rifleman_MA5B_MAR","VES_Rifleman_MA5B_MAR"};
	};
    class MEU_Nyx_Cannon : I_LT_01_Cannon_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Mechanized";
		side = 1;
		faction = "MEU_UNSC";
		displayName = "[11th] MK12 Chipmunk-C";
		crew = "VES_Rifleman_MA5B_MAR";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\LT_01_Main_Rust_CO.paa","11th_STB_aux\data\vehicles\LT_01_Cannon_Rust_CO.paa"};
		class TextureSources
		{
			class UNSC_Camo
			{
				displayName = "UNSC";
				author = "Romeo";
				textures[] = {"11th_STB_aux\data\vehicles\LT_01_Main_Rust_CO.paa","11th_STB_aux\data\vehicles\LT_01_Cannon_Rust_CO.paa"};
				faction = "MEU_UNSC";
			};
		};
		textureList[] = {"UNSC",1};
		typicalCargo[] = {"VES_Rifleman_MA5B_MAR","VES_Rifleman_MA5B_MAR"};
	};
    class MEU_Nyx_Radar : I_LT_01_Scout_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Mechanized";
		side = 1;
		faction = "MEU_UNSC";
		displayName = "[11th] MK12 Chipmunk-R";
		crew = "VES_Rifleman_MA5B_MAR";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\LT_01_Main_Rust_CO.paa","11th_STB_aux\data\vehicles\LT_01_Radar_Rust_CO.paa"};
		class TextureSources
		{
			class UNSC_Camo
			{
				displayName = "UNSC";
				author = "Romeo";
				textures[] = {"11th_STB_aux\data\vehicles\LT_01_Main_Rust_CO.paa","11th_STB_aux\data\vehicles\LT_01_Radar_Rust_CO.paa"};
				faction = "MEU_UNSC";
			};
		};
		textureList[] = {"UNSC",1};
		typicalCargo[] = {"VES_Rifleman_MA5B_MAR","VES_Rifleman_MA5B_MAR"};
	};
	class B_APC_Tracked_01_CRV_F: B_APC_Tracked_01_base_F
    {
		enginePower = 1500;
		peakTorque = 6000;
		idleRPM = 1000;
		redRPM = 3000;
		crewExplosionProtection = 0.5;
		crewCrashProtection = 0.5;
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(ToolKit, 1);
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 10);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M250_APC","MG460_APC","SmokeLauncher"};
				magazines[] = 
				{
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
			class CommanderOptics: CommanderOptics
			{
				memoryPointGunnerOutOptics = "commanderview";
				memoryPointGunnerOptics = "commanderview";
				minElev = -10;
				maxElev = 30;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				minCamElev = -90;
				maxCamElev = 90;
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",0.56234133,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",0.56234133,1,30};
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				gunnerAction = "Commander_APC_tracked_01_crv_out";
				gunnerInAction = "Commander_APC_tracked_01_crv_in";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				turretInfoType = "RscWeaponRangeFinder";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerforceoptics = 0;
				usePip = 1;
				animationSourceStickX = "com_turret_control_x";
				animationSourceStickY = "com_turret_control_y";
				gunnerLeftHandAnimName = "com_turret_control";
				turretFollowFreeLook = 2;
				LODOpticsIn = 0;
				viewGunnerShadowAmb = 0.5;
				viewGunnerShadowDiff = 0.05;
				gunnerOutOpticsModel = "";
				gunnerOpticsEffect[] = {};
				class ViewGunner: ViewCargo
				{
					initAngleX = -6;
					initAngleY = 0;
					initFov = 0.9;
					minFov = 0.25;
					maxFov = 1.25;
					minAngleX = -65;
					maxAngleX = 85;
					minAngleY = -150;
					maxAngleY = 150;
					minMoveX = -0.075;
					maxMoveX = 0.075;
					minMoveY = -0.075;
					maxMoveY = 0.075;
					minMoveZ = -0.075;
					maxMoveZ = 0.1;
				};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034;
					maxFov = 0.31;
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {2,3};
				};
				startEngine = 0;
				stabilizedInAxes = 3;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				viewGunnerInExternal = 1;
				showCrewAim = 1;
				class HitPoints
				{
					class HitComTurret
					{
						armor = 0.1;
						material = -1;
						armorComponent = "hit_com_turret";
						name = "hit_com_turret_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.15;
						isTurret = 1;
					};
					class HitComGun
					{
						armor = 0.1;
						material = -1;
						armorComponent = "hit_com_gun";
						name = "hit_com_gun_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.15;
						isGun = 1;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander{};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander{};
				};
			};
		};		
    };
	
    class B_T_APC_Tracked_01_CRV_F: B_APC_Tracked_01_CRV_F
    {
		enginePower = 1500;
		peakTorque = 6000;
		idleRPM = 1000;
		redRPM = 3000;
		crewCrashProtection = 0.5;
		crewExplosionProtection = 0.5;
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
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
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(ToolKit, 1);
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 10);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M250_APC","MG460_APC","SmokeLauncher"};
				magazines[] = 
				{
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
			class CommanderOptics: CommanderOptics
			{
				memoryPointGunnerOutOptics = "commanderview";
				memoryPointGunnerOptics = "commanderview";
				minElev = -10;
				maxElev = 30;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				minCamElev = -90;
				maxCamElev = 90;
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",0.56234133,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",0.56234133,1,30};
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				gunnerAction = "Commander_APC_tracked_01_crv_out";
				gunnerInAction = "Commander_APC_tracked_01_crv_in";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				turretInfoType = "RscWeaponRangeFinder";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerforceoptics = 0;
				usePip = 1;
				animationSourceStickX = "com_turret_control_x";
				animationSourceStickY = "com_turret_control_y";
				gunnerLeftHandAnimName = "com_turret_control";
				turretFollowFreeLook = 2;
				LODOpticsIn = 0;
				viewGunnerShadowAmb = 0.5;
				viewGunnerShadowDiff = 0.05;
				gunnerOutOpticsModel = "";
				gunnerOpticsEffect[] = {};
				class ViewGunner: ViewCargo
				{
					initAngleX = -6;
					initAngleY = 0;
					initFov = 0.9;
					minFov = 0.25;
					maxFov = 1.25;
					minAngleX = -65;
					maxAngleX = 85;
					minAngleY = -150;
					maxAngleY = 150;
					minMoveX = -0.075;
					maxMoveX = 0.075;
					minMoveY = -0.075;
					maxMoveY = 0.075;
					minMoveZ = -0.075;
					maxMoveZ = 0.1;
				};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034;
					maxFov = 0.31;
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {2,3};
				};
				startEngine = 0;
				stabilizedInAxes = 3;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				viewGunnerInExternal = 1;
				showCrewAim = 1;
				class HitPoints
				{
					class HitComTurret
					{
						armor = 0.1;
						material = -1;
						armorComponent = "hit_com_turret";
						name = "hit_com_turret_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.15;
						isTurret = 1;
					};
					class HitComGun
					{
						armor = 0.1;
						material = -1;
						armorComponent = "hit_com_gun";
						name = "hit_com_gun_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 1;
						radius = 0.15;
						isGun = 1;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander{};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander{};
				};
			};
		};
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
    };
	
	class Vulkan_Repair_APC: B_APC_Tracked_01_CRV_F
    {
        displayname = "[11th] Namer APC (Desert)";	
		crewCrashProtection = 0.5;
		crewExplosionProtection = 0.5;
        ace_repair_canRepair = 1; 
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
		accuracy = 1000;
		faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Marine_Soldier_Rifleman_AR"};
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Mechanized";
    };
        
    class Vulkan_Repair_APC_P: B_T_APC_Tracked_01_CRV_F
    {
		crewCrashProtection = 0.5;
		crewExplosionProtection = 0.5;
        displayname = "[11th] Namer APC (Jungle)";
        ace_repair_canRepair = 1;
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
		accuracy = 1000;
		faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Marine_Soldier_Rifleman_AR"};
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Mechanized";
    };
    class MEU_Kajman_Koslovic : O_Heli_Attack_02_dynamicLoadout_F
    {
        crewCrashProtection = 0.001;
		crewExplosionProtection = 0.001;
        armor = 250;
        damageResistance = 0.01555;
		scope = 2;
        scopecurator = 2;
		displayName = "[1st MEU] Mi-48 Kajman";
        editorCategory = "MEU_Koslovic_Wdl";
		editorSubcategory = "MEU_sub_rot";
		crewVulnerable = 0;
        transportSoldier = 13;
        tf_hasLRradio = 1;
        tf_isolatedAmount = 0.65;
        tf_range = 120000;
        side = 0;
        faction = "MEU_Insurrectionist";
        crew = "LM_OPCAN_KOS_Crewman4";
        ace_fastroping_enabled = 1;
        ace_fastroping_ropeOrigins[] = {"ropeOriginLeft", "ropeOriginRight"};
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Vehicles\Kajman_02_body1_black_CO.paa","\A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
        class TextureSources
        {
            class UNSC
            {
                displayName = "KOS";
                author = "Mark";
                textures[] = {"11th_STB_aux\data\vehicles\Kajman_02_body1_black_CO.paa","\A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"};
                faction = "MEU_Insurrectionist";
            };
        };
        textureList[] = {"UNSC",1};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 13;
			};
		};
		class TransportMagazines
		{
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 100);
            mag_xx(30rnd_556x45_mag_AP, 100);
            mag_xx(30rnd_65x39_mag_AP, 100);
            mag_xx(30rnd_65x39_mag_msbs_AP, 100);
            mag_xx(1Rnd_HE_MEU_shell, 50);
            mag_xx(3Rnd_HE_MEU_shell, 50);
            mag_xx(1Rnd_HEDP_MEU_shell, 50);
            mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 135);
            mag_xx(OPTRE_20Rnd_86x70_Mag_JHP,100);
            mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 100);
            mag_xx(OPTRE_12Rnd_8Gauge_Slugs, 100);
            mag_xx(OPTRE_15Rnd_DMR_762x51_Mag_AP, 100);
            mag_xx(OPTRE_15Rnd_DMR_762x51_Mag_JHP, 100);
            mag_xx(OPTRE_4Rnd_145x114_APFSDS_Mag, 100);
            mag_xx(OPTRE_4Rnd_145x114_Mag_NARQ, 10);
            mag_xx(OPTRE_1Rnd_50x137_HEAT, 10)
            mag_xx(M41_Twin_HEAT_WireGuided, 10);
            mag_xx(M41_Twin_HEAT_HeatSeeking, 10);
		};
		class TransportWeapons
		{
			weap_xx(OPTRE_MA5BGL, 2);
            weap_xx(OPTRE_BR55, 2);
            weap_xx(OPTRE_M45, 2);
            weap_xx(OPTRE_M7, 4);
            weap_xx(OPTRE_M393_DMR, 2);
            weap_xx(OPTRE_SRS99D, 2);
            weap_xx(M250HMG, 2);
            weap_xx(OPTRE_M73, 2);
		};
		class TransportItems
		{
            item_xx(ACE_elasticBandage, 100);
		    item_xx(ACE_packingBandage, 80);
		    item_xx(ACE_plasmaIV_500, 40);
		    item_xx(MEU_Biofoam_Light, 40);
		    item_xx(MEU_Medigel_Light, 40);
		    item_xx(MEU_PlasmaIV, 20);
		    item_xx(MEU_compat_Ibuprofen, 40);
		    item_xx(MEU_Emergency_MedKit, 10);
		    item_xx(ACE_epinephrine, 80);
		    item_xx(ACE_tourniquet, 80);
		    item_xx(ACE_quikclot, 80);
		    item_xx(ACE_morphine, 80);
		    item_xx(ACE_plasmaIV, 40);
		    item_xx(ACE_Banana, 5);
		    item_xx(ACE_splint, 80);
		};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"192Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine"};
		class HitPoints
		{
			class HitHull
			{
				armor = 999;
				visual = "camo1";
				minimalHit = 0.05;
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel
			{
				armor = 4;
				radius = 0.125;
				minimalHit = 0.05;
				explosionShielding = 4;
			};
			class HitAvionics
			{
				armor = 3;
				radius = 0.4;
				minimalHit = 0.15;
				explosionShielding = 3;
				visual = "podsvit pristroju";
			};
			class HitEngine1
			{
				armor = 6;
				radius = 0.35;
				name = "engine_1_hit";
				explosionShielding = 6;
				minimalHit = 0.1;
				visual = "motor";
				passThrough = 1;
				convexComponent = "engine_1_hit";
				material = 51;
			};
			class HitEngine2: HitEngine1
			{
				name = "engine_2_hit";
				convexComponent = "engine_2_hit";
			};
			class HitEngine
			{
				armor = 999;
				radius = 0.05;
				minimalHit = 1;
				visual = "camo2";
				depends = "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.1;
				explosionShielding = 4;
			};
			class HitVRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.1;
				explosionShielding = 4;
			};
			class HitGlass1
			{
				name = "glass1";
				visual = "glass1";
				radius = 0.2;
				armor = 4.5;
				explosionShielding = 4;
				minimalHit = 0.05;
			};
			class HitGlass2: HitGlass1
			{
				name = "glass2";
				visual = "glass2";
				radius = 0.35;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass4: HitGlass1
			{
				name = "glass4";
				visual = "glass4";
				radius = 0.22;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass7: HitGlass1
			{
				name = "glass7";
				visual = "glass7";
				radius = 0.35;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass5: HitGlass1
			{
				name = "glass5";
				visual = "glass5";
				radius = 0.25;
				armor = 9;
				explosionShielding = 4;
				minimalHit = 0.05;
			};
			class HitGlass3: HitGlass1
			{
				name = "glass3";
				visual = "glass3";
				radius = 0.34;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass6: HitGlass1
			{
				name = "glass6";
				visual = "glass6";
				radius = 0.18;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass8: HitGlass1
			{
				name = "glass8";
				visual = "glass8";
				radius = 0.34;
				armor = 6;
				explosionShielding = 3;
				minimalHit = 0.05;
			};
			class HitGlass9: HitGlass1
			{
				name = "glass9";
				visual = "glass9";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass10: HitGlass1
			{
				name = "glass10";
				visual = "glass10";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass11: HitGlass1
			{
				name = "glass11";
				visual = "glass11";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass12: HitGlass1
			{
				name = "glass12";
				visual = "glass12";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass13: HitGlass1
			{
				name = "glass13";
				visual = "glass13";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass14: HitGlass1
			{
				name = "glass14";
				visual = "glass14";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
			class HitGlass15: HitGlass1
			{
				name = "glass15";
				visual = "glass15";
				radius = 0.24;
				armor = 1.6;
				explosionShielding = 2;
				minimalHit = 0.05;
			};
		};
		class AnimationSources
		{
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint = "HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint = "HitGlass8";
			};
			class HitGlass9: HitGlass1
			{
				hitpoint = "HitGlass9";
			};
			class HitGlass10: HitGlass1
			{
				hitpoint = "HitGlass10";
			};
			class HitGlass11: HitGlass1
			{
				hitpoint = "HitGlass11";
			};
			class HitGlass12: HitGlass1
			{
				hitpoint = "HitGlass12";
			};
			class HitGlass13: HitGlass1
			{
				hitpoint = "HitGlass13";
			};
			class HitGlass14: HitGlass1
			{
				hitpoint = "HitGlass14";
			};
			class Gatling
			{
				source = "revolving";
				weapon = "gatling_30mm";
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				weapon = "gatling_30mm";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "rockets_Skyfire";
			};
			class Hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class door_L
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class door_R
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class door_L_pop
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class door_R_pop
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class OpenRdoor
			{
				displayName = "Open Right Door";
				position = "door_R";
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase ""door_R"" < 0.5 AND Alive(this) AND driver this != player AND gunner this != player AND false";
				statement = "this animateDoor [""door_R"",1];";
			};
			class CloseRdoor
			{
				displayName = "Close Right Door";
				position = "door_R";
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase ""door_R"" > 0.5 AND Alive(this) AND driver this != player AND gunner this != player AND false";
				statement = "this animateDoor [""door_R"",0];";
			};
			class OpenLdoor
			{
				displayName = "Open Left Door";
				position = "door_L";
				radius = 1.8;
				onlyForplayer = 0;
				condition = "this animationPhase ""door_L"" < 0.5 AND Alive(this) AND driver this != player AND gunner this != player AND false";
				statement = "this animateDoor [""door_L"",1];";
			};
			class CloseLdoor
			{
				displayName = "Close Left Door";
				position = "door_L";
				radius = 1.8;
				onlyForplayer = 0;
				condition = "this animationPhase ""door_L"" > 0.5 AND Alive(this) AND driver this != player AND gunner this != player AND false";
				statement = "this animateDoor [""door_L"",0];";
			};
		};
		enableManualFire = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				startEngine = 0;
				minElev = -30;
				maxElev = 20;
				initElev = 15;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				weapons[] = {"gatling_30mm","FIR_9K121","Laserdesignator_mounted"};
				magazines[] = {"250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_HE_shells_Tracer_Green","Laserbatteries","FIR_APKWS_M282_P_38rnd_M","FIR_9K121_P_8rnd_M","FIR_9K121_P_8rnd_M"};
				canEject = 0;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.5;
			};
		};
    };
    class MEU_Ratt_Koslovic: O_LSV_02_unarmed_F 
	{ 
		author = "Romeo"; 
		side = 0; 
		faction = "MEU_Insurrectionist"; 
		displayName = "[11th] Ratt"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        crew = "LM_OPCAN_KOS_Crewman4";
        editorCategory = "MEU_Koslovic_wdl"; 
		editorsubCategory = "MEU_sub_Motorised"; 
		hiddenSelections[] = {"Camo1","Camo2","Camo3"}; 
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\LSV_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_03_Koslovic_CO.paaa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"};  
		textureList[] = {"KOS",1}; 
		class TransportMagazines{}; 
		class TransportItems{}; 
		class TransportWeapons{}; 
		class TextureSources 
		{ 
			class KOS 
			{ 
				displayName = "Koslovics"; 
				textures[] = {"11th_STB_aux\data\vehicles\LSV_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_03_Koslovic_CO.paaa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"}; 
				factions[] = {"BLU_F","BLU_G_F","OPF_F","OPF_G_F","IND_F","IND_G_F","CIV_F"}; 
			}; 
		}; 
	}; 
	class MEU_Ratt_Koslovic_HMG: O_LSV_02_armed_F 
	{ 
		author = "Romeo"; 
		side = 0; 
		faction = "MEU_Insurrectionist"; 
		displayName = "[11th] Ratt HMG"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2;
        crew = "LM_OPCAN_KOS_Crewman4";
        editorCategory = "MEU_Koslovic_wdl"; 
		editorsubCategory = "MEU_sub_Motorised"; 
		hiddenSelections[] = {"Camo1","Camo2","Camo3"}; 
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\LSV_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_03_Koslovic_CO.paaa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"}; 
		textureList[] = {"KOS",1}; 
		class TransportMagazines{}; 
		class TransportItems{}; 
		class TransportWeapons{}; 
		class TextureSources 
		{ 
			class KOS 
			{ 
				displayName = "Koslovics"; 
				textures[] = {"11th_STB_aux\data\vehicles\LSV_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_03_Koslovic_CO.paaa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"}; 
				factions[] = {"BLU_F","BLU_G_F","OPF_F","OPF_G_F","IND_F","IND_G_F","CIV_F"}; 
			}; 
		}; 
	}; 
	class MEU_Ratt_Koslovic_AT: O_LSV_02_AT_F 
	{ 
		author = "J.Burgess"; 
		side = 0; 
		faction = "MEU_Insurrectionist"; 
		displayName = "[11th] Ratt AT"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        crew = "LM_OPCAN_KOS_Crewman4";
        editorCategory = "MEU_Koslovic_wdl"; 
		editorsubCategory = "MEU_sub_Motorised"; 
		hiddenSelections[] = {"Camo1","Camo2","Camo3"}; 
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\LSV_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_03_Koslovic_CO.paaa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"}; 
		textureList[] = {"KOS",1}; 
		class TransportMagazines{}; 
		class TransportItems{}; 
		class TransportWeapons{}; 
		class TextureSources 
		{ 
			class KOS 
			{ 
				displayName = "Koslovics"; 
				textures[] = {"11th_STB_aux\data\vehicles\LSV_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\LSV_03_Koslovic_CO.paaa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa","\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"}; 
				factions[] = {"BLU_F","BLU_G_F","OPF_F","OPF_G_F","IND_F","IND_G_F","CIV_F"}; 
			}; 
		}; 
	}; 
    class MEU_Armata_Koslovic: O_T_MBT_04_command_F 
    { 
        side = 0; 
        displayName = "[11th] Armata"; 
        scope = 2; 
		scopeCurator = 2; 
        scopeArsenal = 2; 
        crew = "LM_OPCAN_KOS_Rifleman"; 
        faction = "MEU_Insurrectionist"; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_sub_arm"; 
        hiddenSelections[] = {"Camo1","Camo2","CamoNet"}; 
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\MBT_04_exterior_Koslovic_1_CO.paa","11th_STB_aux\data\vehicles\MBT_04_exterior_Koslovic_2_CO.paa"}; 
    };
    class MEU_Ural_Transport_Koslovic : O_Truck_02_covered_F
    {
        author = "Romeo";
        cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
        crew = "LM_OPCAN_KOS_Crewman";
        displayName = "[11th] Ural Transport";
        faction = "MEU_Insurrectionist";
        getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\Truck_02_kab_Koslovic_co.paa","11th_STB_aux\data\vehicles\Truck_02_kuz_Koslovic_co.paa","11th_STB_aux\data\vehicles\truck_02_int_Koslovic_co.paa","11th_STB_aux\data\vehicles\Truck_02_chassis_Koslovic_CO"};
        scope = 2;
        side = 0;
        editorCategory = "MEU_Koslovic_Wdl";
        editorsubCategory = "MEU_sub_Motorised";
        class SimpleObject {};
        textureList[] = {"KOS",1};
        transportSoldier = 14;
        class Turrets: Turrets {};
    };
    class MEU_Ural_MLRS_Koslovic : I_Truck_02_MRL_F
    {
        author = "Romeo";
        crew = "LM_OPCAN_KOS_Crewman";
        displayName = "[11th] Ural MLRS";
        faction = "MEU_Insurrectionist";
        scope = 2;
        scopeCurator = 2;
        side = 0;
        class SimpleObject {};
        typicalCargo[] = {"LM_OPCAN_KOS_Crewman","LM_OPCAN_KOS_Crewman"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\Truck_02_kab_Koslovic_co.paa","11th_STB_aux\data\vehicles\truck_02_int_Koslovic_co.paa","11th_STB_aux\data\vehicles\Truck_02_MRL_Koslovic_CO","11th_STB_aux\data\vehicles\Truck_02_chassis_Koslovic_CO"};
        editorCategory = "MEU_Koslovic_Wdl"; 
    };
    class MEU_Kazan_Koslovic: O_MBT_02_cannon_F 
    { 
        author = "Romeo"; 
		side = 0; 
		faction = "MEU_Insurrectionist"; 
		displayName = "[11th] Kazan"; 
		scope = 2; 
		scopeCurator = 2; 
		scopeArsenal = 2; 
        editorCategory = "MEU_Koslovic_Wdl"; 
        editorsubCategory = "MEU_sub_arm"; 
		hiddenSelections[] = {"camo1","camo2","camo3"}; 
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\MBT_02_body_Koslovic_CO.paa","11th_STB_aux\data\vehicles\MBT_02_turret_Koslovic_CO.paa","11th_STB_aux\data\vehicles\MBT_02_Koslovic_CO.paa"}; 
		crew = "LM_OPCAN_KOS_Crewman"; 
		textureList[] = {"KOS",1}; 
		class TransportMagazines{}; 
		class TransportItems{}; 
		class TransportWeapons{}; 
		class TextureSources 
		{ 
			class KOS 
			{ 
				displayName = "Koslovics"; 
				textures[] = {"11th_STB_aux\data\vehicles\MBT_02_body_Koslovic_CO.paa","11th_STB_aux\data\vehicles\MBT_02_turret_Koslovic_CO.paa","11th_STB_aux\data\vehicles\MBT_02_Koslovic_CO.paa"}; 
				factions[] = {"BLU_F","BLU_G_F","OPF_F","OPF_G_F","IND_F","IND_G_F","CIV_F"}; 
			}; 
		}; 
	};
    class MEU_Galkin_Koslovic: O_MRAP_02_HMG_F
	{
		displayName = "[11th] Galkin";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
        ace_cargo_size = 10;
        faction = "MEU_Insurrectionist";
        side = 0;
		editorCategory = "MEU_Koslovic_Wdl";
		editorsubCategory = "MEU_sub_Motorised";
		crew = "LM_OPCAN_KOS_Crewman";
        class TransportMagazines
		{
            delete _xx_1Rnd_HE_Grenade_shell;
            delete _xx_30Rnd_65x39_caseless_green;
            delete _xx_150Rndx762x54_Box;
            delete _xx_16rn_9x21_Mag;
            delete _xx_RPG32_F;
            delete _xx_1Rnd_SmokeOrange_Grenade_shell;
            delete _xx_1Rnd_SmokeRed_Grenade_shell;
            delete _xx_1Rnd_Smoke_Grenade_shell;
            delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 5);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 5);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 5);
			mag_xx(30rnd_556x45_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_msbs_AP, 5);
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
            delete _xx_SmokeShellOrange;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
            delete _xx_SmokeShell;
            delete _xx_HandGrenade;
			item_xx(MEU_Biofoam_Light, 40);
            item_xx(MEU_Medigel_Light, 40);
            item_xx(MEU_PlasmaIV, 20);
            item_xx(ACE_epinephrine, 40);
            item_xx(ACE_adenosine, 40);
            item_xx(ACE_Banana, 10);
            item_xx(ACE_splint, 20);
            item_xx(MEU_compat_Ibuprofen, 40);
		};
        class TransportWeapons
        {
            delete _xx_arifle_Katiba_F;
        }
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M250_APC","MG460_APC","SmokeLauncher"};
				magazines[] = 
				{
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"OPTRE_400Rnd_127x99_M250HMG", 
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
		};
        textureList[] = {"KOS_Camo",1};
		class TextureSources
		{
			class KOS_Camo
			{
				displayName = "KOS";
				author = "Romeo";
				textures[] = {"11th_STB_aux\data\vehicles\MRAP_02_ext_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\MRAP_02_ext_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\Turret_Koslovic_CO.paa"};
			};
		};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\MRAP_02_ext_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\MRAP_02_ext_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\Turret_Koslovic_CO.paa"};
	}; 
    class MEU_Otakar_Koslovic: O_APC_Wheeled_02_rcws_v2_F
    {
        crew = "LM_OPCAN_KOS_Crewman";
        displayName = "[11th] Otokar IFV";
        faction = "MEU_Insurrectionist";
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\APC_Wheeled_02_ext_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\APC_Wheeled_02_ext_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\Turret_Koslovic_CO.paa"};
        scope = 2;
        scopeCurator = 2;
        side = 0;
        class SimpleObject {};
        typicalCargo[] = {"LM_OPCAN_KOS_Crewman"};
        editorCategory = "MEU_Koslovic_Wdl";
		editorsubCategory = "MEU_sub_Motorised";
        class TextureSources 
		{ 
			class KOS_Camo
			{ 
				displayName = "Koslovics"; 
				textures[] = {"11th_STB_aux\data\vehicles\APC_Wheeled_02_ext_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\APC_Wheeled_02_ext_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\Turret_Koslovic_CO.paa"}; 
				factions[] = {"BLU_F","BLU_G_F","OPF_F","OPF_G_F","IND_F","IND_G_F","CIV_F"}; 
			}; 
		}; 
    };
    class MEU_Otakar_Koslovic_Unarmed: O_APC_Wheeled_02_rcws_v2_F
    {
        crew = "LM_OPCAN_KOS_Crewman";
        displayName = "[11th] Otokar APC";
        faction = "MEU_Insurrectionist";
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\APC_Wheeled_02_ext_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\APC_Wheeled_02_ext_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\Turret_Koslovic_CO.paa"};
        scope = 2;
        scopeCurator = 2;
        side = 0;
        class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
        class SimpleObject {};
        typicalCargo[] = {"LM_OPCAN_KOS_Crewman"};
        editorCategory = "MEU_Koslovic_Wdl";
		editorsubCategory = "MEU_sub_Motorised";
        class TextureSources 
		{ 
			class KOS_Camo
			{ 
				displayName = "Koslovics"; 
				textures[] = {"11th_STB_aux\data\vehicles\APC_Wheeled_02_ext_01_Koslovic_CO.paa","11th_STB_aux\data\vehicles\APC_Wheeled_02_ext_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\Turret_Koslovic_CO.paa"}; 
				factions[] = {"BLU_F","BLU_G_F","OPF_F","OPF_G_F","IND_F","IND_G_F","CIV_F"}; 
			}; 
		}; 
    };
    class MEU_Arkhangelsk_Koslovic : O_MBT_02_arty_base_F
    {
        author = "Romeo";
        crew = "LM_OPCAN_KOS_Crewman";
        scope = 2;
        scopeCurator = 2;
        faction = "MEU_Insurrectionist";
        displayName = "[11th] Arkhangelsk";
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","CamoNet"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\MBT_02_body_Koslovic_CO.paa","11th_STB_aux\data\vehicles\MBT_02_scorcher_Koslovic_CO.paa","11th_STB_aux\data\vehicles\MBT_02_Koslovic_CO.paa","11th_STB_aux\data\vehicles\Turret_Koslovic_CO.paa"};
        maxFordingDepth = -1.25;
        side = 0;
        textureList[] = {"KOS_Camo",1};
        class TextureSources {};
        typicalCargo[] = {"LM_OPCAN_KOS_Crewman","LM_OPCAN_KOS_Crewman","LM_OPCAN_KOS_Crewman"};
        editorCategory = "MEU_Koslovic_Wdl";
    };
    class MEU_Hyena_Friden: B_UGV_01_rcws_F
    {
        author = "Romeo";
        displayname = "[11th] Hyena";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        crew = "B_UAV_AI";
        faction = "MEU_Insurrectionist";
        side = 0;
        hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\UGV_01_ext_Friden_co.paa","\11th_STB_aux\data\vehicles\UGV_01_int_Friden_co.paa","\11th_STB_aux\data\vehicles\Turret_Friden.paa"};
        editorCategory = "MEU_Friden";
    };
	class MEU_Leopard: APC_Wheeled_02_base_v2_F
	{
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
		crewCrashProtection = 0.5;
		crewExplosionProtection = 0.5;
		armor = 400;
		armorStructural = 5;
		armorLights = 0.1;
		damageResistance = 0.008;
		ace_cargo_space = 8;
		ace_cargo_hasCargo = 1;		
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			delete _xx_150Rnd_762x54_Box;
			delete _xx_HandGrenade;
			delete _xx_MiniGrenade;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellRed;
			delete _xx_SmokeShellYellow;
			delete _xx_SmokeShellOrange;
			delete _xx_1Rnd_HE_Grenade_shell;
			delete _xx_1Rnd_Smoke_Grenade_shell;
			delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			delete _xx_1Rnd_SmokeOrange_Grenade_shell;
			delete _xx_1Rnd_SmokeRed_Grenade_shell;
			delete _xx_RPG32_F;
			delete _xx_RPG32_HE_F;
			delete _xx_Titan_AT;
			delete _xx_Titan_AA;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 10);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 10);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 10);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 10);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 10);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 10);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 10);
			mag_xx(30rnd_556x45_mag_AP, 10);
			mag_xx(30rnd_65x39_mag_AP, 10);
			mag_xx(30rnd_65x39_mag_msbs_AP, 10);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_Katiba_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;	
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 10);
            item_xx(MEU_Medigel_Light, 10);
            item_xx(ACE_plasmaIV_1000, 10);
            item_xx(ACE_epinephrine, 4);
            item_xx(ACE_adenosine, 4);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M250_APC","MG460_APC","SmokeLauncher"};
				magazines[] = 
				{
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_M250HMG", 
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
		};		
    };
	
	class MEU_Leopard_APC: MEU_Leopard
	{
		author = "1st MEU Oneill";
		displayname = "[11th] Leopard APC";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
		accuracy = 1000;
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"wheel_1_4_damage",0},{"wheel_2_4_damage",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_1_2",0},{"wheel_1_3",0},{"wheel_2_2",0},{"wheel_2_3",0},{"daylights",0},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_1_3_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_2_3_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"steering_1_1",0},{"steering_2_1",0},{"steering_1_2",0},{"steering_2_2",0},{"wheel_1_1_damper",0},{"wheel_2_1_damper",0},{"wheel_1_2_damper",0},{"wheel_1_3_damper",0},{"wheel_2_2_damper",0},{"wheel_2_3_damper",0},{"hatchdriver",0},{"hatchcommander",0},{"mainturret",0},{"maingun",0},{"obsturret",0},{"obsgun",0},{"damagehlaven",0},{"damagecamonet",0},{"vrtulea",0},{"vrtuleb",0},{"zasleh_rot",781},{"zasleh2_rot",3222.53},{"zasleh_hide",0},{"reverse_light",1},{"drivingwheel",0},{"indicatorvoltammeter",0},{"indicatortempoil",0},{"indicatortempwater",0},{"lights_driver",0},{"lights_driver_off",0},{"lights_turret",0},{"cannon_ready_light",0},{"engine_damage_fire_indicator",0},{"engine_damage_indicator",0},{"main_gun_damage_indicator",0},{"pedal_thrust",0},{"pedal_brake",0},{"turret_control_x",0},{"turret_control_y",0},{"mainturret_indicator",0},{"commander_mainturret_indicator",0},{"driver_reverse_cam",1},{"driver_hide_mfd",1},{"indicatorspeed_mfd_driver",0},{"indicatorrpm",0},{"indicatorrpm_mfd_driver",0},{"indicatortempwater_mfd_driver",0},{"indicatorfuel_mfd_driver",1},{"indicator_hull_direction_mfd_driver",0},{"indicator_main_turret_mfd_driver",0},{"indicator_hull_direction_mfd_gunner",0},{"indicator_main_turret_mfd_gunner",0},{"indicator_com_turret_mfd_gunner",0},{"indicator_com_turret_counter_mfd_gunner",0},{"indicator_com_smoke_1",1},{"indicator_com_smoke_2",1},{"indicator_damage_engine",0},{"indicator_damage_fuel",0},{"indicator_damage_track",0},{"indicator_turret_damage_hull",0},{"indicator_turret_damage_engine",0},{"indicator_turret_damage_fuel",0},{"indicator_turret_damage_main_gun",0},{"indicator_turret_damage_wheels",0},{"indicator_turret_damage_turret",0},{"indicator_turret_damage_com_turret",0},{"hide_mfd_and_pip_screen",1},{"hide_mfd_elements_for_com",1},{"slat_front_normal_hide",0},{"slat_front_damage_unhide",0},{"slat_front_damage_hide",0},{"slat_front_destroyed_unhide",0},{"slat_front_firegeo_hide",0},{"slat_back_normal_hide",0},{"slat_back_damage_unhide",0},{"slat_back_damage_hide",0},{"slat_back_destroyed_unhide",0},{"slat_back_firegeo_hide",0},{"slat_left_1_normal_hide",0},{"slat_left_1_damage_unhide",0},{"slat_left_1_damage_hide",0},{"slat_left_1_destroyed_unhide",0},{"slat_left_1_firegeo_hide",0},{"slat_left_2_normal_hide",0},{"slat_left_2_damage_unhide",0},{"slat_left_2_damage_hide",0},{"slat_left_2_destroyed_unhide",0},{"slat_left_2_firegeo_hide",0},{"slat_left_3_normal_hide",0},{"slat_left_3_damage_unhide",0},{"slat_left_3_damage_hide",0},{"slat_left_3_destroyed_unhide",0},{"slat_left_3_firegeo_hide",0},{"slat_right_1_normal_hide",0},{"slat_right_1_damage_unhide",0},{"slat_right_1_damage_hide",0},{"slat_right_1_destroyed_unhide",0},{"slat_right_1_firegeo_hide",0},{"slat_right_2_normal_hide",0},{"slat_right_2_damage_unhide",0},{"slat_right_2_damage_hide",0},{"slat_right_2_destroyed_unhide",0},{"slat_right_2_firegeo_hide",0},{"slat_right_3_normal_hide",0},{"slat_right_3_damage_unhide",0},{"slat_right_3_damage_hide",0},{"slat_right_3_destroyed_unhide",0},{"slat_right_3_firegeo_hide",0}};
			hide[] = {"clan","zasleh2","light_l","light_r","light_r2","light_l2","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.409;
			verticalOffsetWorld = -0.148;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_APC_Wheeled_02_rcws_v2_F.jpg";
		_generalMacro = "O_APC_Wheeled_02_rcws_v2_F";
        class TextureSources 
		{ 
			class UNSC_Camo
			{ 
				displayName = "UNSC"; 
				textures[] = {"11th_STB_aux\data\vehicles\Leopard_01_Ext_co.paa","11th_STB_aux\data\vehicles\Leopard_02_Ext_co.paa","11th_STB_aux\data\vehicles\Leopard_Turret.paa"}; 
				factions[] = {"BLU_F","BLU_G_F","OPF_F","OPF_G_F","IND_F","IND_G_F","CIV_F"}; 
			}; 
		}; 
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\vehicles\Leopard_01_Ext_co.paa",
			"11th_STB_aux\data\vehicles\Leopard_02_Ext_co.paa",
			"11th_STB_aux\data\vehicles\Leopard_Turret.paa",
		};
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Marine_Soldier_Rifleman_AR"};
		side = 1;
		faction = "MEU_UNSC";
		editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Motorised";
	};
	
	class MEU_Leopard_Medical_APC: MEU_Leopard
	{
		author = "1st MEU Oneill";
		displayname = "[11th] Leopard Medical APC";
        scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
		accuracy = 1000;
		class TransportMagazines
		{
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 5);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 5);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 5);
			mag_xx(30rnd_556x45_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_msbs_AP, 5);
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;	
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 40);
            item_xx(MEU_Medigel_Light, 40);
            item_xx(MEU_PlasmaIV, 20);
            item_xx(ACE_epinephrine, 40);
            item_xx(ACE_adenosine, 40);
            item_xx(ACE_Banana, 10);
            item_xx(ACE_splint, 20);
            item_xx(MEU_compat_Ibuprofen, 40);
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M250_APC","MG460_APC","SmokeLauncher"};
				magazines[] = 
				{
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"OPTRE_400Rnd_127x99_M250HMG", 
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
		};
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"wheel_1_4_damage",0},{"wheel_2_4_damage",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"wheel_1_1",0},{"wheel_2_1",0},{"wheel_1_2",0},{"wheel_1_3",0},{"wheel_2_2",0},{"wheel_2_3",0},{"daylights",0},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_1_3_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_2_3_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"steering_1_1",0},{"steering_2_1",0},{"steering_1_2",0},{"steering_2_2",0},{"wheel_1_1_damper",0},{"wheel_2_1_damper",0},{"wheel_1_2_damper",0},{"wheel_1_3_damper",0},{"wheel_2_2_damper",0},{"wheel_2_3_damper",0},{"hatchdriver",0},{"hatchcommander",0},{"mainturret",0},{"maingun",0},{"obsturret",0},{"obsgun",0},{"damagehlaven",0},{"damagecamonet",0},{"vrtulea",0},{"vrtuleb",0},{"zasleh_rot",781},{"zasleh2_rot",3222.53},{"zasleh_hide",0},{"reverse_light",1},{"drivingwheel",0},{"indicatorvoltammeter",0},{"indicatortempoil",0},{"indicatortempwater",0},{"lights_driver",0},{"lights_driver_off",0},{"lights_turret",0},{"cannon_ready_light",0},{"engine_damage_fire_indicator",0},{"engine_damage_indicator",0},{"main_gun_damage_indicator",0},{"pedal_thrust",0},{"pedal_brake",0},{"turret_control_x",0},{"turret_control_y",0},{"mainturret_indicator",0},{"commander_mainturret_indicator",0},{"driver_reverse_cam",1},{"driver_hide_mfd",1},{"indicatorspeed_mfd_driver",0},{"indicatorrpm",0},{"indicatorrpm_mfd_driver",0},{"indicatortempwater_mfd_driver",0},{"indicatorfuel_mfd_driver",1},{"indicator_hull_direction_mfd_driver",0},{"indicator_main_turret_mfd_driver",0},{"indicator_hull_direction_mfd_gunner",0},{"indicator_main_turret_mfd_gunner",0},{"indicator_com_turret_mfd_gunner",0},{"indicator_com_turret_counter_mfd_gunner",0},{"indicator_com_smoke_1",1},{"indicator_com_smoke_2",1},{"indicator_damage_engine",0},{"indicator_damage_fuel",0},{"indicator_damage_track",0},{"indicator_turret_damage_hull",0},{"indicator_turret_damage_engine",0},{"indicator_turret_damage_fuel",0},{"indicator_turret_damage_main_gun",0},{"indicator_turret_damage_wheels",0},{"indicator_turret_damage_turret",0},{"indicator_turret_damage_com_turret",0},{"hide_mfd_and_pip_screen",1},{"hide_mfd_elements_for_com",1},{"slat_front_normal_hide",0},{"slat_front_damage_unhide",0},{"slat_front_damage_hide",0},{"slat_front_destroyed_unhide",0},{"slat_front_firegeo_hide",0},{"slat_back_normal_hide",0},{"slat_back_damage_unhide",0},{"slat_back_damage_hide",0},{"slat_back_destroyed_unhide",0},{"slat_back_firegeo_hide",0},{"slat_left_1_normal_hide",0},{"slat_left_1_damage_unhide",0},{"slat_left_1_damage_hide",0},{"slat_left_1_destroyed_unhide",0},{"slat_left_1_firegeo_hide",0},{"slat_left_2_normal_hide",0},{"slat_left_2_damage_unhide",0},{"slat_left_2_damage_hide",0},{"slat_left_2_destroyed_unhide",0},{"slat_left_2_firegeo_hide",0},{"slat_left_3_normal_hide",0},{"slat_left_3_damage_unhide",0},{"slat_left_3_damage_hide",0},{"slat_left_3_destroyed_unhide",0},{"slat_left_3_firegeo_hide",0},{"slat_right_1_normal_hide",0},{"slat_right_1_damage_unhide",0},{"slat_right_1_damage_hide",0},{"slat_right_1_destroyed_unhide",0},{"slat_right_1_firegeo_hide",0},{"slat_right_2_normal_hide",0},{"slat_right_2_damage_unhide",0},{"slat_right_2_damage_hide",0},{"slat_right_2_destroyed_unhide",0},{"slat_right_2_firegeo_hide",0},{"slat_right_3_normal_hide",0},{"slat_right_3_damage_unhide",0},{"slat_right_3_damage_hide",0},{"slat_right_3_destroyed_unhide",0},{"slat_right_3_firegeo_hide",0}};
			hide[] = {"clan","zasleh2","light_l","light_r","light_r2","light_l2","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.409;
			verticalOffsetWorld = -0.148;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_APC_Wheeled_02_rcws_v2_F.jpg";
		_generalMacro = "O_APC_Wheeled_02_rcws_v2_F";
		class TextureSources 
		{ 
			class UNSC_Camo
			{ 
				displayName = "UNSC"; 
				textures[] = {"11th_STB_aux\data\vehicles\Leopard_01_Ext_co.paa","11th_STB_aux\data\vehicles\Leopard_02_Ext_co.paa","11th_STB_aux\data\vehicles\Leopard_Turret.paa"}; 
				factions[] = {"BLU_F","BLU_G_F","OPF_F","OPF_G_F","IND_F","IND_G_F","CIV_F"}; 
			}; 
		}; 
		hiddenSelectionsTextures[] = 
		{
			"11th_STB_aux\data\vehicles\Leopard_01_Ext_co.paa",
			"11th_STB_aux\data\vehicles\Leopard_02_Ext_co.paa",
			"11th_STB_aux\data\vehicles\Leopard_Turret.paa",
		};
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Marine_Soldier_Rifleman_AR"};
		side = 1;
		faction = "MEU_UNSC";
		editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_Motorised";
	};
	
    class MEU_M12_AP : VES_M12_APC
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] M12 AP Warthog";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
        ace_cargo_size = 10;
        faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_A";

    };
    class MEU_M813_TT: VES_M813_TT
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "[11th] M813 TT Warthog";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_A";
	};
    class MEU_M12A1_AT: VES_M12A1_LRV
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "[11th] M12A1 AT Warthog";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_A";
	};
    class MEU_M12_Unarmed: VES_M12
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "[11th] M12 FAV Warthog";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_A";
        hiddenSelectionstextures[] = {"OPTRE_Vehicles\Warthog\data\warthog_black_co.paa"};

	};
    class MEU_M12G1_Gauss: VES_M12G1_LRV
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "[11th] M12G1 FAV Warthog";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_A";
    };
    class MEU_M12_LAAG: VES_M12_LRV
	{
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		displayName = "[11th] M12 LAAG Warthog";
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
        editorCategory = "MEU_cat_A";        
    };
    class MEU_Felix_Rotary_Friden : I_Heli_light_03_F
    {
        author = "Romeo";
        crew = "LM_OPCAN_FRI_Rifleman";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[11th] Felix";
        faction = "MEU_Insurrectionist";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\Heli_Light_03_base_friden_CO.paa"};
        side = 0;
        transportSoldier = 4;
        editorCategory = "MEU_Friden";
        editorsubCategory = "MEU_sub_rot";
    };
    class MEU_Arthur_Rotary_Friden : I_Heli_Transport_02_F
    {
        author = "Romeo";
        crew = "LM_OPCAN_FRI_Rifleman";
        scope = 2;
        scopeArsenal = 2;
        scopeCruator = 2;
        displayName = "[11th] Arthur";
        faction = "MEU_Insurrectionist";
        hiddenSelections[] = {"camo1","camo2","camo3"};
        hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\Arthur_Body_1.paa","\11th_STB_aux\data\vehicles\Arthur_Body_2.paa","\11th_STB_aux\data\vehicles\Arthur_Body_3.paa"};
        side = 0;
        editorCategory = "MEU_Friden";
        editorsubCategory = "MEU_sub_rot";
    };
    class MEU_Wasp_Friden : I_Plane_Fighter_03_CAS_F
    {
        author = "Romeo";
        crew = "LM_OPCAN_FRI_Rifleman";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[11th] Wasp";
        side = 0;
        faction = "MEU_Insurrectionist";
        hiddenSelections[]= {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\plane_buzzard_body_01_co.paa","\11th_STB_aux\data\vehicles\plane_buzzard_body_02_co.paa"};
        editorCategory = "MEU_Friden";
        editorsubCategory = "MEU_sub_fix";
    };
    class MEU_Witherwing_Friden : I_Plane_Fighter_04_F
    {
        author = "Romeo";
        crew = "LM_OPCAN_FRI_Rifleman";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] Witherwing";
        side = 0;
        faction = "MEU_Insurrectionist";
        hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\Witherwing_01_co.paa","\11th_STB_aux\data\vehicles\Witherwing_02_co.paa"};
        editorCategory = "MEU_Friden";
        editorsubCategory = "MEU_sub_fix";
    };
    class MEU_Ansaldo_Friden: O_MRAP_02_HMG_F
	{
		displayName = "[11th] Ansaldo";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
        ace_cargo_size = 10;
        faction = "MEU_Insurrectionist";
        side = 0;
		editorCategory = "MEU_Friden";
		editorsubCategory = "MEU_sub_Motorised";
		crew = "LM_OPCAN_FRI_Rifleman";
        class TransportMagazines
		{
            delete _xx_1Rnd_HE_Grenade_shell;
            delete _xx_30Rnd_65x39_caseless_green;
            delete _xx_150Rndx762x54_Box;
            delete _xx_16rn_9x21_Mag;
            delete _xx_RPG32_F;
            delete _xx_1Rnd_SmokeOrange_Grenade_shell;
            delete _xx_1Rnd_SmokeRed_Grenade_shell;
            delete _xx_1Rnd_Smoke_Grenade_shell;
            delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 5);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 5);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 5);
			mag_xx(30rnd_556x45_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_msbs_AP, 5);
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
            delete _xx_SmokeShellOrange;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
            delete _xx_SmokeShell;
            delete _xx_HandGrenade;
			item_xx(MEU_Biofoam_Light, 40);
            item_xx(MEU_Medigel_Light, 40);
            item_xx(MEU_PlasmaIV, 20);
            item_xx(ACE_epinephrine, 40);
            item_xx(ACE_adenosine, 40);
            item_xx(ACE_Banana, 10);
            item_xx(ACE_splint, 20);
            item_xx(MEU_compat_Ibuprofen, 40);
		};
        class TransportWeapons
        {
            delete _xx_arifle_Katiba_F;
        }
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M250_APC","MG460_APC","SmokeLauncher"};
				magazines[] = 
				{
					"40Rnd_HEDP_Belt",
					"40Rnd_HEDP_Belt",
					"OPTRE_400Rnd_127x99_M250HMG", 
					"OPTRE_400Rnd_127x99_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"OPTRE_400Rnd_127x99_HE_M250HMG",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
		};
        textureList[] = {"OPF",0};
		class TextureSources
		{
			class ANS_Friden
			{
				displayName = "Friden";
				author = "Romeo";
				textures[] = {"11th_STB_aux\data\vehicles\Ansaldo_FRI_Front_co.paa","11th_STB_aux\data\vehicles\Ansaldo_FRI_Back_co.paa","11th_STB_aux\data\vehicles\Turret_Friden.paa"};
				factions[] = {"OPF_F_ARC"};
			};
        };
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\vehicles\Ansaldo_FRI_Front_co.paa","11th_STB_aux\data\vehicles\Ansaldo_FRI_Back_co.paa","11th_STB_aux\data\vehicles\Turret_Friden.paa"};
    };
        
    class MEU_Warrior_WDL: I_APC_tracked_03_cannon_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] FV510 Warrior";
		faction = "MEU_UNSC";
		crew = "VES_Rifleman_MA5B_MAR";
		side = 1;
        editorCategory = "MEU_cat_A";
		editorsubCategory = "MEU_sub_Mechanized";
		vehicleClass = "APCs";
		hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\APC_Tracked_03_Ext_olive_CO.paa","\11th_STB_aux\data\vehicles\APC_Tracked_03_Ext2_olive_CO.paa","a3\Armor_F\Data\camonet_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
        class TransportMagazines
		{
            delete _xx_1Rnd_HE_Grenade_shell;
            delete _xx_30Rnd_65x39_caseless_green;
            delete _xx_150Rndx762x54_Box;
            delete _xx_16rn_9x21_Mag;
            delete _xx_RPG32_F;
            delete _xx_1Rnd_SmokeOrange_Grenade_shell;
            delete _xx_1Rnd_SmokeRed_Grenade_shell;
            delete _xx_1Rnd_Smoke_Grenade_shell;
            delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 5);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 5);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 5);
			mag_xx(30rnd_556x45_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_msbs_AP, 5);
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
            delete _xx_SmokeShellOrange;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
            delete _xx_SmokeShell;
            delete _xx_HandGrenade;
			item_xx(MEU_Biofoam_Light, 40);
            item_xx(MEU_Medigel_Light, 40);
            item_xx(MEU_PlasmaIV, 20);
            item_xx(ACE_epinephrine, 40);
            item_xx(ACE_adenosine, 40);
            item_xx(ACE_Banana, 10);
            item_xx(ACE_splint, 20);
            item_xx(MEU_compat_Ibuprofen, 40);
		};
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"M1024_30mm","M247_APC","SmokeLauncher"};
				magazines[] = 
				{
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
                    "OPTRE_400Rnd_762x51_Box_APT", 
					"OPTRE_400Rnd_762x51_Box_APT",
					"OPTRE_400Rnd_762x51_Box_APT",
					"OPTRE_400Rnd_762x51_Box_APT",
					"OPTRE_400Rnd_762x51_Box_APT", 
					"OPTRE_400Rnd_762x51_Box_APT",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
	   };
    };
    class MEU_Warrior_Katie: I_APC_tracked_03_cannon_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] FV510 Warrior (Katie)";
		faction = "MEU_UNSC";
		crew = "VES_Rifleman_MA5B_MAR";
		side = 1;
        editorCategory = "MEU_cat_A";
		editorsubCategory = "MEU_sub_Mechanized";
		vehicleClass = "APCs";
		hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\APC_Tracked_03_Ext_olive_CO.paa","\11th_STB_aux\data\vehicles\APC_Tracked_03_Ext2_olive_Katie_CO.paa","a3\Armor_F\Data\camonet_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
        class TransportMagazines
		{
            delete _xx_1Rnd_HE_Grenade_shell;
            delete _xx_30Rnd_65x39_caseless_green;
            delete _xx_150Rndx762x54_Box;
            delete _xx_16rn_9x21_Mag;
            delete _xx_RPG32_F;
            delete _xx_1Rnd_SmokeOrange_Grenade_shell;
            delete _xx_1Rnd_SmokeRed_Grenade_shell;
            delete _xx_1Rnd_Smoke_Grenade_shell;
            delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 5);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 5);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 5);
			mag_xx(30rnd_556x45_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_msbs_AP, 5);
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
            delete _xx_SmokeShellOrange;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
            delete _xx_SmokeShell;
            delete _xx_HandGrenade;
			item_xx(MEU_Biofoam_Light, 40);
            item_xx(MEU_Medigel_Light, 40);
            item_xx(MEU_PlasmaIV, 20);
            item_xx(ACE_epinephrine, 40);
            item_xx(ACE_adenosine, 40);
            item_xx(ACE_Banana, 10);
            item_xx(ACE_splint, 20);
            item_xx(MEU_compat_Ibuprofen, 40);
		};
    };
    class MEU_Champion_Friden: I_APC_tracked_03_cannon_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
		displayName = "[11th] Champion";
		faction = "MEU_Insurrectionist";
		crew = "LM_OPCAN_FRI_Rifleman";
		side = 0;
        editorCategory = "MEU_Friden";
		editorsubCategory = "MEU_sub_Mechanized";
		vehicleClass = "APCs";
		hiddenSelections[] = {"camo1","camo2","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\Champion_FRI_Back_co.paa","\11th_STB_aux\data\vehicles\Champion_FRI_Front_co.paa","a3\Armor_F\Data\camonet_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
        class TransportMagazines
		{
            delete _xx_1Rnd_HE_Grenade_shell;
            delete _xx_30Rnd_65x39_caseless_green;
            delete _xx_150Rndx762x54_Box;
            delete _xx_16rn_9x21_Mag;
            delete _xx_RPG32_F;
            delete _xx_1Rnd_SmokeOrange_Grenade_shell;
            delete _xx_1Rnd_SmokeRed_Grenade_shell;
            delete _xx_1Rnd_Smoke_Grenade_shell;
            delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 5);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 5);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 5);
			mag_xx(30rnd_556x45_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_msbs_AP, 5);
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
            delete _xx_SmokeShellOrange;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
            delete _xx_SmokeShell;
            delete _xx_HandGrenade;
			item_xx(MEU_Biofoam_Light, 40);
            item_xx(MEU_Medigel_Light, 40);
            item_xx(MEU_PlasmaIV, 20);
            item_xx(ACE_epinephrine, 40);
            item_xx(ACE_adenosine, 40);
            item_xx(ACE_Banana, 10);
            item_xx(ACE_splint, 20);
            item_xx(MEU_compat_Ibuprofen, 40);
		};
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"M1024_30mm","M247_APC","SmokeLauncher"};
				magazines[] = 
				{
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
                    "OPTRE_400Rnd_762x51_Box_APT", 
					"OPTRE_400Rnd_762x51_Box_APT",
					"OPTRE_400Rnd_762x51_Box_APT",
					"OPTRE_400Rnd_762x51_Box_APT",
					"OPTRE_400Rnd_762x51_Box_APT", 
					"OPTRE_400Rnd_762x51_Box_APT",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
	    };
    };
	
    class MEU_Raptor_Friden_IFV: I_APC_Wheeled_03_cannon_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] Raptor IFV";
		picture = "\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\APC_Wheeled_03_CA.paa";
		faction = "MEU_Insurrectionist";
        crew = "LM_OPCAN_FRI_Rifleman";
		side = 0;
        editorCategory = "MEU_Friden";
		editorsubCategory = "MEU_sub_Motorised";
        vehicleClass = "APCs";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4",};
        hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\Raptor_01_Ext_co.paa","\11th_STB_aux\data\vehicles\Raptor_02_Ext_co.paa","\11th_STB_aux\data\vehicles\Raptor_Turret_co.paa","\11th_STB_aux\data\vehicles\Raptor_03_Ext_co.paa"};
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"M1024_30mm","M247_APC","missiles_titan","SmokeLauncher"};
				magazines[] = 
				{
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"80Rnd_30mm_HEAT",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
					"60Rnd_30mm_APFSDS",
                    "OPTRE_400Rnd_762x51_Box_APT", 
					"OPTRE_400Rnd_762x51_Box_APT",
					"OPTRE_400Rnd_762x51_Box_APT",
					"OPTRE_400Rnd_762x51_Box_APT",
					"OPTRE_400Rnd_762x51_Box_APT", 
					"OPTRE_400Rnd_762x51_Box_APT",
                    "2Rnd_GAT_missiles",
                    "2Rnd_GAT_missiles",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
	    };
        class TransportMagazines
		{
            delete _xx_1Rnd_HE_Grenade_shell;
            delete _xx_30Rnd_65x39_caseless_green;
            delete _xx_150Rndx762x54_Box;
            delete _xx_16rn_9x21_Mag;
            delete _xx_RPG32_F;
            delete _xx_1Rnd_SmokeOrange_Grenade_shell;
            delete _xx_1Rnd_SmokeRed_Grenade_shell;
            delete _xx_1Rnd_Smoke_Grenade_shell;
            delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 5);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 5);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 5);
			mag_xx(30rnd_556x45_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_msbs_AP, 5);
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
            delete _xx_SmokeShellOrange;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
            delete _xx_SmokeShell;
            delete _xx_HandGrenade;
			item_xx(MEU_Biofoam_Light, 40);
            item_xx(MEU_Medigel_Light, 40);
            item_xx(MEU_PlasmaIV, 20);
            item_xx(ACE_epinephrine, 40);
            item_xx(ACE_adenosine, 40);
            item_xx(ACE_Banana, 10);
            item_xx(ACE_splint, 20);
            item_xx(MEU_compat_Ibuprofen, 40);
		};
	};
	
    class MEU_Raptor_Friden_APC: I_APC_Wheeled_03_cannon_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] Raptor APC";
        crew = "LM_OPCAN_FRI_Rifleman";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {{(_this select 0) animate [_x, 1]} forEach ['HideHull','HideTurret']}";
		};
		faction = "MEU_Insurrectionist";
		side = 0;
        editorCategory = "MEU_Friden";
		editorsubCategory = "MEU_sub_Motorised";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
        hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\Raptor_01_Ext_co.paa","\11th_STB_aux\data\vehicles\Raptor_02_Ext_co.paa","\11th_STB_aux\data\vehicles\Raptor_03_Ext_co.paa"};
        class Turrets{};
		threat[] = {0,0,0};
        class TransportMagazines
		{
            delete _xx_1Rnd_HE_Grenade_shell;
            delete _xx_30Rnd_65x39_caseless_green;
            delete _xx_150Rndx762x54_Box;
            delete _xx_16rn_9x21_Mag;
            delete _xx_RPG32_F;
            delete _xx_1Rnd_SmokeOrange_Grenade_shell;
            delete _xx_1Rnd_SmokeRed_Grenade_shell;
            delete _xx_1Rnd_Smoke_Grenade_shell;
            delete _xx_1Rnd_SmokeYellow_Grenade_shell;
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 5);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 5);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 5);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 5);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 5);
			mag_xx(30rnd_556x45_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_AP, 5);
			mag_xx(30rnd_65x39_mag_msbs_AP, 5);
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
            delete _xx_SmokeShellOrange;
            delete _xx_SmokeShellRed;
            delete _xx_SmokeShellYellow;
            delete _xx_SmokeShell;
            delete _xx_HandGrenade;
			item_xx(MEU_Biofoam_Light, 40);
            item_xx(MEU_Medigel_Light, 40);
            item_xx(MEU_PlasmaIV, 20);
            item_xx(ACE_epinephrine, 40);
            item_xx(ACE_adenosine, 40);
            item_xx(ACE_Banana, 10);
            item_xx(ACE_splint, 20);
            item_xx(MEU_compat_Ibuprofen, 40);
		};
	};
	
    class MEU_Tusk_Friden: I_MBT_03_cannon_F
	{
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] Tusk";
        side = 0;
		crew = "LM_OPCAN_FRI_Rifleman";
		faction = "MEU_Insurrectionist";
        armor = 1200;
		armorStructural = 6;
        editorCategory = "MEU_Friden";
		editorsubCategory = "MEU_sub_arm";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\11th_STB_aux\data\vehicles\Tusk_Ext01_co.paa","\11th_STB_aux\data\vehicles\Tusk_Ext02_co.paa","\11th_STB_aux\data\vehicles\Tusk_RCWS_co.paa"};
        class Turrets: Turrets
		{
            class MainTurret: MainTurret
            {
				weapons[] = {"M512_90mm","M247_APC","SmokeLauncher"};
				magazines[] = 
				{
					"30Rnd_90mm_SAPHE",
					"30Rnd_90mm_HEAT",
					"60Rnd_90mm_APBC",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"OPTRE_400Rnd_762x51_Box_AP",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
             };
         };
     };
     class MEU_Gungoose: OPTRE_M274_ATV
	 {
		dlc = "1stMEU";
		author = "Romeo";
		scope = 2;
		scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] M274-M Gungoose [WIP]";
		faction = "MEU_UNSC";
        ace_cargo_size = 10;
        side = 1;
		editorCategory = "MEU_cat_A";
		editorsubCategory = "MEU_sub_WIP";
		crew = "VES_Rifleman_MA5B_MAR";
		hiddenSelections[] = {"camo1","camo2","attach_police"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Mongoose\data\body1_blk_co.paa","OPTRE_Vehicles\Mongoose\data\body2_blk_co.paa"};
        class Turrets{};
		showNVGCargo[] = {1};
		soundAttenuationCargo[] = {1,0};
		showNVGDriver = 1;
		hideWeaponsDriver = 0;
		hideWeaponsCargo = 0;
		weapons[] = {"M247_APC","MG460_APC"};
        magazines[] =
			{
				"OPTRE_400Rnd_762x51_Box_APT", 
				"OPTRE_400Rnd_762x51_Box_APT",
				"40Rnd_HEDP_Belt"
			};
		driverAction = "driver_quadbike";
		getInAction = "GetInQuadbike";
		getOutAction = "GetOutQuadbike";
		cargoAction[] = {"passenger_quadbike"};
		cargoGetInAction[] = {"GetInQuadbike_cargo"};
		cargoGetOutAction[] = {"GetOutQuadbike_cargo"};
		preciseGetInOut = 1;
		cargoPreciseGetInOut[] = {1};
		extCameraPosition[] = {0,1.6,-4.5};
		camShakeCoef = 1.0;
	 };
    
// Ground Vehicles End	

// Turrets Start
	class M910_Point_Defense_Cannon: StaticWeapon
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		isUav = 1;
		crew = "B_UAV_AI";
		armor = 250;
		vehicleClass = "OPTRE_UNSC_corvette_class";
		displayName = "[11th] M910 Point Defense Gun";
		model = "\OPTRE_Corvette\weapons\pointdefense\turret.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		mapSize = 2;
		gunBeg[] = {"z_gunL_chamber","z_gunR_chamber"};
		gunEnd[] = {"z_gunL_muzzle","z_gunR_muzzle"};
		uavCameraGunnerPos = "pos_gunner_view";
		uavCameraGunnerDir = "pos_gunner_view_dir";
		typicalCargo[] = {"B_UAV_AI"};
		enableGPS = 1;
		availableForSupportTypes[] = {"Artillery"};
		artilleryScanner = 1;
		radartype = 2;
		radarTarget = 1;
		radarTargetSize = 0.9;
		visualTarget = 1;
		visualTargetSize = 1.2;
		irTarget = 1;
		irTargetSize = 0.5;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		reportOwnPosition = 1;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 16;
		mass = 1000000;
		class AttributeValues
		{
			RadarUsageAI = 1;
		};
		class AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "M910_Point_Defense_Cannon";
			};
			class muzzle_hide_cannon
			{
				source = "reload";
				weapon = "OPTRE_M9109_Turret";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "MainTurret";
				animationSourceGun = "MainGun";
				memoryPointGun[] = {"z_gunL_chamber","z_gunR_chamber"};
				gunAxis = "gun_axis";
				turretAxis = "turret_axis";
				minElev = -12;
				maxElev = 120;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				maxHorizontalRotSpeed = 3;
				maxVerticalRotSpeed = 3;
				gunnerAction = "driver_boat01";
				gunnerInAction = "driver_boat01";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				gunnerName = "Gunner";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				commanding = 1;
				primaryGunner = 1;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
				uavCameraGunnerPos = "pos_gunner_view_arty";
				uavCameraGunnerDir = "pos_gunner_view_arty_dir";
				memoryPointGunnerOptics = "pos_gunner_view_arty";
				cameraDir = "pos_gunner_view_arty_dir";
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";	
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				optics = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex = 5;
				weapons[] = {"M910_Point_Defense_Cannon"};
				magazines[] = 
				{
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT",
					"20Rnd_50mm_HEAT"
				};
				gunnerOpticsShowCursor = 1;
				visionMode[] = {"Normal","NVG","Ti"};
				thermalMode[] = {1,2,3,4,5};
				castGunnerShadow = 1;
				startEngine = 0;
				enableManualFire = 0;
				gunnerForceOptics = 1;
				gunnerForceOutOptics = 1;
				hideWeaponsGunner = 1;
				class ViewGunner: ViewOptics
				{
					initFov = 0.7;
					minFov = 0.01;
					maxFov = 1;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				};
			};
		};
	};
	
	class M910_Point_Defense_Cannon_Active: M910_Point_Defense_Cannon
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] M910 Point Defense Cannon";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
        faction = "MEU_UNSC";
		side = 1;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_trt";
	};
	
	class M910_Point_Defense_Cannon_Active_Inverted: M910_Point_Defense_Cannon
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] M910 Point Defense Cannon (inverted)";
        tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
		model = "\OPTRE_Corvette\weapons\pointdefense\turret_u.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -120;
				maxElev = 12;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				class ViewGunner: ViewOptics
				{
					initFov = 0.7;
					minFov = 0.01;
					maxFov = 1;
				};
			};
		};
        faction = "MEU_UNSC";
		side = 1;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_trt";
	};
	
// Turrets End

// Air Vehicles Start    
    class OPTRE_AV22_Sparrowhawk_Base: Helicopter_Base_H
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        tf_range = 120000;
        weapons[] = {"CMFlareLauncher_Singles"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
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
        };
        memoryPointDriverOptics = "gunnerview";
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
    };  
    class VES_AV22_Sparrowhawk_Base_F: VES_AV22_Sparrowhawk_Base
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
        tf_range = 120000;
         class UserActions
         {
        class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
        };
        weapons[] = {"CMFlareLauncher_Singles"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
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
        };
        memoryPointDriverOptics = "gunnerview";
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 2;
                };
            };
        };
    };
	class MEU_Wyvern: O_T_VTOL_02_infantry_dynamicLoadout_F
    {
		crewCrashProtection = 0.001;
		crewExplosionProtection = 0.001;
		_generalMacro = "O_T_VTOL_02_infantry_dynamicLoadout_F";
		editorCategory = "MEU_cat_A";
		editorsubCategory = "MEU_sub_rot";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        airBrakeFrictionCoef = 50;
        displayName = "[11th] Pegasus Wyvern";
        armor = 350;
        damageResistance = 0.00555;
        tf_range = 120000;
        faction = "MEU_UNSC";
		side = 1;
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","PylonRack_Missile_AMRAAM_D_x2","PylonRack_Missile_AMRAAM_D_x2","38Rnd_80mm_rockets","Laserbatteries"};
		weapons[] = {"CMFlareLauncher","weapon_AMRAAMLauncher","rockets_Skyfire","Laserdesignator_mounted"};
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 20);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
		class Turrets: Turrets
		{
			class GunnerTurret: GunnerTurret
			{
				magazines[] = {"680Rnd_35mm_AA_shells_Tracer_Yellow","Laserbatteries"};
				weapons[] = {"autocannon_35mm","Laserdesignator_mounted"};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
		class TextureSources
		{
			class Grey
			{
				displayName = "UNSC Wyvern Class";
				author = "1stMEU";
				factions[] = {"MEU_UNSC"};
				textures[] = {"11th_STB_aux\data\pegasus\vic\VTOL_02_EXT01_grey_CO.paa","11th_STB_aux\data\pegasus\vic\VTOL_02_EXT02_grey_CO.paa","11th_STB_aux\data\pegasus\vic\VTOL_02_EXT03_L_grey_CO.paa","11th_STB_aux\data\pegasus\vic\VTOL_02_EXT03_R_grey_CO.paa"};
			};
		};
        hiddenSelections[] ={
			"Camo_1",
			"Camo_2",
			"Camo_3", 
			"Camo_4"
		};
        hiddenSelectionsTextures[] = 
		{
		"11th_STB_aux\data\pegasus\vic\VTOL_02_EXT01_grey_CO.paa",
		"11th_STB_aux\data\pegasus\vic\VTOL_02_EXT02_grey_CO.paa", 
		"11th_STB_aux\data\pegasus\vic\VTOL_02_EXT03_L_grey_CO.paa",
		"11th_STB_aux\data\pegasus\vic\VTOL_02_EXT03_R_grey_CO.paa"
		};
    };
	
    class MEU_Blackfish: B_T_VTOL_01_armed_F
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] Pegasus Blackfish";
        armor = 1250;
        damageResistance = 0.00055;
        tf_range = 120000;
        faction = "MEU_UNSC";
		side = 1;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
        hiddenSelections[] ={
			"Camo_1",
			"Camo_2",
			"Camo_3", 
			"Camo_4"
		};
        hiddenSelectionsTextures[] = 
		{
		"11th_STB_aux\data\pegasus\vic\esp_blackfish_1.paa",
		"11th_STB_aux\data\pegasus\vic\esp_blackfish_2_ala31.paa", 
		"11th_STB_aux\data\pegasus\vic\esp_blackfish_3.paa",
		"11th_STB_aux\data\pegasus\vic\esp_blackfish_4.paa"
		};
        class useractions
        {
                        class Ramp_Open
			{
				userActionID = 60;
				displayName = "$STR_ACTION_RAMP_OPEN0";
				textToolTip = "$STR_ACTION_RAMP_OPEN0";
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position = "";
				condition = "this doorPhase ""Door_1_source"" < 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement = "this animateDoor ['Door_1_source', 1]";
				priority = 1.5;
				radius = 15;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				showWindow = 0;
				onlyForPlayer = 1;
				shortcut = "";
			};
			class Ramp_Close: Ramp_Open
			{
				userActionID = 61;
				displayName = "$STR_ACTION_RAMP_CLOSE0";
				textToolTip = "$STR_ACTION_RAMP_CLOSE0";
				condition = "this doorPhase ""Door_1_source"" > 0.5 AND Alive(this) && ({player == _x} count [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]] > 0) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)";
				statement = "this animateDoor ['Door_1_source', 0]";
			};
        };
    };
    
	class OPTRE_UNSC_falcon: OPTRE_falcon_base
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        tf_range = 120000;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        hiddenSelectionstextures[] = {"OPTRE_Vehicles\Falcon\data\falcon_hull_night_CO.paa","optre_vehicles\falcon\data\falcon_hullextra_night_co.paa","optre_vehicles\falcon\data\falcon_wingtips_night_co.paa","optre_vehicles\falcon\data\falcon_skid_night_co.paa"};
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 2;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 20);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
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
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        tf_range = 120000;
        crewVulnerable = 0;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"};
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 20);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
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
        class textureSources
        {
            class Peg_CWO2
            {
                displayName="CWO2";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO2.paa"
                };
            };
            class Peg_CWO3
            {
                displayName="CWO3";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO3.paa"
                };
            };
            class Peg_CWO4
            {
                displayName="CWO4";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO4.paa"
                };
            };
            class Peg_Torres
                {
                displayName="Torres";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_Torres.paa"
                };
            };
            class Peg_Chaotic
                {
                displayName="Chaotic";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa"
                };
            };
            class Peg_Bloodbath
                {
                displayName="Bloodbath";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa"
                };
            };
            class Peg_Black
            {
            displayName="Black";
            author="chaotic"
            textures[]=
            {
                "OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"                 
                };
            };
        };
        class ACE_SelfActions: ACE_SelfActions
        {
            class 1stMEU_Style_Changer
            {
                displayName="Change Style";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSwimming",
                    "isNotSitting"
                };
                condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled=0;
                priority=2;
                
                class 1stMEU_NoseArt_None
                {
                    displayName="None";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSwimming",
                        "isNotSitting"
                    };
                    condition="!(isNull objectParent player)";
                    statement="_target setObjectTextureGlobal [0,'V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO.paa']";
                    showDisabled=0;
                    runOnHover=0;
                    priority=2.5;
                };
                class customdivider
                {
                    displayname = "Custom Skins"
                
                    class 1stMEU_Style_CWO2: 1stMEU_NoseArt_None
                    {
                        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                        displayName="CWO2";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO2.paa']";
                    };
                    class 1stMEU_Style_CWO3: 1stMEU_NoseArt_None
                    {
                        displayName="CWO3";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO3.paa']";
                    };
                    class 1stMEU_NoseArt_CWO4: 1stMEU_NoseArt_None
                    {
                        displayName="CWO4";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO4.paa']";
                    };
                    class 1stMEU_NoseArt_Torres: 1stMEU_NoseArt_None
                    {
                        displayName="Torres";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_Torres.paa']";
                    };
                    class 1stMEU_NoseArt_Chaotic: 1stMEU_NoseArt_None
                    {
                        displayName="Chaotic";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa']";
                    };
                    class 1stMEU_NoseArt_Bloodbath: 1stMEU_NoseArt_None
                    {
                        displayName="Bloodbath";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa']";
                    };
                };
                class stockdivider
                {
                    displayname = "Stock Skins"
                    class 1stMEU_NoseArt_Des: 1stMEU_NoseArt_None
                    {
                        displayName="Desert";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO.paa']";
                    };
                    class 1stMEU_NoseArt_WDL: 1stMEU_NoseArt_None
                    {
                        displayName="Woodland";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO.paa']";
                    };
                    class 1stMEU_NoseArt_JNGL: 1stMEU_NoseArt_None
                    {
                        displayName="Jungle";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO.paa']";
                    };
                    class 1stMEU_NoseArt_URBN: 1stMEU_NoseArt_None
                    {
                        displayName="Urban";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO.paa']";
                    };
                    class 1stMEU_NoseArt_BLK: 1stMEU_NoseArt_None
                    {
                        displayName="Black";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Frost: 1stMEU_NoseArt_None
                    {
                        displayName="Frost";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO.paa']";
                    };
                    class 1stMEU_NoseArt_TNDRA: 1stMEU_NoseArt_None
                    {
                        displayName="Tundra";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Dune: 1stMEU_NoseArt_None
                    {
                        displayName="Dunes";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Classic: 1stMEU_NoseArt_None
                    {
                        displayName="Classic";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO.paa']";
                    };
                };
            };
        };
    };
    class OPTRE_Hornet_base: Helicopter_Base_H
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        tf_range = 120000;
        //lolflightmodelgobrrr
        altFullForce = 6000;
        maxSpeed=450;
        liftForceCoef=2.5;
        cyclicAsideForceCoef=3.4;
        cyclicForwardForceCoef=1.65;
        bodyFrictionCoef=0.3000001;
        backRotorForceCoef = 2;
        mainRotorSpeed=6;
        backRotorSpeed=7;
        hiddenSelections[] = {"camo1","clan","clan_text","insignia"};
        hiddenSelectionsTextures[] = {"optre_vehicles\hornet\data\hornet_hull_black_co.paa"};
        class Turrets : Turrets
		{
			class CargoTurret_01 : CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerName = "Passenger 1R";
				proxyIndex = 1;
				maxElev = 30;
				minElev = -30;
				maxTurn = 90;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 1;
				enabledByAnimationSource = "";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02 : CargoTurret_01
			{
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerName = "Passenger 1L";
				proxyIndex = 2;
			};
			class CargoTurret_03 : CargoTurret_01
			{
				gunnerName = "Passenger 2R";
				proxyIndex = 3;
			};
			class CargoTurret_04 : CargoTurret_02
			{
				gunnerName = "Passenger 2L";
				proxyIndex = 4;
			};
			class CargoTurret_05 : CargoTurret_01
			{
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName = "Passenger 3R";
				proxyIndex = 5;
				allowLauncherout=1;
			};
			class CargoTurret_06 : CargoTurret_02
			{
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction = "vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName = "Passenger 3L";
				proxyIndex = 6;
				allowLauncherout=1;
			};
		};
		class textureSources
        {
            class colorgreen
            {
                displayName = "Green";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_green_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colortan
            {
                displayName = "Desert";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_desert_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorblack
            {
                displayName = "Black";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_black_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorwhite
            {
                displayName = "Snow";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_snow_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorred
            {
                displayName = "Red";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_red_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class coloriron
            {
                displayName = "Iron";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_iron_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorinnie
            {
                displayName = "Innie";
                author = "Article 2 Studios";
                textures[] = {"optre_vehicles\hornet\data\hornet_hull_innie_co.paa"};
                factions[] = {"OPTRE_Ins"};
            };
        };
        textureList[] = {"colorgreen",1,"colorblack",1,"colortan",1,"colorsnow",1,"colorred",1,"coloriron",1};
        //flightmodelsbrrrrtime
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 1;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 6);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 6);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 6);
			mag_xx(30rnd_556x45_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_msbs_AP, 6);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 10);
            item_xx(MEU_Medigel_Light, 10);
            item_xx(ACE_plasmaIV_1000, 5);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 5);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 5);			
		};
        class useractions
        {
            class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburnerss600Engage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners600Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners600Disengage";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
        };
    };
    
	class VES_UH144_A: OPTRE_UNSC_falcon
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
        radarTargetSize = 0.1;
        tf_range = 120000;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        hiddenSelectionstextures[] = {"OPTRE_Vehicles\Falcon\data\falcon_hull_night_CO.paa","optre_vehicles\falcon\data\falcon_hullextra_night_co.paa","optre_vehicles\falcon\data\falcon_wingtips_night_co.paa","optre_vehicles\falcon\data\falcon_skid_night_co.paa"};
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 1;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 20);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);		
		};
        class useractions
        {
            class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
        };
    };
	
// Hornet
    class Icarus_UNSC_hornet_CAP: OPTRE_hornet_base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		side = 1;
		vehicleClass = "OPTRE_UNSC_Air_class";
		author = "Article 2 Studios";
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Airforce_Soldier_Airman";
		accuracy = 1.5;
		displayName = "AV-14 Hornet [CAP]";
		hiddenSelectionsTextures[] = {"optre_vehicles\hornet\data\hornet_hull_green_co.paa"};
		textureList[] = {"colorgreen",1,"colorblack",1,"colortan",1,"colorwhite",1};
		cost = 2000000;
		weapons[] = {"OPTRE_GUA23A","Icarus_missiles_C2GMLS","Icarus_missiles_Jackknife" ,"CMFlareLauncher"};
		magazines[] = {"OPTRE_2000Rnd_20mm_HEIAP","Icarus_4Rnd_C2GMLS_missiles","Icarus_8Rnd_Jackknife_missile" ,"168Rnd_CMFlare_Chaff_Magazine"};
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
	};
	class Icarus_UNSC_hornet: Icarus_UNSC_hornet_CAP
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "AV-14 Hornet";
		weapons[] = {"OPTRE_GUA23A","OPTRE_missiles_Anvil1","CMFlareLauncher"};
		magazines[] = {"OPTRE_2000Rnd_20mm_HEIAP","OPTRE_32Rnd_Anvil1_missiles","168Rnd_CMFlare_Chaff_Magazine"};
	};
    class VES_AV14_AIM : OPTRE_UNSC_hornet_CAP
    {
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        tf_range = 120000;
        weapons[] = {"OPTRE_GUA23A","Icarus_missiles_CSGMLS","CMFlareLauncher"};
		magazines[] = {"OPTRE_2000Rnd_20mm_HEIAP","Icarus_4Rnd_C2GMLS_missiles","168Rnd_CMFlare_Chaff_Magazine"};
        //lolflightmodelgobrrr
        altFullForce = 6000;
        maxSpeed=450;
        liftForceCoef=2.5;
        cyclicAsideForceCoef=3.4;
        cyclicForwardForceCoef=1.65;
        bodyFrictionCoef=0.3000001;
        backRotorForceCoef = 2;
        mainRotorSpeed=6;
        backRotorSpeed=7;
        hiddenSelections[] = {"camo1","clan","clan_text","insignia"};
        hiddenSelectionsTextures[] = {"optre_vehicles\hornet\data\hornet_hull_black_co.paa"};
        class textureSources
        {
            class colorgreen
            {
                displayName = "Green";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_green_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colortan
            {
                displayName = "Desert";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_desert_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorblack
            {
                displayName = "Black";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_black_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorwhite
            {
                displayName = "Snow";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_snow_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorred
            {
                displayName = "Red";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_red_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class coloriron
            {
                displayName = "Iron";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_iron_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorinnie
            {
                displayName = "Innie";
                author = "Article 2 Studios";
                textures[] = {"optre_vehicles\hornet\data\hornet_hull_innie_co.paa"};
                factions[] = {"OPTRE_Ins"};
            };
        };
        textureList[] = {"colorgreen",1,"colorblack",1,"colortan",1,"colorsnow",1,"colorred",1,"coloriron",1};
        //flightmodelsbrrrrtime
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 1;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 6);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 6);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 6);
			mag_xx(30rnd_556x45_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_msbs_AP, 6);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 10);
            item_xx(MEU_Medigel_Light, 10);
            item_xx(ACE_plasmaIV_1000, 5);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 5);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 5);			
		};
        class useractions
        {
            class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
        };
    };
    class VES_AV14_AGM : OPTRE_UNSC_hornet_CAS
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
        tf_range = 120000;
        //lolflightmodelgobrrr
        altFullForce = 6000;
        maxSpeed=450;
        liftForceCoef=2.5;
        cyclicAsideForceCoef=3.4;
        cyclicForwardForceCoef=1.65;
        bodyFrictionCoef=0.3000001;
        backRotorForceCoef = 2;
        mainRotorSpeed=6;
        backRotorSpeed=7;
        hiddenSelections[] = {"camo1","clan","clan_text","insignia"};
        hiddenSelectionsTextures[] = {"optre_vehicles\hornet\data\hornet_hull_black_co.paa"};
        class textureSources
        {
            class colorgreen
            {
                displayName = "Green";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_green_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colortan
            {
                displayName = "Desert";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_desert_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorblack
            {
                displayName = "Black";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_black_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorwhite
            {
                displayName = "Snow";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_snow_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorred
            {
                displayName = "Red";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_red_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class coloriron
            {
                displayName = "Iron";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_iron_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorinnie
            {
                displayName = "Innie";
                author = "Article 2 Studios";
                textures[] = {"optre_vehicles\hornet\data\hornet_hull_innie_co.paa"};
                factions[] = {"OPTRE_Ins"};
            };
        };
        textureList[] = {"colorgreen",1,"colorblack",1,"colortan",1,"colorsnow",1,"colorred",1,"coloriron",1};
        //flightmodelsbrrrrtime
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 2;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 6);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 6);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 6);
			mag_xx(30rnd_556x45_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_msbs_AP, 6);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 10);
            item_xx(MEU_Medigel_Light, 10);
            item_xx(ACE_plasmaIV_1000, 5);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 5);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 5);			
		};
        class useractions
        {
            class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
        };
    };
    class VES_AV14_Rockets : OPTRE_UNSC_hornet
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
        tf_range = 120000;
        //lolflightmodelgobrrr
        altFullForce = 6000;
        maxSpeed=450;
        liftForceCoef=2.5;
        cyclicAsideForceCoef=3.4;
        cyclicForwardForceCoef=1.65;
        bodyFrictionCoef=0.3000001;
        backRotorForceCoef = 2;
        mainRotorSpeed=6;
        backRotorSpeed=7;
        hiddenSelections[] = {"camo1","clan","clan_text","insignia"};
        hiddenSelectionsTextures[] = {"optre_vehicles\hornet\data\hornet_hull_black_co.paa"};
        class textureSources
        {
            class colorgreen
            {
                displayName = "Green";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_green_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colortan
            {
                displayName = "Desert";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_desert_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorblack
            {
                displayName = "Black";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_black_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorwhite
            {
                displayName = "Snow";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_snow_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorred
            {
                displayName = "Red";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_red_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class coloriron
            {
                displayName = "Iron";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_iron_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorinnie
            {
                displayName = "Innie";
                author = "Article 2 Studios";
                textures[] = {"optre_vehicles\hornet\data\hornet_hull_innie_co.paa"};
                factions[] = {"OPTRE_Ins"};
            };
        };
        textureList[] = {"colorgreen",1,"colorblack",1,"colortan",1,"colorsnow",1,"colorred",1,"coloriron",1};
        //flightmodelsbrrrrtime
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 2;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 6);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 6);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 6);
			mag_xx(30rnd_556x45_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_msbs_AP, 6);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 10);
            item_xx(MEU_Medigel_Light, 10);
            item_xx(ACE_plasmaIV_1000, 5);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 5);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 5);			
		};
        class useractions
        {
            class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
        };
    };
    class VES_AV14 : OPTRE_UNSC_hornet
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
        tf_range = 120000;
        //lolflightmodelgobrrr
        altFullForce = 6000;
        maxSpeed=450;
        liftForceCoef=2.5;
        cyclicAsideForceCoef=3.4;
        cyclicForwardForceCoef=1.65;
        bodyFrictionCoef=0.3000001;
        backRotorForceCoef = 2;
        mainRotorSpeed=6;
        backRotorSpeed=7;
        hiddenSelections[] = {"camo1","clan","clan_text","insignia"};
        hiddenSelectionsTextures[] = {"optre_vehicles\hornet\data\hornet_hull_black_co.paa"};
        class textureSources
        {
            class colorgreen
            {
                displayName = "Green";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_green_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colortan
            {
                displayName = "Desert";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_desert_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorblack
            {
                displayName = "Black";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_black_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorwhite
            {
                displayName = "Snow";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_snow_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorred
            {
                displayName = "Red";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_red_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class coloriron
            {
                displayName = "Iron";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_iron_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorinnie
            {
                displayName = "Innie";
                author = "Article 2 Studios";
                textures[] = {"optre_vehicles\hornet\data\hornet_hull_innie_co.paa"};
                factions[] = {"OPTRE_Ins"};
            };
        };
        textureList[] = {"colorgreen",1,"colorblack",1,"colortan",1,"colorsnow",1,"colorred",1,"coloriron",1};
        //flightmodelsbrrrrtime
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 2;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 6);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 6);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 6);
			mag_xx(30rnd_556x45_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_msbs_AP, 6);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 10);
            item_xx(MEU_Medigel_Light, 10);
            item_xx(ACE_plasmaIV_1000, 5);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 5);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 5);			
		};
        class useractions
        {
            class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
        };
    };
	//Icarus Class Start
	    class Icarus_AV14 : Icarus_UNSC_hornet_CAP
    {
        author = "Tom(s) & Jerry(s)";
        displayName = "Icarus Hornet";
        scope = 2;
		scopeCurator = 2;
        forceInGarage = 1;
        crew = "VES_Rifleman_MA5B_ODST";
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        tf_range = 120000;
        //lolflightmodelgobrrr
        altFullForce = 6000;
        maxSpeed=450;
        liftForceCoef=2.5;
        cyclicAsideForceCoef=3.4;
        cyclicForwardForceCoef=1.65;
        bodyFrictionCoef=0.3000001;
        backRotorForceCoef = 2;
        mainRotorSpeed=6;
        backRotorSpeed=7;
        hiddenSelections[] = {"camo1","clan","clan_text","insignia"};
        hiddenSelectionsTextures[] = {"optre_vehicles\hornet\data\hornet_hull_black_co.paa"};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliMed";
			};
		};
		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.15,0.15,1,1.0};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.0375,0.0375,0.1};
				helmetRight[] = {0.075,0.0,0.0};
				helmetDown[] = {0.0,-0.075,0.0};
				enableParallax = 1;
				font = "LucidaConsoleB";
				class Bones
				{
					class HUDCenter
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonBankSource
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0.5,0.5};
						min = -6.2831;
						max = 6.2831;
						minAngle = -360;
						maxAngle = 360;
					};
					class HorizonDiveSource
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = {0.5,2.5};
						maxPos[] = {0.5,-1.5};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.234,0.23};
					};
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0,-0.0025};
						pos10[] = {0.01,0.0025};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class SliderDiveSource
					{
						type = "linear";
						source = "horizonDive";
						min = "RAD(-10)";
						max = "RAD(10)";
						minPos[] = {0.105,0.38};
						maxPos[] = {0.105,0.54};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min = "RAD(10)";
						max = "RAD(30)";
						minPos[] = {0.0,-0.04};
						maxPos[] = {0.0,"0)"};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min = "RAD(30)";
						max = "RAD(90)";
						minPos[] = {0.0,-0.04};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min = "RAD(-30)";
						max = "RAD(-10)";
						minPos[] = {0.0,0};
						maxPos[] = {0.0,0.04};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min = "RAD(-90)";
						max = "RAD(-30)";
						maxPos[] = {0.0,0.04};
					};
					class SliderAltitudeSource
					{
						type = "linear";
						source = "altitudeAGL";
						sourceOffset = -3;
						min = 0;
						max = 1000;
						minPos[] = {0.885,0.2};
						maxPos[] = {0.885,0.375};
					};
					class GForceSource
					{
						type = "linear";
						source = "gmeter";
						sourceScale = 0.15;
						min = -1;
						max = 3;
						minPos[] = {0.105,0.7};
						maxPos[] = {0.105,0.86};
					};
					class SliderVSpeedSource
					{
						type = "linear";
						source = "vspeed";
						min = -15;
						max = 15;
						minPos[] = {0.795,0.6};
						maxPos[] = {0.795,0.84};
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPointToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class rtdRPM1
					{
						type = "linear";
						source = "rpm";
						min = 0.1;
						max = 1.0;
						minPos[] = {0,-0.075};
						maxPos[] = {0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source = "rpm";
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1,0.1,0.9,0.9};
					};
					class Target
					{
						source = "targettoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 0.46;
						center[] = {0,0};
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class HorizonBankRotFull
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0,0};
						min = -3.1416;
						max = 3.1416;
						minAngle = -180;
						maxAngle = 180;
						aspectRatio = 1;
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
					};
					class Airport2: Airport1
					{
						source = "airportCorner2";
					};
					class Airport3: Airport1
					{
						source = "airportCorner3";
					};
					class Airport4: Airport1
					{
						source = "airportCorner4";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.5};
						pos3[] = {0.5702,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.569};
					};
				};
				class Draw
				{
					alpha = 1.0;
					color[] = {0.15,0.15,1,1.0};
					condition = "on";
					class VelocityLine
					{
						type = "line";
						width = 2.0;
						points[] = {{"HUDCenter",1},{"VelocityVector",1},{},{"VelocityVector",{0,-0.00491453},1},{"VelocityVector",{0.0025,-0.00425598},1},{"VelocityVector",{0.00433,-0.00245726},1},{"VelocityVector",{0.005,0},1},{"VelocityVector",{0.00433,0.00245726},1},{"VelocityVector",{0.0025,0.00425598},1},{"VelocityVector",{0,0.00491453},1},{"VelocityVector",{-0.0025,0.00425598},1},{"VelocityVector",{-0.00433,0.00245726},1},{"VelocityVector",{-0.005,0},1},{"VelocityVector",{-0.00433,-0.00245726},1},{"VelocityVector",{-0.0025,-0.00425598},1},{"VelocityVector",{0,-0.00491453},1},{}};
					};
					class Static
					{
						type = "line";
						width = 3.0;
						points[] = {{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.015,0.01},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.0,0.0},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.015,-0.01},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.015,0.01},1},{},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.03,0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.088,0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.088,-0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.03,-0.015},1},{"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.03,0.015},1},{},{{0.1,0.3},1},{{0.1,0.62},1},{},{{0.1,0.3},1},{{0.08,0.3},1},{},{{0.1,0.34},1},{{0.08,0.34},1},{},{{0.1,0.38},1},{{0.08,0.38},1},{},{{0.1,0.46},1},{{0.08,0.46},1},{},{{0.1,0.54},1},{{0.08,0.54},1},{},{{0.1,0.58},1},{{0.08,0.58},1},{},{{0.1,0.62},1},{{0.08,0.62},1},{},{"GForceSource",{0.015,0.01},1},{"GForceSource",{0.0,0.0},1},{"GForceSource",{0.015,-0.01},1},{"GForceSource",{0.015,0.01},1},{},{{0.1,0.688},1},{{0.1,0.82},1},{},{{0.1,0.7},1},{{0.08,0.7},1},{},{{0.1,0.74},1},{{0.08,0.74},1},{},{{0.1,0.78},1},{{0.08,0.78},1},{},{{0.1,0.82},1},{{0.08,0.82},1},{},{{0.4,0.86},1},{{0.4,0.94},1},{{0.6,0.94},1},{{0.6,0.86},1},{{0.4,0.86},1},{},{{0.4,0.885},1},{{0.408,0.885},1},{},{{0.6,0.885},1},{{0.592,0.885},1},{},{{0.5,0.86},1},{{0.5,0.868},1},{},{{0.5,0.94},1},{{0.5,0.932},1},{},{{0.52,0.08},1},{{0.5,0.11},1},{{0.48,0.08},1},{{0.52,0.08},1},{},{{0.46,0.07},1},{{0.54,0.07},1},{{0.54,0.035},1},{{0.46,0.035},1},{{0.46,0.07},1},{},{{0.15,0.115},1},{{0.85,0.115},1},{},{{0.0,0.96},1},{{1.1,0.96},1},{},{{0.48,0.5},1},{{0.49,0.5},1},{},{{0.51,0.5},1},{{0.52,0.5},1},{},{{0.5,0.49},1},{{0.5,0.48},1},{},{{0.5,0.51},1},{{0.5,0.52},1},{},{"WeaponAim",1,{-0.02,0.0},1},{"WeaponAim",1,{-0.01,0.0},1},{},{"WeaponAim",1,{0.01,0.0},1},{"WeaponAim",1,{0.02,0.0},1},{},{"WeaponAim",1,{0.0,-0.01},1},{"WeaponAim",1,{0.0,-0.02},1},{},{"WeaponAim",1,{0.0,0.01},1},{"WeaponAim",1,{0.0,0.02},1},{},{"HUDCenter",{-0.165,7.08909e-09},1},{"HUDCenter",{-0.22,9.45212e-09},1},{},{"HUDCenter",{0.165,-1.93397e-09},1},{"HUDCenter",{0.22,-2.57863e-09},1},{},{"HUDCenter",{-0.0825,0.140452},1},{"HUDCenter",{-0.09625,0.16386},1},{},{"HUDCenter",{0.0825,0.140452},1},{"HUDCenter",{0.09625,0.16386},1},{},{"HUDCenter",{-0.142894,0.0810898},1},{"HUDCenter",{-0.16671,0.0946047},1},{},{"HUDCenter",{0.142894,0.0810897},1},{"HUDCenter",{0.16671,0.0946047},1},{},{"HUDCenter",{-0.116673,0.114678},1},{"HUDCenter",{-0.155564,0.152904},1},{},{"HUDCenter",{0.116673,0.114678},1},{"HUDCenter",{0.155563,0.152904},1},{},{}};
					};
					class DiveNumber
					{
						type = "text";
						source = "horizondive";
						sourceScale = 57.29578;
						sourceOffset = 0;
						align = "left";
						scale = 1;
						pos[] = {"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.085,"0.00-0.011"},1};
						right[] = {"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.12,"0.00-0.011"},1};
						down[] = {"SliderDiveSource90",1,"SliderDiveSource30",1,"SliderDiveSource",1,"SliderDiveSource30m",1,"SliderDiveSource90m",1,{0.085,"0.03-0.011"},1};
					};
					class VSpeedGroup
					{
						condition = "on";
						class VSpeedNumber
						{
							type = "text";
							source = "vspeed";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.82+0.07",0.728},1};
							right[] = {{"0.86+0.07",0.728},1};
							down[] = {{"0.82+0.07",0.763},1};
						};
						class Static
						{
							type = "line";
							width = 3.0;
							points[] = {{{0.849,0.76},1},{{0.929,0.76},1},{{0.929,0.725},1},{{0.849,0.725},1},{{0.849,0.76},1},{}};
						};
					};
					class VSpeedGroupUp
					{
						condition = "vspeed";
						class Static
						{
							type = "line";
							width = 3.0;
							points[] = {{{0.869,0.715},1},{{0.909,0.715},1},{{0.889,0.695},1},{{0.869,0.715},1},{}};
						};
					};
					class VSpeedGroupDown
					{
						condition = "-vspeed";
						class Static
						{
							type = "line";
							width = 3.0;
							points[] = {{{0.869,0.77},1},{{0.909,0.77},1},{{0.889,0.79},1},{{0.869,0.77},1},{}};
						};
					};
					class AltGroup
					{
						condition = "1000 - altitudeAGL";
						class Static
						{
							type = "line";
							width = 3.0;
							points[] = {{"SliderAltitudeSource",{0.024,0.01},1},{"SliderAltitudeSource",{0.009,0.0},1},{"SliderAltitudeSource",{0.024,-0.01},1},{"SliderAltitudeSource",{0.024,0.01},1},{},{"SliderAltitudeSource",{0.035,0.015},1},{"SliderAltitudeSource",{0.093,0.015},1},{"SliderAltitudeSource",{0.093,-0.015},1},{"SliderAltitudeSource",{0.035,-0.015},1},{"SliderAltitudeSource",{0.035,0.015},1},{},{{0.889,0.2},1},{{0.889,0.375},1},{},{{0.879,0.2},1},{{0.899,0.2},1},{},{{0.879,0.375},1},{{0.899,0.375},1},{}};
						};
						class AltNumber
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceOffset = -3;
							align = "left";
							scale = 1;
							pos[] = {"SliderAltitudeSource",{0.085,"0.00-0.011"},1};
							right[] = {"SliderAltitudeSource",{0.11,"0.00-0.011"},1};
							down[] = {"SliderAltitudeSource",{0.085,"0.03-0.011"},1};
						};
						class AltStatic50
						{
							type = "text";
							source = "static";
							text = "1000";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.885,0.171},1};
							right[] = {{0.925,0.171},1};
							down[] = {{0.885,0.201},1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						sourceLength = 3;
						align = "left";
						scale = 1;
						pos[] = {{0.13,0.22},1};
						down[] = {{0.13,0.26},1};
						right[] = {{0.2,0.22},1};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{"0.80-0.302","0.082-0.043"},1};
						right[] = {{"0.84-0.302","0.082-0.043"},1};
						down[] = {{"0.80-0.302","0.117-0.043"},1};
					};
					class Angle_90
					{
						type = "text";
						source = "static";
						text = "90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.285},1};
						right[] = {{0.11,0.285},1};
						down[] = {{0.07,0.315},1};
					};
					class Angle_30
					{
						type = "text";
						source = "static";
						text = "30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.325},1};
						right[] = {{0.11,0.325},1};
						down[] = {{0.07,0.355},1};
					};
					class Angle_10
					{
						type = "text";
						source = "static";
						text = "10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.365},1};
						right[] = {{0.11,0.365},1};
						down[] = {{0.07,0.395},1};
					};
					class Angle_0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.445},1};
						right[] = {{0.11,0.445},1};
						down[] = {{0.07,0.475},1};
					};
					class Angle_10m
					{
						type = "text";
						source = "static";
						text = "-10";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.525},1};
						right[] = {{0.11,0.525},1};
						down[] = {{0.07,0.555},1};
					};
					class Angle_30m
					{
						type = "text";
						source = "static";
						text = "-30";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.565},1};
						right[] = {{0.11,0.565},1};
						down[] = {{0.07,0.595},1};
					};
					class Angle_90m
					{
						type = "text";
						source = "static";
						text = "-90";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.605},1};
						right[] = {{0.11,0.605},1};
						down[] = {{0.07,0.635},1};
					};
					class GMeterStatic3
					{
						type = "text";
						source = "static";
						text = "3";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.683},1};
						right[] = {{0.11,0.683},1};
						down[] = {{0.07,0.713},1};
					};
					class GMeterStatic2
					{
						type = "text";
						source = "static";
						text = "2";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.723},1};
						right[] = {{0.11,0.723},1};
						down[] = {{0.07,0.753},1};
					};
					class GMeterStatic1
					{
						type = "text";
						source = "static";
						text = "1";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.763},1};
						right[] = {{0.11,0.763},1};
						down[] = {{0.07,0.793},1};
					};
					class GMeterStatic0
					{
						type = "text";
						source = "static";
						text = "0";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{0.07,0.803},1};
						right[] = {{0.11,0.803},1};
						down[] = {{0.07,0.833},1};
					};
					class CollectiveNumber
					{
						type = "text";
						source = "throttle";
						sourceScale = 100;
						align = "left";
						scale = 1;
						pos[] = {{0.889,0.46},1};
						right[] = {{0.939,0.46},1};
						down[] = {{0.889,0.495},1};
					};
					class CollectiveText
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.899,0.46},1};
						right[] = {{0.949,0.46},1};
						down[] = {{0.899,0.495},1};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 0.1;
						sourceoffset = 0;
						width = 3.0;
						NeverEatSeaWeed = 1;
						top = 0.15;
						center = 0.5;
						bottom = 0.85;
						lineXleft = 0.114;
						lineYright = 0.12;
						lineXleftMajor = 0.114;
						lineYrightMajor = 0.13;
						majorLineEach = 2;
						numberEach = 6;
						step = 0.5;
						stepSize = 0.0344828;
						align = "center";
						scale = 1;
						pos[] = {0.15,0.13};
						right[] = {0.21,0.13};
						down[] = {0.15,0.17};
					};
					class HorizonBanking
					{
						type = "line";
						width = 3.0;
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.9};
						points[] = {{"HorizonBankSource",{0.16,0.0},1},{"HorizonBankSource",{0.1,0.0},1},{"HorizonBankSource",{0.085,-0.015},1},{"HorizonBankSource",{0.07,0.0},1},{"HorizonBankSource",{0.05,0.0},1},{},{"HorizonBankSource",{-0.16,0.0},1},{"HorizonBankSource",{-0.1,0.0},1},{"HorizonBankSource",{-0.085,-0.015},1},{"HorizonBankSource",{-0.07,0.0},1},{"HorizonBankSource",{-0.05,0.0},1},{}};
					};
					class CoordXNumber
					{
						type = "text";
						source = "coordinateX";
						sourceScale = 0.01;
						sourceLength = 3;
						sourceOffset = -0.5;
						align = "right";
						scale = 1;
						pos[] = {{0.809,0.961},1};
						right[] = {{0.859,0.961},1};
						down[] = {{0.809,0.996},1};
					};
					class CoordYNumber: CoordXNumber
					{
						source = "coordinateY";
						pos[] = {{0.899,0.961},1};
						right[] = {{0.949,0.961},1};
						down[] = {{0.899,0.996},1};
					};
					class Time: CoordXNumber
					{
						source = "time";
						text = "%X";
						align = "left";
						pos[] = {{0.605,0.961},1};
						right[] = {{0.655,0.961},1};
						down[] = {{0.605,0.996},1};
					};
					class CurrentWeapon
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.979,0.889},1};
						right[] = {{1.029,0.889},1};
						down[] = {{0.979,0.924},1};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source = "ammo";
						align = "left";
						pos[] = {{0.979,0.921},1};
						right[] = {{1.029,0.921},1};
						down[] = {{0.979,0.956},1};
					};
					class CoordXText
					{
						type = "text";
						source = "static";
						text = "GRID:";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.655,0.961},1};
						right[] = {{0.705,0.961},1};
						down[] = {{0.655,0.996},1};
					};
					class CoordYText
					{
						type = "text";
						source = "static";
						text = "";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.875,0.961},1};
						right[] = {{0.925,0.961},1};
						down[] = {{0.875,0.996},1};
					};
					class LightsGroup
					{
						condition = "lights";
						class LightsText
						{
							type = "text";
							source = "static";
							text = "LIGHT";
							align = "left";
							scale = 1;
							pos[] = {{0.149,0.961},1};
							right[] = {{0.199,0.961},1};
							down[] = {{0.149,0.996},1};
						};
					};
					class CollisionLights
					{
						condition = "collisionlights";
						class CollisionLightsText
						{
							type = "text";
							source = "static";
							text = "COLL";
							align = "left";
							scale = 1;
							pos[] = {{0.309,0.961},1};
							right[] = {{0.359,0.961},1};
							down[] = {{0.309,0.996},1};
						};
					};
					class WeaponsLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = {0.2,0.2};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "LOCKING";
							align = "center";
							scale = 1;
							pos[] = {{0.215,0.879701},1};
							right[] = {{0.275,0.879701},1};
							down[] = {{0.215,0.928846},1};
						};
					};
					class TargetInfo
					{
						condition = "missilelocked";
						class TargetLockedText
						{
							type = "text";
							source = "static";
							text = "TARGET ACQUIRED";
							scale = 1;
							sourceScale = 1;
							align = "center";
							pos[] = {{0.195,0.859},1};
							right[] = {{0.235,0.859},1};
							down[] = {{0.195,0.89},1};
						};
						class TimeOfFlightText
						{
							type = "text";
							source = "static";
							text = "TOF:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.127+0.13",0.889},1};
							right[] = {{0.302,0.889},1};
							down[] = {{"0.127+0.13",0.924},1};
						};
						class DistanceText
						{
							type = "text";
							source = "static";
							text = "DISTANCE:";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.125+0.13",0.921},1};
							right[] = {{0.3,0.921},1};
							down[] = {{"0.125+0.13",0.956},1};
						};
						class TOF_source: CurrentWeapon
						{
							source = "missileflighttime";
							align = "right";
							pos[] = {{0.269,0.889},1};
							right[] = {{0.319,0.889},1};
							down[] = {{0.269,0.924},1};
						};
						class TargetDistance: CurrentWeapon
						{
							source = "targetDist";
							sourceLength = 0;
							sourcePrecision = 1;
							sourceScale = 0.001;
							align = "right";
							pos[] = {{0.269,0.921},1};
							right[] = {{0.319,0.921},1};
							down[] = {{0.269,0.956},1};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = {0.3,0.3};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = {{0.485,0.216239},1};
							right[] = {{0.545,0.216239},1};
							down[] = {{0.485,0.265385},1};
						};
					};
					class MGun
					{
						condition = "mgun+rocket";
						class Cross
						{
							type = "line";
							width = 3.0;
							points[] = {{"ImpactPoint",{0.0,-0.0294872},1},{"ImpactPoint",{0.0,-0.0393162},1},{},{"ImpactPoint",{0.02,-0.024},1},{"ImpactPoint",{0.025,-0.031},1},{},{"ImpactPoint",{0.0,-0.002},1},{"ImpactPoint",{0.0,0.002},1},{},{"ImpactPoint",{-0.002,0.0},1},{"ImpactPoint",{0.002,0.0},1},{}};
						};
						class Circle
						{
							type = "line";
							width = 3.0;
							points[] = {{"ImpactPoint",{0,-0.0344017},1},{"MissileFlightTimeRot1",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.035},1,"ImpactPoint",1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3.0;
							points[] = {{"ImpactPoint",{0,-0.0294872},1},{"ImpactPoint",{0.005208,-0.029039},1},{"ImpactPoint",{0.01026,-0.0277091},1},{"ImpactPoint",{0.015,-0.0255359},1},{"ImpactPoint",{0.019284,-0.0225872},1},{"ImpactPoint",{0.02298,-0.0189544},1},{"ImpactPoint",{0.02598,-0.0147436},1},{"ImpactPoint",{0.028191,-0.0100846},1},{"ImpactPoint",{0.029544,-0.00511897},1},{"ImpactPoint",{0.03,0},1},{"ImpactPoint",{0.029544,0.00511897},1},{"ImpactPoint",{0.028191,0.0100846},1},{"ImpactPoint",{0.02598,0.0147436},1},{"ImpactPoint",{0.02298,0.0189544},1},{"ImpactPoint",{0.019284,0.0225872},1},{"ImpactPoint",{0.015,0.0255359},1},{"ImpactPoint",{0.01026,0.0277091},1},{"ImpactPoint",{0.005208,0.029039},1},{"ImpactPoint",{0,0.0294872},1},{"ImpactPoint",{-0.005208,0.029039},1},{"ImpactPoint",{-0.01026,0.0277091},1},{"ImpactPoint",{-0.015,0.0255359},1},{"ImpactPoint",{-0.019284,0.0225872},1},{"ImpactPoint",{-0.02298,0.0189544},1},{"ImpactPoint",{-0.02598,0.0147436},1},{"ImpactPoint",{-0.028191,0.0100846},1},{"ImpactPoint",{-0.029544,0.00511897},1},{"ImpactPoint",{-0.03,0},1},{"ImpactPoint",{-0.029544,-0.00511897},1},{"ImpactPoint",{-0.028191,-0.0100846},1},{"ImpactPoint",{-0.02598,-0.0147436},1},{"ImpactPoint",{-0.02298,-0.0189544},1},{"ImpactPoint",{-0.019284,-0.0225872},1},{"ImpactPoint",{-0.015,-0.0255359},1},{"ImpactPoint",{-0.01026,-0.0277091},1},{"ImpactPoint",{-0.005208,-0.029039},1},{"ImpactPoint",{0,-0.0294872},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,-0.08},1};
							right[] = {"ImpactPoint",{0.045,-0.08},1};
							down[] = {"ImpactPoint",{-0.002,-0.04},1};
						};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "left";
							scale = 1;
							pos[] = {{0.935,0.810897},1};
							right[] = {{0.995,0.810897},1};
							down[] = {{0.935,0.860043},1};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = ">";
							align = "center";
							scale = 2;
							pos[] = {{0.95,0.810897},1};
							right[] = {{0.97,0.810897},1};
							down[] = {{0.95,0.860043},1};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.96,0.810897},1};
							right[] = {{1.02,0.810897},1};
							down[] = {{0.96,0.860043},1};
						};
						class WP
						{
							width = 1;
							type = "line";
							points[] = {{"wppoint",1,{"HorizonBankRotFull",0.015,-0.035},1},{"wppoint",1,{"HorizonBankRotFull",0.0,0.0},1},{"wppoint",1,{"HorizonBankRotFull",-0.015,-0.035},1}};
						};
					};
					class RadarBoxes
					{
						type = "radartoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.734,0.73};
						width = 2;
						points[] = {{{-0.002,-0.00196581},1},{{0.002,-0.00196581},1},{{0.002,0.00196581},1},{{-0.002,0.00196581},1},{{-0.002,-0.00196581},1}};
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0.02,0.0196581},1},{"Target",1,"Limit0109",1,{-0.02,0.0196581},1},{"Target",1,"Limit0109",1,{-0.02,-0.0196581},1},{"Target",1,"Limit0109",1,{0.02,-0.0196581},1},{"Target",1,"Limit0109",1,{0.02,0.0196581},1}};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0,-0.0294872},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.0294872},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.0294872},1}};
						};
					};
				};
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 1500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 1500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 300;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 1500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 1500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						maxTrackableSpeed = 300;
						animDirection = "mainGun";
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						aimdown = -0.25;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 2000;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 2000;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						maxTrackableSpeed = 300;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						aimDown = 30;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
					class LaserSensorComponent: SensorTemplateLaser{};
					class NVSensorComponent: SensorTemplateNV{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components: components
				{
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		allowTabLock = 1;
		gunnerCanSee = 31;
		commanderCanSee = 31;
		driverCanSee = 31;
		canUseScanner = 1;
		incomingMissileDetectionSystem = 16;
		irScanToEyeFactor = 1;
		irScanRangeMin = 200;
		irScanRangeMax = 10000;
		irScanGround = 1;
		irTarget = 1;
		irTargetSize = 2.0;
		laserScanner = 1;
		laserTarget = 0;
		weaponLockSystem = "2+4+8+16";
		nvScanner = 1;
		radarTarget = 1;
		radarTargetSize = 2.0;
		radarType = 4;
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		showAllTargets = 2;
		selectionFireAnim = "zasleh";
		gunBeg[] = {"z_gunL_muzzle","z_gunR_muzzle"};
		gunEnd[] = {"z_gunL_chamber","z_gunR_chamber"};
		memoryPointLMissile = "Rocket_1";
		memoryPointRMissile = "Rocket_2";
		visionMode[] = {"Normal","NVG","Ti"};

		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				gunnerName = "Passenger 1R";
				proxyIndex = 1;
				maxElev = 30;
				minElev = -30;
				maxTurn = 90;
				minTurn = -90;
				isPersonTurret = 1;
				ejectDeadGunner = 1;
				enabledByAnimationSource = "";
				memoryPointGunnerOptics = "";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo_l";
				memoryPointsGetInGunnerDir = "pos_cargo_l_dir";
				gunnerName = "Passenger 1L";
				proxyIndex = 2;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Passenger 2R";
				proxyIndex = 3;
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerName = "Passenger 2L";
				proxyIndex = 4;
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_2";
				gunnerName = "Passenger 3R";
				proxyIndex = 5;
			};
			class CargoTurret_06: CargoTurret_02
			{
				gunnerAction = "passenger_flatground_2";
				gunnerName = "Passenger 3L";
				proxyIndex = 6;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat","A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat","A3\data_F\default.rvmat","A3\data_F\default.rvmat","A3\data_F\default_destruct.rvmat"};
		};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"A3\Sounds_F\air\Heli_Light_02\open","db-5",1};
		soundGetOut[] = {"A3\Sounds_F\air\Heli_Light_02\close","db0",1,50};
		soundEnviron[] = {"","db-30",1.0};
		soundDammage[] = {"A3\Sounds_F\air\Heli_Light_02\crash","db-5",1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_start_v2","db-5",1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_start_v2","db-2",1.0,600};
		soundEngineOffInt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_int_stop_v2","db-5",1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\air\Heli_Light_02\Heli_Light_02_ext_stop_v2","db-2",1.0,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1","db-20",1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_2","db-20",1};
		class Sounds
		{
			class Engine
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext","db-10",1.0,900};
				frequency = "rotorSpeed";
				volume = "0.5*camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_low_ext","db-5",1.0,1200};
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorHighOut
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03_engi_ext","db-5",1.0,1500};
				frequency = "rotorSpeed";
				volume = "0.5*camPos*(rotorSpeed factor[0.4,1])";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"A3\Sounds_F\air\plane_fighter_03\Plane_Fighter_03-fors_ext","db-5",1,800};
				frequency = 1;
				volume = "0.5*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class EngineLowIn
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int","db-5",1.0};
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust/3)*0.8";
			};
			class EngineHighIn
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int","db-5",1.2};
				frequency = "rotorSpeed";
				volume = "0.25*camPos*(rotorSpeed factor[0.4,1])";
			};
			class ForsageIn
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int","db-5",1.0};
				frequency = "rotorSpeed";
				volume = "0.25*(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class WindNoiseIn
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise","db-5",1.0};
				frequency = "1";
				volume = "0.25*(1-camPos)*(speed factor[1, 150])";
			};
		};
		class AnimationSources
		{
			class Gatling_flash
			{
				source = "ammorandom";
				weapon = "OPTRE_GUA23A";
			};
			class Muzzle_flash
			{
				source = "ammorandom";
				animPeriod = 1e-06;
				weapon = "OPTRE_GUA23A";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPTRE_missiles_Anvil1";
			};
		};
		class UserActions
		{
		class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
		};
		class Reflectors
		{
			class Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor = 0.1;
				visual = "Hull";
				minimalHit = 0.05;
				depends = "Total";
				radius = 0.01;
			};
			class HitFuel
			{
				armor = 0.7;
				radius = 0.25;
				minimalHit = 0.05;
				explosionShielding = 2;
			};
			class HitAvionics
			{
				armor = 1.3;
				radius = 0.4;
				minimalHit = 0.05;
				explosionShielding = 1.5;
			};
			class HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.09;
				explosionShielding = 2.5;
			};
			class HitVRotor
			{
				armor = 1.3;
				radius = 0.06;
				minimalHit = 0.05;
				explosionShielding = 6;
			};
		};
        class textureSources
        {
            class colorgreen
            {
                displayName = "Green";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_green_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colortan
            {
                displayName = "Desert";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_desert_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorblack
            {
                displayName = "Black";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_black_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorwhite
            {
                displayName = "Snow";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_snow_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorred
            {
                displayName = "Red";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_red_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class coloriron
            {
                displayName = "Iron";
                author = "Article 2 Studios";
                textures[] = {"11th_STB_aux\data\pegasus\vic\hornet_hull_iron_co.paa"};
                factions[] = {"OPTRE_UNSC"};
            };
            class colorinnie
            {
                displayName = "Innie";
                author = "Article 2 Studios";
                textures[] = {"optre_vehicles\hornet\data\hornet_hull_innie_co.paa"};
                factions[] = {"OPTRE_Ins"};
            };
        };
		
        textureList[] = {"colorgreen",1,"colorblack",1,"colortan",1,"colorsnow",1,"colorred",1,"coloriron",1};
        //flightmodelsbrrrrtime
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 2;
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 1;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_AP, 6);
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 6);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 6);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 6);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 6);
			mag_xx(30rnd_556x45_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_AP, 6);
			mag_xx(30rnd_65x39_mag_msbs_AP, 6);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 10);
            item_xx(MEU_Medigel_Light, 10);
            item_xx(ACE_plasmaIV_1000, 5);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 5);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 5);			
		};
    };
// Icarus Class End
//  Hornet End
//  Falcon Start

	class VES_UH144: OPTRE_UNSC_falcon_unarmed
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        hiddenSelectionstextures[] = {"OPTRE_Vehicles\Falcon\data\falcon_hull_night_CO.paa","optre_vehicles\falcon\data\falcon_hullextra_night_co.paa","optre_vehicles\falcon\data\falcon_wingtips_night_co.paa","optre_vehicles\falcon\data\falcon_skid_night_co.paa"};
        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 1;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 10);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
        class UserActions
    {
	    class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
        };
        tf_range = 120000;
    };
	class VES_D77HTCI_A: OPTRE_Pelican_armed
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        editorCategory = "MEU_cat_A";
        transportSoldier = 14;
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
        tf_range = 120000;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"};

        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 10);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
        class UserActions
		{
	    class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
	    class PelLift_LoadPodMenu
	    {
	    	condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
	    	displayName = "<t color='#FFBF00'>Load Supply Pods";
	    	displayNameDefault = "<t color='#FFBF00'>Load Supply Pods";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 2;
	    	radius = 15;
	    	showWindow = 0;
	    	statement = "OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
	    	textToolTip = "<t color='#FFBF00'>Load Supply Pods";
	    	userActionID = 9;
	    };
	    class PelLift_LoadVehicle
	    {
	    	condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
	    	displayName = "<t color='#FFBF00'>Maglock Cargo";
	    	displayNameDefault = "<t color='#FFBF00'>Maglock Cargo";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 2;
	    	radius = 15;
	    	showWindow = 0;
	    	statement = "0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
	    	textToolTip = "<t color='#FFBF00'>Maglock Cargo";
	    	userActionID = 6;
	    };
	    class PelLift_LoadDevice
	    {
	    	condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
	    	displayName = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
	    	displayNameDefault = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 2;
	    	radius = 4;
	    	showWindow = 0;
	    	statement = "0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
	    	textToolTip = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
	    	userActionID = 6;
	    };
	    class PelLift_OpenDetatchPodMenu
	    {
	    	condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
	    	displayName = "<t color='#DF3A01'>Detach Individual Supply Pod Menu";
	    	displayNameDefault = "<t color='#DF3A01'>Detach Individual Supply Pod Menu";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 3;
	    	radius = 5;
	    	showWindow = 0;
	    	statement = "0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
	    	textToolTip = "<t color='#DF3A01'>Detach Individual Supply Pod Menu";
	    	userActionID = 8;
	    };
	    class PelLift_UnLoadVehicle
	    {
	    	condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
	    	displayName = "<t color='#DF3A01'>Release Maglock";
	    	displayNameDefault = "<t color='#DF3A01'>Release Maglock";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 3;
	    	radius = 5;
	    	showWindow = 0;
	    	statement = "0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
	    	textToolTip = "<t color='#DF3A01'>Release Maglock";
	    	userActionID = 7;
	    };
	    class RampClose
	    {
	    	animPeriod = 5;
	    	condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
	    	displayName = "Close Ramp";
	    	displayNameDefault = "Close Ramp";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 4;
	    	radius = 4;
	    	showWindow = 0;
	    	statement = "this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
	    	textToolTip = "Close Ramp";
	    	userActionID = 51;
	    };
	    class RampOpen
	    {
	    	animPeriod = 5;
	    	condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
	    	displayName = "Open Ramp";
	    	displayNameDefault = "Open Ramp";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 4;
	    	radius = 4;
	    	showWindow = 0;
	    	statement = "this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
	    	textToolTip = "Open Ramp";
	    	userActionID = 50;
	    };
		class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburners900Engage
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners900Disengage
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
	};
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
        class textureSources
        {
            class Peg_CWO2
            {
                displayName="CWO2";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO2.paa"
                };
            };
            class Peg_CWO3
            {
                displayName="CWO3";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO3.paa"
                };
            };
            class Peg_CWO4
            {
                displayName="CWO4";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO4.paa"
                };
            };
            class Peg_Torres
            {
                displayName="Torres";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_Torres.paa"
                };
            };
            class Peg_Chaotic
            {
                displayName="Chaotic";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa"
                };
            };
            class Peg_Bloodbath
                {
                displayName="Bloodbath";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa"
                };
            };
            class Peg_Black
            {
            displayName="Black";
            author="chaotic"
            textures[]=
            {
                "OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"                 
                };
            };
        };
        class ACE_SelfActions: ACE_SelfActions
        {
            class 1stMEU_Style_Changer
            {
                displayName="Change Style";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSwimming",
                    "isNotSitting"
                };
                condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled=0;
                priority=2;
                
                class 1stMEU_NoseArt_None
                {
                    displayName="None";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSwimming",
                        "isNotSitting"
                    };
                    condition="!(isNull objectParent player)";
                    statement="_target setObjectTextureGlobal [0,'V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO.paa']";
                    showDisabled=0;
                    runOnHover=0;
                    priority=2.5;
                };
                class customdivider
                {
                    displayname = "Custom Skins"
                
                    class 1stMEU_Style_CWO2: 1stMEU_NoseArt_None
                    {
                        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                        displayName="CWO2";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO2.paa']";
                    };
                    class 1stMEU_Style_CWO3: 1stMEU_NoseArt_None
                    {
                        displayName="CWO3";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO3.paa']";
                    };
                    class 1stMEU_NoseArt_CWO4: 1stMEU_NoseArt_None
                    {
                        displayName="CWO4";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO4.paa']";
                    };
                    class 1stMEU_NoseArt_Torres: 1stMEU_NoseArt_None
                    {
                        displayName="Torres";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_Torres.paa']";
                    };
                    class 1stMEU_NoseArt_Chaotic: 1stMEU_NoseArt_None
                    {
                        displayName="Chaotic";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa']";
                    };
                    class 1stMEU_NoseArt_Bloodbath: 1stMEU_NoseArt_None
                    {
                        displayName="Bloodbath";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa']";
                    };
                };
                class stockdivider
                {
                    displayname = "Stock Skins"
                    class 1stMEU_NoseArt_Des: 1stMEU_NoseArt_None
                    {
                        displayName="Desert";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO.paa']";
                    };
                    class 1stMEU_NoseArt_WDL: 1stMEU_NoseArt_None
                    {
                        displayName="Woodland";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO.paa']";
                    };
                    class 1stMEU_NoseArt_JNGL: 1stMEU_NoseArt_None
                    {
                        displayName="Jungle";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO.paa']";
                    };
                    class 1stMEU_NoseArt_URBN: 1stMEU_NoseArt_None
                    {
                        displayName="Urban";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO.paa']";
                    };
                    class 1stMEU_NoseArt_BLK: 1stMEU_NoseArt_None
                    {
                        displayName="Black";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Frost: 1stMEU_NoseArt_None
                    {
                        displayName="Frost";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO.paa']";
                    };
                    class 1stMEU_NoseArt_TNDRA: 1stMEU_NoseArt_None
                    {
                        displayName="Tundra";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Dune: 1stMEU_NoseArt_None
                    {
                        displayName="Dunes";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Classic: 1stMEU_NoseArt_None
                    {
                        displayName="Classic";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO.paa']";
                    };
                };
            };
        };
    };
    
	class VES_D77HTCI: OPTRE_Pelican_unarmed
    {
		crewCrashProtection = 0.0001;
		crewExplosionProtection = 0.0001;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_rot";
        fuelCapacity = 200;
        tf_range = 120000;
        ace_cargo_space = 4;
        ace_cargo_hasCargo = 1;
        hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"};

        class ACE_Cargo
        {
            class Cargo
            {
                class MEU_Speedbag
                {
                    type = "MEU_Speedbag";
                    amount = 4;
                };
            };
        };
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
			mag_xx(OPTRE_60Rnd_762x51_Mag_APT, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 20);
			mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAPT, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJ, 20);
			mag_xx(OPTRE_60Rnd_5x23mm_Mag_FMJT, 20);
			mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 20);
			mag_xx(30rnd_556x45_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_AP, 20);
			mag_xx(30rnd_65x39_mag_msbs_AP, 20);
			mag_xx(M41_Twin_HEAT, 4);
			mag_xx(M41_Twin_HEAT_WireGuided, 2);
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			delete _xx_ACE_Fortify;
			delete _xx_OPTRE_Biofoam;
			delete _xx_ACE_morphine;
			item_xx(MEU_Biofoam_Light, 20);
            item_xx(MEU_Medigel_Light, 20);
            item_xx(ACE_plasmaIV_1000, 10);
            item_xx(ACE_epinephrine, 10);
            item_xx(ACE_adenosine, 10);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 10);
            item_xx(MEU_compat_Ibuprofen, 20);			
		};
        transportsoldier = 20;
            class UserActions
		{
	    class MEU_E_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	displayNameDefault = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 10;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Engage;";
	    	textToolTip = "<t color='#2CDB24'>Afterburners [ON]</t>";
	    	userActionID = 59;
	    };
		class MEU_D_Thruster
	    {
	    	condition = "(player == driver this) AND (alive this) AND ((speed this) > 2)";
	    	displayName = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	displayNameDefault = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 9;
	    	radius = 100000;
	    	showWindow = 0;
	    	statement = "0 = this spawn MEU_fnc_Afterburners_Disengage;";
	    	textToolTip = "<t color='#ff0000'>Afterburners [OFF]</t>";
	    	userActionID = 60;
	    };
	    class PelLift_LoadPodMenu
	    {
	    	condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
	    	displayName = "<t color='#FFBF00'>Load Supply Pods";
	    	displayNameDefault = "<t color='#FFBF00'>Load Supply Pods";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 2;
	    	radius = 15;
	    	showWindow = 0;
	    	statement = "OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
	    	textToolTip = "<t color='#FFBF00'>Load Supply Pods";
	    	userActionID = 9;
	    };
	    class PelLift_LoadVehicle
	    {
	    	condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
	    	displayName = "<t color='#FFBF00'>Maglock Cargo";
	    	displayNameDefault = "<t color='#FFBF00'>Maglock Cargo";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 2;
	    	radius = 15;
	    	showWindow = 0;
	    	statement = "0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
	    	textToolTip = "<t color='#FFBF00'>Maglock Cargo";
	    	userActionID = 6;
	    };
	    class PelLift_LoadDevice
	    {
	    	condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
	    	displayName = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
	    	displayNameDefault = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 2;
	    	radius = 4;
	    	showWindow = 0;
	    	statement = "0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
	    	textToolTip = "<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
	    	userActionID = 6;
	    };
	    class PelLift_OpenDetatchPodMenu
	    {
	    	condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
	    	displayName = "<t color='#DF3A01'>Detach Individual Supply Pod Menu";
	    	displayNameDefault = "<t color='#DF3A01'>Detach Individual Supply Pod Menu";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 3;
	    	radius = 5;
	    	showWindow = 0;
	    	statement = "0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
	    	textToolTip = "<t color='#DF3A01'>Detach Individual Supply Pod Menu";
	    	userActionID = 8;
	    };
	    class PelLift_UnLoadVehicle
	    {
	    	condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
	    	displayName = "<t color='#DF3A01'>Release Maglock";
	    	displayNameDefault = "<t color='#DF3A01'>Release Maglock";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 3;
	    	radius = 5;
	    	showWindow = 0;
	    	statement = "0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
	    	textToolTip = "<t color='#DF3A01'>Release Maglock";
	    	userActionID = 7;
	    };
	    class RampClose
	    {
	    	animPeriod = 5;
	    	condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
	    	displayName = "Close Ramp";
	    	displayNameDefault = "Close Ramp";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 4;
	    	radius = 4;
	    	showWindow = 0;
	    	statement = "this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
	    	textToolTip = "Close Ramp";
	    	userActionID = 51;
	    };
	    class RampOpen
	    {
	    	animPeriod = 5;
	    	condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
	    	displayName = "Open Ramp";
	    	displayNameDefault = "Open Ramp";
	    	onlyForPlayer = 0;
	    	position = "cargo_door_handle";
	    	priority = 4;
	    	radius = 4;
	    	showWindow = 0;
	    	statement = "this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
	    	textToolTip = "Open Ramp";
	    	userActionID = 50;
	    };
		class FullAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class HalfAirbrakeEngageFast
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault = "<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID = 58;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class Afterburners900Engage
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#04B45F'>Engage Afterburners";
				displayNameDefault = "<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip = "<t color='#04B45F'>Engage Afterburners";
				userActionID = 54;
			};
			class Afterburners900Disengage
			{
				animPeriod = 5;
				condition = "false";
				displayName = "<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault = "<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip = "<t color='#FCE205'>Disengage Afterburners";
				userActionID = 55;
			};
		};
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
        class textureSources
        {
            class Peg_CWO2
            {
                displayName="CWO2";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO2.paa"
                };
            };
            class Peg_CWO3
            {
                displayName="CWO3";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO3.paa"
                };
            };
            class Peg_CWO4
            {
                displayName="CWO4";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO4.paa"
                };
            };
            class Peg_Torres
            {
                displayName="Torres";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_Torres.paa"
                };
            };
            class Peg_Chaotic
            {
                displayName="Chaotic";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa"
                };
            };
            class Peg_Bloodbath
                {
                displayName="Bloodbath";
                author="Chaotic";
                textures[]=
                {
                    "11th_STB_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa"
                };
            };
            class Peg_Black
            {
            displayName="Black";
            author="chaotic"
            textures[]=
            {
                "OPTRE_Vehicles\Pelican\data\PelicanExterior_black_CO.paa"                 
                };
            };
        };
        class ACE_SelfActions: ACE_SelfActions
        {
            class 1stMEU_Style_Changer
            {
                displayName="Change Style";
                exceptions[]=
                {
                    "isNotInside",
                    "isNotSwimming",
                    "isNotSitting"
                };
                condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled=0;
                priority=2;
                
                class 1stMEU_NoseArt_None
                {
                    displayName="None";
                    exceptions[]=
                    {
                        "isNotInside",
                        "isNotSwimming",
                        "isNotSitting"
                    };
                    condition="!(isNull objectParent player)";
                    statement="_target setObjectTextureGlobal [0,'V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO.paa']";
                    showDisabled=0;
                    runOnHover=0;
                    priority=2.5;
                };
                class customdivider
                {
                    displayname = "Custom Skins"
                
                    class 1stMEU_Style_CWO2: 1stMEU_NoseArt_None
                    {
                        condition="!(isNull objectParent player) && (driver (vehicle player)==player)";
                        displayName="CWO2";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO2.paa']";
                    };
                    class 1stMEU_Style_CWO3: 1stMEU_NoseArt_None
                    {
                        displayName="CWO3";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO3.paa']";
                    };
                    class 1stMEU_NoseArt_CWO4: 1stMEU_NoseArt_None
                    {
                        displayName="CWO4";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_CWO4.paa']";
                    };
                    class 1stMEU_NoseArt_Torres: 1stMEU_NoseArt_None
                    {
                        displayName="Torres";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_Torres.paa']";
                    };
                    class 1stMEU_NoseArt_Chaotic: 1stMEU_NoseArt_None
                    {
                        displayName="Chaotic";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_OD3_Chaotic.paa']";
                    };
                    class 1stMEU_NoseArt_Bloodbath: 1stMEU_NoseArt_None
                    {
                        displayName="Bloodbath";
                        statement="_target setObjectTextureGlobal [0, '11th_STB_aux\Data\Pegasus\vic\P_BLK_Bloodbath.paa']";
                    };
                };
                class stockdivider
                {
                    displayname = "Stock Skins"
                    class 1stMEU_NoseArt_Des: 1stMEU_NoseArt_None
                    {
                        displayName="Desert";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO.paa']";
                    };
                    class 1stMEU_NoseArt_WDL: 1stMEU_NoseArt_None
                    {
                        displayName="Woodland";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO.paa']";
                    };
                    class 1stMEU_NoseArt_JNGL: 1stMEU_NoseArt_None
                    {
                        displayName="Jungle";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO.paa']";
                    };
                    class 1stMEU_NoseArt_URBN: 1stMEU_NoseArt_None
                    {
                        displayName="Urban";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO.paa']";
                    };
                    class 1stMEU_NoseArt_BLK: 1stMEU_NoseArt_None
                    {
                        displayName="Black";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Frost: 1stMEU_NoseArt_None
                    {
                        displayName="Frost";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO.paa']";
                    };
                    class 1stMEU_NoseArt_TNDRA: 1stMEU_NoseArt_None
                    {
                        displayName="Tundra";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Dune: 1stMEU_NoseArt_None
                    {
                        displayName="Dunes";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO.paa']";
                    };
                    class 1stMEU_NoseArt_Classic: 1stMEU_NoseArt_None
                    {
                        displayName="Classic";
                        statement="_target setObjectTextureGlobal [0, 'V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO.paa']";
                    };
                };
            };
        };
    };
	
    class OPTRE_HEV: StaticMGWeapon
	{
        faction = "MEU_UNSC";
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_trt";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        class TransportBackpacks
        {
            class xx_MEU_Parachute
            {
                backpack = "MEU_Parachute";
				count = 1;
            };
        };
		class TransportMagazines
		{
			mag_xx(OPTRE_M9_Frag, 3);
            mag_xx(ACE_M84, 2);
            mag_xx(OPTRE_M2_Smoke_Orange, 3);
            mag_xx(SmokeShell, 5);
            mag_xx(C7_Remote_Mag, 2);
            mag_xx(OPTRE_200Rnd_95x40_Box_HPSAPT, 1);
            mag_xx(OPTRE_1Rnd_50x137_HEAT, 1);
            mag_xx(OPTRE_16Rnd_127x40_Mag_NARQT, 1);
            mag_xx(OPTRE_16Rnd_127x40_Mag_JHPT, 2);
            mag_xx(OPTRE_60Rnd_5x23mm_Mag_JHPT, 5);
            mag_xx(OPTRE_60Rnd_762x51_Mag_JHPT, 5);
            mag_xx(OPTRE_15Rnd_762x51_Mag_JHPT, 5);
            mag_xx(OPTRE_20Rnd_86x70_Mag_JHPT, 5);
            mag_xx(OPTRE_20Rnd_86x70_Mag_APT, 5);
            mag_xx(OPTRE_36Rnd_95x40_Mag_HPSAP, 5);
            mag_xx(3Rnd_HE_Grenade_shell, 2);
            mag_xx(OPTRE_4Rnd_145x114_APFSDS_Mag, 4);
            mag_xx(OPTRE_100Rnd_95x40_Box_JHPT, 2);
            mag_xx(OPTRE_100Rnd_127x99_M250HMG, 1);
            mag_xx(MEU_c7_remote_throwable_Mag, 4);
            mag_xx(MEU_c12_remote_throwable_Mag, 2);
            mag_xx(MEU_9bang_Mag, 2);
            mag_xx(MEU_C168_Mag, 1);
            mag_xx(OPTRE_20Rnd_86x70_Mag_JHP,5);
            mag_xx(OPTRE_20Rnd_86x70_Mag_AP, 5);
            mag_xx(M41_Twin_HEAT_WireGuided, 1);
            mag_xx(M41_Twin_HEAT_HeatSeeking, 1);
            delete _xx_OPTRE_ELB47_Strobe;
            delete _xx_OPTRE_M8_Flare;
            delete _xx_OPTRE_M2_Smoke_Purple;
		};
		class TransportWeapons{};
		class TransportItems
		{
            item_xx(ACE_elasticBandage, 8);
            item_xx(ACE_packingBandage, 14);
            item_xx(ACE_plasmaIV_1000, 1);
            item_xx(ACE_epinephrine, 3);
            item_xx(ACE_adenosine, 2);
            item_xx(ACE_tourniquet, 2);
            item_xx(ACE_quikclot, 8);
            item_xx(ACE_morphine, 1);
            item_xx(ACE_Banana, 5);
            item_xx(ACE_splint, 2);
            item_xx(MEU_compat_Ibuprofen, 4);
			item_xx(MEU_Biofoam_Light, 5);
			item_xx(MEU_Medigel_Light, 5);
			delete _xx_OPTRE_Biofoam;
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
			class thrustForward
			{
				condition = "gunner this == player AND (((getPosATL player) select 2) > MEU_HEV_Thruster_Min_Height)";
				displayName = "<t color='#FE2E2E'>Adjust Forward</t>";
				displayNameDefault = "<t color='#FE2E2E'>Adjust Forward</t>";
				onlyForPlayer = 1;
		        hideOnUse = 0;
                radius = 4;
				position = "";
				statement = "[this, [0, MEU_HEV_Thruster_Velocity, 0]] call MEU_fnc_HEVAdjust;";
				textToolTip = "<t color='#FE2E2E'>Adjust Forward</t>";
			};
			class thrustBackward
			{
				condition = "gunner this == player AND (((getPosATL player) select 2) > MEU_HEV_Thruster_Min_Height)";
				displayName = "<t color='#FE2E2E'>Adjust Backward</t>";
				displayNameDefault = "<t color='#FE2E2E'>Adjust Backward</t>";
				onlyForPlayer = 1;
		        hideOnUse = 0;
                radius = 4;
				position = "";
				statement = "[this, [0, -MEU_HEV_Thruster_Velocity, 0]] call MEU_fnc_HEVAdjust;";
				textToolTip = "<t color='#FE2E2E'>Adjust Backward</t>";
			};
			class thrustRight
			{
				condition = "gunner this == player AND (((getPosATL player) select 2) > MEU_HEV_Thruster_Min_Height)";
				displayName = "<t color='#FE2E2E'>Adjust Right";
				displayNameDefault = "<t color='#FE2E2E'>Adjust Right</t>";
				onlyForPlayer = 1;
				hideOnUse = 0;
                radius = 4;
				position = "";
				statement = "[this, [MEU_HEV_Thruster_Velocity, 0, 0]] call MEU_fnc_HEVAdjust;";
				textToolTip = "<t color='#FE2E2E'>Adjust Right</t>";
			};
			class thrustLeft
			{
				condition = "gunner this == player AND (((getPosATL player) select 2) > MEU_HEV_Thruster_Min_Height)";
				displayName = "<t color='#FE2E2E'>Adjust Left</t>";
				displayNameDefault = "<t color='#FE2E2E'>Adjust Left</t>";
				onlyForPlayer = 1;
				hideOnUse = 0;
                radius = 4;
				position = "";
				statement = "[this, [-MEU_HEV_Thruster_Velocity, 0, 0]] call MEU_fnc_HEVAdjust;";
				textToolTip = "<t color='#FE2E2E'>Adjust Left</t>";
			};
        };
    };
    class OPTRE_Static_M41: StaticMGWeapon
    {
        armor = 500;
    };
    class StaticATWeapon;
    class OPTRE_Static_ATGM: StaticATWeapon
    {
        armor = 500;
    };
    class StaticAAWeapon;
    class OPTRE_Static_AA: StaticAAWeapon
    {
        armor = 250;
    };
    // end air vehicles
    //  Ground Vehicles Start
	class 1stMEU_M313_Elephant: OPTRE_M313_UNSC
	{
        scope = 2;
		scopeCurator = 2;
		accuracy = 1000;
		faction = "MEU_UNSC";
		side = 1;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Marine_Soldier_Rifleman_AR"};
		displayName = "[11th] M313 HRV Elephant";
		enginePower = 8000;
		maxOmega = 800;
		peakTorque = 80000;
		maxSpeed = 60;
		thrustDelay = 0.01;
		torqueCurve[] = {{0.291667,0.540541},{0.416667,0.675676},{0.583333,0.810811},{0.666667,0.891892},{0.75,0.972973},{0.833333,1.02703},{0.916667,1},{1,0.945946}};
		clutchStrength = 500.0;
		fuelCapacity = 20000;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 320000;
		idleRpm = 1000;
		redRpm = 8000;
		engineLosses = 25;
		transmissionLosses = 15;
		ace_repair_canRepair = 1;
        mass = 450000;
        editorCategory = "MEU_cat_A";
        editorsubCategory = "MEU_sub_WIP";
	};		
			
    //  Ground Vehicles End
    //  Start AI Compositions
    class LM_OPCAN_M92_BOLT_URA: B_SAM_System_01_F
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		side = 0;
        editorCategory = "MEU_URA";
		displayName = "M92 Bolt SAM";
		faction = "MEU_Insurrectionist";
		hiddenSelections[] = {"camo1","Camo2"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\OPF\URA\VEH\BOLT_URA.paa"};
		textureList[] = {"INS",1};
		class TextureSources
		{
			class INS
			{
				displayName = "INS";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"LM_OPCAN3.0\OPF\URA\VEH\BOLT_URA.paa"};
			};
		};
	};
    class LM_OPCAN_M48_Buzz_URA: B_AAA_System_01_F
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		side = 0;
		displayName = "M48 Buzzsaw CIWS";
		faction = "MEU_Insurrectionist";
        editorCategory = "MEU_URA";
		hiddenSelections[] = {"camo1","Camo2"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\OPF\URA\VEH\BUZZ_URA_G.paa","LM_OPCAN3.0\OPF\URA\VEH\BUZZ_URA_B.paa"};
		textureList[] = {"Green",1};
		class TextureSources
		{
			class Green
			{
				displayName = "Green";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"LM_OPCAN3.0\OPF\URA\VEH\BUZZ_URA_G.paa","LM_OPCAN3.0\OPF\URA\VEH\BUZZ_URA_B.paa"};
			};
		};
	};
    class LM_OPCAN_M350_INS_WDL: B_MBT_01_cannon_F
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		side = 0;
		displayName = "M350 Recluse";
		crew = "O_Soldier_F";
		faction = "MEU_Insurrectionist";
        editorCategory = "MEU_URA";
		armor = 1200;
		armorStructural = 6;
		hiddenSelections[] = {"camo1","Camo2","CamoNet"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\OPF\URA\VEH\Recluse_B_INS.paa","LM_OPCAN3.0\OPF\URA\VEH\Recluse_T_INS.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
		textureList[] = {"Woodland",1};
		class TextureSources
		{
			class Woodland
			{
				displayName = "Woodland";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"LM_OPCAN3.0\OPF\URA\VEH\Recluse_B_INS.paa","LM_OPCAN3.0\OPF\URA\VEH\Recluse_T_INS.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
				factions[] = {"LM_OPCAN_URA","CIV_F"};
			};
		};
	};
    //Vulcan Bison Re-work
	class MEU_M412_IFV_UNSC: OPTRE_M412_IFV_UNSC
	{
         scope = 2;
         scopeCurator = 2;
         editorCategory = "MEU_cat_A";
         editorsubCategory = "MEU_sub_Motorised";
	     displayName = "[11th] M640 Bison IFV";
	     weapons[] = {"OPTRE_M230","OPTRE_missiles_C2GMLS"};
         magazines[] = {"OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_APFSDS","OPTRE_100Rnd_50mm_APFSDS","OPTRE_2Rnd_C2GMLS_missiles"};
         faction = "MEU_UNSC";
	     side = 1;
        class textureSources
		{
			class ves_desert
			{
				author = "Skywalker";
				displayName = "Desert";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_DES_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DES_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DES_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DES_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DES_9_CO.paa"};
			};
			class ves_woodland
			{
				author = "Skywalker";
				displayName = "Woodland";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_WDL_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_WDL_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_WDL_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_WDL_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_WDL_9_CO.paa"};
			};
			class ves_jungle
			{
				author = "Skywalker";
				displayName = "Jungle";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_JNG_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_JNG_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_JNG_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_JNG_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_JNG_9_CO.paa"};
			};
			class ves_urban
			{
				author = "Skywalker";
				displayName = "Urban";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_URB_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_URB_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_URB_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_URB_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_URB_9_CO.paa"};
			};
			class ves_black
			{
				author = "Skywalker";
				displayName = "Black";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_BLK_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_BLK_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_BLK_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_BLK_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_BLK_9_CO.paa"};
			};
			class ves_frost
			{
				author = "Skywalker";
				displayName = "Frost";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_FRS_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_FRS_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_FRS_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_FRS_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_FRS_9_CO.paa"};
			};
			class ves_tundra
			{
				author = "Skywalker";
				displayName = "Tundra";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_TND_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_TND_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_TND_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_TND_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_TND_9_CO.paa"};
			};
			class ves_dunes
			{
				author = "Skywalker";
				displayName = "Dunes";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_DUN_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DUN_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DUN_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DUN_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DUN_9_CO.paa"};
			};
			class ves_classic
			{
				author = "Skywalker";
				displayName = "Classic";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_CLS_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_CLS_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_CLS_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_CLS_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_CLS_9_CO.paa"};
			};
			class ves_olive
			{
				author = "Skywalker";
				displayName = "Olive";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_OD3_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_9_CO.paa"};
			};
		};
		hiddenSelectionsTextures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_OD3_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_9_CO.paa"};
		textureList[] = {"ves_desert",1,"ves_woodland",1,"ves_jungle",1,"ves_urban",1,"ves_black",1,"ves_frost",1,"ves_tundra",1,"ves_dunes",1,"ves_classic",1,"ves_olive",1};
	};

	class MEU_M413_MGS_UNSC: OPTRE_M413_MGS_UNSC
	{
         scope = 2;
         scopeCurator = 2;
         editorCategory = "MEU_cat_A";
         editorsubCategory = "MEU_sub_Motorised";
	     displayName = "[11th] M640 Bison MGS";
	     weapons[] = {"OPTRE_90mm_M556","OPTRE_missiles_C2GMLS","OPTRE_M41_LAAG"};
         magazines[] = {"OPTRE_30Rnd_90mm_APBC","OPTRE_30Rnd_90mm_SAPHE","OPTRE_10Rnd_90mm_S1","OPTRE_2Rnd_C2GMLS_missiles",,"OPTRE_2Rnd_C2GMLS_missiles","OPTRE_1000Rnd_127x99_M41","OPTRE_1000Rnd_127x99_M41"};
         faction = "MEU_UNSC";
	     side = 1;
        class textureSources
		{
			class ves_desert
			{
				author = "Skywalker";
				displayName = "Desert";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_DES_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DES_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DES_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DES_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DES_9_CO.paa"};
			};
			class ves_woodland
			{
				author = "Skywalker";
				displayName = "Woodland";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_WDL_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_WDL_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_WDL_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_WDL_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_WDL_9_CO.paa"};
			};
			class ves_jungle
			{
				author = "Skywalker";
				displayName = "Jungle";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_JNG_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_JNG_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_JNG_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_JNG_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_JNG_9_CO.paa"};
			};
			class ves_urban
			{
				author = "Skywalker";
				displayName = "Urban";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_URB_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_URB_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_URB_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_URB_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_URB_9_CO.paa"};
			};
			class ves_black
			{
				author = "Skywalker";
				displayName = "Black";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_BLK_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_BLK_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_BLK_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_BLK_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_BLK_9_CO.paa"};
			};
			class ves_frost
			{
				author = "Skywalker";
				displayName = "Frost";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_FRS_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_FRS_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_FRS_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_FRS_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_FRS_9_CO.paa"};
			};
			class ves_tundra
			{
				author = "Skywalker";
				displayName = "Tundra";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_TND_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_TND_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_TND_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_TND_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_TND_9_CO.paa"};
			};
			class ves_dunes
			{
				author = "Skywalker";
				displayName = "Dunes";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_DUN_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DUN_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DUN_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DUN_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_DUN_9_CO.paa"};
			};
			class ves_classic
			{
				author = "Skywalker";
				displayName = "Classic";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_CLS_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_CLS_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_CLS_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_CLS_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_CLS_9_CO.paa"};
			};
			class ves_olive
			{
				author = "Skywalker";
				displayName = "Olive";
				textures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_OD3_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_9_CO.paa"};
			};
		};
		hiddenSelectionsTextures[] = {"V_FZ_Vehicles\data\Bison\V_BISON_OD3_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_M_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_W_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_S_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_I_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","V_FZ_Vehicles\data\Bison\V_BISON_OD3_9_CO.paa"};
		textureList[] = {"ves_desert",1,"ves_woodland",1,"ves_jungle",1,"ves_urban",1,"ves_black",1,"ves_frost",1,"ves_tundra",1,"ves_dunes",1,"ves_classic",1,"ves_olive",1};
	};
    class MEU_M412_IFV_URA_DES: OPTRE_M412_IFV_UNSC
	{
        scope = 2;
        scopeCurator = 2;
        side = 0;
        crew = "LM_OPCAN_URA_Crewman_D";
        editorCategory = "MEU_URA_D";
        editorsubCategory = "MEU_sub_Motorised";
	    displayName = "[11th] M640 Bison IFV";
	    weapons[] = {"OPTRE_M230","OPTRE_missiles_C2GMLS"};
        magazines[] = {"OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_APFSDS","OPTRE_100Rnd_50mm_APFSDS","OPTRE_2Rnd_C2GMLS_missiles","OPTRE_2Rnd_C2GMLS_missiles",};
        faction = "MEU_UNSC";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Vehicles\Bison_URA_Body_tan_CO.paa","11th_STB_aux\Data\Vehicles\Bison_URA_Misc_tan_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_tan_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","11th_STB_aux\Data\Vehicles\Bison_URA_90mm_tan_CO.paa"};
	};
	class MEU_M413_MGS_URA_DES: OPTRE_M413_MGS_UNSC
	{
        scope = 2;
        scopeCurator = 2;
        side = 0;
        crew = "LM_OPCAN_URA_Crewman_D";
        editorCategory = "MEU_URA_D";
        editorsubCategory = "MEU_sub_Motorised";
	    displayName = "[11th] M640 Bison MGS";
	    weapons[] = {"OPTRE_90mm_M556","OPTRE_missiles_C2GMLS","OPTRE_M41_LAAG"};
        magazines[] = {"OPTRE_30Rnd_90mm_APBC","OPTRE_30Rnd_90mm_SAPHE","OPTRE_10Rnd_90mm_S1","OPTRE_2Rnd_C2GMLS_missiles","OPTRE_2Rnd_C2GMLS_missiles","OPTRE_1000Rnd_127x99_M41","OPTRE_1000Rnd_127x99_M41"};
        faction = "MEU_UNSC";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Vehicles\Bison_URA_Body_tan_CO.paa","11th_STB_aux\Data\Vehicles\Bison_URA_Misc_tan_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_tan_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","11th_STB_aux\Data\Vehicles\Bison_URA_90mm_tan_CO.paa"};
	};
    class MEU_M412_IFV_URA_WDL: OPTRE_M412_IFV_UNSC
	{
        scope = 2;
        scopeCurator = 2;
        side = 0;
        crew = "LM_OPCAN_URA_Crewman";
        editorCategory = "MEU_URA";
        editorsubCategory = "MEU_sub_Motorised";
	    displayName = "[11th] M640 Bison IFV";
	    weapons[] = {"OPTRE_M230","OPTRE_missiles_C2GMLS"};
        magazines[] = {"OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_APFSDS","OPTRE_100Rnd_50mm_APFSDS","OPTRE_2Rnd_C2GMLS_missiles"};
        faction = "MEU_UNSC";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Vehicles\Bison_URA_Body_CO.paa","11th_STB_aux\Data\Vehicles\Bison_URA_Misc_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","11th_STB_aux\Data\Vehicles\Bison_URA_90mm_CO.paa"};
	};
	class MEU_M413_MGS_URA_WDL: OPTRE_M413_MGS_UNSC
	{
        scope = 2;
        scopeCurator = 2;
        side = 0;
        crew = "LM_OPCAN_URA_Crewman";
        editorCategory = "MEU_URA";
        editorsubCategory = "MEU_sub_Motorised";
	    displayName = "[11th] M640 Bison MGS";
	    weapons[] = {"OPTRE_90mm_M556","OPTRE_missiles_C2GMLS","OPTRE_M41_LAAG"};
        magazines[] = {"OPTRE_30Rnd_90mm_APBC","OPTRE_30Rnd_90mm_SAPHE","OPTRE_10Rnd_90mm_S1","OPTRE_2Rnd_C2GMLS_missiles","OPTRE_1000Rnd_127x99_M41","OPTRE_1000Rnd_127x99_M41"};
        faction = "MEU_UNSC";
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Vehicles\Bison_URA_Body_CO.paa","11th_STB_aux\Data\Vehicles\Bison_URA_Misc_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","11th_STB_aux\Data\Vehicles\Bison_URA_90mm_CO.paa"};
	};
    // URF
    class VES_MQ221_URF : B_T_UAV_03_dynamicLoadout_F
    {
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class VES_UH144_A_URF : OPTRE_UNSC_Falcon
    {
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class VES_UH144_URF : OPTRE_UNSC_Falcon
    {
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class OPTRE_pelican_unarmed_ins : OPTRE_Pelican_f
    {
        displayname = "D77H-TCI Pelican"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class OPTRE_pelican_Armed_ins : OPTRE_Pelican_Armed
    {
        displayname = "D77H-TCI/AV Pelican"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class VES_M813_TT_URF : OPTRE_M813_TT
    {
        displayname = "M813 TT Warthog"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class VES_M12A1_LRV_URF : OPTRE_M12A1_LRV
    {
        displayname = "M12A1 ATGM Warthog"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class VES_M12_LRV_URF : OPTRE_M12_LRV
    {
        displayname = "M12 LAAG Warthog"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class VES_M12_URF : OPTRE_M12_FAV
    {
        displayname = "M12 Scout Warthog"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class VES_M12_APC_URF : VES_M12_APC
    {
        displayname = "M12 APC Warthog"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class OPTRE_M274_ATV_ins : OPTRE_M274_ATV
    {
        displayname = "M274 Mongoose"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class OPTRE_Corvette_Archer_system_ins : OPTRE_archer_system_base
    {
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class OPTRE_Corvette_M910_Turret_INS : OPTRE_Corvette_M910_Turret
    {
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class OPTRE_Static_AA_ins : OPTRE_Static_AA
    {
        displayname = "M79 AA Turret"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class OPTRE_Static_ATGM_ins : OPTRE_Static_ATGM
    {
        displayname = "M39 Rocket Turret"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class OPTRE_Static_M41_ins : OPTRE_Static_M41
    {
        displayname = "M41 LAAG Turret"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    class OPTRE_Static_FG75 : StaticMGWeapon
    {
        displayname = "FG75 Field Gun"
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URF";
    };
    //ER
    class OPTRE_VTOLI_02 : O_T_VTOL_02_infantry_dynamicLoadout_F
    {
        displayname = "AVD-99IT Wyvern"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_VTOLV_02 : O_T_VTOL_02_infantry_dynamicLoadout_F
    {
        displayname = "AVD-99VT Wyvern"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_gladius_02 : B_Plane_CAS_01_dynamicLoadout_F
    {
        displayname = "A84-Gladius"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_gladius_02L : B_Plane_CAS_01_dynamicLoadout_F
    {
        displayname = "A84L-Gladius"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_raven_02 : B_Heli_Attack_01_Dynamicloadout_F
    {
        displayname = "RAH-94 Raven"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };

    class OPTRE_Tarantula_02 : B_APC_Tracked_01_AA_F
    {
        displayname = "M705AA Tarantula"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_Ferret_02 : B_APC_Wheeled_01_cannon_F
    {
        displayname = "M620 Ferret"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_Salamander_02 : I_MRAP_03_F
    {
        displayname = "M201 Salamander"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_Salamanderagl_02 : I_MRAP_03_gmg_F
    {
        displayname = "M220 Salamander"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_Armed_Puma_02 : O_T_LSV_02_armed_F
    {
        displayname = "M7 MG Puma"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_unarmed_Puma_02 : O_T_LSV_02_unarmed_F
    {
        displayname = "M7 Puma"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    class OPTRE_AT_Puma_02 : O_T_LSV_02_AT_F
    {
        displayname = "M7 AT Puma"
        crew = "OPTRE_Ins_ER_Guerilla_AR";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_ER";
    };
    // URA
    class OPTRE_M12R_AA_ins : OPTRE_M12R_AA
    {
        displayname = "M12R AA Warthog"
        crew = "LM_OPCAN_URA_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URA";
    };
    class OPTRE_M12A1_LRV_ins : OPTRE_M12A1_LRV
    {
        displayname = "M12A1 ATGM Warthog"
        crew = "LM_OPCAN_URA_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URA";
    };
    class OPTRE_M12_LRV_ins : OPTRE_M12_LRV
    {
        displayname = "M12 LAAG Warthog"
        crew = "LM_OPCAN_URA_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URA";
    };
    class OPTRE_M914_RV_ins : OPTRE_M914_RV
    {
        displayname = "M914 Scout Warthog"
        crew = "LM_OPCAN_URA_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URA";
    };
    class OPTRE_M12_FAV_APC : OPTRE_M12_FAV
    {
        displayname = "M12 APC Warthog"
        crew = "LM_OPCAN_URA_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URA";
    };
    class OPTRE_M12_FAV_ins : OPTRE_M12_FAV
    {
        displayname = "M12 FAV Warthog"
        crew = "LM_OPCAN_URA_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_URA";
    };
    // Friden
    class LM_OPCAN_D77_U_FRI : OPTRE_Pelican_unarmed
    {
        displayname = "D77-TC Pelican"
        crew = "LM_OPCAN_FRI_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_Friden";
    };
    class LM_OPCAN_D77_A_FRI : OPTRE_Pelican_armed
    {
        displayname = "D77-TC/AV Pelican"
        crew = "LM_OPCAN_FRI_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_Friden";
        editorSubCategory = "MEU_sub_rot";
    };
    class LM_OPCAN_D77_U_SU : OPTRE_Pelican_unarmed
    {
        displayname = "D77-TC Pelican"
        crew = "LM_OPCAN_FRI_Crewman_WDL";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_Friden_wdl";
        editorSubCategory = "MEU_sub_rot";
    };
    class LM_OPCAN_D77_A_SU : OPTRE_Pelican_armed
    {
        displayname = "D77-TC/AV Pelican"
        crew = "LM_OPCAN_FRI_Crewman_WDL";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_Friden_wdl";
        editorSubCategory = "MEU_sub_rot";
    };
    class LM_OPCAN_UH101_FRI : B_Heli_Attack_01_Dynamicloadout_F
    {
        displayname = "UH-101 Eagle"
        crew = "LM_OPCAN_FRI_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_Friden";
        editorSubCategory = "MEU_sub_rot";
    };
    class LM_OPCAN_UH101_SU : B_Heli_Attack_01_Dynamicloadout_F
    {
        displayname = "UH-101 Eagle"
        crew = "LM_OPCAN_FRI_Crewman_WDL";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_Friden_wdl";
        editorSubCategory = "MEU_sub_rot";
    };
    // SU
    class OPTRE_falconagl_02 : OPTRE_UNSC_falcon
    {
        displayname = "UH-144AGL Falcon"
        crew = "LM_OPCAN_SU_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_SU";
    };
    class OPTRE_scorpionins_02 : OPTRE_M808B_UNSC
    {
        displayname = "M808B Scorpion"
        crew = "LM_OPCAN_SU_Crewman";
        faction = "MEU_Insurrectionist"
        editorCategory = "MEU_SU";
    };
    //end ins units
    /*flud
    class MEU_IMarineMU : JMM_O_IMarineMU
	{
		faction = "JMM_infected_o_faction";
		editorSubcategory = "MEU_Flood";
        editorCategory = "MEU_Assets";
		vehicleClass = "JMM_infectedM";
		displayName = "Combat Form (Medium)";
		side = 0;
	};
    class MEU_IMarineSU : JMM_O_IMarineSU
	{
		faction = "JMM_infected_o_faction";
		editorSubcategory = "MEU_Flood";
        editorCategory = "MEU_Assets";    
		vehicleClass = "JMM_infectedS";
		displayName = "Combat Form (Slow)";
		side = 0;
	};
    class MEU_IMarineFU : JMM_O_IMarineFU
	{
		faction = "JMM_infected_o_faction";
		editorSubcategory = "MEU_Flood";
        editorCategory = "MEU_Assets";    
		vehicleClass = "JMM_infectedF";
		displayName = "Combat Form (Fast)";
		side = 0;
	};
    end flud*/
    //end flud
    /*labomba
    class SensorTemplatePassiveRadar;
    class SensorTemplateActiveRadar;
    class SensorTemplateVisual;
    class SensorTemplateLaser;
    class SensorTemplateNV;
    class DefaultVehicleSystemsDisplayManagerLeft
    {
        class components;
    };      
    class DefaultVehicleSystemsDisplayManagerRight
    {
        class components;
    };
    class la_bomba : OPTRE_Longsword_Bomb
    {
        displayname = "La-Bomba";
        scope = 2;
        scopeCurator = 2;
        AWS_ECM_STAT = 50; //  ECM capability				
		
		class ADESData
		{
			ADESEnabled = 1;		
			NumberEnabled = 0; 
			NumberList[] = {"num_1","num_2","num_3"};
			EmblemEnabled = 1;
			KillmarkEnabled = 0; 
			NameEnabled = 0;			
			NameType = "AF_Single";
		};					
		
		class AMSData
		{
			AMSEnabled = 1;									
			DialogClass= "AV8B_GUI";
			AircraftBase = "OPTRE_Longsword_Base";
			CustomPreset = "OPTRE_Longsword_CustomPreset_list";
			CustomPresetAttachment = "OPTRE_Longsword_CustomPreset_list_attachment";
			presetNumber = 2113;
			EditNumber = 1400;
			ListboxArray[] = {0000,2101,2102,2103,2104,2105,2106,2107,2110};
			loadout_scriptenabled = 0;						
			loadout_script = "";
			loadout_pre = "FIR_AV8B\sqs\Loadout\AV8B_Loadout_Pre.sqf";
			loadout_apply = "FIR_AirWeaponSystem_US\Script\AMS\AMS_Loadout_Apply.sqf";
			loadout_post = "FIR_AV8B\sqs\Loadout\AV8B_Loadout_Post.sqf";
			CustomFuelEnabled = 1;
			CustomFuelScript = "FIR_AV8B\sqs\Loadout\AV8B_Refuel.sqf";
			CustomLoadoutScriptEnabled = 0;
			CustomLoadoutScript = "";			
		};
	
		class ARSData
		{
			ARSEnabled = 1;									
			ARS_CBARS_Offset[] = {1.2,-27.8,-3.5};					
			ARS_Point = "refuel_probe";
			ARS_Type = "probe";
		};
        class Components: Components
		{		
			class SensorsManagerComponent 
			{
			class Components {
				class IRSensorComponent: SensorTemplateIR {
					class AirTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					angleRangeHorizontal = 360;
					angleRangeVertical = 90;
					maxTrackableSpeed = 400;
					componentType = "IRSensorComponent";
					typeRecognitionDistance = 2000;
					maxFogSeeThrough = 0.995;
					color[] = {1, 0, 0, 1};
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class VisualSensorComponent: SensorTemplateVisual {
					class AirTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					angleRangeHorizontal = 26;
					angleRangeVertical = 20;
					maxTrackableSpeed = 100;
					aimDown = 1;
					animDirection = "main1turret";
					componentType = "VisualSensorComponent";
					nightRangeCoef = 0;
					maxFogSeeThrough = 0.94;
					color[] = {1, 1, 0.5, 0.8};
					typeRecognitionDistance = 2000;
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					minTrackableSpeed = -1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar {
					componentType = "PassiveRadarSensorComponent";
					class AirTarget {
						minRange = 45000;
						maxRange = 45000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 20000;
						maxRange = 20000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					typeRecognitionDistance = 12000;
					angleRangeHorizontal = 360;
					angleRangeVertical = 360;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					color[] = {0.5, 1, 0.5, 0.5};
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
					allowsMarking = 0;
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar {
					class AirTarget {
						minRange = 30000;
						maxRange = 30000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 8000;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					typeRecognitionDistance = 8000;
					angleRangeHorizontal = 45;
					angleRangeVertical = 45;
					groundNoiseDistanceCoef = 0.2;
					componentType = "ActiveRadarSensorComponent";
					maxGroundNoiseDistance = 200;
					minSpeedThreshold = 30;
					maxSpeedThreshold = 40;
					color[] = {0, 1, 1, 1};
					allowsMarking = 1;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class LaserSensorComponent: SensorTemplateLaser {
					componentType = "LaserSensorComponent";
					class AirTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 10000;
						maxRange = 10000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 180;
					angleRangeVertical = 180;
					typeRecognitionDistance = 0;
					color[] = {1, 1, 1, 0};
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
				class NVSensorComponent: SensorTemplateNV {
					componentType = "NVSensorComponent";
					color[] = {1, 1, 1, 0};
					typeRecognitionDistance = 0;
					class AirTarget {
						minRange = 8000;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget {
						minRange = 8000;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					angleRangeHorizontal = 90;
					angleRangeVertical = 90;
					allowsMarking = 1;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					animDirection = "";
					aimDown = 0;
					minTrackableSpeed = -1e+010;
					maxTrackableSpeed = 1e+010;
					minTrackableATL = -1e+010;
					maxTrackableATL = 1e+010;
				};
			};
		};					
			class TransportPylonsComponent
			{
				class Presets 
				{
					class Empty 
					{
						displayName = "Empty";
						dataname = "Empty";
						attachment[] = {};
					};
					class CAP 
					{
						displayName = "CAP";
						dataname = "CAP";						
						attachment[] = {"FIR_AIM9M_LAU115_P_1rnd_M", "FIR_AIM120_LAU115_P_1rnd_M", "FIR_AIM120_LAU115_P_1rnd_M", "FIR_AIM120_LAU115_P_1rnd_M","FIR_AIM120_LAU115_P_1rnd_M","FIR_AIM9M_LAU115_P_1rnd_M","FIR_Empty_P_1rnd_M","FIR_Gunpod_Nomodel_P_1rnd_M"};
					};
					class CAS_1 
					{
						displayName = "CAS 1";
						dataname = "CAS_1";	
						attachment[] = {"FIR_AIM9M_LAU115_P_1rnd_M", "FIR_GBU38_P_1rnd_M", "FIR_GBU12_P_1rnd_M", "FIR_GBU12_P_1rnd_M","FIR_GBU38_P_1rnd_M","FIR_AIM9M_LAU115_P_1rnd_M","FIR_Litening_std_P_1rnd_M","FIR_Gunpod_Nomodel_P_1rnd_M"};
					};
					class CAS_2
					{
						displayName = "CAS 2";
						dataname = "CAS_2";							
						attachment[] = {"FIR_AIM9M_LAU115_P_1rnd_M", "FIR_Hydra_P_7rnd_M", "FIR_Mk82_snakeye_P_3rnd_M", "FIR_Mk82_GP_P_3rnd_M","FIR_Hydra_P_7rnd_M","FIR_AIM9M_LAU115_P_1rnd_M","FIR_Litening_std_P_1rnd_M","FIR_Gunpod_Nomodel_P_1rnd_M"};
					};
					class SEAD
					{
						displayName = "SEAD";
						dataname = "SEAD";	
						attachment[] = {"FIR_AIM9M_LAU115_P_1rnd_M", "FIR_AGM88_P_1rnd_M", "FIR_AV8B_Fueltank_L_P_1rnd_M", "FIR_AV8B_Fueltank_R_P_1rnd_M","FIR_AGM88_P_1rnd_M","FIR_AIM9M_LAU115_P_1rnd_M","FIR_Litening_std_P_1rnd_M","FIR_Gunpod_Nomodel_P_1rnd_M"};
					};
					class Multirole
					{
						displayName = "Multirole";
						dataname = "Multirole";							
						attachment[] = {"FIR_AIM9M_LAU115_P_1rnd_M", "FIR_AGM65D_P_1rnd_M", "FIR_GBU12_P_3rnd_M", "FIR_GBU38_P_3rnd_M","FIR_AGM65H_P_1rnd_M","FIR_AIM9M_LAU115_P_1rnd_M","FIR_Litening_std_P_1rnd_M","FIR_Gunpod_Nomodel_P_1rnd_M"};
					};
					class AATraining
					{
						displayName = "Training - air to air";
						dataname = "AATraining";							
						attachment[] = {"FIR_CATM9M_LAU115_P_1rnd_M", "FIR_CATM120C_LAU115_P_1rnd_M", "FIR_CATM120C_LAU115_P_1rnd_M", "FIR_CATM120C_LAU115_P_1rnd_M","FIR_CATM120C_LAU115_P_1rnd_M","FIR_ACMI_TACTS_P_1rnd_M","FIR_Litening_std_P_1rnd_M","FIR_Gunpod_Nomodel_P_1rnd_M"};
					};					
					class AGTraining
					{
						displayName = "Training - air to ground";
						dataname = "AGTraining";							
						attachment[] = {"", "FIR_Mk76_P_3rnd_M", "FIR_BDU57_P_3rnd_M", "FIR_BDU57_P_3rnd_M","FIR_Mk76_P_3rnd_M","","FIR_Litening_std_P_1rnd_M","FIR_Gunpod_Nomodel_P_1rnd_M"};
					};								
				};								
				UIPicture = "\FIR_AV8B\ui\av8b_dynamic_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"FIR_AV8B_NA_AA_HP","FIR_AV8B_AA_HP","FIR_AV8B_AG_HP","FIR_AV8B_ECM_HP","FIR_MISC"};
						attachment = "FIR_AIM9M_LAU115_P_1rnd_M";
						priority = 4;
						maxweight = 500;
						UIposition[] = {0.5,0.35};
					};
					class pylons2: pylons1
					{
						hardpoints[] = {"FIR_AV8B_NA_AA_HP","FIR_AV8B_AA_HP","FIR_AV8B_AG_HP","FIR_AV8B_AG1K_HP","FIR_AV8B_HARM_HP","FIR_AV8B_Fueltank_L_HP","FIR_MISC"};
						priority = 3;
						attachment = "FIR_AGM65D_P_1rnd_M";
						maxweight = 1050;
						UIposition[] = {0.45,0.4};
					};
					class pylons3: pylons1
					{
						hardpoints[] = {"FIR_AV8B_AA_HP","FIR_AV8B_AG_HP","FIR_AV8B_AG1K_HP","FIR_AV8B_Fueltank_L_HP","FIR_MISC"};
						priority = 2;
						attachment = "FIR_GBU12_P_2rnd_M";
						maxweight = 1050;
						UIposition[] = {0.4,0.45};
					};
					class pylons4: pylons3
					{
						hardpoints[] = {"FIR_AV8B_AA_HP","FIR_AV8B_AG_HP","FIR_AV8B_AG1K_HP","FIR_AV8B_Fueltank_R_HP","FIR_MISC"};
						priority = 2;
						attachment = "FIR_GBU12_P_2rnd_M";
						mirroredMissilePos = 3;
						UIposition[] = {0.2,0.45};
					};
					class pylons5: pylons2
					{
						hardpoints[] = {"FIR_AV8B_NA_AA_HP","FIR_AV8B_AA_HP","FIR_AV8B_AG_HP","FIR_AV8B_AG1K_HP","FIR_AV8B_HARM_HP","FIR_AV8B_Fueltank_R_HP","FIR_MISC"};
						priority = 3;
						attachment = "FIR_AGM65D_P_1rnd_M";
						mirroredMissilePos = 2;
						UIposition[] = {0.15,0.4};
					};
					class pylons6: pylons1
					{
						hardpoints[] = {"FIR_AV8B_NA_AA_HP","FIR_AV8B_AA_HP","FIR_AV8B_AG_HP","FIR_MISC"};
						UIposition[] = {0.1,0.35};
						priority = 4;
						attachment = "FIR_AIM9M_LAU115_P_1rnd_M";
						mirroredMissilePos = 1;
					};
					class pylons7: pylons1
					{
						hardpoints[] = {"FIR_AV8B_Under_HP","FIR_MISC"};
						priority = 1;
						UIposition[] = {0.3,0.35};
						attachment = "FIR_Litening_std_P_1rnd_M";
					};
					class pylons8: pylons1
					{
						hardpoints[] = {"FIR_AV8B_Misc","FIR_MISC"};
						priority = 1;
						UIposition[] = {0.3,0.55};
						attachment = "FIR_Gunpod_Nomodel_P_1rnd_M";
					};							
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay = "EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,16000,30000,2000,4000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {8000,16000,30000,2000,4000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};		

		AWS_MFD_OVERLAY_TGP = "\FIR_AV8B\cockpit\MFD_TGP.paa";
		AWS_MFD_OVERLAY_TAD = "\FIR_AV8B\cockpit\MFD_HSD.paa";		
	
		acceleration = 200;
		driveoncomponent[] = {"wheel_1", "wheel_2", "wheel_3_1","wheel_3_2"};
		
		camouflage = 8;
		audible = 10;
		accuracy = 0.2;
		
		memoryPointCM[] = {"flare_launcher1","flare_launcher2","flare_launcher3"};
  		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir","flare_launcher3_dir"};

		htMin = 60;
  		htMax = 1800;
  		afMax = 200;
  		mfMax = 100;
  		mFact = 0;
  		tBody = 0;

		radartype = 4;
		lockdetectionsystem = 2 + 8 + 4;
		incommingmissliedetectionsystem = 16;
    };
    */
};
