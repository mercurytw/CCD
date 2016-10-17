//
// Created by ari on 10/15/16.
//

#ifndef CCD_RECTANGLE_H_H
#define CCD_RECTANGLE_H_H

#include <cmath>

#include <iostream>
#include "../Vector2D.h"
#include "AbstractCollider.h"

class Rectangle {
public:
    static int colliderId;
    Vector2D position;
    float width;
    float height;

    Rectangle(int x, int y, float width, float height) {
        position = Vector2D(x, y);
        this->width = width;
        this->height = height;
    }

    ~Rectangle() {
        std::cout << "I have no class members on the heap, and "
                "no system resources, so this dtor doesnt need to exist!\n";
    }


    inline float area() const {
        return width * height;
    }

    int getColliderId() const { return Rectangle::colliderId; }

    std::string toString() const;
};

#endif //CCD_RECTANGLE_H_H
