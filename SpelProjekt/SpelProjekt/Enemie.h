#pragma once
#include <string>
#include <iostream>
#include <SFML\Graphics.hpp>

using namespace std;

class Enemie: public sf::Drawable
{

private:
	float mSpeed;
	bool dead;
public:
	Enemie();
	virtual~Enemie();
	bool getDead()const;
	void setDead();
	int getSpeed();
	virtual void Update(float dt) = 0;
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const = 0;



};
// om en klass innehåller en rent virutell funktion blir klassen abstract och de innebär att att vi inte kan skapa
// några objekt av denna typen

//nu måste subklasserna ha en egen definition av funktionen som är rent virtuell i basklassen
