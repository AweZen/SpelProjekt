#pragma once
#include <string>
#include <iostream>
#include <SFML\Graphics.hpp>
#include "Shot.h"
using namespace std;

class Rocket : public sf::Drawable
{
private:

	sf::Texture mTexture;
	sf::Sprite mSpriteSheet;
	float mSpeed = -400.0f;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
public:
	Rocket();
	bool Update(float dt);
	void Center(sf::Vector2f direction);

};
#pragma once
#pragma once
