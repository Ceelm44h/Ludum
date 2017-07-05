#include "..\..\Include\GUI\GUIButton.h"
#include "../Game.h"



GUIButton::GUIButton(const sf::Texture & _texture, bool _isActive, bool _canSetOrigin)
	: isActive(_isActive)
{
	sprite.setTexture(_texture);

	if(_canSetOrigin)
		sprite.setOrigin(sprite.getGlobalBounds().width/2, sprite.getGlobalBounds().height/2); //setting origin in the middle of sprite
	
}

GUIButton::~GUIButton()
{
	
}

void GUIButton::draw()
{
	Game::getInstance().getWindow().draw(sprite);
}

void GUIButton::highlight()
{

}
