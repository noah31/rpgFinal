#pragma once
#include "Warrior.h"
#include "Wizard.h"
#include <string>
#include <stdlib.h>

using namespace std;

/*Stamina, Intellect, Strength, Willpower, Spirit*/
class Player {
private:
	class Warrior war;
	class Wizard wiz;
	string classType;
	string pathType;
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
	int level;
	float curExp;
	float maxExp = 5 * (.80 * level);
	//Damage Resistance
	float spirit;
	float armor = headArmor + chestArmor + feetArmor + shieldArmor;
	string head, chest, feet, shield;
	int headArmor, chestArmor, feetArmor, shieldArmor;
public:
	Player(string charName, int charClass, int charPath);
	string getClassType();
	float getStamina();
	float getIntellect();
	float getStrength();
	float getWillPower();
	float getSpirit();
	int getLevel();
	void addStamina(float value);
	void addIntellect(float value);
	void addStrength(float value);
	void addWillPower(float value);
	void addSpirit(float value);
};