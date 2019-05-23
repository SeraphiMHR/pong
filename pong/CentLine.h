#pragma once
#include <SFML\Graphics.hpp>
class CentLine
{
public:
	CentLine();
	~CentLine();
	sf::Vector2f pos;
	sf::RectangleShape line;
	void drawTo(sf::RenderWindow &window);
};

