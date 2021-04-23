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
      /*  class Atropine : MEU_compat_Ibuprofen
        {};*/
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
		class MEU_Emergency_MedKit : MEU_compat_Ibuprofen
		{
		};
    };
    class IV 
    {
        class MEU_PlasmaIV : PlasmaIV
        {
            volume = 2500;
        };
		class MEU_Emergency_MedKit : PlasmaIV
        {
            volume = 2500;
        };
    };
    class Bandaging 
    {
		class Ace_packingbandage
		{
			class plasma
			{
				effectiveness = 0;
			};
			class plasmaMinor: plasma
			{
				effectiveness = 0;
			};
			class plasmaMedium: plasma
			{
				effectiveness = 0;
			};
			class plasmaLarge: plasma
			{
				effectiveness = 0;
			};
		};
		class ElasticBandage
		{
			class plasma
			{
				effectiveness = 0;
			};
			class plasmaMinor: plasma
			{
				effectiveness = 0;
			};
			class plasmaMedium: plasma
			{
				effectiveness = 0;
			};
			class plasmaLarge: plasma
			{
				effectiveness = 0;
			};
		};
		class QuikClot
		{
			class plasma
			{
				effectiveness = 0;
			};
			class plasmaMinor: plasma
			{
				effectiveness = 0;
			};
			class plasmaMedium: plasma
			{
				effectiveness = 0;
			};
			class plasmaLarge: plasma
			{
				effectiveness = 0;
			};
		};
        class MEU_Biofoam: OPTRE_Biofoam
        {
			class plasma {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMinor : plasma {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMedium : plasma {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaLarge : plasma {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
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
                effectiveness = 1;
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
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 900;
                reopeningMaxDelay = 1200;
            };
            class velocityWoundMinor: velocityWound {};
            class velocityWoundMedium: velocityWound {
                effectiveness = 2;
            };
            class velocityWoundLarge: velocityWound {
                effectiveness = 1;
            };

            class punctureWound: Abrasion {
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 900;
                reopeningMaxDelay = 3000;
            };
            class punctureWoundMinor: punctureWound {};
            class punctureWoundMedium: punctureWound {
                effectiveness = 2;
            };
            class punctureWoundLarge: punctureWound {
                effectiveness = 1;
            };
        };
        class FirstAidKit : MEU_Biofoam
        {};
        class MEU_Medigel: OPTRE_Medigel
        {
            class plasma {
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMinor : plasma {
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMedium : plasma {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaLarge : plasma {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class Abrasion {
                effectiveness = 4;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 3;
                reopeningChance = 1;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 2;
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
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 2;
                reopeningChance = 1;
            };
            class CutLarge: Cut {
                effectiveness = 2;
                reopeningChance = 1;
            };

            class Laceration: Abrasion {
                effectiveness = 3;
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
                effectiveness = 0.5;
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
		
		class MEU_Biofoam_Light: OPTRE_Biofoam
        {
			class plasma {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMinor : plasma {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMedium : plasma {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaLarge : plasma {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
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
                effectiveness = 1;
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
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 900;
                reopeningMaxDelay = 1200;
            };
            class velocityWoundMinor: velocityWound {};
            class velocityWoundMedium: velocityWound {
                effectiveness = 2;
            };
            class velocityWoundLarge: velocityWound {
                effectiveness = 1;
            };

            class punctureWound: Abrasion {
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 900;
                reopeningMaxDelay = 3000;
            };
            class punctureWoundMinor: punctureWound {};
            class punctureWoundMedium: punctureWound {
                effectiveness = 2;
            };
            class punctureWoundLarge: punctureWound {
                effectiveness = 1;
            };
        };
        class MEU_Medigel_Light: OPTRE_Medigel
         {
            class plasma {
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMinor : plasma {
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMedium : plasma {
                effectiveness = 2;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaLarge : plasma {
                effectiveness = 1;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class Abrasion {
                effectiveness = 4;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 3;
                reopeningChance = 1;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 2;
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
                effectiveness = 3;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 2;
                reopeningChance = 1;
            };
            class CutLarge: Cut {
                effectiveness = 2;
                reopeningChance = 1;
            };

            class Laceration: Abrasion {
                effectiveness = 3;
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
                effectiveness = 0.5;
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
		class MEU_Emergency_MedKit: OPTRE_Biofoam
         {
			 class plasma {
                effectiveness = 6;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMinor : plasma {
                effectiveness = 6;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaMedium : plasma {
                effectiveness = 6;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
			class plasmaLarge : plasma {
                effectiveness = 6;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
            class Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 900;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
            };

            class Avulsions: Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class AvulsionsMinor: Avulsions {
                effectiveness = 20;
            };
            class AvulsionsMedium: Avulsions {
                effectiveness = 20;
            };
            class AvulsionsLarge: Avulsions {
                effectiveness = 20;
                reopeningChance = 1;
            };

            class Contusion: Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {
                effectiveness = 20;
            };

            class Crush: Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class CrushMinor: Crush {
                reopeningChance = 1;
            };
            class CrushMedium: Crush {
                effectiveness = 20;
            };
            class CrushLarge: Crush {
                effectiveness = 20;
                reopeningChance = 1;
            };

            class Cut: Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 20;
                reopeningChance = 1;
            };
            class CutLarge: Cut {
                effectiveness = 20;
                reopeningChance = 1;
            };

            class Laceration: Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 900;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {
                effectiveness = 20;
            };
            class LacerationLarge: Laceration {
                effectiveness = 20;
                reopeningChance = 1;
            };

            class velocityWound: Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 180;
            };
            class velocityWoundMinor: velocityWound {};
            class velocityWoundMedium: velocityWound {
                effectiveness = 20;
            };
            class velocityWoundLarge: velocityWound {
                effectiveness = 20;
            };

            class punctureWound: Abrasion {
                effectiveness = 20;
                reopeningChance = 1;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 180;
            };
            class punctureWoundMinor: punctureWound {};
            class punctureWoundMedium: punctureWound {
                effectiveness = 20;
            };
            class punctureWoundLarge: punctureWound {
                effectiveness = 20;
            };
        };
    };
};