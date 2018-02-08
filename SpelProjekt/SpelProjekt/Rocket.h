#pragma once
#include <string>
#include <iostream>
#include "Shot.h"

using namespace std;

class Rocket : public Shot
{
private:

public:
	Rocket(string name, string mail, string department, int salery);
	virtual~Rocket();
};
#pragma once
#pragma once
