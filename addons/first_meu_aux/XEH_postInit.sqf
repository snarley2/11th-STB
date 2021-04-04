[
	"ace_throwableThrown",
	{
		params ["_unit", "_throwable"];

		if ((typeOf _throwable) isEqualTo "MEU_Bubbleshield_Ammo") then
		{
			_throwable call MEU_fnc_Bubbleshield_throw;
		};
	}
] call CBA_fnc_addEventHandler;
