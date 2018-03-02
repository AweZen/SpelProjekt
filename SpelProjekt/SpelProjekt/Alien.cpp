#include "Alien.h"
void Alien::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(alienSpriteSheet, states);

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

bool Alien::Update(float dt)
{
	bool outOfSpace = false;
	alienSpriteSheet.move(0, this->getSpeed()*dt * 1);
	if (alienSpriteSheet.getPosition().y >= 600) {
		outOfSpace = true;
	}
	return outOfSpace;
}

sf::FloatRect Alien::getGlobalBounds()
{
	return this->alienSpriteSheet.getGlobalBounds();
}

