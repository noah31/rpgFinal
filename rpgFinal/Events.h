#pragma once
#include "Mob.h"
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

class Events{
private:
	bool dead;
	vector<Mob> mobs;
public:
	bool isDead();
	void death(bool value);
	bool combat();
	string getCharType(string value);
};