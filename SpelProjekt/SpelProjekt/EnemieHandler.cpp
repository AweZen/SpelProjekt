#include "EnemieHandler.h"
#include "Alien.h"
#include "Ship.h"
#include <time.h>
#include <stdlib.h> 

int const EnemieHandler::spawns[6] = { 50,150,225,325,425,500 };
int const EnemieHandler::AmountOfSpawns = 6;


void EnemieHandler::initiate(int from)
{
	for (int i = from; i<AmountOfSpawns; i++)
	{
		this->enemies[i] = nullptr;
	}
}

EnemieHandler::EnemieHandler()
{
	this->level = 0;
	this->nrOfEnemies = 0;
	this->nrOfDead = 0;
	this->enemies = new Enemie*[this->AmountOfSpawns];
	initiate();
	spawn();
}

void EnemieHandler::draw(const EnemieHandler & origObj, sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < nrOfEnemies; i++) {
		if (!enemies[i]->getDead())
		target.draw(*enemies[i], states);

	}
}

Enemie* EnemieHandler::getEnemies(int enemieNumber)
{
	return enemies[enemieNumber];
}

void EnemieHandler::setDead(int enemieNumber)
{
	cout << "called on number " << enemieNumber << endl;
	this->enemies[enemieNumber]->setDead();
	this->nrOfDead++;
	if (this->nrOfDead == this->nrOfEnemies) {

		this->nrOfEnemies = 0;
		this->nrOfDead = 0;
		this->level++;
		if (this->level >= this->AmountOfSpawns) {
			this ->level = 0;
		}
		spawn();
	}
}

int EnemieHandler::getNrOfEnemies() const
{
	return this->nrOfEnemies;
}

EnemieHandler::~EnemieHandler()
{
}

void EnemieHandler::Update(float dt)
{


	for (int i = 0; i < this->nrOfEnemies; i++) {
		if (!enemies[i]->getDead())
			enemies[i]->Update(dt);
			
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
	cout << this->AmountOfSpawns << "  amout of spawns" << endl; 
	int i;
		for ( i = 0; i < this->level; i++) {
			addShip(spawns[i]);
			cout << i << " ship " << endl;
		}
		for ( i; i < this->AmountOfSpawns; i++) {
			cout << i << " Alien " << endl;
 			addAlien(spawns[i]);
	}
}
