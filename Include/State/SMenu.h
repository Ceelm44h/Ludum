#pragma once
#include "GameState.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <unordered_map>
#include "../GUI/GUIButton.h"

#define NUMBER_OF_BUTTONS 3
#define BUTTON_PADDING 20

enum highlightedKey
{
	start,
	options,
	exit
};

class SMenu : 
	public GameState
{
	
public:
	SMenu();
	~SMenu();

	virtual void init() override;
	virtual void draw() override;
	virtual void update() override;

	//void moveUp();
	//void moveDown();

private:
	std::unordered_map<std::string, GUIButton*> components;
};

