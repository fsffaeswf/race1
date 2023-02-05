#include <SFML/Graphics.hpp>
#include <iostream>
#include "settings.h"
#include "roadObj.h"
using namespace sf;


int main()
{
	RenderWindow window(VideoMode(window_width, window_height),
		".",
		Style::Close|Style::Titlebar
	);
	window.setPosition(Vector2i{(1920-(int)window_width)/2,0});
	window.setFramerateLimit(fps);

	RoadObj grass;
	RoadObj road;
	roadObj_init(grass, grass_start_pos, grass_file_name);
	roadObj_init(road, road_start_pos, road_file_name);

	while (window.isOpen())
	{

		Event event;
		while (window.pollEvent(event))
		{

			if (event.type == Event::Closed) {

				window.close();
			}
		}
		window.clear();
		roadObj_draw(grass, window);
		roadObj_draw(road, window);
		window.display();
	}
	return 0;
}
