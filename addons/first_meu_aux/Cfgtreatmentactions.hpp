#define _ARMA_
class ACE_Medical_Treatment_Actions
{
    class Morphine;
    
    class MEU_compat_Ibuprofen: Morphine
    {
        displayName = "Ibuprofen";
        allowedSelections[] = {"Head"};
        items[] = {"MEU_compat_Ibuprofen"};
        treatmentTime = 1;
    };
};
