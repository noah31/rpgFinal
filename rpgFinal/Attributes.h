#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

class Attributes{
private:
	//Health points
	float stamina;
	float maxStamina = 99;
	//Ability points
	float curAP;
	float maxAP;
	float intellect;
	float maxIntellect = 99;
	float willPower;
	float maxWillPower = 99;
	//Normal Attack
	float strength;
	float maxStrength = 99;
	float weaponDamage;
	string weapon;
	int rawWeaponDmg;
	//Damage Resistance
	float spirit;
	float armor;
public:
	void setStamina(float value){
		stamina = value;
	}
	void setStrength(float value){
		strength = value;
	}
	void setIntellect(float value){
		intellect = value;
	}
	void setWillPower(float value){
		willPower = value;
	}
	void setSpirit(float value){
		spirit = value;
	}
	float getStamina(){
		return stamina;
	}
	float getStrength(){
		return strength;
	}
	float getIntellect(){
		return intellect;
	}
	float getWillPower(){
		return willPower;
	}
	float getSpirit(){
		return spirit;
	}
};