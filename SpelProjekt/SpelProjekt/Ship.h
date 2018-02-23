#pragma once
#include <string>
#include <iostream>
#include "Enemie.h"

using namespace std;

class Ship : public Enemie
{
private:
	sf::Texture mTexture;
	sf::Sprite mSpriteSheet;
	int health = 10;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	bool outOfSpace;
public:
	Ship(int xPos);
	int getHealth()const;
	void setHealth(int health);
	virtual~Ship();
	void Update(float dt);
	sf::FloatRect getGlobalBounds();
};
#pragma once
#pragma once
#pragma once
