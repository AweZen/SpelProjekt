#pragma once
#include <string>
#include <iostream>
#include "Enemie.h"

using namespace std;

class EnemieHandler
{

private:
	static const int spawns[];
	static const int amountOfSpawns;

	Enemie * *enemies;
	int nrOfEnemies;
	void initiate(int from = 0);
	bool *dead;
	int nrOfDead;
	int level;
	bool gameOver;
public:
	EnemieHandler();
	//void draw(sf::RenderTarget & target, sf::RenderStates states)const;
	void draw(const EnemieHandler & origObj, sf::RenderTarget & target, sf::RenderStates states)const;
	Enemie* getEnemies(int enemieNumber);
	void setDead(int enemieNumber);
	int getNrOfEnemies()const;
	virtual~EnemieHandler();
	void Update(float dt);
	void setHealth(int enemieNumber, int health);
	void addAlien(int xValue);
	void addShip(int xValue);
	void spawn();
};
// om en klass inneh�ller en rent virutell funktion blir klassen abstract och de inneb�r att att vi inte kan skapa
// n�gra objekt av denna typen

//nu m�ste subklasserna ha en egen definition av funktionen som �r rent virtuell i basklassen
