#include <SFML/Graphics.hpp>//pour l'utilisation de la SFML

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");//Designer une fenetre
    sf::CircleShape shape(200.f);//l'aipaseur de la fenetre
    shape.setFillColor(sf::Color::Red);// dans cette fenetre on dessine un cercle verte

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))//bouche qui tourne tantque la fenetre est ouverte
        {
            if (event.type == sf::Event::Closed)//appuyer sur la croix pour quitter la fenetre
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}