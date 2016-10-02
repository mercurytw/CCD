//! Primary entry point
/*!
 * This is the main file for the CCD project
 */
#include <cstdlib>
#include <iostream>
#include "Vector2D.h"
#include "collision/Circle.h"

int main() {
    std::cout << "We finna make some boxes hit shit" << std::endl;
    Vector2D unity;
    std::cout << unity.toString() << std::endl;
    Circle c(0, 0, 10.);
    std::cout << c.toString() << std::endl;
    return EXIT_SUCCESS;
}
