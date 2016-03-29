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
	float curHealth = maxHealth - (pDamageTaken + mDamageTaken);
	float maxHealth = stamina * 11;
	float stamina;
	float maxStamina = 99;
	float pDamageTaken = pInitialDmgTaken * (armor * .5 / 100); /*30 armor = 15% physical damage reduction*/
	float pInitialDmgTaken;
	float mDamageTaken = mInitialDmgTaken * (spirit * .5 / 100); /*30 spirit = 15% magical damage reduction*/
	float mInitialDmgTaken;
	//Ability points
	float curAP;
	float maxAP = intellect * 8.25;
	float intellect;
	float maxIntellect = 99;
	float willPower;
	float maxWillPower = 99;
	//Normal Attack
	float strength;
	float maxStrength = 99;
	float weaponDamage = rawWeaponDmg * (strength * .30 / 100 + 1); /*Raw Weapon Dmg x (30%) of Str = Weapon Damage*/
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
	string getCharType(string value);
	void setCharLevel(int value);
	int getCharLevel(int value);
};