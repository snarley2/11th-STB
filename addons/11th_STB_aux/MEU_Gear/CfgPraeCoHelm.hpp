//Base Values
    class 1stMEU_Base_CH252D_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ace_overlayCracked = "11th_STB_aux\Data\misc\hud_cracked.paa";
		displayName = "[11th] CH252D Helmet";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
			hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		allowedFacewear[] = {};
	};
    class 1stMEU_Base_CH252D_Helmet_dp : VES_CH252D_dp
    {
        dlc = "1st MEU";
		author = "1st MEU Mark";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[11th] CH252D Helmet";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		subItems[]=
		{
			"ItemcTabHCam"
		};
		allowedFacewear[] = {};
	};
    
	class ODST_Recon_Helmet : OPTRE_UNSC_Recon_Helmet
    {
        dlc = "1st MEU";
		author = "Tom(s) & Jerry(s)";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[11th] Hades Recon helmet";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_co.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_UNSC_Units\Army\recon_helmet.p3d"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_co.paa"};
			hiddenSelectionsMaterials[] = {"OPTRE_USNC_Units\Army\recon_helmet.p3d"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		subItems[]=
		{
			"ItemcTabHCam"
		};
		allowedFacewear[] = {};
	};
    
	class ODST_Recon_Helmet_dp: OPTRE_UNSC_Recon_Helmet_dp
    {
        dlc = "1st MEU";
		author = "Tom(s) & Jerry(s)";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
        weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[11th] Recon helmet";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_ca.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_UNSC_Units\Army\recon_helmet.p3d"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\recon_helmet_dp.p3d";
			picture = "\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_ca.paa"};
			hiddenSelectionsMaterials[] = {"OPTRE_USNC_Units\Army\recon_helmet.p3d"};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 25;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 25;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 25;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
		subItems[]=
		{
			"ItemcTabHCam"
		};
		allowedFacewear[] = {};
	};
    
//Start Base Helmet
    class Praetor_Helmet_Black: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[11th] CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Ride: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[11th] CH252D Ride Along Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Ride.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Sound_Protec: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
        tf_isolatedAmount = 0.85;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.9;
		weaponPoolAvailable = 1;
		displayName = "[11th] CH252D Soundproof Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV"};
    };
    class Praetor_Helmet_Corpsman: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_HM.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Blue: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Blue.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Yellow: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Yellow.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Silver: 1stMEU_Base_CH252D_Helmet
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] CH252D Helmet (Silver)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Silver.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Purple: 1stMEU_Base_CH252D_Helmet
	{
        author = "1st MEU Ginger";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] CH252D Helmet (Purple)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\4thPlt\ODST_H3_Purple.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Red: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] CH252D Helmet (Red)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_Red.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    
//Start Base DP
    class Praetor_Helmet_Black_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Ride_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Ride.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Sound_Protec_dp : Praetor_Helmet_Black_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
        
    };
    class Praetor_Helmet_Corpsman_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_HM.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Blue_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_blue.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Yellow_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Yellow.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Silver_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Silver.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Purple_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Red_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_Red.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    
 //Start Base Broke-Ass Shit
    class Praetor_Helmet_Base_Broken : Praetor_Helmet_Black
    {
        scope = 1;
        scopeArsenal = 1;
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ace_overlayCracked = "11th_STB_aux\Data\misc\hud_cracked.paa";
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black.paa","11th_STB_aux\Data\misc\hud_cracked.paa"};
    };
    class Praetor_Helmet_Black_broken : Praetor_Helmet_Black
    {
        scope = 1;
        scopeArsenal = 1;
    };
    class Praetor_Helmet_Ride_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Ride.paa"};
    };
    class Praetor_Helmet_Blue_broken : Praetor_Helmet_Base_Broken
    {
        scopeArsenal = 1;
        scope = 1;
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Yellow_broken : Praetor_Helmet_Base_Broken
    {
        scopeArsenal = 1;
        scope = 1;
    };
    class Praetor_Helmet_Silver_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Silver.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Purple_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Red_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_Red.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
//Start Company
    class Praetor_Helmet_Com: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] D-6 CH252D Helmet (Oneill)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_Red_Oneill.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Com2: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        tf_isolatedAmount = 0.85;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.9;
		displayName = "[11th] D-5 CH252D Helmet (Mark Weathered)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Wth_Mark.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV_SPD.paa"};
	};
    class Praetor_Helmet_Com22: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        tf_isolatedAmount = 0.85;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.9;
		displayName = "[11th] D-5 CH252D Helmet (Mark)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_Red_Mark.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Com3: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] D-R CH252D Helmet (Dimitri)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_Red_Dimitri.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Mike: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] D-M CH252D Helmet (FloodedMac)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_Red_HM_CHQ_Flooded.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    
