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

//Armor class
void Armor::setHead(string name, int value, float staMod, float strMod, float intMod, float wpMod, float spMod) {
	hName = name;
	hValue = value;
	hStaMod = staMod;
	hStrMod = strMod;
	hIntMod = intMod;
	hWpMod = wpMod;
	hSpMod = spMod;
	head = true;
}
void Armor::setChest(string name, int value, float staMod, float strMod, float intMod, float wpMod, float spMod) {
	cName = name;
	cValue = value;
	cStaMod = staMod;
	cStrMod = strMod;
	cIntMod = intMod;
	cWpMod = wpMod;
	cSpMod = spMod;
	chest = true;
}
void Armor::setBoot(string name, int value, float staMod, float strMod, float intMod, float wpMod, float spMod) {
	bName = name;
	bValue = value;
	bStaMod = staMod;
	bStrMod = strMod;
	bIntMod = intMod;
	bWpMod = wpMod;
	bSpMod = spMod;
	boots = true;
}
void Armor::setShield(string name, int value, float staMod, float strMod, float intMod, float wpMod, float spMod) {
	sName = name;
	sValue = value;
	sStaMod = staMod;
	sStrMod = strMod;
	sIntMod = intMod;
	sWpMod = wpMod;
	sSpMod = spMod;
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
	float temp;
	temp = hValue + cValue + bValue + sValue;
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