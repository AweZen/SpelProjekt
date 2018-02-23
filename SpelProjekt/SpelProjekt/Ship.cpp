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
	this->outOfSpace = false;
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
}

void Ship::Update(float dt)
{
	mSpriteSheet.move(0, getSpeed()*dt * 1);
	//if (mSpriteSheet.getPosition().y >= 600) {
	//	this->outOfSpace = true;
	//}
}
sf::FloatRect Ship::getGlobalBounds()
{
	return this->mSpriteSheet.getGlobalBounds();
}