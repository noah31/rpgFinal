#include "Game.h"
/* Game > Character > Warrior/Wizard */

bool Game::isDead(){
	return dead;
}
void Game::death(bool value){
	dead = value;
}