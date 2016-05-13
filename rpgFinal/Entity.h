#include "Attributes.h"
#include "Random.h"
#include "Equipment.h"
#include <stdlib.h>
#include <string>

using namespace std;

class Entity : public Attributes, public Random, public Armor, public Weapon {
private:
	string name;
	float curHealth;
	float maxHealth;
	int level;
	Weapon oneHand[8];
	Weapon twoHand[8];
	Weapon staff[8];
	Armor head[]
	public:
	virtual void setName(const string &value);
	string getName();
	virtual void setMaxHP(const float &value);
	float getHealth();
	float getDamage(){
		float damage = 0;
		damage += getBaseDmg();
		damage *= getHMod("str") + getCMod("str") + getBMod("str") + getSMod("str");
		//not finished
	}
	float getTotalMod(string attribute);
	int getLevel();
};