class CfgWeapons
{
//
    
	
// holy import
    class LM_OPCAN_CGC;
    class ItemCore;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
    class ItemInfo;
	class H_HelmetB;
	class VestItem;
    class LM_OPCAN_Beret_CGC;
    class LM_OPCAN_Vest_ODST_Red;
    class G_B_Diving;
	class ItemcTabHCam;
	class A3_TVG_S_F6;
	class LM_OPCAN_CH252D_H3;
    class LM_OPCAN_Vest_ODST_REACH;
    class v_rebreatherB;
	class MRH_BluForTransponder;
    class VES_BDU_Urban_Slim;
    class LM_OPCAN_Vest_ODST_Green;
    class LM_OPCAN_CH252D_H3_dp;
    class LM_OPCAN_CH252D_H3_broken;
    class LM_OPCAN_CH252D_H3_Yellow_dp;
    class LM_OPCAN_CH252D_H3_Yellow_broken;
    class LM_OPCAN_CH252D_H3_Blue_dp;
    class LM_OPCAN_CH252D_H3_Blue_broken;
    class LM_OPCAN_CH252D_H3_Green_dp;
    class LM_OPCAN_CH252D_H3_Green_broken;
    class LM_OPCAN_CH252D_H3_Red_dp;
    class LM_OPCAN_CH252D_H3_Red_broken;
    class VES_BDU_MulticamBlack;
    class HitpointsProtectionInfo;
    class MEU_Soldier_Base;
    class VES_CH252_DES_Heavy;
    class VES_CH252_CEA_Heavy;
    class VES_CH252_MAR_Heavy;
    class VES_CH252_SNO_Heavy;
    class VES_CH252_URB_Heavy;
    class VES_CH252_WDL_Heavy;
    class VES_CH252_DES_Light;
    class VES_CH252_CEA_Light;
    class VES_CH252_MAR_Light;
    class VES_CH252_SNO_Light;
    class VES_CH252_URB_Light;
    class VES_CH252_WDL_Light;
    class VES_CH252_DES_Medical;
    class VES_CH252_CEA_Medical;
    class VES_CH252_MAR_Medical;
    class VES_CH252_SNO_Medical;
    class VES_CH252_URB_Medical;
    class VES_CH252_WDL_Medical;
    class VES_CH252_DES_Radio;
    class VES_CH252_CEA_Radio;
    class VES_CH252_MAR_Radio;
    class VES_CH252_SNO_Radio;
    class VES_CH252_URB_Radio;
    class VES_CH252_WDL_Radio;
    class VES_M52A_DES_Security_B;
    class VES_M52A_CEA_Security_B;
    class VES_M52A_MAR_Security_B;
    class VES_M52A_SNO_Security_B;
    class VES_M52A_URB_Security_B;
    class VES_M52A_WDL_Security_B;
    class VES_M52A_DES_Corpsman_B;
    class VES_M52A_CEA_Corpsman_B;
    class VES_M52A_MAR_Corpsman_B;
    class VES_M52A_SNO_Corpsman_B;
    class VES_M52A_URB_Corpsman_B;
    class VES_M52A_WDL_Corpsman_B;
    class VES_M52A_DES_Radio_B;
    class VES_M52A_CEA_Radio_B;
    class VES_M52A_MAR_Radio_B;
    class VES_M52A_SNO_Radio_B;
    class VES_M52A_WDL_Radio_B;
	class VES_M52A_URB_Radio_B;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
    class ace_medical_treatment;
    class ACE_Morphine;

    class MEU_compat_Ibuprophen: ACE_Morphine
	{
		scope = 2;
		author = "1st MEU Mark";
		displayName = "Ibuprophen";
		picture = "\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model = "\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort = "Drink some water and Rest";
		descriptionUse = "use instead of morphine";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
	
// centurion gear start   
// centurion headgear
    
    class first_plt_Beret: LM_OPCAN_Beret_CGC
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] 1st Plt Beret";
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 1.0;
		ace_hearing_lowerVolume = 0.25;
        picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "a3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\Centurion1BeretV4.paa"};
    };
	
