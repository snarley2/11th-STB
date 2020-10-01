#define _ARMA_
class ACE_Medical_Treatment_Actions
{
    class Morphine;
    
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
};