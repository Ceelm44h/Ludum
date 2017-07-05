#pragma once
#include <SFML\Graphics.hpp>
#include <vector>
#include <unordered_map>
#include <iostream>




class TextureManager final
{
public:
	typedef std::unordered_map<std::string, sf::Texture *> TexturesUM;

	~TextureManager();

	TextureManager(const TextureManager&) = delete;
	
	void operator=(const TextureManager&) = delete;

	static sf::Texture* load(const std::string &_textureName, const std::string &_texturePath);

	static bool	unload(const std::string &_textureName);

	static std::size_t	clear();

	static sf::Texture* get(const std::string &_textureName);

	inline static bool exists(const std::string &_textureName) { return TextureManager::get(_textureName) != nullptr; }

private:
	
	TextureManager();

	inline static TextureManager& getInstance()
	{
		static TextureManager instance;
		return instance;
	}


	TexturesUM	textures;
};