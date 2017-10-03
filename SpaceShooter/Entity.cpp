#include "Entity.h"



bool Entity::Collision( Entity other )
{
	if (this->position == other.getPosition())
	{
		return true;
	}
	else
	{
		return false;
	}
}

sf::Vector2f Entity::getPosition()
{
	return position;
}
