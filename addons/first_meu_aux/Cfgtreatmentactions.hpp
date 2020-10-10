#define _ARMA_
class ACE_Medical_Treatment_Actions
{
    class Morphine;
    class PlasmaIV;
    class OPTRE_Biofoam;
    class OPTRE_Medigel;
    
    class MEU_compat_Ibuprofen: Morphine
    {
        displayName = "Ibuprofen";
        displayNameProgress = "Having some Water and rest..."
        allowedSelections[] = {"Head"};
        items[] = {"MEU_compat_Ibuprofen"};
        treatmentTime = 1;
    };
	
	class ACE_Banana: Morphine
    {
        displayName = "Banana";
        displayNameProgress = "Committing unga bunga long sleep"
        allowedSelections[] = {"Head"};
        items[] = {"ACE_Banana"};
        treatmentTime = 1;
    };
    class MEU_PlasmaIV : PlasmaIV
    {
        displayName = "Plasma 2.5L"
        displayNameProgress = "Pushing 2 and a half litres";
        treatmentTime = 12;
        items[] = {"MEU_PlasmaIV"};
    };    
    class MEU_Biofoam : OPTRE_Biofoam
    {
        consumeItem = 0;
        items[] = {"MEU_Biofoam"};
    };
    class MEU_Medigel: OPTRE_Medigel
    {
        consumeItem = 0;
        items[] = {"MEU_Medigel"};
    };
};