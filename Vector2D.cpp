//
// Created by neko on 10/2/16.
//
#include <sstream>

#include "Vector2D.h"

// I <3 JSON
std::string Vector2D::toString() const {
    std::stringstream ss;
    ss << "\"Vector2D\": {\n\t";
    ss << "\"x\": " << x << ",\n\t";
    ss << "\"y\": " << y << "\n}";
    return ss.str();
}
