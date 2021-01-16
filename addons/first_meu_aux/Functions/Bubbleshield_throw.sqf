_ammo = _this select 6;
sleep 5;
_ammopos = getpos _ammo;
_bubble = createVehicle ["OPTRE_FC_Energy_Shield", _ammopos, [], 0, "CAN_COLLIDE"];
sleep 180;
_bubble = deleteVehicle _bubble;