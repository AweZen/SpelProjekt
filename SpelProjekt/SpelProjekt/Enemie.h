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
<<<<<<< HEAD
	virtual bool Update(float dt) = 0;
=======
	virtual void Update(float dt) = 0;
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const = 0;



};
// om en klass inneh�ller en rent virutell funktion blir klassen abstract och de inneb�r att att vi inte kan skapa
// n�gra objekt av denna typen

//nu m�ste subklasserna ha en egen definition av funktionen som �r rent virtuell i basklassen
