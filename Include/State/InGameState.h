#pragma once
#include "GameState.h"
#include <iostream>
class InGameState :
	public GameState
{
public:
	InGameState();
	~InGameState();
	virtual void draw() override { std::cout << "ingame" << std::endl; };
	virtual void update() override {};
};

