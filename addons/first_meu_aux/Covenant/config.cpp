class CfgPatches
{
	class MEU_Units_Elite
	{
		units[]=
		{
			"MEU_Elite_Minor",
			"MEU_Elite_Major",
			"MEU_Elite_Ranger",
			"MEU_Elite_Sniper",
			"MEU_Elite_Ultra",
			"MEU_Elite_Zealot",
			"MEU_Elite_FieldMarshal",
			"MEU_Elite_HonorGuard",
			"MEU_Elite_HonorGuard_Ultra"
		};
		weapons[]=
		{
			"MEU_Elite_CombatSkin",
			"MEU_Elite_Armor_Minor",
			"MEU_Elite_Armor_Major",
			"MEU_Elite_Armor_SpecOps",
			"MEU_Elite_Armor_Ultra",
			"MEU_Elite_Armor_Zealot",
			"MEU_Elite_Armor_FieldMarshal",
			"MEU_Elite_Armor_HonorGuard",
			"MEU_Elite_Armor_HonorGuard_Ultra",
			"MEU_Elite_Helmet_Minor",
			"MEU_Elite_Helmet_Major",
			"MEU_Elite_Helmet_SpecOps",
			"MEU_Elite_Helmet_Ultra",
			"MEU_Elite_Helmet_Zealot",
			"MEU_Elite_Helmet_FieldMarshal",
			"MEU_Elite_Helmet_HonorGuard",
			"MEU_Elite_Helmet_HonorGuard_Ultra"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_FC_Core",
			"OPTRE_Misc_Objects",
			"A3_Data_F",
			"A3_Characters_F_Proxies"
		};
		worlds[]={};
	};
};

