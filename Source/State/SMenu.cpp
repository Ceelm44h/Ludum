#include "..\..\Include\State\SMenu.h"
#include "..\Game.h"


SMenu::SMenu()
{
	this->wasInitialized = false;
}


SMenu::~SMenu()
{
	for (auto component : components)
		delete component.second;
}



void SMenu::init()
{
	if (!wasInitialized)
	{
		std::cout << "Loading menu textures..." << std::endl;
		
		
		components["options"] = new GUIButton(*TextureManager::load("menu_Options", "Graphics/Menu/options.png"));
		components["exit"] = new GUIButton(*TextureManager::load("menu_Exit", "Graphics/Menu/exit.png"));
		components["background"] = new GUIButton(*TextureManager::load("menu_Backgrund", "Graphics/Menu/background.png"), false, false);
		components["start"] = new GUIButton(*TextureManager::load("menu_Start", "Graphics/Menu/start.png"));
		
		sf::Vector2f position = {640, 300};
		std::string nameOfButton[NUMBER_OF_BUTTONS] = {"start", "options", "exit"};

		for (int i = 0; i < NUMBER_OF_BUTTONS; i++) //sets positions of buttons
		{
			components[nameOfButton[i]]->setPosition(position);
			position.y += components[nameOfButton[i]]->getSize().y + BUTTON_PADDING;
		}
	

		this->wasInitialized = true;
	}
}

void SMenu::draw()
{
	for (auto component : components)
	{
		if (component.second)
			component.second->draw();
	}
		
		
}

void SMenu::update()
{
	sf::Event event;
	sf::RenderWindow& window = Game::getInstance().getWindow();
	while (Game::getInstance().getWindow().pollEvent(event))
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			for (auto component : components)
			{
				if (component.second->isActive && component.second->wasClicked(window))
				{
					component.second->highlight();
				}
					
			}
		}
			

	}
}