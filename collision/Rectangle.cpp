//
// Created by ari on 10/15/16.
//

#include <sstream>

#include "Rectangle.h"

int Rectangle::colliderId = 2;

std::string Rectangle::toString() const {
    std::stringstream ss;
    ss << "\"Rectangle\": {\n\t";
    ss << "\"x\": " << position.x << ",\n\t";
    ss << "\"y\": " << position.y << ",\n\t";
    ss << "\"width\": " << width << ",\n\t";
    ss << "\"height\": " << height << "\n";
    ss << "}";
    return ss.str();
}
