#pragma once
#include "GameState.h"
#include <iostream>

class SQuit :
	public GameState
{
public:
	SQuit();
	~SQuit();

	virtual void init() override {};
	virtual void draw() override { std::cout << "quit" << std::endl; };
	virtual void update() override {};
};

