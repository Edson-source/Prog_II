#ifndef POINTGENERIC_H
#define POINTGENERIC_H

#include <iostream>
#include "shapes.hpp"
#include "point.hpp"

class Point2d : public Shapes
{
private:
    float m_x, m_y;

public:
    Point2d() : m_x(0), m_y(0) {};
    Point2d(float x, float y) : m_x(x), m_y(y) {};

    float GetX() const { return m_x; };
    float GetY() const { return m_y; };
    void SetX(float x) { m_x = x; };
    void SetY(float y) { m_y = y; };
    void SetPoint(Point2d pt) { m_x = pt.m_x; m_y = pt.m_y; };

};

class Point3d : public Shapes
{
private:
    float m_x, m_y, m_z;

public:
    Point3d() : m_x(0), m_y(0), m_z(0) {};
    Point3d(float x, float y=0, float z=0) : m_x(x), m_y(y), m_z(z) {};

    float GetX() const { return m_x;};
    float GetY() const { return m_y;};
    float GetZ() const { return m_z;};

    void SetX(float x) { m_x = x;};
    void SetY(float y) { m_y = y;};
    void SetZ(float z) { m_z = z;};
    void SetPoint(Point3d pt) { m_x = pt.m_x; m_y = pt.m_y; m_z = pt.m_z;};

};


#endif
