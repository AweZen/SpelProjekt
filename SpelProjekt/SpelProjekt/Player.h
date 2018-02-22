#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML\Graphics.hpp>
#include "Rocket.h"

class Player : public sf::Drawable
{
public:
	Player();

	void Update(float dt);
	bool getShooting()const;

private:
	sf::Texture mTexture;
	sf::Sprite mSpriteSheet;
	float mSpeed = 180.0f;
	Rocket rocket;

	// Jump variables
	bool mWasSpacePressed = false;
	bool mIsShooting = false;

	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};
#endif