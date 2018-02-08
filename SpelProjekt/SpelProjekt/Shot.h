#pragma once
#include <string>
#include <iostream>
#include "ShotHandler.h"

using namespace std;

class Shot : public ShotHandler
{
private:

public:
	Shot(string name, string mail, string department, int salery);
	virtual~Shot();
};
#pragma once
