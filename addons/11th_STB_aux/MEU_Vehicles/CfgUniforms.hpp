    //  Start Uniforms
	
	class OPTRE_UNSC_Army_Soldier_WDL;
	
	class MEU_Base_Uniform: OPTRE_UNSC_Army_Soldier_WDL
	{
		class EventHandlers;
		class HitPoints
		{
            class HitFace
            {
                armor = 5; //Default Value
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 5; //OPTRE Value //Default=1
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 5; //Default Value
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
                armor = 6; //OPTRE Value //Default=6
                material = -1;
                name = "pelvis";
                passThrough = 0.8;
                radius = 0.24;
                explosionShielding = .1;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitAbdomen: HitPelvis
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "spine1";
                passThrough = 0.8;
                radius = 0.16;
                explosionShielding = .1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "spine2";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = .25;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "spine3";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = .25;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
                armor = 1000; // Default value, do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = .25;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor = 6; //OPTRE Value //Default=3
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms
            {
                armor = 6; //OPTRE Value //Default=3
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands
            {
                armor = 6; //OPTRE Value //Default=3
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 0.3;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs
            {
                armor = 1000; //Default value, Do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = .1;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            //----------------------------Ace Hitpoints---------------------------
            class HitLeftArm
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "hand_l";
                passThrough = 1;
                radius = 0.08;
                explosionShielding = .1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitRightArm: HitLeftArm
            {
                name = "hand_r";
            };
            class HitLeftLeg
            {
                armor = 6; //OPTRE Value //Default=1
                material = -1;
                name = "leg_l";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = .1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
            class HitRightLeg: HitLeftLeg
            {
                name = "leg_r";
            };
            class ACE_HDBracket
            {
                armor = 1; //Default Value, Do not Change
                material = -1;
                name = "head";
                passThrough = 0;
                radius = 1;
                explosionShielding = .1;
                visual = "";
                minimalHit = 0;
                depends = "HitHead";
            };
        };
	};
    class 1stMEU_BDU: MEU_Base_Uniform
	{
		dlc = "1st MEU";
		scope = 1;
		scopeCurator = 0;
		author = "1st MEU Oneill";
		vehicleClass = "OPTRE_UNSC_Man_Army_W_class";
		uniformClass = "OPTRE_UNSC_Army_Uniform_WDL";
		model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = {"camo","camo2","insignia","clan","A_SlimLeg"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\uniform_a_woodland_co.paa","OPTRE_UNSC_Units\Army\data\uniform_b_woodland_co.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenWDL";
	};
	
	class BDU_V_Praetorian_Slim: 1stMEU_BDU
	{
		uniformclass = "Praetorian_BDU";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
        hiddenSelectionsTextures[] = {"first_meu_aux\data\misc\uniforms\V_BDU_Urban_CO.paa","first_meu_aux\data\misc\uniforms\V_BDU_Urban_CO.paa"};
	};
	
	class BDU_V_Centurion_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa"};
	};
	
	class BDU_V_Centurion_Urban_Evolved_Slim: 1stMEU_BDU
	{
		uniformclass = "Centurion_BDU_Urban_Evolved";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa"};
	};
	
	class BDU_V_Centurion_Desert_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU_Desert";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa"};
	};
	
	class BDU_V_Centurion_Snow_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU_Snow";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa"};
	};
	
	class BDU_V_Centurion_Woodland_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU_Woodland";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa"};
	};
	
	class BDU_V_Pegasus_Slim: 1stMEU_BDU
	{
        uniformclass = "Centurion_BDU_Urban_Evolved";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"};
	};
	
	class BDU_V_Centurion_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa"};
	};
	
	class BDU_V_Centurion_Urban_Evolved_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
		uniformclass = "Centurion_BDU_Urban_Evolved_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa"};
	};
	
	class BDU_V_Centurion_Desert_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Desert_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa"};
	};
	
	class BDU_V_Centurion_Snow_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Snow_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa"};
	};
	
	class BDU_V_Centurion_Woodland_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Woodland_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa"};
	};
	
	class BDU_V_Pegasus_Slim_Rolled: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
        uniformclass = "Centurion_BDU_Urban_Evolved_Rolled";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"};
	};
	
	class BDU_V_Centurion_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO.paa"};
	};
	
	class BDU_V_Centurion_Urban_Evolved_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
		uniformclass = "Centurion_BDU_Urban_Evolved_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO.paa"};
	};
	
	class BDU_V_Centurion_Desert_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Desert_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO.paa"};
	};
	
	class BDU_V_Centurion_Snow_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Snow_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO.paa"};
	};
	
	class BDU_V_Centurion_Woodland_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Woodland_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO.paa"};
	};
	
	class BDU_V_Pegasus_Slim_Short: 1stMEU_BDU
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
        uniformclass = "Centurion_BDU_Urban_Evolved_Short";
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg"};
		hiddenSelectionsTextures[] = {"LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa","LM_OPCAN3.0\BLU\UNSC\U\UNSC-A-BLK.paa"};
	};
	
//  End Uniforms