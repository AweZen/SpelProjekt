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
// om en klass inneh�ller en rent virutell funktion blir klassen abstract och de inneb�r att att vi inte kan skapa
// n�gra objekt av denna typen

//nu m�ste subklasserna ha en egen definition av funktionen som �r rent virtuell i basklassen