//Start Company DP
    class Praetor_Helmet_Com_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_Red_Oneill.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Com2_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Wth_Mark.paa","11th_STB_aux\data\misc\VISR_ODST_CLR_SPD.paa"};
    };
    class Praetor_Helmet_Com22_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_Red_Mark.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Com3_dp :  1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_Red_Dimitri.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Mike_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_Red_HM_CHQ_Flooded.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    
//Start Company Broke-Ass Shit
    class Praetor_Helmet_Com_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_Red_Oneill.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Com2_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_Red_Mark.paa","11th_STB_aux\Data\misc\hud_cracked.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Com22_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Wth_Mark.paa","11th_STB_aux\Data\misc\hud_cracked.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Com3_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_Red_Dimitri.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Mike_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_Red_HM_CHQ_Flooded.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };

//Start 3rd Platoon
    class Praetor_Helmet_Black_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[11th] 3-1 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_31.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Black_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[11th] 3-2 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_32.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Black_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[11th] 3-3 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_33.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 3-1 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R1_31.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 3-2 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R1_32","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 3-3 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R1_33","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 3-1 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R2_31.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 3-2 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R2_32","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 3-3 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R2_33","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Corpsman_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Romeo";
		displayName = "[11th] 3-1 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_HM_31.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Corpsman_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Romeo";
		displayName = "[11th] 3-2 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_HM_32.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Corpsman_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Romeo";
		displayName = "[11th] 3-3 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Black_HM_33.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Blue_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[11th] 3-1 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Blue_31.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Blue_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[11th] 3-2 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Blue_32.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Blue_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill"; 
		displayName = "[11th] 3-3 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Blue_33.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Yellow_31: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[11th] 3-1 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Yellow_31.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Yellow_32: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[11th] 3-2 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Yellow_32.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Yellow_33: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Oneill";
		displayName = "[11th] 3-3 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Yellow_33.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_36: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 3-6 CH252D Helmet (Silent)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Silver_3HQ_Silent.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_37: 1stMEU_Base_CH252D_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[11th] 3-7 CH252D Helmet (Indigo)";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Silver_3HQ_Indigo.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_Helmet_Ender_3M: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 3-M CH252D Helmet (Ender)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\3rdPlt\ODST_H3_Silver_3HQ_Ender.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_Helmet_Cursed_3R: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 3-R CH252D Helmet (Cursed)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Silver_3HQ_Cursed.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    
//Start 3rd Platoon DP
    class Praetor_Helmet_Black_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_31.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Black_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_32.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Black_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_33.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_RTO_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R1_31.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R1_32.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R1_33.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R2_31.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R2_32.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R2_33.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_corpsman_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_HM_31.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_corpsman_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_HM_32.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_corpsman_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_HM_33.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Blue_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Blue_31.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Blue_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Blue_32.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Blue_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Blue_33.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Yellow_31_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Yellow_31.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Yellow_32_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Yellow_32.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_Yellow_33_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Yellow_33.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Praetor_Helmet_36_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Silver_3HQ_Silent.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_37_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Silver_3HQ_Indigo.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Ender_3M_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Silver_3HQ_Ender.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_Helmet_Cursed_3R_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Silver_3HQ_Cursed.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };

