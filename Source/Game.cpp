#include "..\Include\Game.h"



Game::Game()
	:
	WINDOW_SIZE({ 1280, 720}),
	window(sf::VideoMode(WINDOW_SIZE.x, WINDOW_SIZE.y, 32), "gierka", sf::Style::Close),
	currentStatePtr(&loadingState)
{
	currentStatePtr->init();
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
	
	currentStatePtr = &menuState; //start with menu
	currentStatePtr->init();

	sf::Clock gameClock;
	float deltaTime = 1 / 60.f;

	
	while (getStatePtr() != &quitState) //main loop
	{
		float frameStartTime = gameClock.getElapsedTime().asSeconds();
		
		sf::Event event;
		while (window.pollEvent(event)) //event loop
		{
			if (event.type == sf::Event::Closed)
				currentStatePtr = &quitState;
				
		} 
		
		window.clear();
		currentStatePtr->draw();
		currentStatePtr->update();
		window.display();

		deltaTime = gameClock.getElapsedTime().asSeconds() - frameStartTime;
	}
}
