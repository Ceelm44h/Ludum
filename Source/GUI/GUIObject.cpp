#include "..\..\Include\GUI\GUIObject.h"



bool GUIObject::wasClicked(sf::RenderWindow& _window)
{
	auto position = getPosition();
	auto size = getSize();

	if (sf::Mouse::getPosition(_window).x >= position.x && sf::Mouse::getPosition(_window).x <= position.x + size.x  && //horizontal
		sf::Mouse::getPosition(_window).y >= position.y && sf::Mouse::getPosition(_window).y <= position.y + size.y ) //vertical
		return true;
	else
		return false;

}

