class ACE_Medical_Injuries
{
	class wounds
	{
		class plasma
		{
			name = "Plasma Burn";
			selections[] = {"All"};
			causes[] = {"plasma"};
			bleeding = 0.06;
			pain = 1.2;
			minDamage = 0.01;
			causeLimping = 1;
			causeFracture = 0;
		};
		class Contusion
		{
			causes[] = {"bullet","backblast","punch","vehiclecrash","collision","falling","plasma"};
			bleeding = 0;
			pain = 0.3;
			minDamage = 0.02;
			maxDamage = 0.35;
		};
	};
	class damageTypes
	{
		class plasma
		{
			thresholds[] = {{0.01,1}};
			selectionSpecific = 0;
		};
	};
};	