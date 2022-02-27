#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Base Code");

    sf::CircleShape circle;

    //change each of these to vectors of 20 random numbers
    int xpos = 100;
    int ypos = 100;
    int red = 50;
    int blue = 200;
    int green = 50;
    int size = 100;


    while (window.isOpen())//GAME LOOP--------------------------------
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
           
        }

        //modify these arguments so each is a different slot of the vectors above
        for (int i = 0; i < 20; i++) {
            circle.setRadius(size);
            circle.setFillColor(sf::Color(red, green, blue));
            circle.setPosition(xpos, ypos);
            window.draw(circle);
            window.display();
        }



    }//end game loop-------------------------------------------------

    return 0;
} //end main
