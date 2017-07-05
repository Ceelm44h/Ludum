#pragma once
#include "../TextureManager.h"

class GameState
{
public:
	GameState() : wasInitialized(false) {};
	~GameState() {};

	virtual void init() = 0;
	virtual void draw() = 0;
	virtual void update() = 0;
protected:
	bool wasInitialized;
};

