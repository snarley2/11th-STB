class 11_Pilot_Base : VES_CH252A
{
    scope = 1;
    scopeCurator = 1;
    scopeArsenal = 1;
    weaponPoolAvailable = 1;
    author = "Mark";
    displayName = "[11th] CH252C Aviation Helmet";
    model = "\OPTRE_UNSC_Units\Army\aa_helmet";
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
    hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
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
class 11_Pilot_WOC : 11_Pilot_Base
{
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    weaponPoolAvailable = 1;
    author = "Mark";
    displayName = "[11th] CH252C Aviation Helmet W0C";
    model = "\OPTRE_UNSC_Units\Army\aa_helmet";
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
    hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
};
class 11_Pilot_WO1 : 11_Pilot_Base
{
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    weaponPoolAvailable = 1;
    author = "Mark";
    displayName = "[11th] CH252C Aviation Helmet W01";
    model = "\OPTRE_UNSC_Units\Army\aa_helmet";
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
    hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
};
class 11_Pilot_WO2 : 11_Pilot_Base
{
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    weaponPoolAvailable = 1;
    author = "Mark";
    displayName = "[11th] CH252C Aviation Helmet W02";
    model = "\OPTRE_UNSC_Units\Army\aa_helmet";
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
    hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
};
class 11_Pilot_WO3 : 11_Pilot_Base
{
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    weaponPoolAvailable = 1;
    author = "Mark";
    displayName = "[11th] CH252C Aviation Helmet W03";
    model = "\OPTRE_UNSC_Units\Army\aa_helmet";
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
    hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
};