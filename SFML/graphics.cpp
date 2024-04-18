#include <SFML/Graphics.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/ConvexShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/VideoMode.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 1024), "SFML works!");
    sf::CircleShape circulo(200.f);
    circulo.setFillColor(sf::Color::Blue);

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
            window.clear();
            window.draw(circulo);
            window.display();
        }
    }

    return 0;
}
