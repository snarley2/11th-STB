_ammo = _this select 6;
sleep 1;
_ammopos = getpos _ammo;
_CS = createVehicle ["CS_Grenade", _ammopos, [], 0, "CAN_COLLIDE"];

private _projectile = _ammo createVehicle [0,0,0];
_projectile setPosATL _pos;
_projectile setVelocity [0,0,0];
_projectile call CBRN_fnc_handleProjectile;

[{isNull (_this # 0)}, {deleteVehicle (_this # 1)}, [_projectile, _logic]] call CBA_fnc_waitUntilAndExecute;