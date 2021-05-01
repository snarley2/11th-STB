class RscPicture{}; //part of the background
class RscStandardDisplay{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{}; 

class RscTitles //part of the background
{
	class SplashNoise //part of the background
		{
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "11th_STB_aux\Data\LoadingScreens\MEUPIC1.paa";
			};
		};
	class brokenhud : SplashNoise	//part of the background
		{
			duration=100000000
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "11th_STB_aux\Data\Misc\crackedhud.paa";
			};
		};
};	
class RscDisplayMain: RscStandardDisplay //this class changes the insignia on the top
{
	class Controls //this class changes the insignia on the top
	{
	    delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture //this class changes the insignia on the top
		{
			text = "\11th_STB_aux\Data\LoadingScreens\11thbackground.paa";
			
		};
	};
	enableDisplay = 0;
	delete Spotlight;
	class RscActiveText ;
    class RscActivePicture : RscActiveText
    {
        style = 48;
        color[] = {
                1, 1, 1, 0.500000
        };
        colorActive[] = {
                1, 1, 1, 1
        };
    };
	
	class controlsBackground {
        class LoadingPic : RscPicture {
            idc=1;
            x = SafeZoneX;
            y = SafeZoneY;
            h = SafeZoneH;
            w = SafeZoneW;
            text = "\11th_STB_aux\data\loadingscreens\mainMenu.jpg";
        };
    };
};

class RscDisplayLoading {
	class Variants {
		class LoadingOne {
			idd = 250;
			class controls {
				class LoadingPic : RscPicture {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\11th_STB_aux\data\loadingscreens\startImage.jpg";
				};
			};
		};

		class Loading_West1 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\11th_STB_aux\data\loadingscreens\mainMenu.jpg";
				};
			};
		};

		class Loading_West2 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\11th_STB_aux\data\loadingscreens\mainMenu.jpg";
				};
			};
		};

		class Loading_East1 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\11th_STB_aux\data\loadingscreens\mainMenu.jpg";
				};
			};
		};
		class Loading_East2 : LoadingOne {
			class controls {
				class LoadingPic {
					idc=1;
					x = SafeZoneX;
					y = SafeZoneY;
					h = SafeZoneH;
					w = SafeZoneW;
					text = "\11th_STB_aux\data\loadingscreens\mainMenu.jpg";
				};
			};
		};
	};
};

class RscDisplayLoadMission : RscStandardDisplay {
	class controlsBackground {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\11th_STB_aux\data\loadingscreens\mainMenu.jpg";
		};
	};
};

class RscDisplayStart : RscStandardDisplay {
	class controls {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\11th_STB_aux\data\loadingscreens\startImage.jpg";
		};
	};
};

class RscDisplayMPPlayers;
	class RscDisplayClientWait : RscDisplayMPPlayers {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\11th_STB_aux\data\loadingscreens\mainMenu.jpg";
		};
	};

class RscDisplayClient : RscStandardDisplay {
	class controlsBackground {
		class LoadingPic : RscPicture {
			idc=1;
			x = SafeZoneX;
			y = SafeZoneY;
			h = SafeZoneH;
			w = SafeZoneW;
			text = "\11th_STB_aux\data\loadingscreens\mainMenu.jpg";
		};
	};
};