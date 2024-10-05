#include "word.hpp"

Word::Word(const std::string& answer, const sf::Font& font, unsigned charsize, sf::Color wordcolor)
{
	displayed.clear();
	for(const char& letter : answer) {
		displayed += '_';
	}

	setFont(font);
	setString(displayed);
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
		this->showLetter(letter);
	}
};

void Word::showLetter(const char& letter) {
	size_t pos = answer.find(letter);
	while (pos != sf::String::InvalidPos) {
		displayed[pos] = answer[pos];

		pos = answer.find(letter, pos + 1);
	}

	setString(displayed);
}


