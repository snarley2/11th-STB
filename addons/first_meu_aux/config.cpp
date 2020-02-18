#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgEventHandlers.hpp"

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
		requiredAddons[] = {
			"OPTRE_UNSC_Units",
			"OPTRE_Ins_Units",
			"OPTRE_Weapons",
			"OPTRE_Core",
			"OPTRE_Misc",
			"A3_Data_F",
			"OPTRE_Misc_Crates",
            "OPTRE_Vehicles",
			"OPTRE_Modules"
			};
    };
};

class CfgFunctions
{
    class V_FZ
    {
        class PelicanMagLiftSystem
		{
			file = "first_meu_aux\Functions";
			class PelicanLoadValidate{};
			class PelicanUnLoadValidate{};
			class SlipspaceRuptureDetected{};
        };
    }
}