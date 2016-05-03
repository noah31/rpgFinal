#pragma once
#include "Entity.h"

class Champion : public Entity {
private:
	string abilityOne = "Heroic Strike";
	string abilityTwo = "Shieldwall";
	string abilityThree = "Hack and Slash";
	float pDamageBuff, mDamage;
	int radius, duration;
	float armorbuff;
	bool stun;
public:
	void HeroicStrike(Entity *other){

	}
	void ShieldWall(Entity *self);
	void HacknSlash(Entity *one, Entity *two);
};
class Abilities : public Entity {
private:
	bool champion[3];
	bool barbarian[3];
	bool fire[3];
	bool frost[3];
public:
	
};