#include <SFML/Graphics.hpp>

int main(int argc, char** argv) {
    sf::RenderWindow sfml_window(sf::VideoMode(600, 480), "Foo");

    while (sfml_window.isOpen()) {
        sf::Event e;
        while (sfml_window.pollEvent(e)) {
            switch (e.type) {
            case sf::Event::EventType::Closed:
                sfml_window.close();
                break;
            }
        }

        sfml_window.clear(sf::Color(0, 166, 217));
        sfml_window.display();
    }
    return 0;
}
