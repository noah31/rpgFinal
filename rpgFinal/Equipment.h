#include <stdlib.h>
#include <string>
using namespace std;

class Weapon{
private:
	string name;
	float baseDmg;
	bool oneHand, twoHand, staff;
	float wStaMod, wStrMod, wIntMod, wWpMod, wSpMod;
public:
	string getName();
	void setName(const string &value);
	float getBaseDmg();
	void setBaseDmg(const float &value);
	float getWMod(string attribute);
	void setWMod(string attribute, float modValue);
};

class Armor{
private:
	bool head, chest, boots, shield;
	string hName, cName, bName, sName;
	int hValue, cValue, bValue, sValue;
	float hStaMod, cStaMod, bStaMod, sStaMod;
	float hStrMod, cStrMod, bStrMod, sStrMod;
	float hIntMod, cIntMod, bIntMod, sIntMod;
	float hWpMod, cWpMod, bWpMod, sWpMod;
	float hSpMod, cSpMod, bSpMod, sSpMod;
public:
	void setHead(const string &name, const int &armor, const string &stat, const float &statMod);
	void setChest(const string &name, const int &armor, const string &stat, const float &statMod);
	void setBoot(const string &name, const int &armor, const string &stat, const float &statMod);
	void setShield(const string &name, const int &armor, const string &stat, const float &statMod);
	string getHName();
	string getCName();
	string getBName();
	string getSName();
	float getHValue();
	float getCValue();
	float getBValue();
	float getSValue();
	float getTotalArmor();
	float getHMod(string attribute);
	float getCMod(string attribute);
	float getBMod(string attribute);
	float getSMod(string attribute);
	void unequipt(char armorType);

};