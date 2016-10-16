//! A simple circle collider

#ifndef CCD_CIRCLE_H
#define CCD_CIRCLE_H

#include <cmath>
#include <iostream>
#include "../Vector2D.h"

class Circle {
public:
    Vector2D position;
    float radius;

    // I'm using egyptian braces here, because I try to
    // follow the google code standard for C++
    // https://google.github.io/styleguide/cppguide.html
    Circle(int x, int y, float radius) {
        position = Vector2D(x, y);
        this->radius = radius;
    }

    ~Circle() {
        std::cout << "I have no class members on the heap, and "
                "no system resources, so this dtor doesnt need to exist!\n";
    }

    /*!
     * Nyaa this function is declared const!
     * This is a promise to the optimizing compiler that
     * we wont mutate the class instance we're calling this on.
     * When all member functions are properly declared const, the class is said to be
     * "const correct."
     */
    inline float area() const {
        return M_PI * powf(radius, 2.f);
    }

    std::string toString() const;
};


#endif //CCD_CIRCLE_H
//
//- Linux Kernel Development
//        by Robert Love ( 3rd Ed. )
//
//- Professional LINUX Kernel Architecture
//by Wolfgang Mauerer
//
//- LINUX Device Drivers
//        by J. Corbet, A. Rubini and G. Kroah-Hartman