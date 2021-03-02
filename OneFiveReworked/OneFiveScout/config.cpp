class CfgPatches 
{
	class OneFiveScout 
	{
		author = "Duke and Dutch";
		units[] = {};
		weapons[] = 
		{
			"15th_Scout_Helmet",
			"15th_Scout_Helmet_dp",
		};
	};
};
class CfgWeapons 
	{
	class HeadgearItem;
	class OPTRE_UNSC_CH252D_Helmet;
	class 15th_Scout_Helmet: OPTRE_UNSC_CH252D_Helmet
	{
		author="Duke and also dutch";
		scope=2;
		displayName="[15th] Scout Helmet";
		model="OneFiveScout\data\Models\Scout_Helmet.p3d";
		hiddenSelections[] = 
		{
			"Camo",
			"Visor",
			"Interior",
		};
		hiddenSelectionsTextures[] = 
		{
			"OneFiveScout\data\Textures\ScoutHelmet_CO.paa",
			"OneFiveScout\data\Textures\Visor_Co.paa",
			"OneFiveScout\data\Textures\Internals_CO.paa",
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="OneFiveScout\data\Models\Scout_Helmet.p3d";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			allowedSlots[]=
			{
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
		    hiddenSelections[] = 
		    {
			    "Camo",
			    "Visor",
		    };
		    hiddenSelectionsTextures[] = 
		    {
			    "OneFiveScout\data\Textures\ScoutHelmet_CO.paa",
			    "OneFiveScout\data\Textures\Visor_Co.paa",
		    };
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=25;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=25;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_CH252D_Helmet_dp; 
	class 15th_Scout_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Duke and dutch";
		scope=1;
		displayName="ODST Scout Helmet (Depolarized)";
		model="OneFiveScout\data\Models\Scout_Helmet.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Visor",
			"Interior",
		};
		hiddenSelectionsTextures[]=
		{
			"OneFiveScout\data\Textures\ScoutHelmet_CO.paa",
			"OneFiveScout\data\Textures\Visor_Co.paa",
			"OneFiveScout\data\Textures\Internals_CO.paa",
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="OneFiveScout\data\Models\Scout_Helmet.p3d";
			allowedSlots[]=
			{
				"BACKPACK_SLOT",
				"VEST_SLOT",
				"HEADGEAR_SLOT"
			};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo",
				"Visor",
				"Interior",
			};
			hiddenSelectionsTextures[]=
			{
				"OneFiveScout\data\Textures\ScoutHelmet_CO.paa",
				"OneFiveScout\data\Textures\Visor_Co.paa",
				"OneFiveScout\data\Textures\Internals_CO.paa",
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=25;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=25;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=20;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
	};
};