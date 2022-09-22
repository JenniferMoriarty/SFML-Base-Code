#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Trees"); //set up screen
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

		//left branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 80)));
		circle.setPosition(200, 180);
		window.draw(circle);

		//right branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(80, 100, 0)));
		circle.setPosition(250, 180);
		window.draw(circle);

		//top branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(225, 150);
		window.draw(circle);

		//trunk
		rect.setPosition(245, 200);
		rect.setFillColor(sf::Color(100, 80, 0));
		rect.setSize(sf::Vector2f(20, 100));
		window.draw(rect);

		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------



	return 0;
} //end main
