#ifndef SHAPES2D_H
#define SHAPES2D_H

#define vrs 0

#include <iostream>
#include "shapes.hpp"
#include "point.hpp"

using namespace std;

class Shapes2D : public Shapes
{
private:

protected:
    Point2d m_positioning;

public:
    Shapes2D() : m_positioning(Point2d(0,0)) { if(vrs)cout << "I'm a shape2D constructor...." << endl; };
    ~Shapes2D() { if(vrs)cout << "I'm a shape2D desconstructor" << endl; };

    void GetInfo() { cout << "Shapes2D: pos.x = "
    << m_positioning.GetX()
    << " pos.y = " << m_positioning.GetY()
    << " Area: " << m_area << endl; }
};

#endif
