#pragma once
#include <string>
#include <iostream>
#include "Shot.h"
#include <SFML\Graphics.hpp>

using namespace std;

class Bullet : public Shot, public sf::Drawable
{
private:
	sf::Texture mTexture;
	sf::Sprite mSpriteSheet;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
public:
	Bullet();
	virtual~Bullet();
	bool Update(float dt);
	void Center(sf::Vector2f direction);
	sf::FloatRect getGlobalBounds();

};
#pragma once
#pragma once
