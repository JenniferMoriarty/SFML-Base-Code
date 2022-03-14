#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Shamrocks");
	sf::CircleShape circle;
	sf::RectangleShape rect;



	while (window.isOpen())//GAME LOOP--------------------------------
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}

		//render section-------------------------------
		window.clear();

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(200, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(250, 200);
		window.draw(circle);

		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(225, 150);
		window.draw(circle);

		rect.setPosition(245, 200);
		rect.setFillColor(sf::Color(0, 100, 0));
		rect.setSize(sf::Vector2f(20,80));
		window.draw(rect);

		window.display();

	}//end game loop-------------------------------------------------



	return 0;
} //end main
