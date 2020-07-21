#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgGroups.hpp"
#include "script.hpp"
#include "script.hpp"
#include "CfgMagazines.hpp"
#include "Cfgtreatment.hpp"
#include "Cfgtreatmentactions.hpp"

class cfgPatches
{
    class first_meu_aux
    {
		units[] = {
			"OPTRE_Ammo_SupplyPod_Launcher",
			"OPTRE_Ammo_SupplyPod_Medical",
			"OPTRE_Ammo_SupplyPod_Mortars",
			"OPTRE_Ammo_SupplyPod_LMG"
			};
        requiredVersion = 0.1;
		requiredAddons[] = 
        {
			"OPTRE_UNSC_Units",
			"OPTRE_Ins_Units",
			"OPTRE_Weapons",
			"OPTRE_Core",
			"OPTRE_Misc",
			"A3_Data_F",
			"OPTRE_Misc_Crates",
            "OPTRE_Vehicles",
			"OPTRE_Modules",
            "V_FZ_Core",
            "LM_OPCAN_UNSC",
            "V_SO_Core",
            "V_SO_Magazines",
            "V_SO_Weapons",
            "OPTRE_FC_Units",
            "ace_medical_engine",
            "ace_medical_treatment",
            "ace_common",
        };
    };
};

class CfgFunctions
{
    class V_FZ
    {
        class PelicanMagLiftSystem
		{
            class PelicanLoadValidate
            {
                file = "first_meu_aux\Functions\fn_PelicanLoadValidate.sqf";
            };
            class PelicanUnLoadValidate
            {
                file = "first_meu_aux\Functions\fn_PelicanUnLoadValidate.sqf";
            };
        };
    };
    class MEU
    {
        class compat
        {
            class fn_meuPainReduce
            {
                file = "first_meu_aux\Functions\fn_meuPainReduce.sqf";
            };
            class fn_meuPainReduceLocal
            {
                file = "first_meu_aux\Functions\fn_meuPainReduceLocal.sqf";
            };
            
        };
    };
};