<<<<<<< HEAD
#include <SFML/Audio.hpp>
#include <SFML\Graphics.hpp>
=======
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
>>>>>>> e722ed4738e9346617e9e544da8f23a05ab098ab
#include "Game.h"

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	sf::RenderWindow window(sf::VideoMode(600, 600), "Space Invaders");
	Game game;
	sf::Clock gameTime;
	bool gamePause = false;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
			game.Update(gameTime.restart().asSeconds());
			window.clear();
			window.draw(game);
			window.display();
		}


	return 0;
}