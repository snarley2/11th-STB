[
	"MEU_HEV_Explosion_Enabled",
	"CHECKBOX",
	"Enabled",
	["1st MEU Aux Mod", "HEV Explosion"],
	false,
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Explosion_Class",
	"EDITBOX",
	"Class",
	["1st MEU Aux Mod", "HEV Explosion"],
	"MEU_HEV_Landing_Explosive",
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Explosion_Simulation_Delay",
	"SLIDER",
	["Simulation delay", "Time after explosion to re-enable simulation on HEV"],
	["1st MEU Aux Mod", "HEV Explosion"],
	[0, 5, 0.5, 1],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Thruster_Velocity",
	"SLIDER",
	["Velocity", "Velocity of adjustment thrusters"],
	["1st MEU Aux Mod", "HEV Thrusters"],
	[0, 50, 5, 0],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Thruster_Max_Velocity",
	"SLIDER",
	["Maximum velocity", "Maximum velocity of adjustment thrusters"],
	["1st MEU Aux Mod", "HEV Thrusters"],
	[0, 500, 20, 0],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Thruster_Limit",
	"CHECKBOX",
	["Limit uses", "Limit number of thruster uses"],
	["1st MEU Aux Mod", "HEV Thrusters"],
	false,
	true
] call CBA_fnc_addSetting;
[
	"MEU_HEV_Thruster_Uses",
	"SLIDER",
	"Number of uses",
	["1st MEU Aux Mod", "HEV Thrusters"],
	[0, 50, 5, 0],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Thruster_Min_Height",
	"SLIDER",
	["Minimum height", "Minimum height at which thrusters can be used"],
	["1st MEU Aux Mod", "HEV Thrusters"],
	[0, 5000, 500, 0],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Chute_Velocity",
	"SLIDER",
	["Chute velocity", "Vertical velocity of HEV when chute is deployed (positive values will move upwards)"],
	["1st MEU Aux Mod", "HEV"],
	[-50, 50, 0, 0],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Eject_Delay",
	"SLIDER",
	"Eject delay",
	["1st MEU Aux Mod", "HEV"],
	[0, 5, 0, 1],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Eject_Distance",
	"SLIDER",
	"Eject distance",
	["1st MEU Aux Mod", "HEV"],
	[1, 5, 3, 1],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Landed_Altitude",
	"SLIDER",
	["Landed altitude", "Lower than this altitude will be considered landed"],
	["1st MEU Aux Mod", "HEV"],
	[0, 5, 1, 1],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Start_Heights",
	"EDITBOX",
	"Start heights",
	["1st MEU Aux Mod", "HEV Drop Parameters"],
	"5000,4500,4000",
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Atmosphere_Start",
	"EDITBOX",
	"Atmosphere start height",
	["1st MEU Aux Mod", "HEV Drop Parameters"],
	"3000",
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Atmosphere_End",
	"EDITBOX",
	"Atmosphere end height",
	["1st MEU Aux Mod", "HEV Drop Parameters"],
	"2000",
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Chute_Open",
	"EDITBOX",
	"Chute open height",
	["1st MEU Aux Mod", "HEV Drop Parameters"],
	"1000,500,300",
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Chute_Detach",
	"EDITBOX",
	"Chute detach height",
	["1st MEU Aux Mod", "HEV Drop Parameters"],
	"500,200,100",
	true
] call CBA_fnc_addSetting;
