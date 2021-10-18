class CfgPatches	// требуется обязательно
{
	class AdvancedBandage	// требуется обязательно, совпадает с именем мода
	{
		units[]={}; 				// may be not worked
		weapons[]={}; 				// may be not worked
		requiredVersion=0.1; 		// may be not worked
		requiredAddons[]={};
		/*
			requiredAddons[]=
			{
				"DZ_Data",		// Перечисляем требуемые и используемые модом аддоны (pbo-файлы игры и модов по их внутренним скриптовым именам)
			};
		*/
	};
};
class CfgMods // // требуется обязательно, совпадает с именем мода
{
	// https://community.bistudio.com/wiki/DayZ:Modding_Structure#Mod_presentation
	class AdvancedBandage
	{
	    dir = "AdvancedBandage";							// Имя папки мода, совпадает с именем мода
	    picture = ""; 									// Картинка в описании мода
	    action = "";  									// Ссылка, например вот так: action = "https://dayz.com/";	
	    hideName = 1;									// Не уверен, что этот параметр работает
	    hidePicture = 1;								// Не уверен, что этот параметр работает
	    name = "AdvancedBandage";  						// Имя мода (а также его внутреннее скриптовое имя)
		logoSmall = "Mods/TestMod/modlogosmall.tga";	// значок рядом с именем мода, если описание не развернуто
		logo = "Mods/TestMod/modlogo.tga";				// логотип под меню игры
		logoOver = "Mods/TestMod/modlogohover.tga";		// при наведении курсора мыши на логотип
		tooltip = "tooltip";							// подсказка при наведении курсора мыши
		overview = "AdvancedBandage"; 					// Описание
	    credits = "Zaakk";								// credits
	    author = "Zaakk";								// author
	    authorID = "76561198043879824";  								// author steam ID 
	    version = "1.0";  								// version
	    extra = 0;										// Не уверен, что этот параметр работает
		
	    type = "mod"; 									// требуется обязательно, остается неизменным
		dependencies[]={"World"};  							// необязательно, если необходимо установить зависимость класса

	    class defs
	    {			
			class worldScriptModule
			{
				value="";
				files[]={"AdvancedBandage/4_World"};
			};
        };
		// Если какой-то из разделов скриптинга вам не нужен и вы не сибираетесь его паковать, сотрите необходимый блок с ним выше и в массиве dependencies 
    };
};