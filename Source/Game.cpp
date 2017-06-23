#include "..\Include\Game.h"



Game::Game()
	:
	window(sf::VideoMode(1280, 720), "gierka", sf::Style::Close),
	currentStatePtr(&loadingState)
{

}

Game::~Game()
{
	if (window.isOpen())
	{
		window.close();
	}
}

void Game::run()
{
	currentStatePtr = &mainMenuState;

	sf::Clock gameClock;
	float deltaTime = 1 / 60.f;
	
	while (getStatePtr() != &quitState) //main loop
	{
		window.clear();
		currentStatePtr->draw();
		
		sf::Event event;
		while (window.pollEvent(event)) //event loop
		{
			if (event.type == sf::Event::Closed)
				currentStatePtr = &quitState;
				
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::P) && currentStatePtr == &inGameState) // we don't want to pause, if player is in menu
				currentStatePtr = &pauseState;
		} 

		window.display();
	}
}
