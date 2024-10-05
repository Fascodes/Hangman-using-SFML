#pragma once

#include <SFML/Graphics/Text.hpp>
#include <SFML/Window.hpp>
#include <string>
#include <iostream>

class Word : public sf::Text
{
private:
	sf::String answer;
	
public:
	Word(const std::string& answer, const sf::Font& font, unsigned charsize, sf::Color wordcolor);
	
	
	void handleInputs(const sf::Event& event);
	
};

//sf::Font font;
//if (!font.loadFromFile("C:\\Windows\\Fonts\\Arial.ttf")) {
//    // Obsługa błędu ładowania czcionki
//    return -1;
//}
//
//sf::Text text;
//text.setFont(font);
//text.setString(word);
//text.setCharacterSize(50);
//
//text.setFillColor(sf::Color::White);
//
//sf::FloatRect textBounds = text.getLocalBounds();
//
//text.setOrigin(textBounds.width / 2, textBounds.height / 2);
//text.setPosition(window.getSize().x / 2, window.getSize().y / 2);
