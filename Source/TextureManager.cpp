#include "..\Include\TextureManager.h"



TextureManager::TextureManager()
{
}


TextureManager::~TextureManager()
{
	for (auto texture: textures)
		delete (texture.second);
	
}

sf::Texture * TextureManager::load(const std::string  &_textureName, const std::string & _texturePath)
{

	sf::Texture *result = TextureManager::get(_textureName);
	if (result)
	{
		result->loadFromFile(_texturePath);
	}
	else
	{
		
		result = new sf::Texture();
		result->loadFromFile(_texturePath);
		getInstance().textures[_textureName] = result;
	}

	return result;

	
}

bool TextureManager::unload(const std::string & _textureName)
{
	auto &instance = getInstance();

	auto textureIt = instance.textures.find(_textureName);

	if (textureIt == instance.textures.end())
		return false;
	else
	{
		delete (textureIt->second);
		instance.textures.erase(textureIt);
		return true;
	}
}

std::size_t TextureManager::clear()
{
	auto &instance = getInstance();

	std::size_t textureCount = instance.textures.size();

	for (auto texture : instance.textures)
		delete (texture.second);


	return textureCount;
}

sf::Texture * TextureManager::get(const std::string & _textureName)
{
	auto &instance = getInstance();

	auto textureIt = instance.textures.find(_textureName);

	if (textureIt == instance.textures.end())
		return nullptr;
	

	return textureIt->second;
}
