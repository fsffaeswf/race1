#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "settings.h"
#include <ctime>




const float fps = 60.f;

const float window_height = 1000;
const float window_width = 800;

const sf::Vector2f grass_start_pos(0.f, 0.f);

const std::string grass_file_name("grass.jpg");
const sf::Vector2f road_start_pos(50.f, 0.f);

const std::string road_file_name("road.png");
