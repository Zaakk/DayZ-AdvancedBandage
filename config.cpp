class CfgPatches
{
	class AdvancedBandage
	{
		units[]={}; 
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	// https://community.bistudio.com/wiki/DayZ:Modding_Structure#Mod_presentation
	class AdvancedBandage
	{
	    dir = "@AdvancedBandage";
	    picture = "";
	    action = "https://zaakk.com";
	    hideName = 1;
	    hidePicture = 1;
	    name = "AdvancedBandage";
		logoSmall = "Mods/TestMod/modlogosmall.tga";
		logo = "Mods/TestMod/modlogo.tga";
		logoOver = "Mods/TestMod/modlogohover.tga";	
		tooltip = "tooltip";
		overview = "AdvancedBandage";
	    credits = "Zaakk";
	    author = "Zaakk";
	    authorID = "76561198043879824";
	    version = "1.0";
	    extra = 0;
		
	    type = "mod";
		dependencies[] = { "World" };

	    class defs
	    {			
			class worldScriptModule
			{
				value="";
				files[]={"AdvancedBandage/4_World"};
			};
        };
    };
};