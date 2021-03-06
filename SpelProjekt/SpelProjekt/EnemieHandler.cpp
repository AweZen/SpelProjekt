#include "EnemieHandler.h"
#include "Alien.h"
#include "Ship.h"
#include <time.h>
#include <stdlib.h> 

int const EnemieHandler::spawns[6] = { 50,150,225,325,425,500 };
<<<<<<< HEAD
int const EnemieHandler::amountOfSpawns = 6;
=======
int const EnemieHandler::AmountOfSpawns = 6;
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab


void EnemieHandler::initiate(int from)
{
<<<<<<< HEAD
	for (int i = from; i<amountOfSpawns; i++)
=======
	for (int i = from; i<AmountOfSpawns; i++)
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
	{
		this->enemies[i] = nullptr;
	}
}

EnemieHandler::EnemieHandler()
{
	this->level = 0;
	this->nrOfEnemies = 0;
	this->nrOfDead = 0;
<<<<<<< HEAD
	this->enemies = new Enemie*[this->amountOfSpawns];
=======
	this->enemies = new Enemie*[this->AmountOfSpawns];
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
	initiate();
	spawn();
}

<<<<<<< HEAD
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
=======
void EnemieHandler::draw(const EnemieHandler & origObj, sf::RenderTarget & target, sf::RenderStates states) const
{
	for (int i = 0; i < nrOfEnemies; i++) {
		if (!enemies[i]->getDead())
		target.draw(*enemies[i], states);
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab

	}
}

Enemie* EnemieHandler::getEnemies(int enemieNumber)
{
	return enemies[enemieNumber];
}

void EnemieHandler::setDead(int enemieNumber)
{
<<<<<<< HEAD
=======
	cout << "called on number " << enemieNumber << endl;
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
	this->enemies[enemieNumber]->setDead();
	this->nrOfDead++;
	if (this->nrOfDead == this->nrOfEnemies) {

		this->nrOfEnemies = 0;
		this->nrOfDead = 0;
		this->level++;
<<<<<<< HEAD
		if (this->level == this->amountOfSpawns) {
=======
		if (this->level >= this->AmountOfSpawns) {
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
			this ->level = 0;
		}
		spawn();
	}
}

int EnemieHandler::getNrOfEnemies() const
{
	return this->nrOfEnemies;
}

<<<<<<< HEAD
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
=======
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
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
 			addAlien(spawns[i]);
	}
}
