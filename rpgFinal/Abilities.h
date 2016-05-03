#pragma once
#include "Entity.h"

class Effect {
private:
	float pDamage, mDamage;
	int radius;
	int duration;
	float armorbuff;

};
class Abilities : public Entity {
private:
	string name[3];
public:
};