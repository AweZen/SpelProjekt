#pragma once
#include <string>
#include <iostream>
#include "EnemieHandler.h"
using namespace std;

class Enemie
{

private:
	string name;
	string mail;
public:
	Enemie(string name, string mail);
	virtual~Enemie();
	string toString()const;
	virtual string toStringSpecific()const = 0; // rent virutell kommer aldrig kallas tack vare  = 0;
	string getName()const;
	string getMail()const;
};
// om en klass inneh�ller en rent virutell funktion blir klassen abstract och de inneb�r att att vi inte kan skapa
// n�gra objekt av denna typen

//nu m�ste subklasserna ha en egen definition av funktionen som �r rent virtuell i basklassen
