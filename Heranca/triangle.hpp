#ifndef TRIANGLE_H
#define TRIANGLE_H

#define vrs 0

#include <iostream>
#include <cmath>
#include "shapes2d.hpp"

using namespace std;

class Triangle : public Shapes2D
{
private:

protected:
    float m_e1, m_e2, m_e3;
    float m_a1, m_a2, m_a3;
    Point2d m_p1, m_p2, m_p3;

    void CalcEdges(Point2d p1, Point2d p2, Point2d p3);
    void CalcAngles();
    void CalcArea();

public:
    Triangle() { if(vrs)cout << "I'm a triangle constructor...." << endl; };
    Triangle(Point2d p1, Point2d p2, Point2d p3);
    ~Triangle() { if(vrs)cout << "I'm a triangle desconstructor" << endl; };

    void GetInfo()
    {
        cout << "Hi, I'm a Triangle -> "; Shapes2D::GetInfo();
        cout << "Euclidian Distance m_e1-> " << m_e1 << endl;
        cout << "Euclidian Distance m_e2-> " << m_e2 << endl;
        cout << "Euclidian Distance m_e3-> " << m_e3 << endl;
        cout << "angulo A-> " << m_a1 << endl;
        cout << "angulo B-> " << m_a2 << endl;
        cout << "angulo C-> " << m_a3 << endl;

    }
};

#endif
