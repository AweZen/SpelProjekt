#include "Alien.h"
void Alien::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(alienSpriteSheet, states);
<<<<<<< HEAD
=======
	//cout << " i draw enemie number ... " << endl;
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab

}

Alien::Alien(int xPos)
	:Enemie()
{
	if (alienTexture.loadFromFile("alienshiptex.png"))
	{
	}
	alienSpriteSheet.setTexture(alienTexture);
	alienSpriteSheet.scale(0.05,0.05);
	alienSpriteSheet.setRotation(-90);
	alienSpriteSheet.setPosition(xPos,0);}

Alien::~Alien()
{
}

<<<<<<< HEAD
bool Alien::Update(float dt)
{
	bool outOfSpace = false;
	alienSpriteSheet.move(0, this->getSpeed()*dt * 1);
	if (alienSpriteSheet.getPosition().y >= 600) {
		outOfSpace = true;
	}
	return outOfSpace;
=======
void Alien::Update(float dt)
{
	alienSpriteSheet.move(0, this->getSpeed()*dt * 1);
	//if (alienSpriteSheet.getPosition().y >= 600) {
	//	this->outOfSpace = true;
	//}
	//return this->outOfSpace;
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
}

sf::FloatRect Alien::getGlobalBounds()
{
	return this->alienSpriteSheet.getGlobalBounds();
}

