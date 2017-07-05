#pragma once
#include "GameState.h"
#include <iostream>
class SLoading : 
	public GameState
{
public:
	SLoading();
	~SLoading();

	virtual void init() override {};
	virtual void draw() override { std::cout << "loading" << std::endl; };
	virtual void update() override {};
};

