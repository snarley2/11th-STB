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
            painReduce = 0.4;
            hrIncreaseLow[] = {+400,+400};
            hrIncreaseNormal[] = {+400,+400};
            hrIncreaseHigh[] = {+400,+400};
            timeInSystem = 60;
            timeTillMaxEffect = 0.1;
            maxDose = 0.1;
            incompatibleMedication[] = {};
            viscosityChange = -100;
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
        };
        class MEU_Medigel: OPTRE_Medigel
        {
        };
    };
};