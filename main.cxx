#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

int main(int, char const**)
{
    RenderWindow window(VideoMode(600, 500), "Tic-Tac Toe");
    /*
    Image icon;
    if (!icon.loadFromFile("icon.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    // Load a sprite to display
    Texture texture;
    if (!texture.loadFromFile("cute_image.jpg")) {
        return EXIT_FAILURE;
    }
    Sprite sprite(texture);

    // Create a graphical text to display
    Font font;
    if (!font.loadFromFile("sansation.ttf")) {
        return EXIT_FAILURE;
    }
    Text text("Hello SFML", font, 80);
    text.setFillColor(Color::Black);

    // Load a music to play
    Music music;
    if (!music.openFromFile("nice_music.ogg")) {
        return EXIT_FAILURE;
    }

    // Play the music
    music.play();
    */

    RectangleShape rec;
    rec.setSize(Vector2f(300,300));
    rec.setPosition(150,150);
    rec.setFillColor(Color::Transparent);
    rec.setOutlineColor(Color::White);
    rec.setOutlineThickness(2);

    RectangleShape line1;
    line1.setPosition(250, 150);
    line1.setSize(Vector2f(1,300));
    line1.setOutlineThickness(0.5);

    RectangleShape line2;
    line2.setPosition(350, 150);
    line2.setSize(Vector2f(1,300));
    line2.setOutlineThickness(0.5);

    RectangleShape line3;
    line3.setPosition(150, 250);
    line3.setRotation(270);
    line3.setSize(Vector2f(1,300));
    line3.setOutlineThickness(0.5);

    RectangleShape line4;
    line4.setPosition(150, 350);
    line4.setRotation(270);
    line4.setSize(Vector2f(1,300));
    line4.setOutlineThickness(0.5);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) {
                window.close();
            }
        }
        // Clear screen
        window.clear();

        // Draw the sprite
        //window.draw(sprite);

        // Draw the string
        //window.draw(text);

        window.draw(rec);
        window.draw(line1);
        window.draw(line2);
        window.draw(line3);
        window.draw(line4);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
