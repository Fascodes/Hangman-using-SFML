#include <SFML/Graphics.hpp>

#include "events.hpp"
#include "configuration.hpp"
#include "word.hpp"

int main()
{
    auto window = sf::RenderWindow{ { conf::window_size.x, conf::window_size.y}, "CMake SFML Project" };
    window.setFramerateLimit(conf::max_framerate);

    std::string const str = "GRZYBOBRANIE";



    sf::Font font;
    if (!font.loadFromFile("C:\\Windows\\Fonts\\Arial.ttf")) {
        // Obsługa błędu ładowania czcionki
        return -1;
    }
    
    
    
    Word word(str, font, 50, sf::Color::White);

    sf::FloatRect textBounds = word.getLocalBounds();

    word.setOrigin(textBounds.width / 2, textBounds.height / 2);
    word.setPosition(static_cast<float>(window.getSize().x) / 2, static_cast<float>(window.getSize().y) / 2);

    while (window.isOpen())
    {
        processEvents(window, word);

        window.clear();
        window.draw(word);
        window.display();
    }
}