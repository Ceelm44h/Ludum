#pragma once
#include "GameState.h"
#include <iostream>

class QuitState :
	public GameState
{
public:
	QuitState();
	~QuitState();

	virtual void draw() override { std::cout << "quit" << std::endl; };
	virtual void update() override {};
};

