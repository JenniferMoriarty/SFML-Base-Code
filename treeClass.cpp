#include <SFML/Graphics.hpp>

class tree {
private:
	int xpos;
	int ypos;
	int size;
	sf::CircleShape circle;
	sf::RectangleShape rect;
public:
	tree(int x, int y, int s); //constructor
	void draw(sf::RenderWindow& window);
};

tree::tree(int x, int y, int s) {
	xpos = x;
	ypos = y;
	size = s;
}

void tree::draw(sf::RenderWindow& window) {
	circle.setRadius(size);
	circle.setFillColor((sf::Color(0, 100, 0)));
	circle.setPosition(xpos, ypos);
	window.draw(circle);
}

tree t1(100, 100, 50);
tree t2(300, 300, 50);

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
		t1.draw(window);
		t2.draw(window);
		
		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main
