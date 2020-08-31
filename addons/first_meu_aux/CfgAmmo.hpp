class CfgAmmo
{
	class ammo_Missile_CruiseBase;
	class Optre_ammo_Missile_Cruise_01: ammo_Missile_CruiseBase
	{
		cameraViewAvailable = 1;
		model = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		proxyShape = "\A3\Weapons_F_Destroyer\Ammo\Missile_Cruise_01_Fly_F";
		flightProfiles[] = {"TopDown"};
		class TopDown
		{
			ascendHeight = 1600;
			descendDistance = 3200;
			minDistance = 800;
			ascendAngle = 20;
		};
	};
};