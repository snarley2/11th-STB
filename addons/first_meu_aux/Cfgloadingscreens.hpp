#include "\a3\ui_f\hpp\defineCommonGrids.inc"

#define LOGO_SIZE 10
#define POS_LEFT(X) ((X) * GUI_GRID_W + GUI_GRID_X)
#define POS_TOP(X) ((X) * GUI_GRID_H + GUI_GRID_Y)
#define POS_WIDTH(X) ((X) * GUI_GRID_W)
#define POS_HEIGHT(X) ((X) * GUI_GRID_H)
#define POS_LEFT_CENTERED(X) (0.5 - POS_WIDTH(X)/2)
#define POS_TOP_CENTERED(X) (0.5 - POS_HEIGHT(X)/2)

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

class RscDisplayStart: RscStandardDisplay {
    class controls {
        class LoadingStart: RscControlsGroup {
            class controls {
                class BWPMC_Background: RscPicture {
                    text = "first_meu_aux\Data\LoadingScreens\1stMEUInsignia.paa";
                    x = POS_LEFT_CENTERED(LOGO_SIZE);
                    y = POS_TOP_CENTERED(LOGO_SIZE);
                    w = POS_WIDTH(LOGO_SIZE);
                    h = POS_HEIGHT(LOGO_SIZE);
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