class ACE_Medical_Treatment
{
    class Morphine;
    class PlasmaIV;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;
    
    class Medication
    {
		painReduce = 0;
		hrIncreaseLow[] = {0,0};
		hrIncreaseNormal[] = {0,0};
		hrIncreaseHigh[] = {0,0};
		timeInSystem = 120;
		timeTillMaxEffect = 30;
		maxDose = 4;
		onOverDose = "";
		viscosityChange = 0;
        class MEU_compat_Ibuprofen : Morphine
        {
            painReduce = 0.4;
            hrIncreaseLow[] = {0};
            hrIncreaseNormal[] = {0};
            hrIncreaseHigh[] = {0};
            timeInSystem = 3000;
            timeTillMaxEffect = 120;
            maxDose = 12;
            incompatibleMedication[] = {};
            viscosityChange = -1;
        };
		class ACE_Banana : Morphine
        {
            painReduce = 0.0;
            hrIncreaseLow[] = {+9000,+9000};
            hrIncreaseNormal[] = {+9000,+9000};
            hrIncreaseHigh[] = {+9000,+9000};
            timeInSystem = 60;
            timeTillMaxEffect = 1;
            maxDose = 0.1;
            incompatibleMedication[] = {};
            viscosityChange = -1000;
        };
    };
    class IV 
    {
        class MEU_PlasmaIV : PlasmaIV
        {
            volume = 2500;
        };
    };
    class Bandaging 
    {
        class MEU_Biofoam: OPTRE_Biofoam
        {
            class Abrasion {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 240;
                reopeningMaxDelay = 480;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 0.5;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 0.5;
            };

            class Avulsions: Abrasion {
                effectiveness = 4;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 420;
            };
            class AvulsionsMinor: Avulsions {
                effectiveness = 3;
            };
            class AvulsionsMedium: Avulsions {
                effectiveness = 2;
            };
            class AvulsionsLarge: Avulsions {
                effectiveness = 2;
            };

            class Contusion: Abrasion {
                effectiveness = 0;
                reopeningChance = 1;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            class Crush: Abrasion {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {
            };
            class CrushMedium: Crush {
                effectiveness = 1.5;
            };
            class CrushLarge: Crush {
                effectiveness = 1;
            };

            class Cut: Abrasion {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 480;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 0.5;
            };
            class CutLarge: Cut {
                effectiveness = 0.5;
            };

            class Laceration: Abrasion {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 720;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {
                effectiveness = 0.5;
            };
            class LacerationLarge: Laceration {
                effectiveness = 0.5;
            };

            class velocityWound: Abrasion {
                effectiveness = 4;
                reopeningChance = 1;
                reopeningMinDelay = 900;
                reopeningMaxDelay = 1200;
            };
            class velocityWoundMinor: velocityWound {};
            class velocityWoundMedium: velocityWound {
                effectiveness = 3;
            };
            class velocityWoundLarge: velocityWound {
                effectiveness = 2;
            };

            class punctureWound: Abrasion {
                effectiveness = 5;
                reopeningChance = 1;
                reopeningMinDelay = 900;
                reopeningMaxDelay = 3000;
            };
            class punctureWoundMinor: punctureWound {};
            class punctureWoundMedium: punctureWound {
                effectiveness = 4;
            };
            class punctureWoundLarge: punctureWound {
                effectiveness = 3;
            };
        };
        class MEU_Medigel: OPTRE_Medigel
         {
            class Abrasion {
                effectiveness = 6;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 5;
                reopeningChance = 1;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 3;
                reopeningChance = 1;
            };

            class Avulsions: Abrasion {
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class AvulsionsMinor: Avulsions {
                effectiveness = 2;
            };
            class AvulsionsMedium: Avulsions {
                effectiveness = 1.5;
            };
            class AvulsionsLarge: Avulsions {
                effectiveness = 1;
                reopeningChance = 1;
            };

            class Contusion: Abrasion {
                effectiveness = 2.5;
                reopeningChance = 1;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {
                effectiveness = 2;
            };

            class Crush: Abrasion {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class CrushMinor: Crush {
                reopeningChance = 1;
            };
            class CrushMedium: Crush {
                effectiveness = 1.5;
            };
            class CrushLarge: Crush {
                effectiveness = 1;
                reopeningChance = 1;
            };

            class Cut: Abrasion {
                effectiveness = 6;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 5;
                reopeningChance = 1;
            };
            class CutLarge: Cut {
                effectiveness = 3;
                reopeningChance = 1;
            };

            class Laceration: Abrasion {
                effectiveness = 4;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 900;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {
                effectiveness = 3;
            };
            class LacerationLarge: Laceration {
                effectiveness = 2;
                reopeningChance = 1;
            };

            class velocityWound: Abrasion {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 180;
            };
            class velocityWoundMinor: velocityWound {};
            class velocityWoundMedium: velocityWound {
                effectiveness = 0.5;
            };
            class velocityWoundLarge: velocityWound {
                effectiveness = 0.25;
            };

            class punctureWound: Abrasion {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 180;
            };
            class punctureWoundMinor: punctureWound {};
            class punctureWoundMedium: punctureWound {
                effectiveness = 1;
            };
            class punctureWoundLarge: punctureWound {
                effectiveness = 0.5;
            };
        };
    };
};