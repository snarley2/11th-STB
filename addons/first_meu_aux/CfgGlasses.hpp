class CfgGlasses
{
    class LM_OPCAN_Shemagh;
    class LM_OPCAN_UP_Shemagh;
    class LM_OPCAN_URB_UP_Shemagh;
    class LM_OPCAN_DES_UP_Shemagh;
    class LM_OPCAN_BRW_UP_Shemagh;
        
    //lol glasses     
    class Marks_Aviators : LM_OPCAN_Shemagh
    {
        scope = 2;
        scopeArsenal = 2;
        displayname = "Praetorian Shemagh (Olive) (Mark)";
        CBRN_protectionLevel = "1 + 2 + 4";
        ACE_Resistance = 2;
        ACE_Protection = 1;
        ace_overlay = "first_meu_aux\Data\misc\hud_mork.paa";
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ace_overlayCracked = "first_meu_aux\Data\misc\hud_mork.paa";
        mass = 4;
    };
    //lol glasses
    // CBRN Shemaghs
    class ODST_Shemagh_Olive : LM_OPCAN_UP_Shemagh
	{
        displayName = "[1stMEU] Praetorian Shemagh (Olive)";
		scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        CBRN_protectionLevel = "1 + 2 + 4";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\Shemagh_CO_ODST.paa"};
    };
    class ODST_Shemagh_Urban : LM_OPCAN_URB_UP_Shemagh
    {
        displayName = "[1stMEU] Praetorian Shemagh (Urban)";
		scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        CBRN_protectionLevel = "1 + 2 + 4";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\Shemagh_COB_ODST.paa"};
	};
    class ODST_Shemagh_Tan : LM_OPCAN_DES_UP_Shemagh
    {
        displayName = "[1stMEU] Praetorian Shemagh (Tan)";
		scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        CBRN_protectionLevel = "1 + 2 + 4";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\Shemagh_COD_ODST.paa"};
    };
    class ODST_Shemagh_Brown : LM_OPCAN_BRW_UP_Shemagh
    {
        displayName = "[1stMEU] Praetorian Shemagh (Brown)";
		scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        CBRN_protectionLevel = "1 + 2 + 4";
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\Shemagh_COBR_ODST.paa"};
    };
    class ODST_Shemagh_Olive_dp : ODST_Shemagh_Olive
    {
        scope = 1;
        scopearsenal = 1;
        CBRN_protectionLevel = "1";
    };
    class ODST_Shemagh_Urban_dp : ODST_Shemagh_Urban
    {
        scope = 1;
        scopearsenal = 1;
        CBRN_protectionLevel = "1";
    };
    class ODST_Shemagh_Tan_dp : ODST_Shemagh_Tan
    {
        scope = 1;
        scopearsenal = 1;
        CBRN_protectionLevel = "1";
    };
    class ODST_Shemagh_Brown_dp : ODST_Shemagh_Brown
    {
        scope = 1;
        scopearsenal = 1;
        CBRN_protectionLevel = "1";
    };
};