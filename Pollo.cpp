#include <SFML/Graphics.hpp>

int main()
{
    //Creacion De La ventana de inicio y de las figuras
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Pollo Anticristo");
    sf::CircleShape Cuerpo(300.f);
    sf::CircleShape Choya(200.f);
    sf::CircleShape Ojo(50.f);
    sf::CircleShape Pico(50.f, 3);
    sf::RectangleShape PatitaDere(sf::Vector2f(200.f, 50.f));
    sf::RectangleShape PatitaIzqui(sf::Vector2f(200.f, 50.f));
    sf::RectangleShape Tatuaje1(sf::Vector2f(50.f, 20.f));
    sf::RectangleShape Tatuaje2(sf::Vector2f(92.f, 20.f));

    //Colores De Las Figuras
    Cuerpo.setFillColor(sf::Color::Magenta);
    Choya.setFillColor(sf::Color::Magenta);
    Ojo.setFillColor(sf::Color::Black);
    Pico.setFillColor(sf::Color::Yellow);
    PatitaDere.setFillColor(sf::Color::Yellow);
    PatitaIzqui.setFillColor(sf::Color::Yellow);
    Tatuaje1.setFillColor(sf::Color::Black);
    Tatuaje2.setFillColor(sf::Color::Black);

    //Cordenas De Las Figuras Geometricas
    Cuerpo.setPosition(250.f, 300.f);
    Choya.setPosition(200.f, 75.f);
    Ojo.setPosition(320.f, 130.f);
    Pico.setPosition(185.f, 220.f);
    PatitaDere.setPosition(450.f, 850.f);
    PatitaIzqui.setPosition(700.f, 850.f);
    Tatuaje1.setPosition(225.f, 250.f);
    Tatuaje2.setPosition(260.f, 200.f);

    //Rotacion de las figuras
    Pico.setRotation(35.f);
    PatitaDere.setRotation(90.f);
    PatitaIzqui.setRotation(90.f);
    Tatuaje2.setRotation(90.f);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        //Borrar, Dibujar y mostrar
        window.clear();
        window.draw(PatitaDere);
        window.draw(PatitaIzqui);
        window.draw(Cuerpo);
        window.draw(Pico);
        window.draw(Choya);
        window.draw(Ojo);
        window.draw(Tatuaje1);
        window.draw(Tatuaje2);
        window.display();
    }
    
    //Tarea para el viernes como recorrer un grafo en una matriz de adyace
    //Terminar la historia
    //Hacer el grafo y la adyacencia

    return 0;
}