// centurion heavy helmets

    class MEU_Mar_Helm_MAR : VES_CH252_MAR_Heavy
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Heavy Helmet";
        hiddenSelections[] = {"camo","camo2","camo3","H_Neck","H_UNSCVacLower","H_Collar","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		hiddenSelectionsMaterials[] = {"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",""};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "OPTRE_UNSC_Units\Army\helmet";
			picture = "\OPTRE_UNSC_Units\Army\icons\army_helmet_DES";
			hiddenSelections[] = {"camo","camo2","camo3","H_Neck","H_UNSCVacLower","H_Collar","H_UNSCVacVisor","H_VacCollar","H_Ghillie"};
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
        };
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_Helm_DES : VES_CH252_DES_Heavy
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Heavy Helmet (Desert)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_Helm_CEA : VES_CH252_CEA_Heavy
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Heavy Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_Helm_SNO : VES_CH252_SNO_Heavy
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Heavy Helmet (Snow)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
   
	class MEU_Mar_Helm_URB : VES_CH252_URB_Heavy
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Heavy Marine Helmet (Urban)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_Helm_WDL : VES_CH252_WDL_Heavy
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Heavy Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_H_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
// centurion light helmets

    class MEU_Mar_Helm_base_L : VES_CH252_MAR_Light
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Light Helmet";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_Helm_DES_L : VES_CH252_DES_Light
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Light Helmet(Desert)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_Helm_CEA_L : VES_CH252_CEA_Light
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Light Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_Helm_SNO_L : VES_CH252_SNO_Light
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Light Helmet (Snow)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
	class MEU_Mar_Helm_URB_L : VES_CH252_URB_Light
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Light Marine Helmet (Urban)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_Helm_WDL_L : VES_CH252_WDL_Light
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Light Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
// Centurion MOS Helmets

    class MEU_Mar_MOS_Helm_BASE : VES_CH252_MAR_Medical
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Medical Helmet";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_MOS_Helm_DES : VES_CH252_DES_Medical
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Medical Helmet (Desert)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_MOS_Helm_CEA : VES_CH252_CEA_Medical
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Medical Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_MOS_Helm_SNO : VES_CH252_SNO_Medical
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Medical Helmet (Snow)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
	class MEU_Mar_MOS_Helm_URB : VES_CH252_URB_Medical
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Marine Medical Helmet (Urban)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_Mar_MOS_Helm_WDL : VES_CH252_WDL_Medical
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion Medical Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_M_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
// end Medical Helmets start RTO Helmets

    class MEU_RTO_Helm_base : VES_CH252_MAR_Radio
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion RTO Helmet";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_MAR_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_RTO_Helm_DES : VES_CH252_DES_Radio
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion RTO Helmet (Desert)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_DES_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_RTO_Helm_CEA : VES_CH252_CEA_Radio
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion RTO Helmet (Evolved)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_CEA_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_RTO_Helm_SNO : VES_CH252_SNO_Radio
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion RTO Helmet (Snow)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_SNO_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
    
	class MEU_RTO_Helm_URB : VES_CH252_URB_Radio
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Marine RTO Helmet (Urban)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_URB_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
    class MEU_RTO_Helm_WDL : VES_CH252_WDL_Radio
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "[1st MEU] Centurion RTO Helmet (Woodland)";
        hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Helmets\V_CH252_WDL_R_CO","optre_unsc_units\army\data\helmet_visor_ca"};
		};
        weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
    };
	
// end centurion headgear start vest

