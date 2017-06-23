#pragma once
#include "SFML\Graphics.hpp"
class Game
{
private:
	Game();
	Game(const Game &) = delete;
	Game& operator=(const Game&) = delete;
	~Game() {}
	enum Status
	{
		Loading,
		Running,
		Closing
	};
	inline Status getStatus() { return presentStatus; };
	Status presentStatus;

public:
	static Game& getInstance()
	{
		static Game instance;
		return instance;
	}

	void run();
	sf::RenderWindow window;
};