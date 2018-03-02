#include "Bullet.h"

void Bullet::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(mSpriteSheet, states);
}

Bullet::Bullet()
	:Shot()
{
	if (mTexture.loadFromFile("bullet.png"))
	{
	}
	mSpriteSheet.setTexture(mTexture);
	mSpriteSheet.setPosition(100, 100);
	mSpriteSheet.scale(0.5, 0.5);
}

Bullet::~Bullet()
{
}

bool Bullet::Update(float dt)
{
	bool outOfSpace = false;
	mSpriteSheet.move(0, getSpeed()*dt * 1);

	if (mSpriteSheet.getPosition().y <= -70)
	{
		outOfSpace = true;
	}
	return outOfSpace;
}

void Bullet::Center(sf::Vector2f direction)
{
	mSpriteSheet.setPosition(direction);
	mSpriteSheet.move(mTexture.getSize().x, 0);
}

sf::FloatRect Bullet::getGlobalBounds()
{
	return this->mSpriteSheet.getGlobalBounds();
}
