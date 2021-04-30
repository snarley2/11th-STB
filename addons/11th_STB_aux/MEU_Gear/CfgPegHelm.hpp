//Base Helmet
    class Peg_Base : OPTRE_UNSC_VX16_Helmet_base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        author = "1st MEU Mark";
        weaponPoolAvailable = 1;
        optreHUDStyle = "ODST_1";
        subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        displayName = "[11th] Pegasus Helmet";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Base_dp : OPTRE_UNSC_VX16_Helmet_base_dp
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        author = "1st MEU Mark";
        weaponPoolAvailable = 1;
        subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
        displayName = "[11th] Pegasus Helmet Depo";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Pegasus.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    
//JTAC
    class VX19_1stMEU : OPTRE_FC_VX19_Helmet
	{
        scope = 2;
        author = "1st MEU Chaotic";
        scopeCurator = 2;
        scopeArsenal = 2;
        weaponPoolAvailable = 1;
		displayName = "[11th] [JTAC] Pegasus VX-19";
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.60;
        optreVarietys[] = {"_dp","","_broken"};
        optreHUDStyle = "ODST_1";
		hiddenSelections[] =
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\11th_STB_aux\data\pegasus\h3_pilothelmet_BK.paa",
			"\11th_STB_aux\data\pegasus\h3_pilothelmet_visor_CO.paa"
		};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo","camo2"};
			hiddenSelectionsTextures[] = {"\11th_STB_aux\data\pegasus\h3_pilothelmet_BK.paa","\11th_STB_aux\data\pegasus\h3_pilothelmet_visor_CO.paa"};
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
	};
    class VX19_1stMEU_dp : VX19_1stMEU
    {
        scope = 1;
        scopeArsenal = 1;
    };
    class VX19_1stMEU_broken : VX19_1stMEU
    {
        scope = 1;
        scopeArsenal = 1;
    };
//Pegasus Command
    class Siffy_Helmet : Peg_Base
    {
		
		author = "1st MEU Mark";
		displayName = "[11th] 0-6 MAG CO (Siffy)";
        optreVarietys[] = {"_dp","","_broken"};
		optreHUDStyle = "ODST_1";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_6.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_6.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class peg_Five : Peg_Base
    {
        displayName = "[11th] 0-5 Squadron XO (Butch)";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_5.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_5.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class peg_flight : Peg_Base
    {
        displayName = "[11th] Pegasus Flight Commander";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    
//Pegasus Command DP
    class Siffy_Helmet_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP1";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_6.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_6.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Five_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_5.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_5.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class peg_flight_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP2";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    
//Pegasus Command Broke-Ass Shit
    class Siffy_Helmet_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Custom_Siffy.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_Five_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Pegasus_5.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class peg_flight_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_FC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    }
    
//1st Flight
    class peg_1stFC : Peg_Base
    {
        displayName = "[11th] 1-6 Commmander (Torres)";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_1stFC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_1stFC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Helios : Peg_Base
    {
        displayName = "[11th] 1-1 VX-16 Helios";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Helios_section : Peg_Base
    {
        displayName = "[11th] 1-1 VX-16 Helios SL";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_Axios : Peg_Base
    {
        displayName = "[11th] 1-2 VX-16 Axios";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Axios_section : Peg_Base
    {
        displayName = "[11th] 1-2 VX-16 Axios SL";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_ilithios : Peg_Base
    {
        displayName = "[11th] 1-3 VX-16 Ilithios";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_ilithios_section : Peg_Base
    {
        displayName = "[11th] 1-3 VX-16 Ilithios SL";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class peg_chaotic : Peg_Base
    {
        displayName = "[11th] 1-3 VX-16 Ilithios (Chaotic)";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Chaotic.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Chaotic.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    
//1st Flight DP
    class Peg_1stFC_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_1stFC.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_1stFC.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Helios_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP8";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Helios_section_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP4";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
     class Peg_Axios_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP7";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_Axios_section_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 11;
        displayName = "[11th] Pegasus Helmet DP3";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_ilithios_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP10";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    class Peg_ilithios_section_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP6";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
            hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    class Peg_chaotic_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Chaotic.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Chaotic.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    
//1st Flight Broke-Ass Shit
    class Peg_Helios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_Helios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Helios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_Axios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_Axios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Axios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_ilithios_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    class Peg_ilithios_section_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Ilithios.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    class Peg_chaotic_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_Chaotic.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
    };
    
//2nd Flight
    class peg_2ndFC : Peg_Base
    {
        displayName = "[11th] 2-6 Flight Commander";
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_2ndFC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_2ndFC.paa","optre_unsc_units\army\data\facemask_gray_skull_co.paa"};
		};
    };
    
//2nd Flight DP
    class Peg_2ndFC_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP13";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_2ndFC.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_2ndFC.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    
//2nd Flight Broke-Ass Shit
    class Peg_2ndFC_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\data\pegasus\helm_black_CO_2ndFC.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    
//3rd Flight
    class Peg_Iron : Peg_Base
    {
        displayName = "[11th] 3-6 VX-16 (Iron)";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Iron.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Iron.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    
//3rd Flight DP
    class Peg_Iron_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Helmet DP1";
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Iron.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
        class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Iron.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
		};
    };
    
//3rd Flight Broke-Ass Shit
    class Peg_Iron_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Iron.paa","optre_unsc_units\army\data\facemask_gray_co.paa"};
    };
    
//Deck Officers
    class Peg_Deck1 : Peg_Base
    {
        displayName = "[11th] 1-0 VX-16 Prometheus";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		};
    };
    class Peg_Deck2 : Peg_Base
    {
        displayName = "[11th] 2-0 VX-16 Prometheus";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_up"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		};
    };
    
//Deck Officer DP
    class Peg_Deck1_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Deck Officer Helmet DP";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		};
    };
    class Peg_Deck2_dp : Peg_Base_dp
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Deck Officer Helmet DP";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2","attach_visor_down"};
			hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
		};
    };
//Deck Officers Broke-Ass Shit
    class Peg_Deck1_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Deck Officer Helmet DP";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
    };
    class Peg_Deck2_broken : OPTRE_UNSC_VX16_Helmet_base_broken
    {
        scopeArsenal = 1;
        scope = 1;
        displayName = "[11th] Pegasus Deck Officer Helmet DP";
        optreVarietys[] = {"_dp","","_broken"};
        hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pegasus\helm_black_CO_Prometheus.paa","attach_face_mask"};
    };

//ParaRescue
    class MEU_CH252A_Pararescue_Dino: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[11th] CH252A Helmet (Dino)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_Dino","V_FZ_Armor\Data\Helmets\V_CH252A_GLD_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};	
    class MEU_CH252A_Pararescue_Blue: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[11th] CH252A Helmet (Pararescue Blue)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Silver: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[11th] CH252A Helmet (Pararescue Silver)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_SLV_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Gold: VES_CH252A
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[11th] CH252A Helmet (Pararescue Gold)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_GLD_V_CO.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
    
//ParaRescue
    class MEU_CH252A_Pararescue_Dino_dp : VES_CH252A
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[11th] CH252A Helmet (Dino)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_Dino","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};	
    class MEU_CH252A_Pararescue_Blue_dp : VES_CH252A
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[11th] CH252A Helmet (Pararescue Blue)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Silver_dp : VES_CH252A
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[11th] CH252A Helmet (Pararescue Silver)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};
	class MEU_CH252A_Pararescue_Gold_dp : VES_CH252A
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		author = "Rave";
		displayName = "[11th] CH252A Helmet (Pararescue Gold)";
		model = "\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA.paa"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
	};