#pragma once

#include <SFML/Graphics/Text.hpp>
#include <SFML/Window.hpp>

class Word : public sf::Text
{
private:
	sf::String answer;
	sf::String displayed;
	
public:
	Word(const std::string& answer, const sf::Font& font, unsigned charsize, sf::Color wordcolor);
	
	
	void handleInputs(const sf::Event& event);

	void showLetter(const char &letter);
};