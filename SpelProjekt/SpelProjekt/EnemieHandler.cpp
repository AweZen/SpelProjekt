#include "EnemieHandler.h"
#include "Alien.h"
#include "Ship.h"
#include <time.h>
#include <stdlib.h> 

int const EnemieHandler::spawns[6] = { 50,150,225,325,425,500 };
int const EnemieHandler::amountOfSpawns = 6;


void EnemieHandler::initiate(int from)
{
	for (int i = from; i<amountOfSpawns; i++)
	{
		this->enemies[i] = nullptr;
	}
}

EnemieHandler::EnemieHandler()
{
	this->level = 0;
	this->nrOfEnemies = 0;
	this->nrOfDead = 0;
	this->enemies = new Enemie*[this->amountOfSpawns];
	initiate();
	spawn();
}

EnemieHandler::~EnemieHandler()
{;
	for (int i = 0; i < nrOfEnemies; i++) {
		delete enemies[i];
	}
	delete[] enemies;
}

void EnemieHandler::draw(const EnemieHandler & origObj, sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < origObj.getNrOfEnemies; i++) {
		if (!origObj.enemies[i]->getDead())
		target.draw(*origObj.enemies[i], states);

	}
}

Enemie* EnemieHandler::getEnemies(int enemieNumber)
{
	return enemies[enemieNumber];
}

void EnemieHandler::setDead(int enemieNumber)
{
	this->enemies[enemieNumber]->setDead();
	this->nrOfDead++;
	if (this->nrOfDead == this->nrOfEnemies) {

		this->nrOfEnemies = 0;
		this->nrOfDead = 0;
		this->level++;
		if (this->level == this->amountOfSpawns) {
			this ->level = 0;
		}
		spawn();
	}
}

int EnemieHandler::getNrOfEnemies() const
{
	return this->nrOfEnemies;
}

void EnemieHandler::Update(float dt)
{


	for (int i = 0; i < this->nrOfEnemies; i++) {
		if (!enemies[i]->getDead())
			if (enemies[i]->Update(dt)) {
				setDead(i);
			}
			
	}
}

void EnemieHandler::setHealth(int enemieNumber, int health)
{
	Ship* shipPtr;
	shipPtr = dynamic_cast<Ship*>(enemies[enemieNumber]);
	shipPtr->setHealth(health);
	enemies[enemieNumber] = shipPtr;
}

void EnemieHandler::addAlien(int xValue)
{
	this->enemies[this->nrOfEnemies] = new Alien(xValue);

	this->nrOfEnemies++;
}

void EnemieHandler::addShip(int xValue)
{
	this->enemies[this->nrOfEnemies] = new Ship(xValue); 

	this->nrOfEnemies++;
}

void EnemieHandler::spawn()
{
	for (int i = 0; i < amountOfSpawns; i++) {
		delete enemies[i];
	}
	delete[] enemies;
	initiate();

	this->enemies = new Enemie*[this->amountOfSpawns];

	int i;
		for ( i = 0; i < this->level; i++) {
			addShip(spawns[i]);
		}
		for ( i; i < this->amountOfSpawns; i++) {
 			addAlien(spawns[i]);
	}
}
