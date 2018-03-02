#include "Game.h"
#include "Enemie.h"
#include "shot.h"
#include "Alien.h"
#include "Ship.h"


Game::Game() :user()
{
	backgroundTexture.loadFromFile("space.jpg");
	backgroundSprite.setTexture(backgroundTexture);
	if (!music.openFromFile("music.ogg")) {

	}
	music.play();
	this->score = 0;
	if(!font.loadFromFile("font.ttf")) {
		cout << "errorororororor" << endl;
	}
	this->text.setFont(font);
	this->text.setFillColor(sf::Color::Yellow);
	this->text.setPosition(100, 100);
	this->text.setCharacterSize(50);
	this->pauseText.setFont(font);
	this->pauseText.setFillColor(sf::Color::Yellow);
	this->pauseText.setPosition(300, 300);
	this->pauseText.setCharacterSize(50);
	this->pauseText.setString("GAME PAUSED");

	this->gamePause = false;
}
void Game::Update(float dt)
{
	if (this->gamePause) {
		if ((event.type == sf::Event::KeyReleased) && (event.key.code == sf::Keyboard::Escape)) {
			this->gamePause = false;
		}
	}
	if (!this->gamePause) {
		if ((event.type == sf::Event::KeyReleased) && (event.key.code == sf::Keyboard::Escape)) {
			this->gamePause = true;
		}
		Alien* alienPtr;
		Ship* shipPtr;
		user.Update(dt);


		//ÄNDRA
		int nrOfEnemies = enemieHandler.getNrOfEnemies();
		for (int i = 0; i < nrOfEnemies; i++)
		{
			alienPtr = dynamic_cast<Alien*>(enemieHandler.getEnemies(i));
			if (alienPtr != nullptr) {
				Alien tempAlien(*alienPtr);
				if (!tempAlien.getDead()) {
					if (user.CollisionBullet(tempAlien.getGlobalBounds())) {
						enemieHandler.setDead(i);
						score += 10;
					}
					if (user.CollisionRocket(tempAlien.getGlobalBounds())) {
						enemieHandler.setDead(i);
						score += 10;
					}
				}
			}
			else {
				shipPtr = dynamic_cast<Ship*>(enemieHandler.getEnemies(i));
				if (shipPtr != nullptr) {
					Ship tempShip(*shipPtr);
					if (!tempShip.getDead()) {
						int health = tempShip.getHealth();
						if (health == 1)
						{
							if (user.CollisionBullet(tempShip.getGlobalBounds()))
							{
								enemieHandler.setDead(i);
								score += 100;
							}
							if (user.CollisionRocket(tempShip.getGlobalBounds()))
							{
								enemieHandler.setDead(i);
								score += 100;
							}
						}
						else
						{
							if (user.CollisionBullet(tempShip.getGlobalBounds()))
							{
								enemieHandler.setHealth(i, health - 1);
							}
							if (user.CollisionRocket(tempShip.getGlobalBounds()))
							{
								enemieHandler.setDead(i);
								score += 100;
							}
						}
					}
				}
			}
		}
		this->text.setString("Score: " + to_string(score));
		enemieHandler.Update(dt);
	}
}


bool Game::getPause()
{
	return false;
}
void Game::draw(sf::RenderTarget & target, sf::RenderStates states)const
{
	target.draw(backgroundSprite, states);
	target.draw(user, states);
	target.draw(text, states);
	enemieHandler.draw(enemieHandler, target, states);
	if (this->gamePause) {
		target.draw(pauseText, states);
	}

}