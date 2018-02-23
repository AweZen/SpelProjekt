#pragma once
#include <string>
#include <iostream>
#include <SFML\Graphics.hpp>

using namespace std;

class Shot: public sf::Drawable
{
private:	
	float mSpeed;
public:
	Shot();
	virtual~Shot();
	float getSpeed();
	virtual bool Update(float dt)= 0;
	virtual void Center(sf::Vector2f direction) = 0;
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const = 0;


};
#pragma once
