#define _ARMA_
class BasicBandage;
class Morphine;

class GVAR(actions)
{
    class ACE_Medical_Treatment_Actions
    {
	   class MEU_Ibuprophen: Morphine
	   {
		  displayName = "Ibuprophen";
		  displayNameProgress = "$STR_ace_medical_treatment_Injecting_Morphine";
		  icon = "\z\ace\addons\medical_gui\ui\auto_injector.paa";
		  allowedSelections[] = {"Head","Leftarm"};
		  category = "medication";
		  items[] = {"MEU_Ibuprophen"};
		  condition = "";
           treatmentTime = 3;
            callbackSuccess = "ace_medical_treatment_fnc_medication";
		  animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
		  sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
		  litter[] = {{"ACE_MedicalLitter_morphine"}};
	   };
        class PersonalAidKit: BasicBandage 
        {
            condition = "true";
        };
    };
};
