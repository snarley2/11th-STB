#include "\a3\ui_f\hpp\defineCommonGrids.inc"

class RscStandardDisplay;
class RscControlsGroup;
class RscPicture;
class CfgMissions;
class Cutscenes;
class OPTRE_Tanoa_Intro1;
class OPTRE_Altis_Intro1;
class OPTRE_Stratis_Intro1;
class OPTRE_VR_Intro1;
class CAWorld;

class RscDisplayStart: RscStandardDisplay 
{
    class controls {
        class LoadingStart: RscControlsGroup {
            class controls {
                class MEU_Background: RscPicture {
                    text = "first_meu_aux\Data\1stModDevInsig.paa";
                    x = 10;
                    y = 10;
                    w = 15;
                    h = 10;
                    colorBackground[]={1,1,1,1};
                };
            };
        };
    };
};
class RscTitles
{
    class controls {
        class LoadingStart: RscControlsGroup {
            class controls {
                class MEU_Background: RscPicture {
                    text = "first_meu_aux\Data\1stModDevInsig.paa";
                    x = 10;
                    y = 10;
                    w = 15;
                    h = 10;
                    colorBackground[]={1,1,1,1};
                };
            };
        };
    };
};
class CfgWorlds
{
	class Stratis: CAWorld
	{
		cutscenes[] = {"OPTRE_Stratis_Intro1"};
	};
	class Altis: CAWorld
	{
		cutscenes[] = {"OPTRE_Altis_Intro1"};
	};
	class Tanoa: CAWorld
	{
		cutscenes[] = {"OPTRE_Tanoa_Intro1"};
	};
	class VR: CAWorld
	{
		cutscenes[] = {"OPTRE_VR_Intro1"};
	};
};