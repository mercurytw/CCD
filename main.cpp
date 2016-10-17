//! Primary entry point
/*!
 * This is the main file for the CCD project
 */
#include <cstdlib>
#include <iostream>
#include "Vector2D.h"
#include "collision/Circle.h"
#include "collision/Rectangle.h"
#include "collision/collision.h"

int main() {
    std::cout << "We finna make some boxes hit shit" << std::endl;
    Vector2D unity;
    std::cout << unity.toString() << std::endl;
    Circle c(0, 0, 10.0f);
    Rectangle r(100.0f, 100.0f, 100.0f, 50.0f);
    std::cout << c.toString() << std::endl;
    std::cout << r.toString() << std::endl;

//    collision::checkCollision(c, c);
//    collision::checkCollision(r, r);
//    collision::checkCollision(r, c);
//    collision::checkCollision(c, r);

    return 0;
}
