#include "Mob.h"

using namespace std;

Mob::Mob(){
	int charlevel = 1;
	mob[0].setName("A Pack of Wolves");
	int temp = 0;
	temp = charlevel * 
	mob[0].setStamina()
}
Mob::Mob(string mobType) {
	mobs.push_back("A Pack of Wolves");
	mobs.push_back("A Mob of Goblins");
	mobs.push_back("A Few Imps");
	mobs.push_back("An Orc");
	mobs.push_back("A Sorcerer");
	mobs.push_back("An Ogre");
	mobs.push_back("The Black Knight");
	mobs.push_back("A Swarm of Bats");
	mobs.push_back("Some Skeletons");
	mobs.push_back("A Ghost");
	mobs.push_back("A Werewolf");
	mobs.push_back("A Witch");
	mobs.push_back("A Hulking Abomination");
	mobs.push_back("The Queen of Death");
	mobs.push_back("A Politically Ignorant Member of the Middle Class");
	mobs.push_back("A Delusionary Supporter");
	mobs.push_back("A Bribed Journalist");
	mobs.push_back("A Greedy Corporate Eecutive");
	mobs.push_back("A Bought Politician");
	mobs.push_back("Hillary Clinton");
	mobs.push_back("Donald J. Trump");
	for (int i = 0; i < mobs.size(); i++) {
		if (mobs[i] == mobType) {
			name == mobType;
			if (i == 0 || i == 7 || i == 14) {
					//Stats for wolves/bats/Politcally Ig.
					stamina =

			}
			if (i == 1 || i == 8 || i == 15) {
					//Stats for Goblins/Skeletons/Delusionary Supporter		
			}
			if (i == 2 || i == 9 || i == 16) {
					//Stats for Imps/Ghost/Bribed Journalist
			}
			if (i == 3 || i == 10 || i == 17) {
					//Stats for Orc/Werewolf/Greedy Corporate Eecutive
			}
			if (i == 4 || i == 11 || i == 18) {
					//Stats for Sorcerer/Witch/Bought Politician
			}
			if (i == 5 || i == 12 || i == 19) {
					//Stats for Ogre/Hulking Abomination/Hillary Clinton
			}
			if (i == 6) {
					//Stats for The Black Knight
			}
			if (i == 13) {
					//Stats for The Queen of Death
			}
			if (i == 20) {
					//Stats for Donald J. Trump
			}
		}
	}
}
string Mob::getCharType(string value) {
		return value;
}
void Mob::setCharLevel(int value) {
	charLevel = value;
}
void Mob::takeDamage(float pDmg, float mDmg) {
	curHealth -= ((pDmg * (armor*.5 / 100)) + (mDmg * (spirit * .5 / 100)));
}
float Mob::inflictDamage(int dmgType) {
	switch (dmgType) {
	case 1:

	}
}
void Mob::setWeaponDamage(int rawWeaponDmg){
	weaponDamage = rawWeaponDmg * (strength * .30 / 100 + 1); /*Raw Weapon Dmg x (30%) of Str = Weapon Damage*/
}

void Mob::reduceCurHP(float pDmg, float mDmg) {
	float finalPDmg;
	finalPDmg = pDmg * (armor * .5 / 100); /*30 armor = 15% physical damage reduction*/
	float finalMDmg;
	finalMDmg = mDmg * (spirit * .5 / 100); /*30 spirit = 15% magical damage reduction*/
	curHealth -= (finalPDmg + finalMDmg);
}
void Mob::setMaxStats() {
	maxHealth = stamina * 11;
	maxAP = intellect * 8.25;
}
float Mob::getMaxHealth() {
	return maxHealth;
}