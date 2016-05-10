#pragma once
#include "Warrior.h"
#include "Wizard.h"
#include <string>
#include <stdlib.h>
#include <vector>
#include "Entity.h"

using namespace std;

class Mob : public Entity{
private:

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