class Extended_InitPost_EventHandlers
{
	class OPTRE_SupplyPod_VehicleRepair 
	{
		class OPTRE_SupplyPod_VehicleRepair_initpost_eh
		{
			serverInit = "[_this # 0, 8, 'ACE_Wheel'] call ace_repair_fnc_addSpareParts";//"['ACE_Wheel', _this] call ace_cargo_fnc_loadItem";//"systemChat str _this"; //"[_this, 8, 'ACE_Wheel'] call ace_repair_fnc_addSpareParts";
		};
	};
	class OPTRE_SupplyPod_TrackedVehicleRepair 
	{
		class OPTRE_SupplyPod_VehicleRepair_initpost_eh
		{
			serverInit = "[_this # 0, 8, 'ACE_Track'] call ace_repair_fnc_addSpareParts";//"['ACE_Wheel', _this] call ace_cargo_fnc_loadItem";//"systemChat str _this"; //"[_this, 8, 'ACE_Wheel'] call ace_repair_fnc_addSpareParts";
		};
	};
	class OPTRE_SupplyPod_VehicleRefuel
	{
		class OPTRE_SupplyPod_VehicleRefuel_initpost_eh
		{
			serverInit = "[_this # 0, 500] call ace_refuel_fnc_makeJerryCan";
		};
	};
};