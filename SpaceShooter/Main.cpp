#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "Enemy.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");

	Enemy e;
    
    while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
        
        e.move();

		window.clear();
		e.draw(window);
        window.display();
	}

	return 0;
}
