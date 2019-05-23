#include "CentLine.h"
#include "GlobalniePer.h"
#include "SFML\Graphics.hpp"



CentLine::CentLine()
{
	line.setSize({ 5, 750 });
	line.setFillColor(sf::Color::Black);
	pos = { width / 2,0 };
}

void CentLine::drawTo(sf::RenderWindow &window) {
	line.setPosition(pos);
	window.draw(line);
}


CentLine::~CentLine()
{
}
