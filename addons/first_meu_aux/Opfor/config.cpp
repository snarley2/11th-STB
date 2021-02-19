class CfgPatches
{
	class MEU_OPFOR_mod
	{
		units[]={""};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
		worlds[]={};
	};
};

class CfgFactionClasses
{
	class MEU_URF
	{
		displayName="1st MEU URF";
		author="1st MEU Seven";
		priority=1;
		side=0;
		primaryLanguage="EN";
	};
	class MEU_BJ
	{
		displayName="1st MEU Battle Jumpers";
		author="1st MEU Seven";
		priority=1;
		side=0;
		primaryLanguage="EN";
	};
	class MEU_CDF
	{
		displayName="1st MEU Colonial Defense Force";
		author="1st MEU Seven";
		priority=1;
		side=2;
		primaryLanguage="EN";
	};
};
class CfgEditorCategories
{
	class MEU_cat_Opfor
	{
		displayName="1st MEU Opfor";
        scopeCurator = 2;
        scopeeditor = 2;
	};
};
class CfgEditorSubcategories
{
	class MEU_sub_URF
	{
		displayName="URF";
		author="1st MEU Seven";
		priority=1;
		side=0;
		primaryLanguage="EN";
	};
	class MEU_sub_BJ
	{
		displayName="Battle Jumpers";
		author="1st MEU Seven";
		priority=1;
		side=0;
		primaryLanguage="EN";
	};
	class MEU_sub_CDF
	{
		displayName="Colonial Defense Force";
		author="1st MEU Seven";
		priority=1;
		side=0;
		primaryLanguage="EN";
	};
};
class CfgVehicleClasses
{
    class MEU_Men_class
	{
		displayName="Men";
		author="1st MEU Seven";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};

class CfgWeapons
{
    class ItemInfo;
    class UniformItem;
    class HeadgearItem;
    class VestItem;
    class Centurion_BDU;
    class Praetorian_BDU;
    class H_HelmetB;
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
    
    //Battle Jumper Start
	class MEU_Ins_BJ_Undersuit : Praetorian_BDU
	{
		author = "1st MEU Seven";
		scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName = "[1stMEU] BJ Ballistic Undersuit";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformClass = "OPTRE_Ins_BJ_Soldier_Base";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
    //Vests Start
	class MEU_Ins_BJ_Armor: V_PlateCarrier1_rgr
	{
        author = "1st MEU Seven";
		scope=2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName="[1stMEU] BJ Armor Plating (Woodland)";
		model="\OPTRE_Ins_Units\BJ\armor.p3d";
		class ItemInfo: VestItem
		{
            vestType = "Rebreather";
			uniformModel="\OPTRE_Ins_Units\BJ\armor.p3d";
			containerClass = "Supply200";
			mass = 75;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
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
					armor = 55;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 55;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 55;
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
	class MEU_Ins_BJ_Armor_URB: MEU_Ins_BJ_Armor
	{
		displayName="[1stMEU] BJ Armor Plating (Urban)";
		model="\OPTRE_Ins_Units\BJ\armor_urb.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_Ins_Units\BJ\armor_urb.p3d";
		};
	};
    //Helmet Start
	class MEU_Ins_BJ_Helmet: H_HelmetB
	{
        author = "1st MEU Seven";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName="[1stMEU] BJ Helmet (Woodland)";
		model="\OPTRE_Ins_Units\BJ\helmet.p3d";
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_Ins_Units\BJ\helmet.p3d";
			mass=30;
			modelSides[]={6};
			passThrough=0.1;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=25;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=25;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};
	class MEU_Ins_BJ_Helmet_URB: MEU_Ins_BJ_Helmet
	{
		displayName="[1stMEU] BJ Helmet (Urban)";
		model="\OPTRE_Ins_Units\BJ\helmet_urb.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_Ins_Units\BJ\helmet_urb.p3d";
		};
	};
    
