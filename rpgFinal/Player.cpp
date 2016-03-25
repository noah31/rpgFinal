#include "Player.h"

Player::Player(string charName, int charClass, int charPath) {
	name = charName;
	switch (charClass) {
	case 1:
		//warrior
		classType == "Warrior";
		if (charPath == 1) {
			//Champion path
			stamina = 9;
			intellect = 5;
			strength = 6;
			willPower = 3;
			spirit = 6;
			pathType == "Champion";
		}
		if (charPath == 2) {
			//Barbarian path
			stamina = 9;
			intellect = 5;
			strength = 6;
			willPower = 3;
			spirit = 6;
			pathType == "Barbarian";
		}
		break;
	case 2:
		//Wizard
		classType == "Wizard";
		if (charPath == 1) {
			stamina = 5;
			intellect = 7;
			strength = 3;
			willPower = 9;
			spirit = 8;
			//Fire path
			pathType == "Fire";
		}
		if (charPath == 2) {
			stamina = 6;
			intellect = 9;
			strength = 3;
			willPower = 7;
			spirit = 8;
			//Frost path
			pathType == "Frost";
		}
		break;
	}
}