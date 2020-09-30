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
            class fn_addChangeFuseItemContextMenuOptions
            {
                file = "first_meu_aux\Functions\fnc_addChangeFuseItemContextMenuOptions.sqf";
                preInit = 1;
                postInit = 1;
            };
        };
    };
    class MEU_Jump
	{
		class MEU_Jetpack
		{
			file="first_meu_aux\Functions\Jetpack";
			class big_Jump{};
			class big_JumpEnergy{};
		};
    };
    class MEU_init
    {
        file="first_meu_aux\Functions\Init";
        class Init
		{
			PostInit=1;
		};
    };
};
class CfgSFX
{
	class MEU_Jump_SoundSFX
	{
		sound0[]={"first_meu_aux\data\sounds\jump.wav", 250, 1, 25, 1, 0, 0, 4};
		sounds[]={sound0};
		empty[]={"", 0, 0, 0, 0, 0, 0, 0};
	};
};