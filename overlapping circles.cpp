#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Circles");
    sf::CircleShape circle;

    int xpos = 150;
    int ypos = 150;
    int size = 100;


    while (window.isOpen())//GAME LOOP--------------------------------
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        window.clear();
        //modify these arguments so each is a different slot of the vectors above
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                circle.setRadius(size);
                circle.setFillColor((sf::Color(100, 0, 200, 50)));
                circle.setPosition(xpos + i * 100, ypos + j * 100);
                window.draw(circle);
                
            }
        }
        
        window.display();

    }//end game loop-------------------------------------------------

    return 0;
} //end main
