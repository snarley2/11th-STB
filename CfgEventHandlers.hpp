class Extended_InitPost_EventHandlers
{
	class OPTRE_SupplyPod_VehicleRepair 
	{
		class OPTRE_SupplyPod_VehicleRepair_initpost_eh
		{
			serverInit = "[_this # 0, 8, 'ACE_Wheel'] call ace_repair_fnc_addSpareParts";
		};
	};
	class OPTRE_SupplyPod_TrackedVehicleRepair 
	{
		class OPTRE_SupplyPod_TrackedVehicleRepair_initpost_eh
		{
			serverInit = "[_this # 0, 8, 'ACE_Track'] call ace_repair_fnc_addSpareParts";
		};
	};
	class OPTRE_SupplyPod_VehicleRefuel
	{
		class OPTRE_SupplyPod_VehicleRefuel_initpost_eh
		{
			serverInit = "[_this # 0, 500] call ace_refuel_fnc_makeJerryCan";
		};
	};
	class B_APC_Tracked_01_CRV_F
	{
		class B_APC_Tracked_01_CRV_F_initpost_eh
		{
			serverInit = "[_this # 0, 4, 'ACE_Wheel'] call ace_repair_fnc_addSpareParts;[_this # 0, 2, 'ACE_Track'] call ace_repair_fnc_addSpareParts";
		};
	};
	class B_T_APC_Tracked_01_CRV_F
	{
		class B_T_APC_Tracked_01_CRV_F_initpost_eh
		{
			serverInit = "[_this # 0, 4, 'ACE_Wheel'] call ace_repair_fnc_addSpareParts;[_this # 0, 2, 'ACE_Track'] call ace_repair_fnc_addSpareParts";
		};
	};
};
