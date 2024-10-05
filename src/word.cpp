#include "word.hpp"

Word::Word(const std::string& answer, const sf::Font& font, unsigned charsize, sf::Color wordcolor)
{
	std::string temp;
	temp.assign(answer.length(), '_');

	setFont(font);
	setString(temp);
	setCharacterSize(charsize);
	setFillColor(wordcolor);
	setLetterSpacing(5.0f);
	this->answer = answer;
	sf::FloatRect textBounds = getLocalBounds();


}



void Word::handleInputs(const sf::Event& event)
{

	if ( event.type == sf::Event::KeyReleased && event.key.code >= sf::Keyboard::A && event.key.code <= sf::Keyboard::Z)
	{
		// Cast the key to the corresponding char ('A' has value 0 in sf::Keyboard::A)
		char letter = static_cast<char>(event.key.code + 'A');
		std::cout << "Letter pressed: " << letter << std::endl;
	}
};

