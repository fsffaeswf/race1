#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"

struct RoadObj {
	sf::Texture texture;
	sf::Sprite sprite;
};
void roadObj_init(RoadObj& obj, sf::Vector2f pos,std::string filename) {
	obj.texture.loadFromFile(filename);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}
void roadObj_draw(RoadObj& obj, sf::RenderWindow& window) {
	window.draw(obj.sprite);
}