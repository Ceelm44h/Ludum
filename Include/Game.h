#pragma once
#include "SFML\Graphics.hpp"

//states
#include "State\GameState.h"
#include "State\SPlaying.h"
#include "State\SLoading.h"
#include "State\SMenu.h"
#include "State\SQuit.h"
#include "State\SPause.h"

#include "TextureManager.h"
#include <iostream>

class Game
{

public:
	inline static Game& getInstance()
	{
		static Game instance;
		return instance;
	}

	inline GameState *getStatePtr() const { return currentStatePtr; };
	inline sf::RenderWindow& getWindow() { return window; };
	inline const sf::Vector2u getWindowSize() const { return WINDOW_SIZE; };
	
	void run();

private:

	Game();
	Game(const Game &) = delete;
	Game& operator=(const Game&) = delete;
	~Game();

	GameState *currentStatePtr;

	SPlaying playingState;
	SLoading loadingState;
	SMenu menuState;
	SQuit quitState;
	SPause pauseState;

	const sf::Vector2u WINDOW_SIZE;
	sf::RenderWindow window;
	
};