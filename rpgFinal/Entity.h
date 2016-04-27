#include "Attributes.h"
#include "Random.h"
#include <stdlib.h>
#include <string>

using namespace std;

class Entity : public Attributes, public Random {
private:
	string name;
	float curHealth;
	float maxHealth;
	int level;
public:
	void setName(const string &value);
	string getName();
	void setMaxHP(float stam);
	float getHealth();
};