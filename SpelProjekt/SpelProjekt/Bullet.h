#pragma once
#include <string>
#include <iostream>
#include "Shot.h"

using namespace std;

class Bullet : public Shot
{
private:

public:
	Bullet(string name, string mail, string department, int salery);
	virtual~Bullet();
};
#pragma once
#pragma once
