#include "Equipment.h"

using namespace std;

//Weapon class
void Weapon::setName(const string &value) {
	name = value;
}
void Weapon::setBaseDmg(const float &value) {
	baseDmg = value;
}
string Weapon::getName() {
	return name;
}
float Weapon::getBaseDmg() {
	return baseDmg;
}
float Weapon::getWMod(string attribute) {
	if (attribute == "sta") {
		return wStaMod;
	}
	if (attribute == "str") {
		return wStrMod;
	}
	if (attribute == "int") {
		return wIntMod;
	}
	if (attribute == "wp") {
		return wWpMod;
	}
	if (attribute == "sp") {
		return wSpMod;
	}
}
void Weapon::setWMod(string attribute, float modValue){
	if (attribute == "sta") {
		wStaMod = modValue;
	}
	if (attribute == "str") {
		wStrMod = modValue;
	}
	if (attribute == "int") {
		wIntMod = modValue;
	}
	if (attribute == "wp") {
		wWpMod = modValue;
	}
	if (attribute == "sp") {
		wSpMod = modValue;
	}
}

//Armor class
void Armor::setHead(const string &name, const int &armor, const string &stat, const float &statMod) {
	if (stat == "str")
		hStrMod = statMod;
	if (stat == "sta")
		hStaMod = statMod;
	if (stat == "int")
		hIntMod = statMod;
	if (stat == "wp")
		hWpMod = statMod;
	if (stat == "sp")
		hSpMod = statMod;
	hName = name;
	hValue = armor;
	head = true;
}
void Armor::setChest(const string &name, const int &armor, const string &stat, const float &statMod) {
	if (stat == "str")
		cStrMod = statMod;
	if (stat == "sta")
		cStaMod = statMod;
	if (stat == "int")
		cIntMod = statMod;
	if (stat == "wp")
		cWpMod = statMod;
	if (stat == "sp")
		cSpMod = statMod;
	cName = name;
	cValue = armor;
	chest = true;
}
void Armor::setBoot(const string &name, const int &armor, const string &stat, const float &statMod) {
	if (stat == "str")
		bStrMod = statMod;
	if (stat == "sta")
		bStaMod = statMod;
	if (stat == "int")
		bIntMod = statMod;
	if (stat == "wp")
		bWpMod = statMod;
	if (stat == "sp")
		bSpMod = statMod;
	bName = name;
	bValue = armor;
	boots = true;
}
void Armor::setShield(const string &name, const int &armor, const string &stat, const float &statMod) {
	if (stat == "str")
		sStrMod = statMod;
	if (stat == "sta")
		sStaMod = statMod;
	if (stat == "int")
		sIntMod = statMod;
	if (stat == "wp")
		sWpMod = statMod;
	if (stat == "sp")
		sSpMod = statMod;
	sName = name;
	sValue = armor;
	shield = true;
}
string Armor::getHName() {
	return hName;
}
string Armor::getCName() {
	return cName;
}
string Armor::getBName() {
	return bName;
}
string Armor::getSName() {
	return sName;
}
float Armor::getHValue() {
	return hValue;
}
float Armor::getCValue() {
	return cValue;
}
float Armor::getBValue() {
	return bValue;
}
float Armor::getSValue() {
	return sValue;
}
float Armor::getTotalArmor() {
	float temp = 0;
	temp += hValue + cValue + bValue + sValue;
	return temp;
}
float Armor::getHMod(string attribute) {
	if (attribute == "sta") {
		return hStaMod;
	}
	if (attribute == "str") {
		return hStrMod;
	}
	if (attribute == "int") {
		return hIntMod;
	}
	if (attribute == "wp") {
		return hWpMod;
	}
	if (attribute == "sp") {
		return hSpMod;
	}
}
float Armor::getCMod(string attribute) {
	if (attribute == "sta") {
		return cStaMod;
	}
	if (attribute == "str") {
		return cStrMod;
	}
	if (attribute == "int") {
		return cIntMod;
	}
	if (attribute == "wp") {
		return cWpMod;
	}
	if (attribute == "sp") {
		return cSpMod;
	}
}
float Armor::getBMod(string attribute) {
	if (attribute == "sta") {
		return bStaMod;
	}
	if (attribute == "str") {
		return bStrMod;
	}
	if (attribute == "int") {
		return bIntMod;
	}
	if (attribute == "wp") {
		return bWpMod;
	}
	if (attribute == "sp") {
		return bSpMod;
	}
}
float Armor::getSMod(string attribute) {
	if (attribute == "sta") {
		return sStaMod;
	}
	if (attribute == "str") {
		return sStrMod;
	}
	if (attribute == "int") {
		return sIntMod;
	}
	if (attribute == "wp") {
		return sWpMod;
	}
	if (attribute == "sp") {
		return sSpMod;
	}
}
void Armor::unequipt(char armorType) {
	switch (armorType) {
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