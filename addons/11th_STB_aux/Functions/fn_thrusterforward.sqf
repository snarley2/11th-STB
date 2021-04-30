_droppod = _this;
_vel = velocity _droppod;
_dir = direction _droppod;
_speed = 10;
_droppod setVelocity [
	(_vel select 0), 
	(_vel select 1) - (_speed), 
	(_vel select 2)
];