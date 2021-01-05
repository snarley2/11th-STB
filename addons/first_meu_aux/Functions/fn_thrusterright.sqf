_vel = velocity _this;
_dir = direction _this;
_speed = 10;
_this setVelocity [
	(_vel select 0) + (_speed), 
	(_vel select 1), 
	(_vel select 2)
];