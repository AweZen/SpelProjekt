#include "Player.h"
#include "Rocket.h"

Player::Player()
{
	// Just this line is needed if you remove int playerNumber from the argument list
	sf::String fileName = "spaceship.png";



	// Load texture, set it to the sprite and set what part of the sprite sheet to draw.
	if (mTexture.loadFromFile(fileName))
	{
		// Handle error
	}
	mSpriteSheet.setTexture(mTexture);
	mSpriteSheet.scale(0.2,0.2);
	mSpriteSheet.setPosition(300,535);
	// Initialise animation variables.

}

void Player::Update(float dt)
{
	sf::Vector2f direction(0.0f, 0.0f);

	// Handle input from arrow keys and update direction and animation
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		direction.x = -1.0f;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		direction.x = 1.0f;

	}
	// Check to start jumping
	bool isSpacePressed = sf::Keyboard::isKeyPressed(sf::Keyboard::Space);
	if (isSpacePressed && !mIsShooting)
	{
		mIsShooting = true;
		rocket.Center(mSpriteSheet.getPosition());
	}


	// Update jump
	if (mIsShooting)
	{
		if(rocket.Update(dt))
		{
			mIsShooting = false;
		}
	}

	mSpriteSheet.move(direction * mSpeed * dt);

	// Update animation
}

bool Player::getShooting() const
{
	return mIsShooting;
}

void Player::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(mSpriteSheet, states);
	target.draw(rocket, states);
}