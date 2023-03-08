#include <SFML/Graphics.hpp>

//function declaration
void drawShamrock(sf::RenderWindow& window, int x, int y);


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Shamrocks"); //set up game screen

	while (window.isOpen())//OMG GAME LOOP#######################################################
	{
		//input section--------------------------------
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close(); //let you close by pressing the top right "x" button
		}

		//render section-------------------------------
		window.clear();

		drawShamrock(window, 200, 200);

		window.display();

	}//end game loop#############################################################################

} //end main


//function definition
void drawShamrock(sf::RenderWindow& window, int x, int y) {
	sf::CircleShape circle;
	sf::RectangleShape rect;
	circle.setRadius(30);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(x, y);
	window.draw(circle);

	circle.setRadius(30);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(x+50, y);
	window.draw(circle);

	circle.setRadius(30);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(x+25, y-50);
	window.draw(circle);

	rect.setPosition(x+45, y);
	rect.setFillColor(sf::Color(0, 100, 0));
	rect.setSize(sf::Vector2f(20, 80));
	window.draw(rect);
}
