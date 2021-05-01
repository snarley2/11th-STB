#define _ARMA_
class ACE_Medical_Treatment_Actions
{
    class Morphine;
    class PlasmaIV;
    class OPTRE_Medigel;
    class OPTRE_Biofoam;
    class ApplyTourniquet;
    class RemoveTourniquet;
    class BasicBandage;
    
    class MEU_compat_Ibuprofen: Morphine
    {
        displayName = "Take Ibuprofen";
        displayNameProgress = "Having some Water and rest...";
        allowedSelections[] = {"Head"};
        items[] = {"MEU_compat_Ibuprofen"};
        treatmentTime = 1;
    };
    /*class Atropine : MEU_compat_Ibuprofen
    {
		displayName = "Inject Antidote";
        displayNameProgress = "Applying Chemical Antidote";
        allowedSelections[] = {"All"};
        items[] = {"Atropine"};
    };*/
	class ACE_Banana: Morphine
    {
        displayName = "Banana";
        displayNameProgress = "Committing unga bunga long sleep";
        allowedSelections[] = {"Head"};
        items[] = {"ACE_Banana"};
        treatmentTime = 1;
    };
    class MEU_PlasmaIV : PlasmaIV
    {
        displayName = "Plasma 2.5L";
        displayNameProgress = "Pushing 2 and a half litres";
        treatmentTime = 12;
        items[] = {"MEU_PlasmaIV"};
    };
    class MEU_Medigel: OPTRE_Medigel
    {
        displayName = "Apply Corpsman Medigel";
        displayNameProgress = "Spreading lots of Medigel...";
        items[] = {"MEU_Medigel"};
        callbackSuccess = "MEU_fnc_biomed";
        consumeItem = 0;
        category = "bandage";
        medicRequired = 1;
    };
    class MEU_Biofoam : OPTRE_Biofoam
    {
        displayName = "Inject Corpsman Biofoam";
        displayNameProgress = "Injecting lots of Biofoam...";
        items[] = {"MEU_Biofoam"};
        callbackSuccess = "MEU_fnc_biomed";
        consumeItem = 0;
        category = "bandage";
        medicRequired = 1;
    };
	class MEU_Medigel_Light: OPTRE_Medigel
    {
        displayName = "Apply Medigel";
        displayNameProgress = "Spreading Medigel";
        items[] = {"MEU_Medigel_Light"};
        category = "bandage";
		callbackSuccess = "MEU_fnc_biomed";
    };
    class MEU_Biofoam_Light : OPTRE_Biofoam
    {
        displayName = "Inject Biofoam";
        displayNameProgress = "Injecting Biofoam";
        items[] = {"MEU_Biofoam_Light"};
        category = "bandage";
		callbackSuccess = "MEU_fnc_biomed";
    };
    class MEU_ApplyTourniquet: ApplyTourniquet
    {
        displayName = "Constrict Suit";
        displayNameProgress = "Constricting Suit";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {"MEU_tourniquet"};
        treatmentTime = 3;
        consumeItem = 0;
        category = "bandage";
    };
    class MEU_RemoveTourniquet: MEU_ApplyTourniquet
    {
        displayName = "Deconstrict Suit";
        displayNameProgress = "Deconstricting Suit";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg", "Head"};
        items[] = {"MEU_tourniquet"};
        treatmentTime = 3;
        callbackSuccess = "MEU_fnc_tourniquetRemove";
        consumeItem = 0;
        category = "bandage";
    };
    class MEU_NeckTourniquet: MEU_ApplyTourniquet
    {
        displayName = "Constrict Suit";
        displayNameProgress = "Constricting Suit";
        allowedSelections[] = {"Head"};
        items[] = {"MEU_tourniquet"};
        treatmentTime = 3;
        callbackSuccess = "MEU_fnc_necktourniquet";
        consumeItem = 0;
        category = "bandage";
    };
	class MEU_Emergency_MedKit: OPTRE_Medigel
	{
		displayName = "Emergency MedKit";
		displayNameProgress = "Hope this works";
		icon = "";
		consumeItem = 1;
        treatmentTime = 10;
		medicRequired = 0;
		allowSelfTreatment = 0;
		category = "advanced";
		items[] = {"MEU_Emergency_MedKit"};
		callbackStart = "";
		callbackSuccess = "MEU_fnc_medkit";
	};
		class MEU_Suit_Sealant: Morphine
	{
		displayName = "Flex Seal";
		displayNameProgress = "Thats a lot of damage!";
		icon = "";
		condition = "";
		consumeItem = 0;
        treatmentTime = 3;
		allowSelfTreatment = 1;
        allowedSelections[] = {"Head"};
		items[] = {"MEU_Suit_Sealant"};
		category = "medication";
		callbackSuccess = "_this execVM 'first_meu_aux\Functions\fn_flexseal.sqf'";
	};
    class FirstAidKit : MEU_Biofoam
    {
		displayName = "First Aid Kit";
		displayNameProgress = "not a lot";
		icon = "";
		condition = "";
		consumeItem = 1;
        treatmentTime = 5;
		allowSelfTreatment = 1;
		items[] = {"FirstAidKit"};
	};
};
