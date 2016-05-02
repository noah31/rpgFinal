#include <stdlib.h>
#include <string>
using namespace std;

class Weapon{
private:
	string name;
	float baseDmg;
	bool oneHand, twoHand, staff;
public:
	string getName(){
		return name;
	}
	void setName(const string &value){
		name = value;
	}
	float getBaseDmg(){
		return baseDmg;
	}
	void setBaseDmg(const float &value){
		baseDmg = value;
	}
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
	void setHead(string name, int value, float staMod, float strMod, float intMod, float wpMod, float spMod){
		hName = name;
		hValue = value;
		hStaMod = staMod;
		hStrMod = strMod;
		hIntMod = intMod;
		hWpMod = wpMod;
		hSpMod = spMod;
		head = true;
	}
	void setChest(string name, int value, float staMod, float strMod, float intMod, float wpMod, float spMod){
		cName = name;
		cValue = value;
		cStaMod = staMod;
		cStrMod = strMod;
		cIntMod = intMod;
		cWpMod = wpMod;
		cSpMod = spMod;
		chest = true;
	}
	void setBoot(string name, int value, float staMod, float strMod, float intMod, float wpMod, float spMod){
		bName = name;
		bValue = value;
		bStaMod = staMod;
		bStrMod = strMod;
		bIntMod = intMod;
		bWpMod = wpMod;
		bSpMod = spMod;
		boots = true;
	}
	void setShield(string name, int value, float staMod, float strMod, float intMod, float wpMod, float spMod){
		sName = name;
		sValue = value;
		sStaMod = staMod;
		sStrMod = strMod;
		sIntMod = intMod;
		sWpMod = wpMod;
		sSpMod = spMod;
		shield = true;
	}
	string getHName(){
		return hName;
	}
	string getCName(){
		return cName;
	}
	string getBName(){
		return bName;
	}
	string getSName(){
		return sName;
	}
	float getHValue(){
		return hValue;
	}
	float getCValue(){
		return cValue;
	}
	float getBValue(){
		return bValue;
	}
	float getSValue(){
		return sValue;
	}
	float getHMod(string attribute){
		if (attribute == "sta"){
			return hStaMod;
		}
		if (attribute == "str"){
			return hStrMod;
		}
		if (attribute == "int"){
			return hIntMod;
		}
		if (attribute == "wp"){
			return hWpMod;
		}
		if (attribute == "sp"){
			return hSpMod;
		}
	}
	float getCMod(string attribute){
		if (attribute == "sta"){
			return cStaMod;
		}
		if (attribute == "str"){
			return cStrMod;
		}
		if (attribute == "int"){
			return cIntMod;
		}
		if (attribute == "wp"){
			return cWpMod;
		}
		if (attribute == "sp"){
			return cSpMod;
		}
	}
	float getBMod(string attribute){
		if (attribute == "sta"){
			return bStaMod;
		}
		if (attribute == "str"){
			return bStrMod;
		}
		if (attribute == "int"){
			return bIntMod;
		}
		if (attribute == "wp"){
			return bWpMod;
		}
		if (attribute == "sp"){
			return bSpMod;
		}
	}
	float getSMod(string attribute){
		if (attribute == "sta"){
			return sStaMod;
		}
		if (attribute == "str"){
			return sStrMod;
		}
		if (attribute == "int"){
			return sIntMod;
		}
		if (attribute == "wp"){
			return sWpMod;
		}
		if (attribute == "sp"){
			return sSpMod;
		}
	}
	void unequipt(char armorType){
		switch (armorType){
		case 'h':
			hName = "Empty";
			hValue = 0;
			hStaMod = 0;
			hStrMod = 0;
			hIntMod = 0;
			hWpMod = 0;
			hSpMod = 0;
			head = false;
			break;
		case 'c':
			cName = "Empty";
			cValue = 0;
			cStaMod = 0;
			cStrMod = 0;
			cIntMod = 0;
			cWpMod = 0;
			cSpMod = 0;
			chest = false;
			break;
		case 'b':
			bName = "Empty";
			bValue = 0;
			bStaMod = 0;
			bStrMod = 0;
			bIntMod = 0;
			bWpMod = 0;
			bSpMod = 0;
			boots = false;
			break;
		case 's':
			sName = "Empty";
			sValue = 0;
			sStaMod = 0;
			sStrMod = 0;
			sIntMod = 0;
			sWpMod = 0;
			sSpMod = 0;
			shield = false;
			break;
		}
	}
};