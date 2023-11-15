class CfgPatches
{
	class 2b25mine
	{
		addonRootClass = "A3_Armor_F_Beta";
		requiredAddons[] = {"A3_Armor_F_Beta","A3_Data_F","A3_Weapons_F_Gamma"};
		requiredVersion = 0.1;
		weapons[] = {""};
		units[] = {"2b25mine"};
	};
};

class cfgVehicles
{
class All;
class Static: All
{};

class Building: Static
{};

class NonStrategic: Building
{};

class HouseBase: NonStrategic
{};

class House: HouseBase
{};

class House_F: House
{};

class House_Small_F: House_F
{};

class 2b25mine: House_Small_F
    {
		scope = 2;
        //mapSize = 3;
        //icon = "iconObject_2x2";        
        displayName = "2b25mine";        
        model = "2b25mine\2b25mine";        
    };  

};