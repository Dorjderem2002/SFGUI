//
//  Label.hpp
//  SFGUI
//
//  Created by Dode Pep on 11/30/19.
//  Copyright © 2019 Dode. All rights reserved.
//

#ifndef Label_hpp
#define Label_hpp

#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

class Label {
public:
    Label(std::string t);
    void setText(std::string text);
    void setFont(Font font);
    void alignText(std::string type);
    void setBound(float b1,float b2,float b3,float b4);
    std::string getText();
    void setPosition(float x,float y);
    void draw(RenderWindow &window);
    Vector2f getPosition();
    void setColor(Color color);
    void setScale(float x,float y);
private:
    std::string text;
    Font font;
    Text label;
};

#endif