//Start 3rd Platoon Broke-Ass Shit
    class Praetor_Helmet_Black_31_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_31.paa"};
    };
    class Praetor_Helmet_Black_32_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_32.paa"};
        
    };
    class Praetor_Helmet_Black_33_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_33.paa"};
    };
    class Praetor_RTO_31_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R1_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_32_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R1_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_33_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R1_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_SR_31_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R2_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_SR_32_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R2_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_SR_33_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Black_R2_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    
//Needs Corpsman Bjorkenddd//
    
    class Praetor_Helmet_Blue_31_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_color_Blue_31.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Blue_32_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_color_Blue_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Blue_33_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_color_Blue_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Yellow_31_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Yellow_31.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Yellow_32_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Yellow_32.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_Yellow_33_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\3rdPlt\ODST_H3_Yellow_33.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
//Needs 3HQ Bjorkkkeddddd//
    
    
//Start 4th Platoon
    class Praetorian_Helmet_41: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-1 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_41.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_42: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-2 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_42.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-3 CH252D Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_43.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetor_RTO_41: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 4-1 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R1_41.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_42: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 4-2 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R1_42","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
     class Praetor_RTO_43: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 4-3 CH252D (RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R1_43","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_41: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 4-1 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R2_41.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetor_RTO_SR_42: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 4-2 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R2_42","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
     class Praetor_RTO_SR_43: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		displayName = "[11th] 4-3 CH252D (SR RTO)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R2_43","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
    };
    class Praetorian_Helmet_41_HM: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-1 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_HM_41.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
     class Praetorian_Helmet_42_HM: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-2 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_HM_42.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43_HM: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-3 CH252D Helmet (Corpsman)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_HM_43.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_41TL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-1 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_41.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_42TL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-2 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_42.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43TL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-3 CH252D Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_43.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43TL_Kenobi: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-3B CH252D Helmet (Kenobi)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_43_Kenobi.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_41SL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-1 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_41.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_42SL_Bjorn: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-2 CH252D Helmet (Bjorn)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_42_Bjorn.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_42SL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-2 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_42.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43SL_Mutt: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-3 CH252D Helmet (Mutt)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_43_Mutt.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_43SL: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-3 CH252D Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_43.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_46: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-6 CH252D Helmet (Romeo)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Romeo.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_47: 1stMEU_Base_CH252D_Helmet
	{
        scope = 1;
        scopeCurator = 1;
        scopeArsenal = 1;
		displayName = "[11th] 4-7 CH252D Helmet (TBD)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple_4HQ.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    class Praetorian_Helmet_4M: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] 4-M CH252D Helmet (Rave)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Rave.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    
//Start 4th Platoon DP
    class Praetorian_Helmet_41_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_41.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_42_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_42.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_43_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_43.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetor_RTO_41_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R1_41.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_42_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R1_42.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_43_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R1_43.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_41_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R2_41.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_42_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R2_42.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetor_RTO_SR_43_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R2_43.paa","V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA.paa"};
    };
    class Praetorian_Helmet_41_HM_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_HM_41.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_42_HM_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_HM_42.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_43_HM_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_HM_43.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_41TL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_41.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_42TL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_42.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_43TL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_43.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_43TL_Kenobi_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_43_Kenobi.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_41SL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_41.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_42SL_Bjorn_dp : 1stMEU_Base_CH252D_Helmet_dp
	{
        scope = 1;
        scopeArsenal = 1;
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_42_Bjorn.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
	};
    class Praetorian_Helmet_42SL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_42.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_43SL_Mutt_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_43_Mutt.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_43SL_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_43.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_46_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Romeo.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_47_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple_4HQ.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    class Praetorian_Helmet_4M_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Rave.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    
    //Start 4th Platoon Broke-Ass Shit
    class Praetor_Helmet_41_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_41.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_42_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_42.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_43_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_43.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_41_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R1_41.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_42_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R1_42.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_43_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R1_43.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_SR_41_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R2_41.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_SR_42_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R2_42.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_RTO_SR_43_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_R2_43.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_41_HM_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_HM_41.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_42_HM_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_HM_42.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_43_HM_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Black_HM_43.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_41TL_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_41.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_42TL_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_42.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_43TL_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_43.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_43TL_Kenobi_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Blue_43_Kenobi.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_42SL_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_42.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_42SL_Bjorn_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_42_Bjorn.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_43SL_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_43.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_43SL_Mutt_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Yellow_43_Mutt.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_46_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Romeo.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_47_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple_4HQ.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    class Praetor_Helmet_4M_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\ODST_H3_Purple_4HQ_Rave.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
    
