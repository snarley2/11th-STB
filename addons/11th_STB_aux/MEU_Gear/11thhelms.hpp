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
    	uniformModel = "OPTRE_UNSC_Units\Army\aa_helmet";
    	hiddenSelections[] = {"camo","camo2"};
    	hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat"}; 
    	hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"}; 
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
class 11_Icarus_Base : 11_Pilot_Base
{
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    weaponPoolAvailable = 1;
    author = "Tom(s) & Jerry(s)";
    displayName = "[11th] CH252C Icarus Base";
    model = "\OPTRE_UNSC_Units\Army\aa_helmet";
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Pararescue\V_CH252A_DEF_CO_ParaRescue.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
    hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
};
class 11_Icarus_Test1 : 11_Pilot_Base
{
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    weaponPoolAvailable = 1;
    author = "Tom(s) & Jerry(s)";
    displayName = "[11th] CH252C Icarus Test 1";
    model = "\OPTRE_UNSC_Units\Army\aa_helmet";
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Icarus_H\Icarus_Helm_Trial.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
    hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
};
class 11_Icarus_Test2 : 11_Pilot_Base
{
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    weaponPoolAvailable = 1;
    author = "Tom(s) & Jerry(s)";
    displayName = "[11th] CH252C Icarus Test 2";
    model = "\OPTRE_UNSC_Units\Army\aa_helmet";
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Icarus_H\Icarus_Helm.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
    hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
};
class 11_Icarus_Test3 : 11_Pilot_Base
{
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    weaponPoolAvailable = 1;
    author = "Tom(s) & Jerry(s)";
    displayName = "[11th] CH252C Icarus Test 3";
    model = "\OPTRE_UNSC_Units\Army\aa_helmet";
    hiddenSelections[] = {"camo","camo2"};
    hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Icarus_H\Icarus_Helm.paa","V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO.paa"};
    hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
};
class 11_Icarus_Base_dp : 11_Pilot_Base
    {
        scope = 1;
        scopeArsenal = 1;
        model = "\OPTRE_UNSC_Units\Army\aa_helmet_dp.p3d"
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"OPTRE_UNSC_UNITS\Army\Data\aa_helmet.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Icarus_H\Icarus_Helm"};
    };
class 11_Icarus_Test1_dp : 11_Pilot_Base
    {
        scope = 1;
        scopeArsenal = 1;
        model = "\OPTRE_UNSC_Units\Army\aa_helmet_dp.p3d"
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"OPTRE_UNSC_UNITS\Army\Data\aa_helmet.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Icarus_H\Icarus_Helm_Trial"};
    };
class 11_Icarus_Test2_dp : 11_Pilot_Base
    {
        scope = 1;
        scopeArsenal = 1;
        model = "\OPTRE_UNSC_Units\Army\aa_helmet_dp.p3d"
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"OPTRE_UNSC_UNITS\Army\Data\aa_helmet.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Icarus_H\Icarus_Helm"};
    };
 class 11_Icarus_Test3_dp : 11_Pilot_Base
    {
        scope = 1;
        scopeArsenal = 1;
        model = "\OPTRE_UNSC_Units\Army\aa_helmet_dp.p3d"
        hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"OPTRE_UNSC_UNITS\Army\Data\aa_helmet.rvmat"};
        hiddenSelectionsTextures[] = {"11th_STB_aux\Data\Icarus_H\Icarus_Helm"};
    };