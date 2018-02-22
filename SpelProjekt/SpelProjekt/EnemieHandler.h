#pragma once
#include <string>
#include <iostream>
#include "Enemie.h"

using namespace std;

class EnemieHandler
{

private:
public:
	EnemieHandler();
	virtual~EnemieHandler();
};
// om en klass innehåller en rent virutell funktion blir klassen abstract och de innebär att att vi inte kan skapa
// några objekt av denna typen

//nu måste subklasserna ha en egen definition av funktionen som är rent virtuell i basklassen
