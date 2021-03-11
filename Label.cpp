//
//  Label.cpp
//  SFGUI
//
//  Created by Dode Pep on 11/30/19.
//  Copyright © 2019 Dode. All rights reserved.
//

#include "Label.hpp"

Label::Label(std::string t) {
    font.loadFromFile("/System/Library/Fonts/Helvetica.ttc");
    text = t;
    label.setString(t);
    label.setFont(font);
    label.setPosition(0, 0);
    label.setOrigin(label.getGlobalBounds().width/2, label.getGlobalBounds().height/2);
}

void Label::setText(std::string text) {
    label.setString(text);
}
void Label::setFont(Font font) {
    label.setFont(font);
}
Vector2f Label::getPosition() {
    return label.getPosition();
}
void Label::alignText(std::string type) {
    if(type == "left") {
        //break;
    }
    else if(type == "right") {
        //break;
    }
    else {
        //break;
    }
}
void Label::setPosition(float x,float y) {
    label.setPosition(x, y);
}
void Label::draw(RenderWindow &window) {
    window.draw(label);
}
void Label::setColor(Color color) {
    label.setFillColor(color);
}
void Label::setScale(float x, float y) {
    label.setScale(x, y);
}
