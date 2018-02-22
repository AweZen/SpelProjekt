#include "Rocket.h"

void Rocket::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(mSpriteSheet, states);
}

Rocket::Rocket()
{
	// Just this line is needed if you remove int playerNumber from the argument list
	sf::String fileName = "spr_missile.png"; //byta png till annnan -- klar



	// Load texture, set it to the sprite and set what part of the sprite sheet to draw.
	if (mTexture.loadFromFile(fileName))
	{
		// Handle error
	}
	mSpriteSheet.setTexture(mTexture);
	mSpriteSheet.setPosition(100, 100);
	mSpriteSheet.rotate(-90);
	mSpriteSheet.scale(0.5, 0.5);
	// Initialise animation variables
}

bool Rocket::Update(float dt)
{
	bool outOfSpace = false;
	mSpriteSheet.move(0, mSpeed*dt*1);

	if (mSpriteSheet.getPosition().y <= -70)
	{
		outOfSpace = true;
	}
	return outOfSpace;
}

void Rocket::Center(sf::Vector2f direction)
{
	mSpriteSheet.setPosition(direction);
	mSpriteSheet.move(mTexture.getSize().x/3, 0);

}
