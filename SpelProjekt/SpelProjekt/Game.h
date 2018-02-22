#pragma once
#include <string>
#include <iostream>
//#include "EnemieHandler.h"
#include "Player.h"
#include <SFML/Graphics.hpp>

using namespace std;

class Game : public sf::Drawable
{
public:
	Game();
	void Update(float dt);
private:
	sf::Sprite backgroundSprite;
	sf::Texture backgroundTexture;
	Player user;
	//EnemieHandler* *enemies;
	
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;


};
#pragma once
#pragma once
#pragma once