//HOKAGE
    class Helmet_HOK: 1stMEU_Base_CH252D_Helmet
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[11th] Hokage";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\misc\hokHelm.paa","11th_STB_aux\data\MISC\VISR_ODST_NAV.paa"};
	};
    
//HOKAGE DP
    class Helmet_HOK_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat",""};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\misc\hokHelm.paa","11th_STB_aux\data\MISC\VISR_ODST_CLR.paa"};
    };
    
//HOKAGE Stooopid
    class Helmet_HOK_broken : Praetor_Helmet_Base_Broken
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\misc\hokHelm.paa"};
        idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "11th_STB_aux\Data\misc\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
    };
//Beret
    class fourth_plt_beret : LM_OPCAN_Beret_CGC
    {
       scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[11th] Beret (4th Plt)";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Beret_Colonel_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\Data\4thPlt\4thBeret.paa"};
        visionMode[] = {"Normal","TI","NVG"};
        thermalMode[] = {0,1,2,3,4,5};
    };
//Hades helmets
    class Hades_Helmet_HQCO: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST HQ CO";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\HQ_Staff_Sergeant","11th_STB_aux\data\Hades_V\VISR_ODST_BLK.paa"};
    };
    class Hades_Helmet_HQSSGT: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST HQ SSGT";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\HQ_Staff_Sergeant","11th_STB_aux\data\Hades_V\VISR_ODST_GLD.paa"};
    };
    class Hades_Helmet_HQCpl: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST HQ Cpl";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\HQ_Corporal","11th_STB_aux\data\Hades_V\VISR_ODST_STB.paa"};
    };
    class Hades_Helmet_HQslotted: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST HQ Slotted";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\HQ_Slotted","11th_STB_aux\data\Hades_V\VISR_ODST_STB.paa"};
};
    class Hades_Helmet_HQSGT: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST HQ SGT";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\HQ_Sergeant","11th_STB_aux\data\Hades_V\VISR_ODST_GLD.paa"};
    };
    class Hades_Helmet_11SSGT: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST 1-1 SSGT";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\1-1_Staff_Sergeant","11th_STB_aux\data\Hades_V\VISR_ODST_GLD.paa"};
    };
    class Hades_Helmet_11SGT: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST 1-1 SGT";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\1-1_Sergeant","11th_STB_aux\data\Hades_V\VISR_ODST_GLD.paa"};
    };
    class Hades_Helmet_11Cpl: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST 1-1 Cpl";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\1-1_Corporal","11th_STB_aux\data\Hades_V\VISR_ODST_STB.paa"};
    };
    class Hades_Helmet_11slotted: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST 1-1 slotted";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\1-1_Slotted","11th_STB_aux\data\Hades_V\VISR_ODST_STB.paa"};
    };
    class Hades_Helmet_12SSGT: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST 1-2 SSGT";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\1-2_Staff_Sergeant","11th_STB_aux\data\Hades_V\VISR_ODST_GLD.paa"};
    };    
    class Hades_Helmet_12SGT: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST 1-2 SGT";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\1-2_Sergeant","11th_STB_aux\data\Hades_V\VISR_ODST_GLD.paa"};
    };
    class Hades_Helmet_12Cpl: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST 1-2 Cpl";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\1-2_Corporal","11th_STB_aux\data\Hades_V\VISR_ODST_STB.paa"};
    };
    class Hades_Helmet_12slotted: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST 1-2 slotted";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\1-2_Slotted","11th_STB_aux\data\Hades_V\VISR_ODST_STB.paa"};
    };
    class Icarus_Helmet_Cadet: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST Icarus Cadet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\Icarus_Slotted.paa","11th_STB_aux\data\Hades_V\VISR_ODST_STB.paa"};
    };
    class Icarus_Helmet_Pilot: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST Icarus Pilot";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\Icarus_Cadet.paa","11th_STB_aux\data\Hades_V\VISR_ODST_STB.paa"};
    };
    class Icarus_Helmet_Flightleader: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST Icarus Flightleader";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\Icarus_WO.paa","11th_STB_aux\data\Hades_V\VISR_ODST_GLD.paa"};
    };
    class Icarus_Helmet_Squadronleader: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST Icarus Squadronleader";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\Icarus_Leadership.paa","11th_STB_aux\data\Hades_V\VISR_ODST_GLD.paa"};
    };
    class Icarus_Helmet_Officer: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST Icarus Officer";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\Icarus_Leadership.paa","11th_STB_aux\data\Hades_V\VISR_ODST_BLK.paa"};
    };
    class Hades_Helmet_Slim: 1stMEU_Base_CH252D_Helmet
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] ODST 1-1 Slim";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"11th_STB_aux\data\Hades_H\1-1_Sergeant","11th_STB_aux\data\Hades_V\VISR_ODST_HR.paa"};
    };
    class Hades_Helmet_HQCO_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\HQ_Staff_Sergeant","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_HQSSGT_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\HQ_Staff_Sergeant","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_HQSGT_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\HQ_Sergeant","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_HQCpl_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\HQ_Corporal","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_HQslotted_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\HQ_Slotted","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_11SSGT_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\1-1_Staff_Sergeant","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_11SGT_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\1-1_Sergeant","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_11Cpl_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\1-1_Corporal","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_11slotted_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\1-1_slotted","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_12SSGT_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\1-2_Staff_Sergeant","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_12SGT_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\1-2_Sergeant","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_12Cpl_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\1-2_Corporal","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Hades_Helmet_12slotted_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\1-2_slotted","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Icarus_Helmet_Cadet_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\Icarus_Slotted.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Icarus_Helmet_Pilot_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\Icarus_Cadet.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Icarus_Helmet_Flightleader_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\Icarus_WO","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Icarus_Helmet_Squadronleader_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\Icarus_Leadership","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
    class Icarus_Helmet_Officer_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\Hades_Leadership.paa","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };
	class Hades_Recon_Helmet: OPTRE_UNSC_Recon_Helmet
	{
		dlc = "OPTRE";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "Tom(s) & Jerry(s)";
		displayName = "[11th] Hades Recon";
		picture = "\OPTRE_UNSC_Units\Army\icons\odst_recon.paa";
		hiddenSelections[] = {"camo","camo2"};
		model = "\OPTRE_UNSC_Units\Army\recon_helmet.p3d";
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_co.paa"};
		hiddenSelectionsMaterials[] = {"OPTRE_UNSC_Units\Army\recon_helmet.p3d"};
    };
        class Hades_Recon_Helmet_dp : OPTRE_UNSC_Recon_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"OPTRE_UNSC_Units\Army\recon_helmet.p3d"};
		hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\recon_co.paa","optre_unsc_units\army\data\recon_visor_ca.paa"};
    };
    class Hades_Helmet_Slim_dp : 1stMEU_Base_CH252D_Helmet_dp
    {
        scope = 1;
        scopeArsenal = 1;
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Hades_H\1-1_Sergeant","11th_STB_aux\data\misc\VISR_ODST_CLR.paa"};
    };