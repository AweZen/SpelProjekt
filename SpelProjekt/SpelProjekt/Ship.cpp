#include "Ship.h"
#include <SFML/Graphics.hpp>

void Ship::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(mSpriteSheet, states);
	//cout << "do i draw" << endl;
}

Ship::Ship(int xPos)
{
	sf::String fileName = "alienshiptex.png";


	if (mTexture.loadFromFile(fileName))
	{
	}
	mSpriteSheet.setTexture(mTexture);
	mSpriteSheet.scale(0.1, 0.1);
	mSpriteSheet.setRotation(-90);
	mSpriteSheet.setPosition(xPos, 0);
<<<<<<< HEAD
=======
	this->outOfSpace = false;
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
}

int Ship::getHealth()const
{
	return this->health;
}

void Ship::setHealth(int health) 
{
	this->health = health;
}

Ship::~Ship()
{
<<<<<<< HEAD

}

bool Ship::Update(float dt)
{
	bool outOfSpace = false;
	mSpriteSheet.move(0, getSpeed()*dt * 1);
	if (mSpriteSheet.getPosition().y >= 600) {
		outOfSpace = true;
	}
	return outOfSpace;
=======
}

void Ship::Update(float dt)
{
	mSpriteSheet.move(0, getSpeed()*dt * 1);
	//if (mSpriteSheet.getPosition().y >= 600) {
	//	this->outOfSpace = true;
	//}
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
}
sf::FloatRect Ship::getGlobalBounds()
{
	return this->mSpriteSheet.getGlobalBounds();
}