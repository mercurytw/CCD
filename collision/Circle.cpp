//
// Created by neko on 10/2/16.
//

#include <sstream>

#include "Circle.h"

int Circle::colliderId = 1;

std::string Circle::toString() const {
    std::stringstream ss;
    ss << "\"Circle\": {\n\t";
    ss << "\"x\": " << position.x << ",\n\t";
    ss << "\"y\": " << position.y << ",\n\t";
    ss << "\"radius\": " << radius << ",\n\t";
    ss << "}";
    return ss.str();
}
