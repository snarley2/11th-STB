class CfgGlasses
{
    class LM_OPCAN_Shemagh;
    class LM_OPCAN_UP_Shemagh;
    class LM_OPCAN_URB_UP_Shemagh;
    class LM_OPCAN_DES_UP_Shemagh;
    class LM_OPCAN_BRW_UP_Shemagh;
    class VES_HUD_Balaclava_Gray;
        
    //lol glasses     
    class Marks_Aviators : LM_OPCAN_Shemagh
    {
        scope = 2;
        scopeArsenal = 2;
        displayname = "[1stMEU] Praetorian Shemagh (Olive) (Mark)";
        ACE_Resistance = 2;
        ACE_Protection = 1;
        ace_overlay = "first_meu_aux\Data\misc\hud_mork.paa";
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ace_overlayCracked = "first_meu_aux\Data\misc\hud_mork.paa";
        mass = 4;
		/*class EventHandlers
		{
		Dammaged = " _dude = _this select 0; _loc = _this select 1; _ammo = _this select 6; _facewear = (goggles _dude); _cal = ( getNumber (configfile >> 'CfgAmmo' >> typeof _ammo >> 'caliber') ); if (_cal > 2 && _loc == 'head' && isClass (configFile >> 'cfgglasses' >> _facewear + '_dp')) then {_rand = selectrandom[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19]; if (_rand == 5) then { _facewear = (goggles _dude); _dude addGoggles  (_facewear + '_dp');};};";
		};*/
    };
    //lol glasses
    // CBRN Shemaghs
    class ODST_Shemagh_Olive : LM_OPCAN_UP_Shemagh
	{
        displayName = "[1stMEU] Praetorian Shemagh (Olive)";
		scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
		ACE_Resistance = 2;
        ACE_Protection = 1;
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\Shemagh_CO_ODST.paa"};
		/*class EventHandlers
		{
		Dammaged = " _dude = _this select 0; _loc = _this select 1; _ammo = _this select 6; _facewear = (goggles _dude); _cal = ( getNumber (configfile >> 'CfgAmmo' >> typeof _ammo >> 'caliber') ); if (_cal > 2 && _loc == 'head' && isClass (configFile >> 'cfgglasses' >> _facewear + '_dp')) then {_rand = selectrandom[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19]; if (_rand == 5) then { _facewear = (goggles _dude); _dude addGoggles  (_facewear + '_dp');};};";
		};*/
    };
    class ODST_Shemagh_Urban : LM_OPCAN_URB_UP_Shemagh
    {
        displayName = "[1stMEU] Praetorian Shemagh (Urban)";
		scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;   
		ACE_Resistance = 2;
        ACE_Protection = 1;
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\Shemagh_COB_ODST.paa"};
		/*class EventHandlers
		{
		Dammaged = " _dude = _this select 0; _loc = _this select 1; _ammo = _this select 6; _facewear = (goggles _dude); _cal = ( getNumber (configfile >> 'CfgAmmo' >> typeof _ammo >> 'caliber') ); if (_cal > 2 && _loc == 'head' && isClass (configFile >> 'cfgglasses' >> _facewear + '_dp')) then {_rand = selectrandom[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19]; if (_rand == 5) then { _facewear = (goggles _dude); _dude addGoggles  (_facewear + '_dp');};};";
		};*/
	};
    class ODST_Shemagh_Tan : LM_OPCAN_DES_UP_Shemagh
    {
        displayName = "[1stMEU] Praetorian Shemagh (Tan)";
		scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;    
		ACE_Resistance = 2;
        ACE_Protection = 1;
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\Shemagh_COD_ODST.paa"};
		/*class EventHandlers
		{
		Dammaged = " _dude = _this select 0; _loc = _this select 1; _ammo = _this select 6; _facewear = (goggles _dude); _cal = ( getNumber (configfile >> 'CfgAmmo' >> typeof _ammo >> 'caliber') ); if (_cal > 2 && _loc == 'head' && isClass (configFile >> 'cfgglasses' >> _facewear + '_dp')) then {_rand = selectrandom[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19]; if (_rand == 5) then { _facewear = (goggles _dude); _dude addGoggles  (_facewear + '_dp');};};";
		};*/
    };
    class ODST_Shemagh_Brown : LM_OPCAN_BRW_UP_Shemagh
    {
        displayName = "[1stMEU] Praetorian Shemagh (Brown)";
		scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
		ACE_Resistance = 2;
        ACE_Protection = 1;
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\Shemagh_COBR_ODST.paa"};
		/*class EventHandlers
		{
		Dammaged = " _dude = _this select 0; _loc = _this select 1; _ammo = _this select 6; _facewear = (goggles _dude); _cal = ( getNumber (configfile >> 'CfgAmmo' >> typeof _ammo >> 'caliber') ); if (_cal > 2 && _loc == 'head' && isClass (configFile >> 'cfgglasses' >> _facewear + '_dp')) then {_rand = selectrandom[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19]; if (_rand == 5) then { _facewear = (goggles _dude); _dude addGoggles  (_facewear + '_dp');};};";
		};*/
    };
    class JTAC_Bala : VES_HUD_Balaclava_Gray
    {
        displayName = "[1stMEU] [JTAC] Balaclava";
		scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        optreHUDStyle = "";
		ACE_Resistance = 2;
        ACE_Protection = 1;
       /* class EventHandlers
		{
		Dammaged = " _dude = _this select 0; _loc = _this select 1; _ammo = _this select 6; _facewear = (goggles _dude); _cal = ( getNumber (configfile >> 'CfgAmmo' >> typeof _ammo >> 'caliber') ); if (_cal > 2 && _loc == 'head' && isClass (configFile >> 'cfgglasses' >> _facewear + '_dp')) then {_rand = selectrandom[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19]; if (_rand == 5) then { _facewear = (goggles _dude); _dude addGoggles  (_facewear + '_dp');};};";
		};*/
    };
    class ODST_Shemagh_Olive_dp : ODST_Shemagh_Olive
    {
        scope = 1;
        scopearsenal = 1;
        CBRN_protectionLevel = "1";
        ace_overlay = "first_meu_aux\Data\Misc\Cracked.paa";
    };
    class ODST_Shemagh_Urban_dp : ODST_Shemagh_Urban
    {
        scope = 1;
        scopearsenal = 1;
        CBRN_protectionLevel = "1";
        ace_overlay = "first_meu_aux\Data\Misc\Cracked.paa";
    };
    class ODST_Shemagh_Tan_dp : ODST_Shemagh_Tan
    {
        scope = 1;
        scopearsenal = 1;
        CBRN_protectionLevel = "1";
        ace_overlay = "first_meu_aux\Data\Misc\Cracked.paa";
    };
    class ODST_Shemagh_Brown_dp : ODST_Shemagh_Brown
    {
        scope = 1;
        scopearsenal = 1;
        CBRN_protectionLevel = "1";
        ace_overlay = "first_meu_aux\Data\Misc\Cracked.paa";
    };
    class Marks_Aviators_dp : Marks_Aviators
    {
        scope = 1;
        scopearsenal = 1;
        CBRN_protectionLevel = "1";
        ace_overlay = "first_meu_aux\Data\Misc\Cracked.paa";
    };
    class JTAC_Bala_dp : JTAC_Bala
    {
        scope = 1;
        scopearsenal = 1;
        optreHUDStyle = "";
        CBRN_protectionLevel = "1";
        ace_overlay = "first_meu_aux\Data\Misc\Cracked.paa";
    };
};
