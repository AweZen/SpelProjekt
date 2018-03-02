#pragma once
#include <string>
#include <iostream>
#include "Enemie.h"
#include <SFML\Graphics.hpp>
using namespace std;

class Alien : public Enemie, public sf::Drawable
{
private:
	sf::Texture alienTexture;
	sf::Sprite alienSpriteSheet;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
public:
	Alien(int xPos);
	virtual~Alien();
	bool Update(float dt);
	sf::FloatRect getGlobalBounds();
};
#pragma once
#pragma once
#pragma once
