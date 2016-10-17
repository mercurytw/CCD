//
// Created by neko on 10/16/16.
//

#include <iostream>
#include <cassert>
#include <map>
#include <memory>
#include "collision.h"
#include "AbstractCollider.h"
#include "Circle.h"
#include "Rectangle.h"

// taken graciously from Scott Meyers' More Effective C++

// ari - this shit is *REALLY* deep. I dont expect you to understand it all

using namespace std;

namespace {
    bool circleCircle(AbstractCollider& circle1, AbstractCollider& circle2) {
        (void)circle1;
        (void)circle2;
        std::cout << "Circle circle!" << std::endl;
        return false;
    }

    bool rectangleRectangle(AbstractCollider& r1, AbstractCollider& r2) {
        (void)r1;
        (void)r2;
        // implement me!!
        std::cout << "Rectangle rectangle!" << std::endl;
        return false;
    }

    bool circleRectangle(AbstractCollider& circle, AbstractCollider& rectangle) {
        (void)circle;
        (void)rectangle;
        std::cout << "Circle rectangle!" << std::endl;
        return false;
    }

    bool rectangleCircle(AbstractCollider& rectangle, AbstractCollider& circle) {
        return circleRectangle(circle, rectangle);
    }

    typedef bool (*HitFunctionPtr)(AbstractCollider&, AbstractCollider&);
    typedef map<pair<int, int>, HitFunctionPtr> HitMap;

    // we real devs now boys
    HitMap* initializeCollisionMap() {
        HitMap* phm = new HitMap;
        (*phm)[make_pair(Circle::colliderId, Rectangle::colliderId)] = &circleRectangle;
        (*phm)[make_pair(Rectangle::colliderId, Circle::colliderId)] = &rectangleCircle;
        (*phm)[make_pair(Rectangle::colliderId, Rectangle::colliderId)] = &circleCircle;
        (*phm)[make_pair(Circle::colliderId, Circle::colliderId)] = &rectangleRectangle;
        return phm;
    }

    HitFunctionPtr lookup(const int class1, const int class2) {
        static unique_ptr<HitMap> collisionMap(initializeCollisionMap());

        auto mapEntry = collisionMap->find(make_pair(class1, class2));

        if (collisionMap->end() == mapEntry)
            return nullptr;

        return (*mapEntry).second;
    }
}

namespace collision {
    bool checkCollision(AbstractCollider& a, AbstractCollider& b) {
        HitFunctionPtr phf = lookup(a.getColliderId(), b.getColliderId());

        if (phf)
            return phf(a, b);
        std::cerr << "Failed to lookup collision on objects!!" << std::endl;
        assert(false);
        return false; // placate the compiler
    }
}
