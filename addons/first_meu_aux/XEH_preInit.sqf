[
	"MEU_HEV_Explosion_Enabled",
	"CHECKBOX",
	"Explosion Enabled",
	["1st MEU Aux Mod", "HEV"],
	false,
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Explosion_Class",
	"EDITBOX",
	"Explosion Class",
	["1st MEU Aux Mod", "HEV"],
	"MEU_HEV_Landing_Explosive",
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Explosion_Simulation_Delay",
	"SLIDER",
	["Explosion Simulation Delay", "Time after explosion to re-enable simulation on HEV"],
	["1st MEU Aux Mod", "HEV"],
	[0, 5, 0.5, 1],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Chute_Velocity",
	"SLIDER",
	["Chute Velocity", "Vertical velocity of HEV when chute is deployed (positive values will move upwards)"],
	["1st MEU Aux Mod", "HEV"],
	[-50, 50, 0, 0],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Eject_Delay",
	"SLIDER",
	"Eject Delay",
	["1st MEU Aux Mod", "HEV"],
	[0, 5, 0, 1],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Eject_Distance",
	"SLIDER",
	"Eject Distance",
	["1st MEU Aux Mod", "HEV"],
	[1, 5, 3, 1],
	true
] call CBA_fnc_addSetting;

[
	"MEU_HEV_Landed_Altitude",
	"SLIDER",
	["Landed Altitude", "Lower than this altitude will be considered landed"],
	["1st MEU Aux Mod", "HEV"],
	[0, 5, 1, 1],
	true
] call CBA_fnc_addSetting;
