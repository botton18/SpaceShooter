#include <SFML/Graphics.hpp>

class Entity 
{
protected:
	sf::Vector2f position;
	int lives;
public:

	virtual void move() {};
	bool Collision( Entity );
	sf::Vector2f getPosition();
	
};