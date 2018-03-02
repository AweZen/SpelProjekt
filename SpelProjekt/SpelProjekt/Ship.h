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
<<<<<<< HEAD
	int health = 2;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
=======
	int health = 10;
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	bool outOfSpace;
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
public:
	Ship(int xPos);
	int getHealth()const;
	void setHealth(int health);
	virtual~Ship();
<<<<<<< HEAD
	bool Update(float dt);
=======
	void Update(float dt);
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
	sf::FloatRect getGlobalBounds();
};
#pragma once
#pragma once
#pragma once
