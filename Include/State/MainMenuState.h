#pragma once
#include "GameState.h"
#include <iostream>
class MainMenuState : 
	public GameState
{
public:
	MainMenuState();
	~MainMenuState();
	virtual void draw() override { std::cout << "menu" << std::endl; };
	virtual void update() override {};
};