//Centurion Armor

    // Rifleman
	
    class MEU_CENT_Rifleman: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Rifleman_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Rifleman_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Rifleman_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_Rifleman_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Rifleman_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	 class MEU_CENT_NCO_Rifleman: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman NCO";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Rifleman_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman NCO (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Rifleman_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman NCO (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Rifleman_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman NCO (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_NCO_Rifleman_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman NCO (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Rifleman_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Rifleman NCO (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    // Grenadier
	
    class MEU_CENT_Grenadier: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Grenadier_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Grenadier_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Grenadier_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Grenadier_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Grenadier_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_NCO_Grenadier: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier NCO";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Grenadier_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier NCO (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Grenadier_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier NCO (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Grenadier_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier NCO (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Grenadier_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier NCO (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Grenadier_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Grenadier NCO (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	// Autorifleman
	
    class MEU_CENT_Autorifleman: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Autorifleman_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Autorifleman_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Autorifleman_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_Autorifleman_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Autorifleman_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	 class MEU_CENT_NCO_Autorifleman: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman NCO";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Autorifleman_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman NCO (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Autorifleman_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman NCO (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Autorifleman_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman NCO (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_NCO_Autorifleman_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman NCO (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Autorifleman_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Autorifleman NCO (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	//Marksman
	
	class MEU_CENT_Marksman: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Marksman_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Marksman_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Marksman_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_Marksman_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Marksman_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	 class MEU_CENT_NCO_Marksman: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman NCO";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Marksman_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman NCO (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Marksman_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman NCO (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Marksman_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman NCO (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_NCO_Marksman_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman NCO (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Marksman_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Marksman NCO (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    // Breacher
	
    class MEU_CENT_Breacher: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Breacher_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Breacher_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Breacher_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_Breacher_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Breacher_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	 class MEU_CENT_NCO_Breacher: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher NCO";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Breacher_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher NCO (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Breacher_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher NCO (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Breacher_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher NCO (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_NCO_Breacher_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher NCO (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Breacher_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Breacher NCO (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_GL",
				"AP_MGThigh",
				"AP_BR",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	//Sniper
	
	class MEU_CENT_Sniper: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Sniper_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Sniper_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Sniper_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_Sniper_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Sniper_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	 class MEU_CENT_NCO_Sniper: VES_M52A_MAR_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper NCO";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Sniper_DES: VES_M52A_DES_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper NCO (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Sniper_CEA: VES_M52A_CEA_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper NCO (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Sniper_SNO: VES_M52A_SNO_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper NCO (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_NCO_Sniper_URB: VES_M52A_URB_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper NCO (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Sniper_WDL: VES_M52A_WDL_Security_B
	{
		displayName = "[1st MEU] Centurion Sniper NCO (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_SG",
				"AP_SMG",
				"AP_BR",
				"AP_Rounds",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	// Corpsman
	
    class MEU_CENT_Corpsman: VES_M52A_MAR_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
		
    class MEU_CENT_Corpsman_DES: VES_M52A_DES_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Corpsman_CEA: VES_M52A_CEA_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Corpsman_SNO: VES_M52A_SNO_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_Corpsman_URB: VES_M52A_URB_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_Corpsman_WDL: VES_M52A_WDL_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	 class MEU_CENT_NCO_Corpsman: VES_M52A_MAR_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman NCO";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Corpsman_DES: VES_M52A_DES_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman NCO (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Corpsman_CEA: VES_M52A_CEA_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman NCO (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Corpsman_SNO: VES_M52A_SNO_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman NCO (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_NCO_Corpsman_URB: VES_M52A_URB_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman NCO (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_Corpsman_WDL: VES_M52A_WDL_Corpsman_B
	{
		displayName = "[1st MEU] Centurion Corpsman NCO (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Smoke",
				"AP_GL",
				"AP_BR",
				"AP_AR",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	// RTO
	
    class MEU_CENT_RTO: VES_M52A_MAR_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_RTO_DES: VES_M52A_DES_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_RTO_CEA: VES_M52A_CEA_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_RTO_SNO: VES_M52A_SNO_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_RTO_URB: VES_M52A_URB_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_RTO_WDL: VES_M52A_WDL_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
	class MEU_CENT_NCO_RTO: VES_M52A_MAR_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO NCO";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_RTO_DES: VES_M52A_DES_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO NCO (Desert)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_RTO_CEA: VES_M52A_CEA_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO NCO (Evolved)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_RTO_SNO: VES_M52A_SNO_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO NCO (Snow)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_RTO_URB: VES_M52A_URB_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO NCO (Urban)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
    class MEU_CENT_NCO_RTO_WDL: VES_M52A_WDL_Radio_B
	{
		displayName = "[1st MEU] Centurion RTO NCO (Woodland)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
				"A_KneesLeft",
				"A_KneesRight",
				"A_ODST",
				"A_TacPad",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AP_Canteen",
				"AP_MGThigh",
				"AP_BR",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			vestType = "Rebreather";
		};
	};
	
// end centurion gear start praetorian gear
// praetorian vests

    class Prae37: LM_OPCAN_Vest_ODST_Red
	{
		author="1st MEU Mark";
		displayName="[1st MEU] Praetorian 3-7 (Mark)";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_GL",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"APO_Knife"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","first_meu_aux\Data\red37.paa"};
        
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
        class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_GL",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"APO_Knife"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
    };
	
    class Prae36: LM_OPCAN_Vest_ODST_Red
	{
		author="1st MEU Oneill";
		displayName="[1st MEU] Praetorian 3-6 (Oneill)";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_GL",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_AR",
			"APO_Sniper",
			"APO_Knife"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
        
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
        class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_GL",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_AR",
				"APO_Sniper",
				"APO_Knife"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
    };
	
    class Prae3M : Prae37
	{
		author = "1st MEU Mark";
		displayName = "[1st MEU] Praetorian 3-M (FloodedMac)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa","optre_unsc_units\army\data\armor_odst_co.paa","LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa","optre_unsc_units\army\data\ghillie_desert_co.paa","first_meu_aux\Data\Green3M.paa"};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
        class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
        };
    };
	
    class Prae3R: LM_OPCAN_Vest_ODST_Red
	{
		author = "1st MEU Oneill";
		displayName = "[1st MEU] Praetorian 3-R (Dimitri)";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
        };
    };
	
    class PraetorianRifleman: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Rifleman";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};
	
	class PraetorianRiflemanBlue:PraetorianRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Rifleman (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianRiflemanYellow:PraetorianRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Rifleman (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianRiflemanRed:PraetorianRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Rifleman (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};

	class PraetorianMarksman: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Marksman";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};	
	
	class PraetorianMarksmanBlue:PraetorianMarksman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Marksman (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianMarksmanYellow:PraetorianMarksman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Marksman (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianMarksmanRed:PraetorianMarksman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Marksman (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Smoke",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_AR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_AR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianSniper: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Sniper";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_TacPad",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_BR",
			"APO_SMG",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_TacPad",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_SMG",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};	
	
	class PraetorianSniperBlue:PraetorianSniper
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Sniper (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_BR",
			"APO_SMG",
			"APO_AR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_BR",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianSniperYellow:PraetorianSniper
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Sniper (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Frag",
			"AP_Smoke",
			"APO_AR",
			"APO_SMG",
			"APO_BR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_SMG",
				"APO_BR",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianSniperRed:PraetorianSniper
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Sniper (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Smoke",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Frag",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_AR",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Smoke",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Frag",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_AR",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianAutoRifleman: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Auto Rifleman";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};
	
	class PraetorianAutoRiflemanBlue:PraetorianAutoRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian AutoRifleman (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianAutoRiflemanYellow:PraetorianAutoRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian AutoRifleman (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianAutoRiflemanRed:PraetorianAutoRifleman
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian AutoRifleman (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianGrenadier: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Grenadier";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_Knife",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};
	
	class PraetorianGrenadierBlue:PraetorianGrenadier
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Grenadier (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianGrenadierYellow:PraetorianGrenadier
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Grenadier (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianGrenadierRed:PraetorianGrenadier
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Grenadier (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"AP_Thigh",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianBreacher: LM_OPCAN_Vest_ODST_REACH
    {
		author = "1stMEU Oneill";
		scope = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Breacher";
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_HR.paa"
		};
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};
	
	class PraetorianBreacherBlue:PraetorianBreacher
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Breacher (Blue)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Blue.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianBreacherYellow:PraetorianBreacher
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Breacher (Yellow)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Yellow.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianBreacherRed:PraetorianBreacher
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Breacher (Red)";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Canteen",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Pistol",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
            containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
		};
	};
	
	class PraetorianPlatoonCorpsman: LM_OPCAN_Vest_ODST_Green
	{
		author = "1st MEU Oneill";
		displayName = "[1st MEU] Praetorian Platoon Corpsman";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Green.paa"
		};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
    };
	
	class PraetorianCorpsman: LM_OPCAN_Vest_ODST_Green
	{
		author = "1st MEU Oneill";
		displayName = "[1st MEU] Praetorian Corpsman";
		scope = 2;
		scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 	
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_Ghillie",
			"A_TacPad",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTSniperLeft",
			"AS_ODSTSniperRight",
			"AS_SmallLeft",
			"AS_SmallRight",
			"AP_AR",
			"AP_BR",
			"AP_Frag",
			"AP_GL",
			"AP_Knife",
			"AP_MGThigh",
			"AP_AR",
			"AP_Pack",
			"AP_Smoke",
			"AP_Rounds",
			"AP_SG",
			"AP_SMG",
			"AP_Sniper",
			"APO_BR",
			"APO_SMG",
			"APO_Sniper",
			"APO_Knife",
			"CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Green.paa"
		};
        subItems[] =
		{
			"MRH_BluForTransponder"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 	
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_Ghillie",
				"A_TacPad",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Frag",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Smoke",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"APO_BR",
				"APO_SMG",
				"APO_Sniper",
				"APO_Knife",
				"CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
    };
    class Hokage: LM_OPCAN_Vest_ODST_Red
	{
		author="1st MEU Oneill";
		displayName="[1st MEU] Hokage";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		model = "\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[] = 
		{
			"camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_GL",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		hiddenSelectionsMaterials[] = 
		{
			"LM_OPCAN3.0\BLU\UNSC\V\Vest_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\armor_OP.rvmat",
			"LM_OPCAN3.0\BLU\UNSC\V\legs_OP.rvmat",
			"",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_OP.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
			"optre_unsc_units\army\data\armor_odst_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_H3_Legs.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"LM_OPCAN3.0\BLU\UNSC\V\ODST_armor_color_Red.paa"
		};
        
		subItems[] =
		{
			"MRH_BluForTransponder"
		};
        class ItemInfo: VestItem
		{
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] = 
			{
			"camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTLeft",
            "AS_ODSTRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            "AP_Knife",
            "AP_MGThigh",
            "AP_GL",
            "AP_AR",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
			};
			containerClass = "Supply200";
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			vestType = "Rebreather";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 60;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 50;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 50;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
    };
    
    class Praetor_Helmet_Black_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Black_31_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Black_32_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Black_33_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Black_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Black_31_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Black_32_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Black_33_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Ride_dp : LM_OPCAN_CH252D_H3_dp
    {
        
    };
    class Praetor_Helmet_Ride_broken : LM_OPCAN_CH252D_H3_broken
    {
        
    };
    class Praetor_Helmet_Yellow_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        
    };
    class Praetor_Helmet_Yellow_31_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        
    };
    class Praetor_Helmet_Yellow_32_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        
    };
    class Praetor_Helmet_Yellow_33_dp : LM_OPCAN_CH252D_H3_Yellow_dp
    {
        
    };
    class Praetor_Helmet_Yellow_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        
    };
    class Praetor_Helmet_Yellow_31_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        
    };
    class Praetor_Helmet_Yellow_32_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        
    };
    class Praetor_Helmet_Yellow_33_broken : LM_OPCAN_CH252D_H3_Yellow_broken
    {
        
    };
    class Praetor_Helmet_Blue_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        
    };
    class Praetor_Helmet_Blue_31_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        
    };
    class Praetor_Helmet_Blue_32_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        
    };
    class Praetor_Helmet_Blue_33_dp : LM_OPCAN_CH252D_H3_Blue_dp
    {
        
    };
    class Praetor_Helmet_Blue_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        
    };
    class Praetor_Helmet_Blue_31_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        
    };
    class Praetor_Helmet_Blue_32_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        
    };
    class Praetor_Helmet_Blue_33_broken : LM_OPCAN_CH252D_H3_Blue_broken
    {
        
    };
    class Praetor_Helmet_Green_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        
    };
    class Praetor_Helmet_Green_31_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        
    };
    class Praetor_Helmet_Green_32_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        
    };
    class Praetor_Helmet_Green_33_dp : LM_OPCAN_CH252D_H3_Green_dp
    {
        
    };
    class Praetor_Helmet_Green_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        
    };
    class Praetor_Helmet_Green_31_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        
    };class Praetor_Helmet_Green_32_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        
    };class Praetor_Helmet_Green_33_broken : LM_OPCAN_CH252D_H3_Green_broken
    {
        
    };
    class Praetor_Helmet_Red_dp : LM_OPCAN_CH252D_H3_Red_dp
    {
        
    };
    class Praetor_Helmet_Red_broken : LM_OPCAN_CH252D_H3_Red_broken
    {
        
    };
    class Praetor_Helmet_Ride: LM_OPCAN_CH252D_H3
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Kestrel";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Ride Along Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_Ride.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black: LM_OPCAN_CH252D_H3
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Kestrel";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
     class Praetor_Helmet_Black_31: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black_32: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Black_33: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow:Praetor_Helmet_Black
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Yellow)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Yellow.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Yellow_31: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Yellow) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow_32: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Yellow) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Yellow_33: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Yellow) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Yellow_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Blue:Praetor_Helmet_Black
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Blue)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Blue.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Blue_31: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Blue) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Blue_32: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Blue) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Blue_33: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Blue) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Blue_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Green:Praetor_Helmet_Black
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Green)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Green.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Helmet_Green_31: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Green) (3-1)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Green_31.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Green_32: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Green) (3-2)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Green_32.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
    class Praetor_Helmet_Green_33: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Green) (3-3)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"first_meu_aux\Data\ODST_H3_color_Green_33.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	class Praetor_Helmet_Red:Praetor_Helmet_Black
	{
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "[1stMEU] Praetorian Helmet (Red)";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3_color_Red.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
	};
    class Praetor_Sound_Protec: Praetor_Helmet_Black
	{
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		author = "1stMEU Mark";
		weaponPoolAvailable = 1;
		subItems[]=
		{
			"ItemcTabHCam"
		};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.50;
		displayName = "[1stMEU] Praetorian Soundproof Helmet";
		optreVarietys[] = {"_dp","","_broken"};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsMaterials[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_HALO3.rvmat"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\H\ODST_H3.paa","LM_OPCAN3.0\BLU\UNSC\H\VISR_ODST_BLU.paa"};
    };
	
	//Praetorian Helmet End
	//BDU Start
	
	class BDU_V_Urban_Slim;
	class BDU_V_Centurion_Slim;
	class 1stMEU_BDU;
	
	class Praetorian_BDU : 1stMEU_BDU
	{
		author = "1stMEU Oneill";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		class ItemInfo: UniformItem
		{
			uniformClass = "BDU_V_Urban_Slim";
			uniformType = "Neopren";
			containerClass = "Supply100";
			uniformModel = "";
			mass = 40;
        };
    };
	
    class Centurion_BDU : 1stMEU_BDU
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim";
			uniformType = "Neopren";
			containerClass = "Supply100";
			uniformModel = "";
			mass = 40;
        };
    };
	
	//BDU End
	//Weapons Start
	
	class OPTRE_100Rnd_127x99_M247HMG;
	class WeaponSlotsInfo;
	class StandardSound;
	class CowsSlot;
	class MuzzleSlot;
	class Single;
	class FullAuto;
	class OPTRE_M247;
	
	class M247HMG: OPTRE_M247
	{
		dlc = "OPTRE";
		author = "[1stMEU] Oneill";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\MG\data\anim\OPTRE_M247_handanim.rtm","Spartan_ManSkeleton","\OPTRE_Weapons\MG\data\anim\M247_Spartan.rtm"};
		model = "\OPTRE_Weapons\MG\M247.p3d";
		displayName = "M247 Heavy Machine Gun";
		descriptionShort = "UNSC Heavy Machine Gun (man portable)";
		magazines[] = {"OPTRE_100Rnd_127x99_M247HMG", "OPTRE_100Rnd_127x99_HE_M247HMG"};
		recoil = "recoil_mk200";
		baseWeapon = "M247HMG";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 150;
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {};
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
			reloadTime = 0.095;
			dispersion = 0.000065;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
			reloadTime = 0.095;
			dispersion = 0.000065;
		};
	};
    //weapon end
};