#ifndef ENTITY_H
#define ENTITY_H
#include <SFML/Graphics.hpp>

class Entity 
{
protected:
	sf::Vector2f position;
	int lives;
public:

	virtual void move(int x) {};
	bool Collision( Entity );
	sf::Vector2f getPosition();
	
};

#endif
