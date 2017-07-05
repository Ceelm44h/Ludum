#pragma once
#include "GameState.h"
#include <iostream>
class SPlaying :
	public GameState
{
public:
	SPlaying();
	~SPlaying();

	virtual void init() override {};
	virtual void draw() override { std::cout << "ingame" << std::endl; };
	virtual void update() override {};
};

