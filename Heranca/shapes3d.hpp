#ifndef SHAPES3D_H
#define SHAPES3D_H

#define vrs 0

#include <iostream>
#include "shapes.hpp"
#include "shapes2d.hpp"
#include "point.hpp"

using namespace std;

class Shapes3D : public Shapes
{
private:

protected:
    Point3d m_positioning;

public:
    Shapes3D() : m_positioning(Point3d(0,0,0)) { if(vrs)cout << "I'm a shape3D constructor...." << endl; };
    ~Shapes3D() { if(vrs)cout << "I'm a shape3D desconstructor" << endl; };

    void GetInfo() { cout << "Shapes3D: pos.x = "
    << m_positioning.GetX()
    << " pos.y = " << m_positioning.GetY()
    << " pos.z = " << m_positioning.GetZ()
    << " Area: " << m_area << endl; }
};

#endif
