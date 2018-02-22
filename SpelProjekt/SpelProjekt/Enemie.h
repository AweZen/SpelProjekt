#pragma once
#include <string>
#include <iostream>
#include "EnemieHandler.h"

using namespace std;

class Enemie
{

private:

public:
	Enemie();
	virtual~Enemie();

};
// om en klass innehåller en rent virutell funktion blir klassen abstract och de innebär att att vi inte kan skapa
// några objekt av denna typen

//nu måste subklasserna ha en egen definition av funktionen som är rent virtuell i basklassen
