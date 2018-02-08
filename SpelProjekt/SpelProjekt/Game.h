#pragma once
#include <string>
#include <iostream>
#include "EnemieHandler.h"
#include "ShotHandler.h"
#include "Player.h"

using namespace std;

class Ship : public Enemie
{
private:

public:
	Ship(string name, string mail, string department, int salery);
	virtual~Ship();
};
#pragma once
#pragma once
#pragma once
