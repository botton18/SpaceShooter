#ifndef ENEMY_H
#define ENEMY_H
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
    void draw(sf::RenderWindow &win);

};
#endif
