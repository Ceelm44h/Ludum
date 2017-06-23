#pragma once
#include "GameState.h"
#include <iostream>
class PauseState :
	public GameState
{
public:
	PauseState();
	~PauseState();
	virtual void draw() override { std::cout << "pause" << std::endl; };
	virtual void update() override {};
};

