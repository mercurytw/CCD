//! Ye olde Vector2D class
/*!
 * Is it a vector?? Is it a scalar? The math dont care
 */
#ifndef CCD_VECTOR2D_H
#define CCD_VECTOR2D_H

#include <string>

class Vector2D {
public:

    Vector2D(int x, int y) : x(x), y(y) {};
    Vector2D() : Vector2D(0, 0) {};

    //! Copy Constructor
    /*!
     * This particular function signature is special. It's known as
     * the 'copy constructor' and is used when you use they syntax:
     * Vector2D some_vec = some_other_vec;
     * @param other The vector to copy
     * @return A new instance of our class
     */
    Vector2D(const Vector2D& other) { *this = other; };

    inline void setPosition(int x, int y) { this->x = x; this->y = y; }

    Vector2D& operator=(const Vector2D& other) {
        setPosition(other.x, other.y);
        return *this;
    }

    std::string toString() const;

    int x; //!< The x-position
    int y; //!< The y-position
};


#endif //CCD_VECTOR2D_H
