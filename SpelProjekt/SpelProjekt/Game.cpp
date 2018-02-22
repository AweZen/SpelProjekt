#include "Game.h"


Game::Game() :user()
{
	backgroundTexture.loadFromFile("space.png");
	backgroundSprite.setTexture(backgroundTexture);
}
void Game::Update(float dt)
{
	user.Update(dt);
}

void Game::draw(sf::RenderTarget & target, sf::RenderStates states)const
{
	target.draw(backgroundSprite, states);
	target.draw(user, states);
}