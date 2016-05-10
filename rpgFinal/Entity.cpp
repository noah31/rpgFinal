#include "Entity.h"

float Entity::getTotalMod(string attribute){
	if (attribute == "sta") {
		float temp = 0;
		temp += getHMod("sta");
		temp += getCMod("sta");
		temp += getBMod("sta");
		temp += getSMod("sta");
		temp += getWMod("sta");
		return  temp;
	}
	if (attribute == "str") {
		float temp = 0;
		temp += getHMod("str");
		temp += getCMod("str");
		temp += getBMod("str");
		temp += getSMod("str");
		temp += getWMod("str");
		return  temp;
	}
	if (attribute == "int") {
		float temp = 0;
		temp += getHMod("int");
		temp += getCMod("int");
		temp += getBMod("int");
		temp += getSMod("int");
		temp += getWMod("int");
		return  temp;
	}
	if (attribute == "wp") {
		float temp = 0;
		temp += getHMod("wp");
		temp += getCMod("wp");
		temp += getBMod("wp");
		temp += getSMod("wp");
		temp += getWMod("wp");
		return  temp;
	}
	if (attribute == "sp") {
		float temp = 0;
		temp += getHMod("sp");
		temp += getCMod("sp");
		temp += getBMod("sp");
		temp += getSMod("sp");
		temp += getWMod("sp");
		return  temp;
	}
}
int Entity::getLevel(){
	return level;
}