class CfgFactionClasses
{
	class MEU_Covenant
	{
		displayName="1st MEU Covenant";
		author="1st MEU Seven";
		priority=1;
		side=0;
		primaryLanguage="EN";
	};
};
class CfgEditorCategories
{
	class MEU_cat_Cov
	{
		displayName="1st MEU Covenant";
        scopeCurator = 2;
        scopeeditor = 2;
	};
};
class CfgEditorSubcategories
{
	class MEU_sub_Sangheili
	{
		displayName="Sangheili";
        scopeCurator = 2;
        scopeeditor = 2;
	};
	class MEU_sub_CovAir
	{
		displayName="Air";
        scopeCurator = 2;
        scopeeditor = 2;
	};
};
class CfgVehicleClasses
{
    class MEU_Sangheili_class
	{
		displayName="Sangheili";
		author="1st MEU Seven";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
};

class CfgVehicles
{
	class SoldierWB;
	class OPTRE_UNSC_Soldier_Base: SoldierWB
	{
		class HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
			class HitLeftArm;
			class HitRightArm;
			class HitLeftLeg;
			class HitRightLeg;
		};
	};
	class MEU_Elite_Undersuit: OPTRE_UNSC_Soldier_Base
	{
		scope=1;
		scopeCurator=0;
		faction="MEU_Covenant";
		side=0;
		author="1st MEU Seven";
		displayName="-";
		vehicleClass="MEU_Sangheili_class";
		uniformAccessories[]={};
		nakedUniform="MEU_Elite_CombatSkin";
		uniformClass="MEU_Elite_CombatSkin";
		impactEffectsNoBlood="ImpactEffectsElite";
		impactEffectsBlood="ImpactEffectsElite";
		genericNames="SangheiliNames";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
		Items[]=
		{
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit"
		};
		magazines[]={};
		respawnMagazines[]={};
		editorSubcategory="MEU_sub_Sangheili";
		model="\OPTRE_FC_Units\Elite\Elite_Undersuit.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"OPTRE_FC_Units\Elite\Data\Elite_Body_CO.paa"
		};
		movesFatigue="CfgMovesFatigueSpartan";
		impactDamageMultiplier=0.035;
		ISanimMod[]={0.050000001,0.079999998,0.059999999};
		attendant=1;
		engineer=1;
		canDeactivateMines=1;
		uavHacker=1;
		detectSkill=70;
		explosionShielding=0.64999998;
		identityTypes[]=
		{
			"Elite01SNG",
			"Elite02SNG",
			"Elite03SNG"
		};
		faceType="Elite";
		class HitPoints: HitPoints
		{
			class HitNeck: HitNeck
			{
				armor=10;
			};
			class HitPelvis: HitPelvis
			{
				armor=16;
			};
			class HitAbdomen: HitAbdomen
			{
				armor=10;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor=10;
			};
			class HitChest: HitChest
			{
				armor=10;
			};
			class HitArms: HitArms
			{
				armor=14;
			};
			class HitHands: HitHands
			{
				armor=14;
			};
			class HitLegs: HitLegs
			{
				armor=14;
			};
			class HitLeftArm: HitLeftArm
			{
				armor=14;
			};
			class HitRightArm: HitRightArm
			{
				armor=14;
			};
			class HitLeftLeg: HitLeftLeg
			{
				armor=14;
			};
			class HitRightLeg: HitRightLeg
			{
				armor=14;
			};
		};
		moves="CfgMovesMaleSevenFoot";
		gestures="CfgGesturesSevenFoot";
		triggerAnim="OPTRE_MJOLNIR\data\anims\anims_f\data\Anim\sdr\trigger.rtm";
	};
	class MEU_Elite_Minor: MEU_Elite_Undersuit
	{
		scope=2;
		scopeCurator=2;
		faceType="Elite";
		author="1st MEU Seven";
		displayName="Minor";
		linkedItems[]=
		{
			"MEU_Elite_Armor_Minor",
			"MEU_Elite_Helmet_Minor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		respawnLinkedItems[]=
		{
			"MEU_Elite_Armor_Minor",
			"MEU_Elite_Helmet_Minor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		weapons[]=
		{
			"OPTRE_FC_T25_Rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_FC_T25_Rifle",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_FC_T25_Rifle_Battery",
			"OPTRE_FC_T25_Rifle_Battery",
			"OPTRE_FC_T25_Rifle_Battery",
			"OPTRE_FC_T25_Rifle_Battery"
		};
		respawnMagazines[]=
		{
			"OPTRE_FC_T25_Rifle_Battery",
			"OPTRE_FC_T25_Rifle_Battery",
			"OPTRE_FC_T25_Rifle_Battery",
			"OPTRE_FC_T25_Rifle_Battery"
		};
	};
	class MEU_Elite_Major: MEU_Elite_Minor
	{
		scope=2;
		scopeCurator=2;
		author="1st MEU Seven";
		displayName="Major";
		linkedItems[]=
		{
			"MEU_Elite_Armor_Major",
			"MEU_Elite_Helmet_Major",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		respawnLinkedItems[]=
		{
			"MEU_Elite_Armor_Major",
			"MEU_Elite_Helmet_Major",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		weapons[]=
		{
			"OPTRE_FC_T51_Repeater",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_FC_T51_Repeater",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_FC_T51_Repeater_Battery",
			"OPTRE_FC_T51_Repeater_Battery",
			"OPTRE_FC_T51_Repeater_Battery",
			"OPTRE_FC_T51_Repeater_Battery"
		};
		respawnMagazines[]=
		{
			"OPTRE_FC_T51_Repeater_Battery",
			"OPTRE_FC_T51_Repeater_Battery",
			"OPTRE_FC_T51_Repeater_Battery",
			"OPTRE_FC_T51_Repeater_Battery"
		};
	};
	class MEU_Elite_Ranger: MEU_Elite_Minor
	{
		scope=2;
		scopeCurator=2;
		author="1st MEU Seven";
		displayName="Ranger(T51 Carbine)";
		linkedItems[]=
		{
			"MEU_Elite_Armor_SpecOps",
			"MEU_Elite_Helmet_SpecOps",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		respawnLinkedItems[]=
		{
			"MEU_Elite_Armor_SpecOps",
			"MEU_Elite_Helmet_SpecOps",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		weapons[]=
		{
			"OPTRE_FC_T51_Carbine",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_FC_T51_Carbine",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge"
		};
		respawnMagazines[]=
		{
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge"
		};
	};
	class MEU_Elite_Sniper: MEU_Elite_Minor
	{
		scope=2;
		scopeCurator=2;
		author="1st MEU Seven";
		displayName="Ranger(T50 Beam)";
		linkedItems[]=
		{
			"MEU_Elite_Armor_SpecOps",
			"MEU_Elite_Helmet_SpecOps",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		respawnLinkedItems[]=
		{
			"MEU_Elite_Armor_SpecOps",
			"MEU_Elite_Helmet_SpecOps",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		weapons[]=
		{
			"OPTRE_FC_T50_SRS",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_FC_T50_SRS",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_FC_T50_SRS_Battery",
			"OPTRE_FC_T50_SRS_Battery",
			"OPTRE_FC_T50_SRS_Battery",
			"OPTRE_FC_T50_SRS_Battery",
			"OPTRE_FC_T50_SRS_Battery"
		};
		respawnMagazines[]=
		{
			"OPTRE_FC_T50_SRS_Battery",
			"OPTRE_FC_T50_SRS_Battery",
			"OPTRE_FC_T50_SRS_Battery",
			"OPTRE_FC_T50_SRS_Battery",
			"OPTRE_FC_T50_SRS_Battery"
		};
	};
	class MEU_Elite_Ultra: MEU_Elite_Minor
	{
		scope=2;
		scopeCurator=2;
		author="1st MEU Seven";
		displayName="Ultra";
		linkedItems[]=
		{
			"MEU_Elite_Armor_Ultra",
			"MEU_Elite_Helmet_Ultra",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		respawnLinkedItems[]=
		{
			"MEU_Elite_Armor_Ultra",
			"MEU_Elite_Helmet_Ultra",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		weapons[]=
		{
			"OPTRE_FC_T51_Carbine",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_FC_T51_Carbine",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge"
		};
		respawnMagazines[]=
		{
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge",
			"OPTRE_FC_T51_Ammo_Cartridge"
		};
	};
	class MEU_Elite_Zealot: MEU_Elite_Ultra
	{
		scope=2;
		scopeCurator=2;
		author="1st MEU Seven";
		displayName="Zealot";
		linkedItems[]=
		{
			"MEU_Elite_Armor_Zealot",
			"MEU_Elite_Helmet_Zealot",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		respawnLinkedItems[]=
		{
			"MEU_Elite_Armor_Zealot",
			"MEU_Elite_Helmet_Zealot",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		weapons[]=
		{
			"OPTRE_FC_T51J_Repeater",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_FC_T51J_Repeater",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery"
		};
		respawnMagazines[]=
		{
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery"
		};
	};
	class MEU_Elite_FieldMarshal: MEU_Elite_Zealot
	{
		scope=2;
		scopeCurator=2;
		author="1st MEU Seven";
		displayName="Field Marshal";
		linkedItems[]=
		{
			"MEU_Elite_Armor_FieldMarshal",
			"MEU_Elite_Helmet_FieldMarshal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		respawnLinkedItems[]=
		{
			"MEU_Elite_Armor_FieldMarshal",
			"MEU_Elite_Helmet_FieldMarshal",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
	};
	class MEU_Elite_HonorGuard: MEU_Elite_Zealot
	{
		scope=2;
		scopeCurator=2;
		author="1st MEU Seven";
		displayName="Honor Guard";
		linkedItems[]=
		{
			"MEU_Elite_Armor_HonorGuard",
			"MEU_Elite_Helmet_HonorGuard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		respawnLinkedItems[]=
		{
			"MEU_Elite_Armor_HonorGuard",
			"MEU_Elite_Helmet_HonorGuard",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		weapons[]=
		{
			"OPTRE_FC_T25J_Rifle",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_FC_T25J_Rifle",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_FC_T25J_Rifle_Battery",
			"OPTRE_FC_T25J_Rifle_Battery",
			"OPTRE_FC_T25J_Rifle_Battery"
		};
		respawnMagazines[]=
		{
			"OPTRE_FC_T25J_Rifle_Battery",
			"OPTRE_FC_T25J_Rifle_Battery",
			"OPTRE_FC_T25J_Rifle_Battery"
		};
	};
	class MEU_Elite_HonorGuard_Ultra: MEU_Elite_Zealot
	{
		scope=2;
		scopeCurator=2;
		author="1st MEU Seven";
		displayName="Honor Guard Ultra";
		editorSubcategory="MEU_sub_Sangheili";
		linkedItems[]=
		{
			"MEU_Elite_Armor_HonorGuard_Ultra",
			"MEU_Elite_Helmet_HonorGuard_Ultra",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		respawnLinkedItems[]=
		{
			"MEU_Elite_Armor_HonorGuard_Ultra",
			"MEU_Elite_Helmet_HonorGuard_Ultra",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"OPTRE_FC_NVG"
		};
		weapons[]=
		{
			"OPTRE_FC_T51J_Repeater",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_FC_T51J_Repeater",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery"
		};
		respawnMagazines[]=
		{
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery",
			"OPTRE_FC_T51J_Repeater_Battery"
		};
	};
};
class cfgWeapons
{
	class U_B_CombatUniform_mcam;
	class UniformItem;
    class ItemInfo;
	class MEU_Elite_CombatSkin: U_B_CombatUniform_mcam
	{
		scope=2;
		scopeArsenal=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Combat Skin";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="MEU_Elite_Undersuit";
			containerClass="Supply300";
			mass=10;
			modelSides[]={6};
		};
	};
	class OPTRE_FC_Elite_Armor_Minor;
    class VestItem;
	class MEU_Elite_Armor_Minor: OPTRE_FC_Elite_Armor_Minor
	{
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Armor (Minor)";
		model="\OPTRE_FC_Units\Elite\Elite_Armor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"A_BraceUltraLeft",
			"A_BraceUltraRight",
			"A_BraceZealotLeft",
			"A_BraceZealotRight",
			"A_BraceHonorGuardLeft",
			"A_BraceHonorGuardRight",
			"A_ChestUltra",
			"A_ChestZealot",
			"A_ChestHonorGuard",
			"A_ShinGuardsUltra",
			"A_ShinGuardsZealot",
			"A_ThighUltraLeft",
			"A_ThighUltraRight",
			"A_ThighZealotLeft",
			"A_ThighZealotRight",
			"A_ThighHonorGuardLeft",
			"A_ThighHonorGuardRight",
			"AS_UltraLeft",
			"AS_UltraRight",
			"AS_ZealotLeft",
			"AS_ZealotRight",
			"AS_HonorGuardLeft",
			"AS_HonorGuardRight",
			"AS_FieldMarshalLeft",
			"AS_FieldMarshalRight"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\minor_body_armor_co.paa",
			"optre_fc_units\elite\data\minor_legs_and_arms_co.paa",
			"optre_fc_units\elite\data\ultra_body_armor_co.paa",
			"optre_fc_units\elite\data\ultra_legs_and_arms_co.paa",
			"optre_fc_units\elite\data\Zealot_body_armor_co.paa",
			"optre_fc_units\elite\data\Zealot_legs_and_arms_co.paa",
			"optre_fc_units\elite\data\Honor_Guard_Legs_and_Arms_Lights_CO.paa",
			"optre_fc_units\elite\data\Field_Marshal_Legs_and_Arms_CO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\OPTRE_FC_Units\Elite\Elite_Armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"A_BraceUltraLeft",
				"A_BraceUltraRight",
				"A_BraceZealotLeft",
				"A_BraceZealotRight",
				"A_BraceHonorGuardLeft",
				"A_BraceHonorGuardRight",
				"A_ChestUltra",
				"A_ChestZealot",
				"A_ChestHonorGuard",
				"A_ShinGuardsUltra",
				"A_ShinGuardsZealot",
				"A_ThighUltraLeft",
				"A_ThighUltraRight",
				"A_ThighZealotLeft",
				"A_ThighZealotRight",
				"A_ThighHonorGuardLeft",
				"A_ThighHonorGuardRight",
				"AS_UltraLeft",
				"AS_UltraRight",
				"AS_ZealotLeft",
				"AS_ZealotRight",
				"AS_HonorGuardLeft",
				"AS_HonorGuardRight",
				"AS_FieldMarshalLeft",
				"AS_FieldMarshalRight"
			};
			containerClass="Supply200";
			mass=65;
			modelSides[]={6};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\minor_body_armor_co.paa",
				"optre_fc_units\elite\data\minor_legs_and_arms_co.paa",
				"optre_fc_units\elite\data\ultra_body_armor_co.paa",
				"optre_fc_units\elite\data\ultra_legs_and_arms_co.paa",
				"optre_fc_units\elite\data\Zealot_body_armor_co.paa",
				"optre_fc_units\elite\data\Zealot_legs_and_arms_co.paa",
				"optre_fc_units\elite\data\Honor_Guard_Legs_and_Arms_Lights_CO.paa",
				"optre_fc_units\elite\data\Field_Marshal_Legs_and_Arms_CO.paa"
			};
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=30;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=30;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=30;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=30;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=30;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=30;
					passThrough=0.1;
				};
			};
		};
	};
	class MEU_Elite_Armor_Major: MEU_Elite_Armor_Minor
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Armor (Major)";
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\major_body_armor_co.paa",
			"optre_fc_units\elite\data\major_legs_and_arms_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\major_body_armor_co.paa",
				"optre_fc_units\elite\data\major_legs_and_arms_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName="HitArms";
					armor=40;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=40;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=40;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=40;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=40;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=40;
					passThrough=0.1;
				};
			};
		};
	};
	class MEU_Elite_Armor_SpecOps: MEU_Elite_Armor_Major
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Armor (Ranger)";
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\SpecOps_body_armor_co.paa",
			"optre_fc_units\elite\data\SpecOps_legs_and_arms_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\SpecOps_body_armor_co.paa",
				"optre_fc_units\elite\data\SpecOps_legs_and_arms_co.paa"
			};
		};
	};
	class MEU_Elite_Armor_Ultra: MEU_Elite_Armor_Minor
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Armor (Ultra)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"A_BraceMinorLeft",
			"A_BraceMinorRight",
			"A_BraceZealotLeft",
			"A_BraceZealotRight",
			"A_BraceHonorGuardLeft",
			"A_BraceHonorGuardRight",
			"A_ChestMinor",
			"A_ChestZealot",
			"A_ChestHonorGuard",
			"A_ShinGuardsMinor",
			"A_ShinGuardsZealot",
			"A_ThighMinorLeft",
			"A_ThighMinorRight",
			"A_ThighZealotLeft",
			"A_ThighZealotRight",
			"A_ThighHonorGuardLeft",
			"A_ThighHonorGuardRight",
			"AS_MinorLeft",
			"AS_MinorRight",
			"AS_ZealotLeft",
			"AS_ZealotRight",
			"AS_HonorGuardLeft",
			"AS_HonorGuardRight",
			"AS_FieldMarshalLeft",
			"AS_FieldMarshalRight"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"A_BraceMinorLeft",
				"A_BraceMinorRight",
				"A_BraceZealotLeft",
				"A_BraceZealotRight",
				"A_BraceHonorGuardLeft",
				"A_BraceHonorGuardRight",
				"A_ChestMinor",
				"A_ChestZealot",
				"A_ChestHonorGuard",
				"A_ShinGuardsMinor",
				"A_ShinGuardsZealot",
				"A_ThighMinorLeft",
				"A_ThighMinorRight",
				"A_ThighZealotLeft",
				"A_ThighZealotRight",
				"A_ThighHonorGuardLeft",
				"A_ThighHonorGuardRight",
				"AS_MinorLeft",
				"AS_MinorRight",
				"AS_ZealotLeft",
				"AS_ZealotRight",
				"AS_HonorGuardLeft",
				"AS_HonorGuardRight",
				"AS_FieldMarshalLeft",
				"AS_FieldMarshalRight"
			};
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName="HitArms";
					armor=60;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=60;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=60;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=60;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=60;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=60;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=60;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=60;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=60;
					passThrough=0.1;
				};
			};
		};
	};
	class MEU_Elite_Armor_Zealot: MEU_Elite_Armor_Ultra
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Armor (Zealot)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"A_BraceMinorLeft",
			"A_BraceMinorRight",
			"A_BraceUltraLeft",
			"A_BraceUltraRight",
			"A_BraceHonorGuardLeft",
			"A_BraceHonorGuardRight",
			"A_ChestMinor",
			"A_ChestUltra",
			"A_ChestHonorGuard",
			"A_ShinGuardsMinor",
			"A_ShinGuardsUltra",
			"A_ThighMinorLeft",
			"A_ThighMinorRight",
			"A_ThighUltraLeft",
			"A_ThighUltraRight",
			"A_ThighHonorGuardLeft",
			"A_ThighHonorGuardRight",
			"AS_MinorLeft",
			"AS_MinorRight",
			"AS_UltraLeft",
			"AS_UltraRight",
			"AS_HonorGuardLeft",
			"AS_HonorGuardRight",
			"AS_FieldMarshalLeft",
			"AS_FieldMarshalRight"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"A_BraceMinorLeft",
				"A_BraceMinorRight",
				"A_BraceUltraLeft",
				"A_BraceUltraRight",
				"A_BraceHonorGuardLeft",
				"A_BraceHonorGuardRight",
				"A_ChestMinor",
				"A_ChestUltra",
				"A_ChestHonorGuard",
				"A_ShinGuardsMinor",
				"A_ShinGuardsUltra",
				"A_ThighMinorLeft",
				"A_ThighMinorRight",
				"A_ThighUltraLeft",
				"A_ThighUltraRight",
				"A_ThighHonorGuardLeft",
				"A_ThighHonorGuardRight",
				"AS_MinorLeft",
				"AS_MinorRight",
				"AS_UltraLeft",
				"AS_UltraRight",
				"AS_HonorGuardLeft",
				"AS_HonorGuardRight",
				"AS_FieldMarshalLeft",
				"AS_FieldMarshalRight"
			};
		};
	};
	class MEU_Elite_Armor_FieldMarshal: MEU_Elite_Armor_Ultra
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Armor (Field Marshal)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"A_BraceMinorLeft",
			"A_BraceMinorRight",
			"A_BraceUltraLeft",
			"A_BraceUltraRight",
			"A_BraceHonorGuardLeft",
			"A_BraceHonorGuardRight",
			"A_ChestMinor",
			"A_ChestUltra",
			"A_ChestHonorGuard",
			"A_ShinGuardsMinor",
			"A_ShinGuardsUltra",
			"A_ThighMinorLeft",
			"A_ThighMinorRight",
			"A_ThighUltraLeft",
			"A_ThighUltraRight",
			"A_ThighHonorGuardLeft",
			"A_ThighHonorGuardRight",
			"AS_MinorLeft",
			"AS_MinorRight",
			"AS_UltraLeft",
			"AS_UltraRight",
			"AS_ZealotLeft",
			"AS_ZealotRight",
			"AS_HonorGuardLeft",
			"AS_HonorGuardRight"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"A_BraceMinorLeft",
				"A_BraceMinorRight",
				"A_BraceUltraLeft",
				"A_BraceUltraRight",
				"A_BraceHonorGuardLeft",
				"A_BraceHonorGuardRight",
				"A_ChestMinor",
				"A_ChestUltra",
				"A_ChestHonorGuard",
				"A_ShinGuardsMinor",
				"A_ShinGuardsUltra",
				"A_ThighMinorLeft",
				"A_ThighMinorRight",
				"A_ThighUltraLeft",
				"A_ThighUltraRight",
				"A_ThighHonorGuardLeft",
				"A_ThighHonorGuardRight",
				"AS_MinorLeft",
				"AS_MinorRight",
				"AS_UltraLeft",
				"AS_UltraRight",
				"AS_ZealotLeft",
				"AS_ZealotRight",
				"AS_HonorGuardLeft",
				"AS_HonorGuardRight"
			};
		};
	};
	class MEU_Elite_Armor_HonorGuard: MEU_Elite_Armor_Zealot
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Armor (Honor Guard)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"A_BraceMinorLeft",
			"A_BraceMinorRight",
			"A_BraceUltraLeft",
			"A_BraceUltraRight",
			"A_ChestMinor",
			"A_ChestUltra",
			"A_ShinGuardsMinor",
			"A_ShinGuardsUltra",
			"A_ThighMinorLeft",
			"A_ThighMinorRight",
			"A_ThighUltraLeft",
			"A_ThighUltraRight",
			"AS_MinorLeft",
			"AS_MinorRight",
			"AS_UltraLeft",
			"AS_UltraRight",
			"AS_FieldMarshalLeft",
			"AS_FieldMarshalRight"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\minor_body_armor_co.paa",
			"optre_fc_units\elite\data\minor_legs_and_arms_co.paa",
			"optre_fc_units\elite\data\ultra_body_armor_co.paa",
			"optre_fc_units\elite\data\ultra_legs_and_arms_co.paa",
			"optre_fc_units\elite\data\Honor_Guard_body_armor_co.paa",
			"optre_fc_units\elite\data\Honor_Guard_Legs_co.paa",
			"optre_fc_units\elite\data\Honor_Guard_Legs_and_Arms_Lights_CO.paa",
			"optre_fc_units\elite\data\Field_Marshal_Legs_and_Arms_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"A_BraceMinorLeft",
				"A_BraceMinorRight",
				"A_BraceUltraLeft",
				"A_BraceUltraRight",
				"A_ChestMinor",
				"A_ChestUltra",
				"A_ShinGuardsMinor",
				"A_ShinGuardsUltra",
				"A_ThighMinorLeft",
				"A_ThighMinorRight",
				"A_ThighUltraLeft",
				"A_ThighUltraRight",
				"AS_MinorLeft",
				"AS_MinorRight",
				"AS_UltraLeft",
				"AS_UltraRight",
				"AS_FieldMarshalLeft",
				"AS_FieldMarshalRight"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\minor_body_armor_co.paa",
				"optre_fc_units\elite\data\minor_legs_and_arms_co.paa",
				"optre_fc_units\elite\data\ultra_body_armor_co.paa",
				"optre_fc_units\elite\data\ultra_legs_and_arms_co.paa",
				"optre_fc_units\elite\data\Honor_Guard_body_armor_co.paa",
				"optre_fc_units\elite\data\Honor_Guard_Legs_co.paa",
				"optre_fc_units\elite\data\Honor_Guard_Legs_and_Arms_Lights_CO.paa",
				"optre_fc_units\elite\data\Field_Marshal_Legs_and_Arms_CO.paa"
			};
		};
	};
	class MEU_Elite_Armor_HonorGuard_Ultra: MEU_Elite_Armor_Zealot
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Armor (Honor Guard Ultra)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"A_BraceMinorLeft",
			"A_BraceMinorRight",
			"A_BraceUltraLeft",
			"A_BraceUltraRight",
			"A_ChestMinor",
			"A_ChestZealot",
			"A_ShinGuardsMinor",
			"A_ShinGuardsUltra",
			"A_ThighMinorLeft",
			"A_ThighMinorRight",
			"A_ThighUltraLeft",
			"A_ThighUltraRight",
			"AS_MinorLeft",
			"AS_MinorRight",
			"AS_UltraLeft",
			"AS_UltraRight",
			"AS_FieldMarshalLeft",
			"AS_FieldMarshalRight"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\minor_body_armor_co.paa",
			"optre_fc_units\elite\data\minor_legs_and_arms_co.paa",
			"optre_fc_units\elite\data\vespade_body_armor_co.paa",
			"optre_fc_units\elite\data\ultra_legs_and_arms_co.paa",
			"optre_fc_units\elite\data\Ultra_Zealot_body_armor_co.paa",
			"optre_fc_units\elite\data\Ultra_Zealot_Legs_and_Arms_co.paa",
			"optre_fc_units\elite\data\Honor_Guard_Legs_and_Arms_Lights_CO.paa",
			"optre_fc_units\elite\data\Ultra_Field_Marshal_Legs_and_Arms_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"camo6",
				"camo7",
				"camo8",
				"A_BraceMinorLeft",
				"A_BraceMinorRight",
				"A_BraceUltraLeft",
				"A_BraceUltraRight",
				"A_ChestMinor",
				"A_ChestZealot",
				"A_ShinGuardsMinor",
				"A_ShinGuardsUltra",
				"A_ThighMinorLeft",
				"A_ThighMinorRight",
				"A_ThighUltraLeft",
				"A_ThighUltraRight",
				"AS_MinorLeft",
				"AS_MinorRight",
				"AS_UltraLeft",
				"AS_UltraRight",
				"AS_FieldMarshalLeft",
				"AS_FieldMarshalRight"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\minor_body_armor_co.paa",
				"optre_fc_units\elite\data\minor_legs_and_arms_co.paa",
				"optre_fc_units\elite\data\vespade_body_armor_co.paa",
				"optre_fc_units\elite\data\ultra_legs_and_arms_co.paa",
				"optre_fc_units\elite\data\Ultra_Zealot_body_armor_co.paa",
				"optre_fc_units\elite\data\Ultra_Zealot_Legs_and_Arms_co.paa",
				"optre_fc_units\elite\data\Honor_Guard_Legs_and_Arms_Lights_CO.paa",
				"optre_fc_units\elite\data\Ultra_Field_Marshal_Legs_and_Arms_CO.paa"
			};
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName="HitArms";
					armor=80;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=80;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=80;
					passThrough=0.1;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=80;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=80;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=80;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.1;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=80;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=80;
					passThrough=0.1;
				};
			};
		};
	};
	class H_HelmetB;
    class HeadgearItem;
	class MEU_Elite_Helmet_Minor: H_HelmetB
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Helmet (Minor)";
		model="\OPTRE_FC_Units\Elite\Minor_Helmet.p3d";
		picture="\OPTRE_FC_Units\Elite\data\Elite_Minor_Helmet_i_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\minor_helmet_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\OPTRE_FC_Units\Elite\Minor_Helmet.p3d";
			mass=30;
			modelSides[]={6};
			passThrough=0.15000001;
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\minor_helmet_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
			};
		};
	};
	class MEU_Elite_Helmet_Major: MEU_Elite_Helmet_Minor
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Helmet (Major)";
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\major_helmet_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\major_helmet_co.paa"
			};
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
			};
		};
	};
	class MEU_Elite_Helmet_SpecOps: MEU_Elite_Helmet_Major
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Helmet (SpecOps)";
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\SpecOps_helmet_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\SpecOps_helmet_co.paa"
			};
		};
	};
	class MEU_Elite_Helmet_Ultra: MEU_Elite_Helmet_Minor
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Helmet (Ultra)";
		model="\OPTRE_FC_Units\Elite\Ultra_Helmet.p3d";
		picture="\OPTRE_FC_Units\Elite\data\Elite_Ultra_Helmet_i_CA.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"HonorGuard"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\Ultra_helmet_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_FC_Units\Elite\Ultra_Helmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"HonorGuard"
			};
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
			};
		};
	};
	class MEU_Elite_Helmet_Zealot: MEU_Elite_Helmet_Ultra
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Helmet (Zealot)";
		model="\OPTRE_FC_Units\Elite\Zealot_Helmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"HonorGuard",
			"FieldMarshal"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\zealot_helmet_co.paa",
			"optre_fc_units\elite\data\honor_guard_helmet_co.paa",
			"optre_fc_units\elite\data\honor_guard_helmet_lights_co.paa",
			"optre_fc_units\elite\data\field_marshal_helmet_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_FC_Units\Elite\Zealot_Helmet.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"HonorGuard",
				"FieldMarshal"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\zealot_helmet_co.paa",
				"optre_fc_units\elite\data\honor_guard_helmet_co.paa",
				"optre_fc_units\elite\data\honor_guard_helmet_lights_co.paa",
				"optre_fc_units\elite\data\field_marshal_helmet_co.paa"
			};
		};
	};
	class MEU_Elite_Helmet_FieldMarshal: MEU_Elite_Helmet_Zealot
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Helmet (Field Marshal)";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"Zealot",
			"HonorGuard"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"Zealot",
				"HonorGuard"
			};
		};
	};
	class MEU_Elite_Helmet_HonorGuard: MEU_Elite_Helmet_Zealot
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Helmet (Honor Guard)";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"Zealot"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\honor_guard_helmet_2_co.paa",
			"optre_fc_units\elite\data\honor_guard_helmet_co.paa",
			"optre_fc_units\elite\data\honor_guard_helmet_lights_co.paa",
			"optre_fc_units\elite\data\field_marshal_helmet_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"Zealot"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\honor_guard_helmet_2_co.paa",
				"optre_fc_units\elite\data\honor_guard_helmet_co.paa",
				"optre_fc_units\elite\data\honor_guard_helmet_lights_co.paa",
				"optre_fc_units\elite\data\field_marshal_helmet_co.paa"
			};
		};
	};
	class MEU_Elite_Helmet_HonorGuard_Ultra: MEU_Elite_Helmet_Ultra
	{
		
		scope=2;
		author="1st MEU Seven";
		displayName="[1stMEU]Sangheili Helmet (Honor Guard Ultra)";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"Ultra"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_fc_units\elite\data\vespade_helmet_co.paa",
			"optre_fc_units\elite\data\vespade_helmet_lights_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"optre_fc_units\elite\data\vespade_helmet_lights.rvmat"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"Ultra"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_fc_units\elite\data\vespade_helmet_co.paa",
				"optre_fc_units\elite\data\vespade_helmet_lights_co.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"",
				"optre_fc_units\elite\data\vespade_helmet_lights.rvmat"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=40;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=40;
					passThrough=0.1;
				};
			};
		};
	};
};
class CfgGroups
{
	class East
	{
		name = "$STR_A3_CfgGroups_East0";
		side = 0;
        class MEU_Sangheili_Spacer
        {
            name = "1st MEU Covenant";
            class MEU_Sangheili_groups
            {
                name = "Sangheili";
                class MEU_Sangheili_team
                {
                    name = "Team";
                    side = 0;
                    faction = "MEU_Covenant";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Major";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0,-2,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0,-3,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0,-4,0};
                    };
                    
                };
                class MEU_Sangheili_squad
                {
                    name = "Squad";
                    side = 0;
                    faction = "MEU_Covenant";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Ultra";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Major";
                        rank = "CORPORAL";
                        position[] = {0.5,-1,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Major";
                        rank = "CORPORAL";
                        position[] = {-0.5,-1,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0.5,-2,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {-0.5,-2,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0.5,-3,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {-0.5,-3,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";      
                        position[] = {0.5,-4,0};
                    };
                    class Unit8
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {-0.5,-4,0};
                    };
                    class Unit9
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0.5,-5,0};
                    };
                    class Unit10
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {-0.5,-5,0};
                    };
                    class Unit11
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Ranger";
                        rank = "CORPORAL";
                        position[] = {0,-6,0};
                    };
                };
                
