class CBA_Extended_EventHandlers;
class CfgVehicles
{
	#include "CfgSupplyPods.hpp"

    class Helicopter_Base_H;
    class OPTRE_falcon_base;
    class OPTRE_UNSC_falcon_unarmed;
    class OPTRE_Pelican_armed;
    class OPTRE_Pelican_unarmed;
    class B_APC_Tracked_01_CRV_F;
    class B_T_APC_Tracked_01_CRV_F;
    class OPTRE_S12_SOLA_Jetpack;

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
        
    class Vulkan_Repair_APC: B_APC_Tracked_01_CRV_F
    {
        displayname = "Vulkan Repair APC";
        ace_repair_canRepair = 1; 
    };
        
    class Vulkan_Repair_APC_P: B_T_APC_Tracked_01_CRV_F
    {
        displayname = "Vulkan Repair APC (Pacific)";
        ace_repair_canRepair = 1; 
    };
    
    
};