params [
	["_hev", objNull, [objNull]],
	["_velocity", [0, 0, 0], [[1]]]
];

if (MEU_HEV_Thruster_Limit) then
{
	private _thrusterUses = _hev getVariable ["MEU_HEV_thrusterUses", MEU_HEV_Thruster_Uses];

	if (_thrusterUses == 0) exitWith
	{
		hint "<t color='#FF0000'>No thruster fuel remaining</t>";
	};

	_hev setVariable ["MEU_HEV_thrusterUses", _thrusterUses - 1, false];
};

private _currentVelocity = velocityModelSpace _hev;

_hev setVelocityModelSpace [
	[((_currentVelocity # 0) + (_velocity # 0)), -MEU_HEV_Thruster_Max_Velocity, MEU_HEV_Thruster_Max_Velocity] call BIS_fnc_clamp,
	[((_currentVelocity # 1) + (_velocity # 1)), -MEU_HEV_Thruster_Max_Velocity, MEU_HEV_Thruster_Max_Velocity] call BIS_fnc_clamp,
	((_currentVelocity # 2) + (_velocity # 2))
];
