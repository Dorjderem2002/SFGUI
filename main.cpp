#include "Sfgui.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sfg;
int main() {
    sf::RenderWindow window(sf::VideoMode(1024,800),"GUI");
    int c=1;
    Button button(512,400,200,100);
    Label label("Click this Button");
    label.setPosition(512,100);
    label.setColor(Color::Red);
    while (window.isOpen()) {
        Event e;
        while (window.pollEvent(e)) {
            if(e.type == Event::Closed) {
                window.close();
            }
            if(button.OnClick(window,e)) {
                button.setText("You Clicked " + std::to_string(c) + " times");
                button.setTextScale(0.5f, 0.5f);
                c++;
            }
        }
        
        window.clear(Color(100,100,100));
        button.draw(window);
        label.draw(window);
        window.display();
    }
    return 0;
}
