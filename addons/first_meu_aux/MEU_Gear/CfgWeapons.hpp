class CfgWeapons
{
    //OPTRE Armor
	class OPTRE_UNSC_CH252D_Helmet;
	class OPTRE_UNSC_CH252_Helmet2_MAR;
	class OPTRE_UNSC_M52D_Armor;
	class OPTRE_UNSC_VX16_Helmet_base;
    class OPTRE_UNSC_VX16_Helmet_base_broken;
    class OPTRE_UNSC_VX16_Helmet_base_dp;
	class OPTRE_UNSC_M52A_Armor_Base;
    class OPTRE_FC_VX19_Helmet;
	class OPTRE_HUD_RscPicture;

	//OPCAN Armor
	class LM_OPCAN_CH252D_H3_dp;
	class LM_OPCAN_CH252D_H3_Green_dp;
	class LM_OPCAN_CH252D_H3_Red_dp;
	class LM_OPCAN_CH252D_H3_Yellow_dp;
	class LM_OPCAN_CH252D_H3_Blue_dp;
	class LM_OPCAN_CH252D_H3_broken;
	class LM_OPCAN_CH252D_H3_Green_broken;
	class LM_OPCAN_CH252D_H3_Red_broken;
	class LM_OPCAN_CH252D_H3_Yellow_broken;
	class LM_OPCAN_CH252D_H3_Blue_broken;
	class LM_OPCAN_CGC;
	class LM_OPCAN_Beret_CGC;
    class LM_OPCAN_Vest_ODST_Red;
	
	//Zulu Armor
	class VES_M52A_URB_Security_A;
	class VES_CH252A;
	class VES_CH252D_dp;
	
    //Weapons
	class OPTRE_Rifle_Base;
	class OPTRE_LongRifle_Base;
	class OPTRE_Handgun_Base;
	class OPTRE_SubMachineGun_Base;
    class OPTRE_M7S;
	class OPTRE_M73;
	class OPTRE_BR55;
	class OPTRE_BR55HB_Scope;
	class OPTRE_UnguidedLauncher_Base;
	class autocannon_40mm_CTWS;
	class gatling_30mm;
    class VES_M7_I;
    class UGL_F;
    class Grenadelauncher;
    class ThrowMuzzle;
	class HMG_127;
	class LMG_03_base_F;
	class HMG_127_APC;
	class GMG_40mm;
	class LMG_coax;
	class M134_minigun;
	class autocannon_Base_F;
	class MGun;
	class GMG_F;
	class autocannon_35mm;
	class cannon_120mm;
	class mortar_155mm_AMOS;
	class weapon_ShipCannon_120mm;
	class arifle_MSBS65_black_F;
	class arifle_MSBS65_GL_black_F;
	class arifle_MSBS65_Mark_black_F;
	class arifle_MSBS65_UBS_black_F;
    class arifle_MX_Black_F;
    class arifle_MX_GL_Black_F;
    class arifle_CTAR_blk_F;
    class arifle_CTAR_GL_blk_F;
    class arifle_CTARS_blk_F;
    class arifle_Mk20_F;
    class arifle_Mk20C_F;
    class arifle_Mk20_GL_F;
    class OPTRE_M6_Laser;
    class OPTRE_M68_GAUSS;
    class OPTRE_M45;
    class OPTRE_MA32;
    class OPTRE_MA5C;
    class OPTRE_MA5CGL;
    class OPTRE_FC_Railgun;
		
	//Medical
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
    class ACE_Morphine;
	class ACE_plasmaIV;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;
    class ACE_tourniquet;
    class ACE_Epinephrine;
	
	//Generic Classes
    class ItemCore;
	class HeadgearItem;
	class Uniform_Base;
	class UniformItem;
    class ItemInfo;
	class VestItem;
	class BaseSoundModeType;
	class WeaponSlotsInfo;
	class StandardSound;
	class CowsSlot;
	class MuzzleSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class Single;
	class FullAuto;
	class player;
	class CannonCore;
	class Mode_SemiAuto;
	class Mode_Burst;
	class Mode_FullAuto;
	class InventoryOpticsItem_Base_F;
    class H_HelmetO_ViperSP_ghex_F;
    class U_O_V_Soldier_Viper_F;

	
	//Miscelaneous Classes
	class ItemcTabHCam;
	class v_rebreatherB;
    class G_B_Diving;
	class H_HelmetB;
	class MRH_BluForTransponder;
    class A3_TVG_S_F6;
    class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class U_B_CombatUniform_mcam;
    class G_Aviator;
    class H_Beret_Colonel;
    class LM_OPCAN_UP_Shemagh;
    class LM_OPCAN_URB_UP_Shemagh;
    class LM_OPCAN_DES_UP_Shemagh;
    class LM_OPCAN_BRW_Shemagh;
    class plp_ctf_SafetyBarrelBlue;
    class FullAutoSlow;
    class FullAutoFast; 
    
    #include "\first_meu_aux\MEU_Gear\CfgPraeCoHelm.hpp"
    #include "\first_meu_aux\MEU_Gear\CfgPraeCoArmor.hpp"
    #include "\first_meu_aux\MEU_Gear\CfgCentCoArmor.hpp"
    #include "\first_meu_aux\MEU_Gear\CfgCentCoHelm.hpp"
    #include "\first_meu_aux\MEU_Gear\CfgPegArmor.hpp"
    #include "\first_meu_aux\MEU_Gear\CfgPegHelm.hpp"
    #include "\first_meu_aux\MEU_Gear\CfgVulkHelm.hpp"
    #include "\first_meu_aux\MEU_Gear\CfgVulkArmor.hpp"
    
	
    /*// Start of Chemical Barrels | 0 = CS | 1 = AS | 2 = NA
    class ChemicalBarrel_NA: plp_ctf_SafetyBarrelBlue
	{
        author = "Romeo" 
		scope = 2;
		scopeCurator = 2;
        armor = 50;
        armorStructural = 4;
        ace_frag_enabled = 0;
        CBRN_chemicalType = 2;
        CBRN_heightOfBurst = 1;
        CBRN_sprayWidth = 15;
        CBRN_lifetime = 90;
        CBRN_isPlacedExplosive = 1;
		displayName = "Chemical Barrel (Nerve Agent)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\first_meu_aux\data\misc\NerveAgentBarrel_co.paa"};
        class DestructionEffects
        {
            class Light1
            {
                simulation = "light";
                type = "ObjectDestructionLight";
                position = "DestructionFire";
                intensity = 0.001;
                interval = 1;
                lifeTime = 0.5;
            };
            class FuelFire1
            {
                simulation = "particles";
                type = "BarelDestructionFire";
                position = "DestructionFire";
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.5;
            };
            class FuelDestr
            {
                simulation = "destroy";
                type = "FuelStationDestr";
                position = "";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
            };
        };
    };
    class ChemicalBarrel_AS: plp_ctf_SafetyBarrelBlue
	{
        author = "Romeo" 
		scope = 2;
		scopeCurator = 2;
        armor = 50;
        armorStructural = 4;
        ace_frag_enabled = 0;
        CBRN_chemicalType = 1;
        CBRN_heightOfBurst = 1;
        CBRN_sprayWidth = 15;
        CBRN_lifetime = 90;
        CBRN_isPlacedExplosive = 1;
		displayName = "Chemical Barrel (Asphyxiant)";
        destrType = "DestructBuilding";
        editorCategory = "MEU_Objects";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\first_meu_aux\data\misc\AsphyxiantBarrel_co.paa"};
        class EventHandlers
        {
            Killed = "(_this select 0) spawn {sleep (random 0.5); _pos = getPosATL _this; _this setVelocity [0,0,2]; sleep (random 0.3); _explo = ""OPTRE_Exp_Hydrogen_Small"" createVehicle _pos; };";
        };
        class DestructionEffects
        {
            class Light1
            {
                simulation = "light";
                type = "ObjectDestructionLight";
                position = "DestructionFire";
                intensity = 0.001;
                interval = 1;
                lifeTime = 0.5;
            };
            class FuelFire1
            {
                simulation = "particles";
                type = "BarelDestructionFire";
                position = "DestructionFire";
                intensity = 0.15;
                interval = 1;
                lifeTime = 0.5;
            };
            class FuelDestr
            {
                simulation = "destroy";
                type = "FuelStationDestr";
                position = "";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
            };
        };
    };*/
// Medical Items Start
    class MEU_compat_Ibuprofen: ACE_Morphine
	{
		scope = 2;
		author = "1st MEU Mark";
		displayName = "Ibuprofen Bottle";
		picture = "\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model = "\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort = "Drink some water and Rest";
		descriptionUse = "Use instead of morphine";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};
    class Atropine : MEU_compat_Ibuprofen
    {
        scope = 2;
        scopeArsenal = 2;
		author = "1st MEU Mark";
		displayName = "Antidote";
        descriptionShort = "Emergeny Use Only";
		descriptionUse = "Might save you from the cloud";
    };
    class MEU_PlasmaIV : ACE_plasmaIV
    {
        scope = 2;
        displayName = "[1st MEU] Plasma 2.5L";
        descriptionShort = "2.5L of Plasma";
		descriptionUse = "Give Plasma (2.5L)";
        class ItemInfo: ItemInfo
		{
			mass = 16;
        };
    };
	class MEU_Emergency_MedKit: OPTRE_Biofoam
	{
		scope = 2;
		author = "Rave";
		displayName = "[1st MEU] Emergency Medkit";
		picture = "\OPTRE_weapons\items\icons\medkit.paa";
		model = "\OPTRE_Weapons\items\MedKit.p3d";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 32;
		};
	};
    class MEU_Biofoam: OPTRE_Biofoam
    {
        scope = 2;
        displayName = "[C] Biofoam Canister";
		picture = "\OPTRE_weapons\items\icons\biofoam.paa";
		model = "\OPTRE_Weapons\items\Biofoam.p3d";
        class ItemInfo: ItemInfo
		{
			mass = 35;
        };
    };
    class MEU_Medigel: OPTRE_Medigel
    {
        scope = 2;
        displayName = "[C] Optican Medigel";
		picture = "\first_meu_aux\data\misc\icons\medigel_icon.paa";
		model = "\OPTRE_Weapons\items\Medigel.p3d";
        class ItemInfo: ItemInfo
		{
			mass = 35;
        };
    };
	class MEU_Biofoam_Light: OPTRE_Biofoam
    {
        scope = 2;
        displayName = "[1st MEU] Biofoam Canister";
		picture = "\OPTRE_weapons\items\icons\biofoam.paa";
		model = "\OPTRE_Weapons\items\Biofoam.p3d";
        class ItemInfo: ItemInfo
		{
			mass = 2;
        };
    };
    class MEU_Medigel_Light: OPTRE_Medigel
    {
        scope = 2;
        displayName = "[1st MEU] Optican Medigel";
		picture = "\first_meu_aux\data\misc\icons\medigel_icon.paa";
		model = "\OPTRE_Weapons\items\Medigel.p3d";
        class ItemInfo: ItemInfo
		{
			mass = 2;
        };
    };
	class MEU_tourniquet : ACE_tourniquet 
    {
        scope = 1;
        displayName = " [P] Armor Patch"; 
        class ItemInfo: CBA_MiscItem_ItemInfo 
        {
            mass = 0.5;
        };
    };
	class MEU_Suit_Sealant : OPTRE_Medigel
	{
		scope = 2;
        displayName = "[1st MEU] Flex Seal";
		picture = "\first_meu_aux\data\misc\icons\flex_seal_icon.paa";
		model = "\OPTRE_Weapons\items\Medigel.p3d";
        class ItemInfo: ItemInfo
		{
			mass = 2;
        };
	};
	
