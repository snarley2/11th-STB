class CfgFunctions
{
    class V_FZ
    {
        class PelicanMagLiftSystem
		{
            class PelicanLoadValidate
            {
                file = "11th_STB_aux\Functions\fn_PelicanLoadValidate.sqf";
            };
            class PelicanUnLoadValidate
            {
                file = "11th_STB_aux\Functions\fn_PelicanUnLoadValidate.sqf";
            };
        };
    };
    class MEU
    {
        class ACE_compat
        {
            class fn_meuPainReduce
            {
                file = "11th_STB_aux\Functions\fn_meuPainReduce.sqf";
            };
            class fn_meuPainReduceLocal
            {
                file = "11th_STB_aux\Functions\fn_meuPainReduceLocal.sqf";
            };
			class medkit
			{
                file = "11th_STB_aux\Functions\fn_medkit.sqf";
			};
			class biomed
			{
                file = "11th_STB_aux\Functions\fn_biomed.sqf";
			};
			class thrusterforward
			{
                file = "11th_STB_aux\Functions\fn_thrusterforward.sqf";
			};
			class thrusterback
			{
                file = "11th_STB_aux\Functions\fn_thrusterback.sqf";
			};
			class thrusterleft
			{
                file = "11th_STB_aux\Functions\fn_thrusterleft.sqf";
			};
			class thrusterright
			{
                file = "11th_STB_aux\Functions\fn_thrusterright.sqf";
			};
			class Bubbleshield_throw
			{
                file = "11th_STB_aux\Functions\Bubbleshield_throw.sqf";
			};
			class flexseal
			{
                file = "11th_STB_aux\Functions\fn_flexseal.sqf";
			};
			
        };
        class fnc_tourniquetRemove
        {
                file = "11th_STB_aux\Functions\fn_MEU_tourniquetRemove.sqf";
        };
        class fnc_necktourniquet
        {
                file = "11th_STB_aux\Functions\fn_necktourniquet.sqf";
        };
        tag = "MEU";
		class afterburner_functions
		{
			file = "11th_STB_aux\functions\afterburnerMk1";
			class Afterburners_Disengage;
			class Afterburners_Engage;
		};
		class MEU_Keybinds
		{
			class keybinds
			{
				file = "11th_STB_aux\functions\keybinds.sqf";
				postInit = 1;
			};
		};
                class MEU_utility_functions
		{
			class get_config_attribute
			{
				file = "11th_STB_aux\functions\utility\get_config\get_config_attribute.sqf";
			};
			class integer_to_boolean
			{
				file = "11th_STB_aux\functions\utility\get_config\integer_to_boolean.sqf";
			};
		};

		class HEV
		{
			class HEVAdjust
			{
				file = "11th_STB_aux\functions\HEV\fn_HEVAdjust.sqf";
			};
		};
    };

	class OPTRE
	{
		class HEV
		{
			class HEVChuteDeploy
			{
				file = "11th_STB_aux\functions\HEV\fn_HEVChuteDeploy.sqf";
			};

			class HEVDoor
			{
				file = "11th_STB_aux\functions\HEV\fn_HEVDoor.sqf";
			};

			class HEVHandleLanding
			{
				file = "11th_STB_aux\functions\HEV\fn_HEVHandleLanding.sqf";
			};
		};

		class MenuFunctions
		{
			class HEVRoom
			{
				file = "11th_STB_aux\functions\MenuFunctions\fn_HEVRoom.sqf";
			};
		};
	};
};
