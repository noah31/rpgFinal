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
	virtual void setName(const string &value);
	string getName();
	virtual void setMaxHP(const float &value);
	float getHealth();
};