                class MEU_Sangheili_Zealot_striketeam
                {
                    name = "Zealot Strike Team";
                    side = 0;
                    faction = "MEU_Covenant";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "MEU_Elite_FieldMarshal";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Zealot";
                        rank = "SERGEANT";
                        position[] = {0,-1,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Zealot";
                        rank = "SERGEANT";
                        position[] = {0,-2,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Zealot";
                        rank = "SERGEANT";
                        position[] = {0,-3,0};
                    };
                };
                class MEU_Sangheili_sentry_minor
                {
                    name = "Sentry(Minor)";
                    side = 0;
                    faction = "MEU_Covenant";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Minor";
                        rank = "PRIVATE";
                        position[] = {0,-1,0};
                    };
                };
                class MEU_Sangheili_sentry_ranger
                {
                    name = "Sentry(Ranger)";
                    side = 0;
                    faction = "MEU_Covenant";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Sniper";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "MEU_Elite_Ranger";
                        rank = "CORPORAL";
                        position[] = {0,-1,0};
                    };
                };
            };
            class MEU_covAir_groups
            {
                name = "Air";
                class MEU_air_transport
                {
                    name = "Transport w/ Escorts";
                    side = 0;
                    faction = "MEU_Covenant";
                    class Unit0
                    {
                        side = 0;
                        vehicle = "OPTRE_FC_Spirit";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "OPTRE_FC_Type26B_Banshee";
                        rank = "CORPORAL";
                        position[] = {15,-10,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "OPTRE_FC_Type26B_Banshee";
                        rank = "CORPORAL";
                        position[] = {-15,-10,0};
                    };
                };
            };
        };
    };
};