// Medical Items End
// BDU Start

	class Praetorian_BDU : U_B_CombatUniform_mcam
	{
		author = "1stMEU Oneill";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] Praetorian Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = "4 + 8";
		class ItemInfo: UniformItem
		{
			uniformClass = "BDU_V_Praetorian_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
    
    class Centurion_BDU : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = "4 + 8";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
		
	class Centurion_BDU_Urban_Evolved : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Urban/Evolved)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = "4 + 8";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Urban_Evolved_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Desert : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Desert)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = "4 + 8";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Desert_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Snow : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Snow)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = "4 + 8";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Snow_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Woodland : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform (Woodland)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = "4 + 8";
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Woodland_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Pegasus_Pilot_Uniform : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pegasus Pilot Uniform";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = "4 + 8";
		ACE_GForceCoef = 0.1;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Pegasus_Slim";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
		
	class Centurion_BDU_Urban_Evolved_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Urban/Evolved)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Urban_Evolved_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Desert_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Desert)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Desert_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Snow_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Snow)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Snow_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Woodland_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Rolled Sleeves (Woodland)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Woodland_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Pegasus_Pilot_Uniform_Rolled : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pegasus Pilot Uniform Rolled Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
		ACE_GForceCoef = 0.1;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Pegasus_Slim_Rolled";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
		
	class Centurion_BDU_Urban_Evolved_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Urban/Evolved)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Urban_Evolved_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Desert_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Desert)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Desert_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Snow_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Snow)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Snow_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Centurion_BDU_Woodland_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Centurion Combat Uniform Short Sleeves (Woodland)";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Centurion_Woodland_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
	class Pegasus_Pilot_Uniform_Short : U_B_CombatUniform_mcam
    {
        author = "1st MEU Oneill";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] Pegasus Pilot Uniform Short Sleeves";
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
        CBRN_protectionLevel = 8;
		ACE_GForceCoef = 0.1;
        class ItemInfo: UniformItem
        {
			uniformClass = "BDU_V_Pegasus_Slim_Short";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	
// BDU End
    // Friden Vipers
	class MEU_Viper_Helmet_Friden: H_HelmetO_ViperSP_ghex_F
	{
		author = "Romeo";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
		displayName = "[RIE] Special Purpose Helmet (Friden)";
		hiddenSelectionsTextures[] = {"\first_meu_aux\Data\opfor\Viper_Helmet_Friden_co.paa"};
	};
    // Weapons Start
    class Throw : Grenadelauncher
	{
		muzzles[] += 
		{
			"MEU_C7_Muzzle",
			"MEU_C12_Muzzle",
			"MEU_9bang_Muzzle",
			"MEU_C168_Muzzle",
			"MEU_Fury_Muzzle",
			"MEU_Bubble_Muzzle",
			//"MEU_M3_CS_Muzzle"
		};
		class MEU_C7_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_c7_remote_throwable_Mag"};
        };
        class MEU_C12_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_c12_remote_throwable_Mag"};
		};
        class MEU_9bang_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_9bang_Mag"};
		};
        class MEU_C168_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_C168_Mag"};
		};
		class MEU_Fury_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_Fury_Mag"};
		};
		/*class MEU_M3_CS_Muzzle : ThrowMuzzle
		{
            reloadtime = 0;
			magazines[] = {"MEU_M3_CS_Mag"};
			class EventHandlers
			{
				fired = "_this execVM 'first_meu_aux\Functions\CS_Grenade.sqf'";
			};
		};*/
        class MEU_Bubble_Muzzle : ThrowMuzzle
        {
            reloadtime = 0;
            magazines[] = {"MEU_Bubble_Mag"}; 
			class EventHandlers
			{
				fired = "_script = _this execVM 'first_meu_aux\Functions\Bubbleshield_throw.sqf'; waitUntil { scriptDone _script }; ";
			};
        };
    };
	class OPTRE_M7: OPTRE_SubMachineGun_Base
	{
		magazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_5x23mm_Mag_FMJ",
			"OPTRE_60Rnd_5x23mm_Mag_FMJT",
			"OPTRE_60Rnd_5x23mm_Mag_HV",
			"OPTRE_60Rnd_5x23mm_Mag_HVT",
			"OPTRE_60Rnd_5x23mm_Mag_JHP",
			"OPTRE_60Rnd_5x23mm_Mag_JHPT",
			"OPTRE_60Rnd_5x23mm_Mag_SS",
			"OPTRE_60Rnd_5x23mm_Mag_SST",
			"OPTRE_48Rnd_5x23mm_Mag",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer_Yellow",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJT",
			"OPTRE_48Rnd_5x23mm_Mag_HV",
			"OPTRE_48Rnd_5x23mm_Mag_HVT",
			"OPTRE_48Rnd_5x23mm_Mag_JHP",
			"OPTRE_48Rnd_5x23mm_Mag_JHPT",
			"OPTRE_48Rnd_5x23mm_Mag_SS",
			"OPTRE_48Rnd_5x23mm_Mag_SST",
			"OPTRE_60Rnd_5x23mm_Mag_NARQ",
			"OPTRE_60Rnd_5x23mm_Mag_NARQT"
		};
	};
    
    class MEU_M7v2: OPTRE_M7
    {
        baseweapon = "MEU_M7v2";
        dlc = "SO";
        author = "1st MEU Mark";
		scope = 2;
        scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "[1stMEU] M7X-T2";
        magazineReloadTime = 2.0;
        reloadAction = "";
        class LinkedItems
		{
            class WeaponSlotsInfo
            {
                mass = 29;
                class MuzzleSlot: MuzzleSlot
                {
                    compatibleitems[] = {"muzzle_snds_b","muzzle_snds_h_mg_blk_f","ace_muzzle_mzls_b","optre_m7_silencer","optre_m6_silencer"};
                };
                class CowsSlot: CowsSlot
                {
                    compatibleitems[] ={"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_SRS99_Scope_v2","OPTRE_SRS99C_Scope_v2","OPTRE_M73_Smartlink_v2","OPTRE_M6S_Scope","OPTRE_M6GX_Scope","OPTRE_M6D_Smartlink","OPTRE_MA5_SmartLink","OPTRE_MA5_SmartLink_v2","OPTRE_MA5C_SmartLink_v2","OPTRE_MA5_SmartLink_legacy","OPTRE_MA5C_SmartLink_legacy","OPTRE_M7_Sight_v2","OPTRE_M392_Scope_v2","OPTRE_BMR_Scope_v2","OPTRE_M393_Scope_v2","OPTRE_M393_ACOG_v2","OPTRE_M393_EOTECH_v2","OPTRE_BR55HB_Scope_v2"};
                };
                class PointerSlot: PointerSlot
                {
				    compatibleitems[] = {"acc_pointer_ir","ace_acc_pointer_green","acc_flashlight","optre_m45_flashlight","optre_m45_flashlight_red","optre_m7_laser","optre_m7_flashlight","OPTRE_BMR_Laser"};
                };
            };
		};
    };
	
	class OPTRE_M301X: UGL_F
	{
		magazines[] = 
		{
			"UGL_8Gauge_Pellet",
			"UGL_8Gauge_Slug",
			"UGL_8Gauge_Beanbag",
			"UGL_FlareBlue_F",
			"3Rnd_UGL_8Gauge_Pellet",
			"3Rnd_UGL_8Gauge_Slug",
			"3Rnd_UGL_8Gauge_Beanbag",
			"3Rnd_UGL_FlareBlue_F",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_HE_MEU_shell",
			"1Rnd_HEDP_MEU_shell",
			"3Rnd_HE_MEU_shell"
		};
	};
	
	class OPTRE_M319s: OPTRE_Handgun_Base
	{
		magazines[] = 
		{
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"M319_Smoke",
			"M319_Smoke_Orange",
			"M319_Smoke_Green",
			"M319_Smoke_Red"
		};
	};
		
	class OPTRE_M247: OPTRE_M73
	{
		displayName = "M247X General Purpose Machine Gun";
		magazines[] = 
		{
			"OPTRE_100Rnd_762x51_Box",
			"OPTRE_100Rnd_762x51_Box_AP",
			"OPTRE_100Rnd_762x51_Box_JHP",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_100Rnd_762x51_Box_APT",
			"OPTRE_100Rnd_762x51_Box_JHPT",
			"OPTRE_100Rnd_762x51_Box_Tracer_Yellow",
			"OPTRE_400Rnd_762x51_Box",
			"OPTRE_400Rnd_762x51_Box_AP",
			"OPTRE_400Rnd_762x51_Box_JHP",
			"OPTRE_400Rnd_762x51_Box_Tracer",
			"OPTRE_400Rnd_762x51_Box_APT",
			"OPTRE_400Rnd_762x51_Box_JHPT",
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};
			};
		};
	};
    
	class M250HMG: OPTRE_M247
	{
		dlc = "1STMEUAUX";
		author = "[1stMEU] Oneill";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\MG\data\anim\OPTRE_M247_handanim.rtm","Spartan_ManSkeleton","\OPTRE_Weapons\MG\data\anim\M247_Spartan.rtm"};
		model = "\OPTRE_Weapons\MG\M247.p3d";
		displayName = "[1stMEU] M250 Heavy Machine Gun";
		descriptionShort = "UNSC Heavy Machine Gun (man portable)";
		magazines[] = {"OPTRE_100Rnd_127x99_M250HMG", "OPTRE_100Rnd_127x99_HE_M250HMG", "OPTRE_100Rnd_127x99_Tracer_M250HMG", "OPTRE_100Rnd_127x99_Tracer_HE_M250HMG"};
		recoil = "recoil_trg21";
		baseWeapon = "M250HMG";
		HUD_BulletInARows = 2;
		HUD_TotalPosibleBullet = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 150;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};
			};
		};
        modes[] = {"FullAuto","Single"};
		class Single: Single
		{
            sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
            class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",1.5848932,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",1.5848932,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",1.5848932,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",1.4125376,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0030;
		};
		class FullAuto: FullAuto
		{
            sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: StandardSound
			{
				begin1[] = {"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
				begin2[] = {"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",1.5848932,1,400};
				begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",1.5848932,1,400};
				begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",1.5848932,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",1.4125376,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime = 0.1;
			dispersion = 0.0030;
		};
	};
	
	class OPTRE_BR55HB: OPTRE_Rifle_Base
	{
		modes[] = 
		{
			"Single",
			"Burst"
		};
	};
	
	class OPTRE_BR45_Scope: OPTRE_BR55HB_Scope
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			opticType = 1;
			optics = 1;
			modelOptics = "\OPTRE_Weapons\BR\BR_Scope_V2.p3d";
			class OpticsModes
			{
				class BR55HB_BUIS
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.275;
					opticsZoomMax = 0.99;
					opticsZoomInit = 0.75;
					memoryPointCamera = "opticView2";
					visionMode[] = {"Normal","NVG"};
					discreteDistance[] = {50,100,150,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					cameraDir = "";
				};
				class BR55HB_Scope: BR55HB_BUIS
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsZoomMin = 0.125;
					opticsZoomMax = 0.0525;
					opticsZoomInit = 0.125;
					discretefov[] = {0.125,0.0525};
					discreteinitIndex = 0;
					discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\OPTRE_Weapons\BR\BR45_Optic_2x.p3d","\OPTRE_Weapons\BR\BR45_Optic_4x.p3d"};
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {0,1};
				};
			};
		};
	};
	
	class OPTRE_M392_DMR: OPTRE_LongRifle_Base
	{
		magazines[]=
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_SST",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST",
			"OPTRE_15Rnd_DMR_762x51_Mag_AP",
			"OPTRE_15Rnd_DMR_762x51_Mag_APT",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHP",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
			"OPTRE_15Rnd_DMR_762x51_Mag_SS",
			"OPTRE_15Rnd_DMR_762x51_Mag_SST",
			"OPTRE_15Rnd_DMR_762x51_Mag_FS",
			"OPTRE_15Rnd_DMR_762x51_Mag_FST"
		};
		magazineWell[] = {};
		
		modes[] = 
		{
			"Single"
		};
	};
	
	class OPTRE_M393_DMR: OPTRE_M392_DMR
	{
		displayName = "M393X DMR";
	};
	
	class OPTRE_M393S_DMR: OPTRE_M393_DMR
	{
		displayName	= "M393X/S DMR";
	};
	
	class OPTRE_M295_BMR: OPTRE_M393_DMR
    {
        magazines[] = 
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST",
			"OPTRE_15Rnd_DMR_762x51_Mag_AP",
			"OPTRE_15Rnd_DMR_762x51_Mag_APT",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHP",
			"OPTRE_15Rnd_DMR_762x51_Mag_JHPT",
			"OPTRE_15Rnd_DMR_762x51_Mag_SS",
			"OPTRE_15Rnd_DMR_762x51_Mag_SST",
			"OPTRE_15Rnd_DMR_762x51_Mag_FS",
			"OPTRE_15Rnd_DMR_762x51_Mag_FST"
		};
		magazineWell[] = {};
		
		modes[] = 
		{
			"Single",
			"FullAuto"
		};
    };
    
    class OPTRE_CR77: OPTRE_M393_DMR
    {
        modes[] = 
		{
			"Single",
			"FullAuto"
		};
    };
	
	class LM_OPCAN_AR0M37: arifle_MSBS65_black_F
    {
        picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_black_F_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_AR0M37_GL: arifle_MSBS65_GL_black_F
    {
        picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_GL_black_F_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_AR0M37_SHT: arifle_MSBS65_UBS_black_F
    {
        picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_UBS_black_F_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_DMR0M37: arifle_MSBS65_Mark_black_F
    {
		picture = "a3\Weapons_F_Enoch\Rifles\MSBS\Data\UI\icon_arifle_MSBS65_Mark_black_F_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    
    class LM_OPCAN_ARMX: arifle_MX_Black_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_ARMX_GL: arifle_MX_GL_Black_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_CTAR: arifle_CTAR_blk_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_CTAR_GL: arifle_CTAR_GL_blk_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_CTAR_SAW: arifle_CTARS_blk_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
    class LM_OPCAN_M18AR: arifle_Mk20_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
	class LM_OPCAN_M18AR_C: arifle_Mk20C_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	
	class LM_OPCAN_M18AR_GL: arifle_Mk20_GL_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_M90A: OPTRE_M45
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
        };
    };
    class OPTRE_M12_SOC: OPTRE_M7
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor",
                    "OPTRE_M12_Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2",
                    "OPTRE_M12_Optic"
                    
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser",
                    "optre_m12_laser"
                };
            };
        };
    };
    class OPTRE_BR45: OPTRE_BR55
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2",
                    "optre_br45_scope"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser",
                    "optre_m12_laser"
                };
            };
        };
    };
    
    class OPTRE_SRS99D : OPTRE_LongRifle_Base
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2",
                    "optre_srs99c_scope",
                    "optre_srs99c_scope_v2",
                    "optre_srs99_scope",
                    "optre_srs99_scope_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_MA37: OPTRE_MA5C
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_MA37B: OPTRE_MA37
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_MA37GL: OPTRE_MA5CGL
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
    class OPTRE_MA37BGL: OPTRE_MA37GL
	{
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: MuzzleSlot
            {
                compatibleitems[] = 
                {
                    "muzzle_snds_b",
                    "muzzle_snds_h_mg_blk_f",
                    "ace_muzzle_mzls_b",
                    "optre_m7_silencer",
                    "optre_m6_silencer",
                    "OPTRE_MA5Suppressor"
                };
            };
            class CowsSlot: CowsSlot
            {
                compatibleitems[] =
                {
                    "optic_ico_01_black_f",
                    "optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg",
					"optic_NVS",
					"optic_DMS",
					"optic_LRPS",
					"optic_ams",
					"optic_AMS_snd",
					"optic_AMS_khk",
					"optic_KHS_blk",
					"optic_KHS_tan",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_SOS",
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Hamr_khk_F",
					"optic_SOS_khk_F",
					"optic_Arco_ghex_F",
					"optic_Arco_blk_F",
					"optic_DMS_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_LRPS_ghex_F",
					"optic_LRPS_tna_F",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
                    "OPTRE_M392_Scope",
                    "OPTRE_BR55HB_Scope",
                    "OPTRE_M7_Sight",
                    "OPTRE_M393_Scope",
                    "OPTRE_M393_ACOG",
                    "OPTRE_M393_EOTECH",
                    "OPTRE_M392_Scope_v2",
                    "OPTRE_BR55HB_Scope_v2",
                    "OPTRE_M7_Sight_v2",
                    "OPTRE_M393_Scope_v2",
                    "OPTRE_M393_ACOG_v2",
                    "OPTRE_M393_EOTECH_v2"
                };
            };
            class PointerSlot: PointerSlot
            {
                compatibleitems[] = 
                {
                    "acc_pointer_ir",
                    "acc_flashlight",
                    "OPTRE_BMR_Laser"
                };
            };
        };
    };
	class OPAEX_M41_Launcher: OPTRE_UnguidedLauncher_Base
	{
		dlc = "1st MEU";
		author = "1st MEU Oneill";
		scope = 2;
		scopeArsenal = 2;
		displayname = "M41 SSR MAV/AW SPNKr";
		descriptionshort = "Surface-to-Surface Rocket Medium Anti-Vehicle/Assault Weapon";
		magazines[] =
		{
			"M41_Twin_HEAT_WireGuided",
			"M41_Twin_HEAT_HeatSeeking",
			"M41_Twin_HEAT",
			"M41_Twin_HEAP"
		};
		magazineWell[] = {};
	};	
	
    class meu_gunner_launcher : OPAEX_M41_Launcher
    {
        
        author = "1st MEU Mark";
		scope = 2;
		scopeArsenal = 2;
        type = 1;
        primaryweapon = 10;
		displayname = "M41 SPNKr Side Gunner";
		descriptionshort = "Gunner qual go brrrrr";
		magazines[] =
		{
			"M41_Twin_HEAT_WireGuided",
			"M41_Twin_HEAT_HeatSeeking",
			"M41_Twin_HEAT",
			"M41_Twin_HEAP"
		};
    };
    
    class OPTRE_M319 : OPTRE_Rifle_Base
    {
        magazines[] = {"UGL_8Gauge_Pellet","UGL_8Gauge_Slug","UGL_8Gauge_Beanbag","UGL_FlareBlue_F","3Rnd_UGL_8Gauge_Pellet","3Rnd_UGL_8Gauge_Slug","3Rnd_UGL_8Gauge_Beanbag","3Rnd_UGL_FlareBlue_F","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","1Rnd_HE_MEU_shell","1Rnd_HEDP_MEU_shell","3Rnd_HE_MEU_shell"};
    };
	
	class M247_APC: LMG_coax
	{
		displayName = "M247 7.62mm GPMG";
		magazines[] = 
		{
			"OPTRE_100Rnd_762x51_Box",
			"OPTRE_100Rnd_762x51_Box_AP",
			"OPTRE_100Rnd_762x51_Box_JHP",
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_100Rnd_762x51_Box_APT",
			"OPTRE_100Rnd_762x51_Box_JHPT",
			"OPTRE_100Rnd_762x51_Box_Tracer_Yellow",
			"OPTRE_400Rnd_762x51_Box",
			"OPTRE_400Rnd_762x51_Box_AP",
			"OPTRE_400Rnd_762x51_Box_JHP",
			"OPTRE_400Rnd_762x51_Box_Tracer",
			"OPTRE_400Rnd_762x51_Box_APT",
			"OPTRE_400Rnd_762x51_Box_JHPT",
		};
		class manual: MGun
		{
			displayName = "M247 7.62mm GPMG";
			reloadTime = 0.07;
		};
	};
	
	class M250_APC: HMG_127_APC
	{
		displayName = "M250 12.7mm HMG";
		magazines[] = 
		{
			"OPTRE_400Rnd_127x99_M250HMG",
			"OPTRE_400Rnd_127x99_HE_M250HMG"
		};
		class manual: MGun
		{
			displayName = "M250 12.7mm HMG";
			reloadTime = 0.09;
		};
	};
	
	class MG460_APC: GMG_40mm
	{
		displayName = "MG460 40mm AGL";
		magazines[] = 
		{
			"40Rnd_HEDP_Belt"
		};
		class manual: GMG_F
		{
			displayName = "MG460 40mm AGL";
			reloadTime = 0.35;
		};
	};
	
	class M1024_30mm: autocannon_40mm_CTWS
	{
		displayName = "M1024 ASW/AC 30mm ALA Cannon";
		muzzles[] = {"HE","AP"};
		class HE: autocannon_Base_F
		{
			displayName = "M1024 ASW/AC 30mm ALA Cannon";
			reloadTime = 0.25;
			magazines[] = 
			{
				"80Rnd_30mm_HEAT",
			};
		};
		class AP: autocannon_Base_F
		{
			displayName = "M1024 ASW/AC 30mm ALA Cannon";
			reloadTime = 0.25;
			magazines[] = 
			{
				"60Rnd_30mm_APFSDS",
			};
		};
	};
	
	class M512_90mm: cannon_120mm
	{
		magazinereloadTime = 4.0;
		displayName = "M512 Smoothbore High-Velocity Cannon";
		descriptionShort = "90mm";
		magazines[] = 
		{
			"60Rnd_90mm_APBC",
			"30Rnd_90mm_SAPHE",
			"30Rnd_90mm_HEAT"
		};
		class gunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class ejectshellcase
			{
				directionName = "nabojniceend";
				effectName = "OPTRE_90mmShellcase";
				positionName = "nabojnicestart";
			};
		};
	};
	
	class M910_Point_Defense_Cannon: autocannon_35mm
	{
		displayName = "M910 ASW/AC 50mm";
		holdsterAnimValue = 0;
		ballisticsComputer = 4;
		canLock = 1;
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M231";
		nameSound = "cannon";
		shotFromTurret = 0;
		muzzlePos = "Usti hlavne1R";
		muzzleEnd = "konec hlavne1R";
		selectionFireAnim = "Usti hlavne1R";
		magazines[] = 
		{
			"20Rnd_50mm_HEAT"
		};
		magazinereloadTime = 6.0;
		modes[] = {"Point_Defense", "close_range", "short_range", "medium_range", "long_range"}; 
		class Point_Defense: CannonCore
		{
			displayName = "M910 ASW/AC 50mm";
			textureType = "fullAuto";
			autoFire = 1;
			dispersion = 0.0015;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			recoil = "Empty";
			reloadTime = 0.25;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 800;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.5;
			artilleryDispersion = 2.5;
			artilleryCharge = 0.18;
		};
		class close_range: Point_Defense
		{
			recoil = "Empty";
			minRange = 2000;
			minRangeProbab = 0.4;
			midRange = 3000;
			midRangeProbab = 0.6;
			maxRange = 5200;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.25;
		};
		class short_range: Point_Defense
		{
			recoil = "Empty";
			minRange = 5200;
			minRangeProbab = 0.3;
			midRange = 8000;
			midRangeProbab = 0.4;
			maxRange = 13300;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.5;
		};
		class medium_range: Point_Defense
		{
			recoil = "Empty";
			minRange = 14600;
			minRangeProbab = 0.2;
			midRange = 25000;
			midRangeProbab = 0.3;
			maxRange = 37000;
			maxRangeProbab = 0.2;
			artilleryCharge = 0.75;
		};
		class long_range: Point_Defense
		{
			recoil = "Empty";
			minRange = 25000;
			minRangeProbab = 0.1;
			midRange = 40000;
			midRangeProbab = 0.2;
			maxRange = 58000;
			maxRangeProbab = 0.1;
			artilleryCharge = 1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne 1";
				directionName = "konec hlavne 1";
				effectName = "AutoCannonFired";
			};
			class effect2: effect1
			{
				positionName = "usti hlavne 2";
				directionName = "konec hlavne 2";
			};
		};
	};
	
    class MEU_Railgun: OPTRE_FC_Railgun
	{
		author = "Romeo";
		scope = 2;
		scopeArsenal = 2;
        scopeCurator = 2;
		baseWeapon = "MEU_Railgun";
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_FC_Weapons\Railgun\data\anim\Railgun_HandAnim.rtm","Spartan_ManSkeleton","\OPTRE_FC_Weapons\Railgun\data\anim\Railgun_HandAnim_Spartan.rtm"};
		model = "\OPTRE_FC_Weapons\Railgun\Railgun.p3d";
		displayName = "[1stMEU] ARC-920";
		descriptionShort = "Compact-Channel Linear Accelerator Weapon";
		magazines[] = {"MEU_Railgun_Slug"};
		magazineWell[] = {"MEU_Railgun_Slug"};
		modelOptics = "-";
	};
	
    class MEU_M75 : LMG_03_base_F
    {
        author = "Mark";
		scope = 2;
		scopeArsenal = 2;
        scopeCurator = 2;
        baseWeapon = "MEU_M75";
		displayName = "[1stMEU] M75 SAW";
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\MG\data\anim\OPTRE_M73_handanim.rtm","Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\M73_1_Spartan.rtm"};
		model = "\OPTRE_Weapons\MG\M73.p3d";
		descriptionShort = "UNSC Light Machine Gun";
		picture = "\OPTRE_weapons\MG\icons\M73_1.paa";        
		reloadAction = "GestureReloadM200";
		recoil = "recoil_lim";
		cursor = "OPTRE_M73";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		HUD_BulletInARows = 4;
		HUD_TotalPosibleBullet = 200;
		magazineWell[] = {};
        magazines[] = 
		{
			"MEU_200rnd_556_Mag",
			"MEU_200rnd_556_Mag_Tracer"
		};
		class GunParticles
		{
			class EffectShotCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {"muzzle_snds_65_TI_blk_F","OPTRE_MA5Suppressor"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_ams","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_tan","optic_KHS_hex","optic_KHS_old","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg","optic_Hamr_khk_F","optic_SOS_khk_F","optic_Arco_ghex_F","optic_Arco_blk_F","optic_DMS_ghex_F","optic_ERCO_blk_F","optic_ERCO_khk_F","optic_ERCO_snd_F","optic_LRPS_ghex_F","optic_LRPS_tna_F","optic_Holosight_blk_F","optic_Holosight_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_smg_khk_F","OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_BR45_Scope"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};
			};
		};
	};
};