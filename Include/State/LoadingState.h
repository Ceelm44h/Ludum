#pragma once
#include "GameState.h"
#include <iostream>
class LoadingState : 
	public GameState
{
public:
	LoadingState();
	~LoadingState();
	virtual void draw() override { std::cout << "loading" << std::endl; };
	virtual void update() override {};
};

