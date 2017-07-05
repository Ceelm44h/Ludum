#pragma once
#include "GameState.h"
#include <iostream>

class SPause :
	public GameState
{
public:
	SPause();
	~SPause();

	virtual void init() override {};
	virtual void draw() override { std::cout << "pause" << std::endl; };
	virtual void update() override {};
};

