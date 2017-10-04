#include <SFML/Graphics.hpp>
#include "Entity.h"
#include "Enemy.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	sf::Clock clock;
	sf::Time tick;
	float timer = 0;
	Enemy e;
	sf::Texture background;
	background.loadFromFile("images/background.jpg");
	sf::Sprite sprite_background(background);
	window.setFramerateLimit(60);
    while (window.isOpen())
	{
		tick = clock.restart();
		float time = clock.getElapsedTime().asSeconds();
		clock.restart();
		timer += time;
		float delay = 0.2;

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		if (timer > delay)
		{
			timer = 0;
			e.move(((float)tick.asMilliseconds() / 1000));
		}
       
		window.clear();
		window.draw(sprite_background);
		e.draw(window);
        window.display();
	}

	return 0;
}
