class CfgWeapons
{
    class LM_OPCAN_CGC;
    class ItemCore;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
	class H_HelmetB;
	class VestItem;
    
    class first_plt_Beret: LM_OPCAN_Beret_CGC
	{
		scope = 2;
		author = "1st MEU Studios";
		displayName = "[1st MEU] 1st Plt Beret";
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"addons\first_meu_aux\Data\Centurion1BeretV4.paa"};
    };
};