    //URF Start
    class MEU_Ins_URF_Combat_Uniform : Centurion_BDU
    {
        author = "1st MEU Seven";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] URF Fatigues";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
			uniformClass="OPTRE_Ins_URF_Soldier_Base";
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
        };
    };
	class MEU_Ins_URF_Armor: V_PlateCarrier1_rgr
	{
        author = "1st MEU Seven";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName="[1stMEU] URF Ballistic Armor";
		model="\OPTRE_Ins_Units\URF\armor.p3d";
		class ItemInfo: VestItem
		{
            vestType = "Rebreather";
			uniformModel="\OPTRE_Ins_Units\URF\armor.p3d";
			containerClass="Supply250";
			mass=75;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 40;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 40;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					passThrough = 0.1;
				};
			};
		};
	};
	class MEU_Ins_URF_Helmet: H_HelmetB
	{
        author = "1st MEU Seven";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName="[1stMEU] URF Helmet";
		model="\OPTRE_Ins_Units\URF\helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"attach_balaclava",
			"attach_goggles"
		};
		hiddenSelectionsTextures[]=
		{"optre_ins_units\urf\data\helmet_co.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_Ins_Units\URF\helmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"attach_balaclava",
				"attach_goggles"
			};
			hiddenSelectionsTextures[]=
			{"optre_ins_units\urf\data\helmet_co.paa"};
			mass=30;
			modelSides[]={6};
			passThrough=0.1;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
	class MEU_Ins_URF_Helmet_Gog: MEU_Ins_URF_Helmet
	{
		displayName="[1stMEU] URF Helmet (Goggles)";
		hiddenSelections[]=
		{
			"camo",
			"attach_balaclava"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"attach_balaclava"
			};
		};
	};
	class MEU_Ins_URF_Helmet_Bal: MEU_Ins_URF_Helmet
	{
		displayName="[1stMEU] URF Helmet (Balaclava)";
		hiddenSelections[]=
		{
			"camo",
			"attach_goggles"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"attach_goggles"
			};
		};
	};
	class MEU_Ins_URF_Helmet_Combo: MEU_Ins_URF_Helmet
	{
		displayName="[1stMEU] URF Helmet (Balaclava / Goggles)";
		hiddenSelections[]=
		{"camo"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{"camo"};
		};
	};
    
    //CDF Start
    class MEU_Ins_CDF_Combat_Uniform : Centurion_BDU
    {
        author = "1st MEU Seven";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[1stMEU] CDF Fatigues (Woodland)";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        class ItemInfo: UniformItem
        {
            uniformClass="LM_OPCAN_CGC_Base";
            containerClass = "Supply100";
            uniformModel = "-";
            uniformType = "Neopren";
            mass = 40;
        };
    };
	class MEU_Ins_CDF_Combat_Uniform_Rolled: MEU_Ins_CDF_Combat_Uniform
	{
		displayName="[1stMEU] CDF Fatigues (Woodland)(Rolled)";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformClass="LM_OPCAN_CGC_SS_Base";
		};
	};
    class MEU_Ins_CDF_Combat_Uniform_D : MEU_Ins_CDF_Combat_Uniform
    {
        displayName = "[1stMEU] CDF Fatigues (Desert)";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        class ItemInfo: ItemInfo
        {
			uniformClass="LM_OPCAN_CGC_D_Base";
        };
    };
	class MEU_Ins_CDF_Combat_Uniform_Rolled_D: MEU_Ins_CDF_Combat_Uniform
	{
		displayName="[1stMEU] CDF Fatigues (Desert)(Rolled)";
		picture="\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformClass="LM_OPCAN_CGC_D_SS_Base";
		};
	};
    //Vests Start
	class MEU_Ins_CDF_VEST: V_PlateCarrier2_rgr
	{
        author = "1st MEU Seven";
		scope=2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName="[1stMEU] CDF ACTV Vest";
		picture="\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model="\LM_OPCAN3.0\BLU\CGC\V\ACTV";
		class ItemInfo: VestItem
		{
            vestType = "Rebreather";
			mass=75;
			containerClass="Supply250";
			uniformModel="\LM_OPCAN3.0\BLU\CGC\V\ACTV";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 40;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 40;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 40;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 40;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 40;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 40;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 40;
					passThrough = 0.1;
				};
			};
		};
	};
	class MEU_Ins_CDF_VEST_UP: MEU_Ins_CDF_VEST
	{
		displayName="[1stMEU] CDF ACTV Vest (Pads)";
		picture="\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model="\LM_OPCAN3.0\BLU\CGC\V\ACTV_UP";
		class ItemInfo: ItemInfo
		{
			uniformModel="\LM_OPCAN3.0\BLU\CGC\V\ACTV_UP";
        };
	};
    //Helmet Start
	class MEU_Ins_CDF_CH230: H_HelmetB
	{
        author = "1st MEU Seven";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
		displayName="[1stMEU] CDF CH-230";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\LM_OPCAN3.0\BLU\CGC\H\CH230";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
            hiddenSelections[]={"Camo"};
			uniformModel="\LM_OPCAN3.0\BLU\CGC\H\CH230";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 15;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 15;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 15;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
    
    class MEU_Ins_CDF_CH230_CAM: MEU_Ins_CDF_CH230
	{
		displayName="[1stMEU] CDF CH-230 (Camo)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coSN.paa"};
	};
	class MEU_Ins_CDF_CH230_MD: MEU_Ins_CDF_CH230
	{
		displayName="[1stMEU] CDF CH-230 (Medic)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coMD.paa"};
	};
	class MEU_Ins_CDF_CH230_MG: MEU_Ins_CDF_CH230
	{
		displayName="[1stMEU] CDF CH-230 (Dakka)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coMG.paa"};
	};
	class MEU_Ins_CDF_CH230_SL: MEU_Ins_CDF_CH230
	{
		displayName="[1stMEU] CDF CH-230 (Born)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coSL.paa"};
	};
	class MEU_Ins_CDF_CH230_PR: MEU_Ins_CDF_CH230
	{
		displayName="[1stMEU] CDF CH-230 (Preacher)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coCH.paa"};
	};
    //Cig start
	class MEU_Ins_CDF_CH230_CIG: MEU_Ins_CDF_CH230
	{
		displayName="[1stMEU] CDF CH-230 (w/ Cigs)";
		model="\LM_OPCAN3.0\BLU\CGC\H\CH230_Cig";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\LM_OPCAN3.0\BLU\CGC\H\CH230_Cig";
		};
	};
    
    class MEU_Ins_CDF_CH230_CAM_CIG: MEU_Ins_CDF_CH230_CIG
	{
		displayName="[1stMEU] CDF CH-230 (Camo w/ Cigs)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coSN.paa"};
	};
	class MEU_Ins_CDF_CH230_MD_CIG: MEU_Ins_CDF_CH230_CIG
	{
		displayName="[1stMEU] CDF CH-230 (Medic w/ Cigs)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coMD.paa"};
	};
	class MEU_Ins_CDF_CH230_MG_CIG: MEU_Ins_CDF_CH230_CIG
	{
		displayName="[1stMEU] CDF CH-230 (Dakka w/ Cigs)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coMG.paa"};
	};
	class MEU_Ins_CDF_CH230_SL_CIG: MEU_Ins_CDF_CH230_CIG
	{
		displayName="[1stMEU] CDF CH-230 (Born w/ Cigs)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coSL.paa"};
	};
	class MEU_Ins_CDF_CH230_PR_CIG: MEU_Ins_CDF_CH230_CIG
	{
		displayName="[1stMEU] CDF CH-230 (Preacher w/ Cigs)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coCH.paa"};
	};
    //bullet start
	class MEU_Ins_CDF_CH230_Bull: MEU_Ins_CDF_CH230
	{
		displayName="[1stMEU] CDF CH-230 (w/ Bullets)";
		model="\LM_OPCAN3.0\BLU\CGC\H\CH230_Bull";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\LM_OPCAN3.0\BLU\CGC\H\CH230_Bull";
		};
	};
    
    class MEU_Ins_CDF_CH230_CAM_Bull: MEU_Ins_CDF_CH230_Bull
	{
		displayName="[1stMEU] CDF CH-230 (Camo w/ Bullets)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coSN.paa"};
	};
	class MEU_Ins_CDF_CH230_MD_Bull: MEU_Ins_CDF_CH230_Bull
	{
		displayName="[1stMEU] CDF CH-230 (Medic w/ Bullets)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coMD.paa"};
	};
	class MEU_Ins_CDF_CH230_MG_Bull: MEU_Ins_CDF_CH230_Bull
	{
		displayName="[1stMEU] CDF CH-230 (Dakka w/ Bullets)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coMG.paa"};
	};
	class MEU_Ins_CDF_CH230_SL_Bull: MEU_Ins_CDF_CH230_Bull
	{
		displayName="[1stMEU] CDF CH-230 (Born w/ Bullets)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coSL.paa"};
	};
	class MEU_Ins_CDF_CH230_PR_Bull: MEU_Ins_CDF_CH230_Bull
	{
		displayName="[1stMEU] CDF CH-230 (Preacher w/ Bullets)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coCH.paa"};
	};
    //Combo Start
	class MEU_Ins_CDF_CH230_Combo: MEU_Ins_CDF_CH230
	{
		displayName="[1stMEU] CDF CH-230 (w/ Combo)";
		model="\LM_OPCAN3.0\BLU\CGC\H\CH230_Combo";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\LM_OPCAN3.0\BLU\CGC\H\CH230_Combo";
		};
	};
    
    class MEU_Ins_CDF_CH230_CAM_Combo: MEU_Ins_CDF_CH230_Combo
	{
		displayName="[1stMEU] CDF CH-230 (Camo w/ Combo)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coSN.paa"};
	};
	class MEU_Ins_CDF_CH230_MD_Combo: MEU_Ins_CDF_CH230_Combo
	{
		displayName="[1stMEU] CDF CH-230 (Medic w/ Combo)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coMD.paa"};
	};
	class MEU_Ins_CDF_CH230_MG_Combo: MEU_Ins_CDF_CH230_Combo
	{
		displayName="[1stMEU] CDF CH-230 (Dakka w/ Combo)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coMG.paa"};
	};
	class MEU_Ins_CDF_CH230_SL_Combo: MEU_Ins_CDF_CH230_Combo
	{
		displayName="[1stMEU] CDF CH-230 (Born w/ Combo)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coSL.paa"};
	};
	class MEU_Ins_CDF_CH230_PR_Combo: MEU_Ins_CDF_CH230_Combo
	{
		displayName="[1stMEU] CDF CH-230 (Preacher w/ Combo)";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[]={"\LM_OPCAN3.0\BLU\CGC\H\CH230_coCH.paa"};
	};
    
    
};
