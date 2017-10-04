#include <SFML/Graphics.hpp>
#include "Enemy.h"

Enemy::Enemy()
{
	lives = 1;
    e_tex.loadFromFile("spaceimage/greenship.png");
    e_sprite = sf::Sprite(e_tex);
	e_sprite.setScale(0.1, 0.1);
	//e_sprite.rotate(180);
}

void Enemy::move( float  x )
{
	sf::Vector2f movement(16, 16);
	e_sprite.move(movement * x);
}
void Enemy::draw(sf::RenderWindow & win)
{
    win.draw(e_sprite);
}
