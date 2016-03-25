#include "Events.h"
/* Game > Events > Mob
   Game > Events > Player > Warrior/Wiz */

bool Events::isDead(){
	return dead;
}
void Events::death(bool value){
	dead = value;
}
string Events::getCharType(string value) {
	return value;
}