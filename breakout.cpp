#include <SFML/Graphics.hpp>


//-------------------------------------------------------------------------------
class brick{
private:
	int xpos;
	int ypos;
	sf::RectangleShape rect;
public:
	brick(int x, int y); //constructor
	void draw(sf::RenderWindow& window);
};

brick::brick (int x, int y) {
	xpos = x;
	ypos = y;

}

void brick::draw(sf::RenderWindow& window) {
	rect.setSize(sf::Vector2f(100, 50));
	rect.setFillColor((sf::Color(0,200, 0)));
	rect.setPosition(xpos, ypos);
	window.draw(rect);
}
//----------------------------------------------------------------------------

//instantiate some bricks
brick b1(100, 100);
brick b2(300, 300);

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Breakout"); //set up screen
	sf::RectangleShape rect;


	while (window.isOpen())//GAME LOOP--------------------------------
	{
		//input section--------------------------------
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		//physics section------------------------------
		 
		
		//render section-------------------------------
		window.clear();

		//draw bricks
		b1.draw(window);
		b2.draw(window);

		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main
