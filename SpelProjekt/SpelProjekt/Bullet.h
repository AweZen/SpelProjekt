#pragma once
#include <string>
#include <iostream>
#include "Shot.h"

using namespace std;

class Bullet : public Shot
{
private:

public:
	Bullet();
	virtual~Bullet();
	void Update(float dt);

};
#pragma once
#pragma once
