#include "Mob.h"


string Mob::getCharType(string value) {
		return value;
}
void Mob::setCharLevel(int value) {
	charLevel = value;
}
void Mob::takeDamage(float pDmg, float mDmg) {
	curHealth - ((pDmg * (armor*.5 / 100)) + (mDmg * (spirit * .5 / 100)));
}
float Mob::inflictDamage(int dmgType) {
	switch (dmgType) {
	case 1:

	}
}
void setWeaponDamage(int rawWeaponDmg){
	weaponDamage = rawWeaponDmg * (strength * .30 / 100 + 1); /*Raw Weapon Dmg x (30%) of Str = Weapon Damage*/
}