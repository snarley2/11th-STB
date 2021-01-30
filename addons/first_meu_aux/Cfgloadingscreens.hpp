class RscPicture{}; //part of the background
class RscStandardDisplay{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};

class RscTitles //part of the background
{
	class SplashNoise //part of the background
		{
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "first_meu_aux\Data\LoadingScreens\MEUPIC1.paa";
			};
		};
	class brokenhud : SplashNoise	//part of the background
		{
			duration=100000000
			class BackgroundNoise: RscPicture //part of the background
			{
				text = "first_meu_aux\Data\Misc\crackedhud.paa";
			};
		};
};	
class RscDisplayMain: RscStandardDisplay //this class changes the insignia on the top
{
	class Controls //this class changes the insignia on the top
	{
		class Logo: RscActivePicture //this class changes the insignia on the top
		{
			text = "\first_meu_aux\Data\LoadingScreens\1stMEUInsignia.paa";
			
		};
	};	
};