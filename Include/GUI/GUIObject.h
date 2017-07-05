#pragma once
#include <SFML/Graphics.hpp>
#include "../TextureManager.h"

class GUIObject
{
public:
	GUIObject()
	{ 
	};

	~GUIObject() {};

	
	inline sf::Vector2f getPosition() const { return sf::Vector2f(sprite.getPosition().x - getSize().x/2, sprite.getPosition().y - getSize().y / 2); }; //returns position of the left corner
	inline sf::Vector2f getSize() const { return sf::Vector2f(sprite.getGlobalBounds().width, sprite.getGlobalBounds().height); };

	inline void setPosition(const sf::Vector2f& _position) { sprite.setPosition(_position); };

	virtual void draw() = 0;

	bool wasClicked(sf::RenderWindow& _window);
	
	
protected:
	sf::Sprite sprite;
	bool isActive;
};

