#pragma once

class GameState
{
public:
	GameState();
	~GameState();

	virtual void draw() = 0;
	virtual void update() = 0;
};

