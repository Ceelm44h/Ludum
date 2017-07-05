#pragma once
#include "GUIObject.h"
#include <iostream>


class GUIButton final :
	public GUIObject
{
public:
	GUIButton(const sf::Texture& _texture, bool _isActive = true, bool _canSetOrigin = true);
	~GUIButton();

	virtual void draw() override;
	void highlight() {}; //to change sprite of covered button

	bool isActive;

};

