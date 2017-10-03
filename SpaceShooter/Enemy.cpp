#include <SFML/Graphics.hpp>
#include "Enemy.h"

Enemy::Enemy()
{
	lives = 1;
    e_tex.loadFromFile("images/spaceship.png");
    e_sprite = sf::Sprite(e_tex);
}

void Enemy::move()
{
    ++position.y;
    e_sprite.setPosition(position);
}
void Enemy::draw(sf::RenderWindow & win)
{
    win.draw(e_sprite);
}
