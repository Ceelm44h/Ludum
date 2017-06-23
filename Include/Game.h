#pragma once
#include "SFML\Graphics.hpp"

//states
#include "State\GameState.h"
#include "State\InGameState.h"
#include "State\LoadingState.h"
#include "State\MainMenuState.h"
#include "State\QuitState.h"
#include "State\PauseState.h"

#include <iostream>

class Game
{
	Game();
	Game(const Game &) = delete;
	Game& operator=(const Game&) = delete;
	~Game();

	GameState *currentStatePtr;

	InGameState inGameState;
	LoadingState loadingState;
	MainMenuState mainMenuState;
	QuitState quitState;
	PauseState pauseState;
	
	

public:
	static Game& getInstance()
	{
		static Game instance;
		return instance;
	}

	inline GameState *getStatePtr() { return currentStatePtr; };

	void run();

	sf::RenderWindow window;
};