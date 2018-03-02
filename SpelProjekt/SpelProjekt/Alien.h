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
<<<<<<< HEAD
public:
	Alien(int xPos);
	virtual~Alien();
	bool Update(float dt);
=======
	bool outOfSpace;
public:
	Alien(int xPos);
	virtual~Alien();
	void Update(float dt);
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
	sf::FloatRect getGlobalBounds();
};
#pragma once
#pragma once
#pragma once
