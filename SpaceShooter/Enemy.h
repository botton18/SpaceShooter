#include <SFML/Graphics.hpp>
#include "Entity.h"

class Enemy : public Entity
{
private:
	sf::Texture e_tex;
	sf::Sprite e_sprite;
public:
	Enemy();
	void move();


};
