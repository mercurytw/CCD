project (CCD)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W -Wall -Werror -pedantic")
add_executable(CCD main.cpp collision/Circle.cpp collision/Circle.h Vector2D.cpp Vector2D.h collision/Rectangle.cpp collision/Rectangle.h collision/AbstractCollider.h collision/collision.h collision/collision.cpp)
