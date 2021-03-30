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
        class ACE_compat
        {
            class fn_meuPainReduce
            {
                file = "first_meu_aux\Functions\fn_meuPainReduce.sqf";
            };
            class fn_meuPainReduceLocal
            {
                file = "first_meu_aux\Functions\fn_meuPainReduceLocal.sqf";
            };
			class medkit
			{
                file = "first_meu_aux\Functions\fn_medkit.sqf";
			};
			class thrusterforward
			{
                file = "first_meu_aux\Functions\fn_thrusterforward.sqf";
			};
			class thrusterback
			{
                file = "first_meu_aux\Functions\fn_thrusterback.sqf";
			};
			class thrusterleft
			{
                file = "first_meu_aux\Functions\fn_thrusterleft.sqf";
			};
			class thrusterright
			{
                file = "first_meu_aux\Functions\fn_thrusterright.sqf";
			};
			class Bubbleshield_throw
			{
                file = "first_meu_aux\Functions\Bubbleshield_throw.sqf";
			};
			class flexseal
			{
                file = "first_meu_aux\Functions\fn_flexseal.sqf";
			};
			
        };
        class fnc_tourniquetRemove
        {
                file = "first_meu_aux\Functions\fn_MEU_tourniquetRemove.sqf";
        };
        class fnc_necktourniquet
        {
                file = "first_meu_aux\Functions\fn_necktourniquet.sqf";
        };
        tag = "MEU";
		class afterburner_functions
		{
			file = "first_meu_aux\functions\afterburnerMk1";
			class Afterburners_Disengage;
			class Afterburners_Engage;
		};
		class MEU_Keybinds
		{
			class keybinds
			{
				file = "first_meu_aux\functions\keybinds.sqf";
				postInit = 1;
			};
		};
                class MEU_utility_functions
		{
			class get_config_attribute
			{
				file = "first_meu_aux\functions\utility\get_config\get_config_attribute.sqf";
			};
			class integer_to_boolean
			{
				file = "first_meu_aux\functions\utility\get_config\integer_to_boolean.sqf";
			};
		};

		class HEV
		{
			class HEVAdjust
			{
				file = "first_meu_aux\functions\HEV\fn_HEVAdjust.sqf";
			};
		};
    };

	class OPTRE
	{
		class HEV
		{
			class HEVChuteDeploy
			{
				file = "first_meu_aux\functions\HEV\fn_HEVChuteDeploy.sqf";
			};

			class HEVDoor
			{
				file = "first_meu_aux\functions\HEV\fn_HEVDoor.sqf";
			};

			class HEVHandleLanding
			{
				file = "first_meu_aux\functions\HEV\fn_HEVHandleLanding.sqf";
			};
		};

		class MenuFunctions
		{
			class HEVRoom
			{
				file = "first_meu_aux\functions\MenuFunctions\fn_HEVRoom.sqf";
			};
		};
	};
};
