#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#define vrs 0

#include <iostream>
#include <cmath>
#include "shapes3d.hpp"

using namespace std;

class Tetrahedron : public Shapes3D
{
private:

protected:
    float m_e1, m_e2, m_e3;
    Point3d m_p1, m_p2, m_p3, m_p4;

    void CalcEdgesXY (Point3d m_p1, Point3d m_p2, Point3d m_p3);
    void CalcEdgesYZ1(Point3d m_p1, Point3d m_p3, Point3d m_p4);
    void CalcEdgesYZ2(Point3d m_p2, Point3d m_p3, Point3d m_p4);
    void CalcEdgesXZ (Point3d m_p1, Point3d m_p2, Point3d m_p4);

public:
    Tetrahedron() { if(vrs)cout << "I'm a tetrahedron constructor...." << endl; };
    Tetrahedron(Point3d p1, Point3d p2, Point3d p3, Point3d p4);
    ~Tetrahedron() { if(vrs)cout << "I'm a tetrahedron desconstructor" << endl; };

    void GetInfo()
    {
        cout << "Hi, I'm a Tetrahedron -> "; Shapes3D::GetInfo();
    }
};

#endif
