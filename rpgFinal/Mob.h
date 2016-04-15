#pragma once
#include "Warrior.h"
#include "Wizard.h"
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

class Mob {
private:
	vector<string> mobs;
	string name;
	//Health points
	float curHealth;
	float maxHealth;
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
	//Experience
	int level = charLevel;
	int charLevel;
	//Damage Resistance
	float spirit;
	float armor;

public:
	Mob(string mobType);
	void takeDamage(float pDmg, float mDmg);
	float inflictDamage(int dmgType);
	string getCharType(string value);
	void setCharLevel(int value);
	int getCharLevel(int value);
	void setWeaponDamage(int rawWeaponDmg);

	void reduceCurHP(float pDmg, float mDmg);
	void setMaxStats();
	float getMaxHealth();
	float getMaxAP();

};