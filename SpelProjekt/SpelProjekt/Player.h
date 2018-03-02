#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SFML\Graphics.hpp>
#include "Shot.h"

class Player : public sf::Drawable
{
private:
	sf::Texture mTexture;
	sf::Sprite mSpriteSheet;
	float mSpeed = 180.0f;
	Shot* *shots;
	bool mIsShootingRocket = false;
	bool mIsShootingBullet = false;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	sf::Vector2f outOfMap;
public:
	Player();
	~Player();
	bool CollisionBullet(sf::FloatRect Enemie);
	bool CollisionRocket(sf::FloatRect Enemie);

	void Update(float dt);
	bool getShootingRocket() const;
};
#endif