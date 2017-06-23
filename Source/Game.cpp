#include "..\Include\Game.h"



Game::Game()
	:
	window(sf::VideoMode(1280, 720), "gierka", sf::Style::Close),
	presentStatus(Status::Loading)
{
	
}

void Game::run()
{
	while (getStatus() != Status::Closing) //main loop
	{
		window.clear();

		sf::Event event;
		while (window.pollEvent(event)) //event loop
		{
			if (event.type == sf::Event::Closed)
				presentStatus = Status::Closing;

		} 
		window.display();
	}
}
