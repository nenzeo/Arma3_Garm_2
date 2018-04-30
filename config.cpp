class CfgPatches
{
	class garm_2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class CfgVehicleClasses
{
	class ntf_garm_2
	{
		displayName = "NTF Garm 2.0";
	};
};

class CfgVehicles
{
	// this configs the dude
	class B_Soldier_F;
	class ntf_B_Soldier_garm_2_woodland: B_Soldier_F
	{
		scope						= 1;
		displayName					= "Garm 2.0 (Woodland)";
		vehicleClass				= "ntf_garm_2";
		nakedUniform 				= "U_BasicBody";
		uniformClass				= "ntf_garm_2";
		model						= "Garm_2\Garm_2_0.p3d";
		
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Garm_2\data\Garm_2_Jacket_woodland_co.paa","Garm_2\data\Garm_2_pants_woodland_co.paa","Garm_2\data\M77_woodland_co.paa"};
	};	
	class ntf_B_Soldier_garm_2_woodland_rek: ntf_B_Soldier_garm_2_woodland
	{
		displayName					= "Garm 2.0 (Woodland Rekrutt)";
		nakedUniform 				= "U_BasicBody";
		uniformClass				= "ntf_garm_2";
		model						= "Garm_2\Garm_2_0.p3d";
		
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Garm_2\data\Garm_2_Jacket_woodland_rek_co.paa","Garm_2\data\Garm_2_pants_woodland_rek_co.paa"};
	};
	class ntf_B_Soldier_garm_2_desert: ntf_B_Soldier_garm_2_woodland
	{
		displayName					= "Garm 2.0 (Desert)";
		nakedUniform 				= "U_BasicBody";
		uniformClass				= "ntf_garm_2";
		model						= "Garm_2\Garm_2_0.p3d";
		
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Garm_2\data\Garm_2_Jacket_Desert_co.paa","Garm_2\data\Garm_2_pants_Desert_co.paa"};
	};
	class ntf_B_Soldier_garm_2_desert_rek: ntf_B_Soldier_garm_2_woodland
	{
		displayName					= "Garm 2.0 (Desert Rekrutt)";
		nakedUniform 				= "U_BasicBody";
		uniformClass				= "ntf_garm_2";
		model						= "Garm_2\Garm_2_0.p3d";
		
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"Garm_2\data\Garm_2_Jacket_Desert_rek_co.paa","Garm_2\data\Garm_2_pants_Desert_rek_co.paa"};
	};
};

class cfgWeapons
{
	// this configs the uniform
	class Uniform_Base;
	class UniformItem;
	class ntf_garm_2_woodland: Uniform_Base
	{
		scope						= 2;
		displayName					= "[NTF] Garm 2.0 Woodland";
		picture						= "Garm_2\data\ui\icon_woodland_ca";
		model						= "A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo: UniformItem
		{
			uniformModel			= "";
			uniformClass			= "ntf_B_Soldier_garm_2_woodland";
			containerClass			= "Supply40";
			mass					= 30;
		};
	};
	class ntf_garm_2_woodland_rek: ntf_garm_2_woodland
	{
		displayName					= "[NTF] Garm 2.0 Woodland Rekrutt";
		picture						= "Garm_2\data\ui\icon_woodland_ca";

		class ItemInfo: ItemInfo
		{
			uniformClass			= "ntf_B_Soldier_garm_2_woodland_rek";
		};
	};
	class ntf_garm_2_Desert: ntf_garm_2_woodland
	{
		displayName					= "[NTF] Garm 2.0 Desert";
		picture						= "Garm_2\data\ui\icon_desert_ca";

		class ItemInfo: ItemInfo
		{
			uniformClass			= "ntf_B_Soldier_garm_2_desert";
		};
	};
	class ntf_garm_2_Desert_rek: ntf_garm_2_woodland
	{
		displayName					= "[NTF] Garm 2.0 Desert Rekrutt";
		picture						= "Garm_2\data\ui\icon_desert_ca";

		class ItemInfo: ItemInfo
		{
			uniformClass			= "ntf_B_Soldier_garm_2_desert_rek";
		};
	};
};