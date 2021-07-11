#include "tetrahedron.hpp"

//Triangulos plano YZ
Tetrahedron:: Tetrahedron(Point3d p1, Point3d p2, Point3d p3, Point3d p4)
{
  Point3d m_p1(p1); Point3d m_p2(p2); Point3d m_p3(p3); Point3d m_p4(p4);
    m_positioning = m_p1;
    this->CalcEdgesXY (m_p1,m_p2,m_p3);
    this->CalcEdgesYZ1(m_p1,m_p3,m_p4);
    this->CalcEdgesYZ2(m_p2,m_p3,m_p4);
    this->CalcEdgesXZ (m_p1,m_p2,m_p4);

    // this->CalcArea();
};
//Triangulo plano XY
void Tetrahedron::CalcEdgesXY(Point3d p1, Point3d p2, Point3d p3)
{
    m_e1 = hypot(p2.GetX() - p1.GetX() , p2.GetY() - p1.GetY());
    m_e2 = hypot(p3.GetX() - p2.GetX() , p3.GetY() - p2.GetY());
    m_e3 = hypot(p3.GetX() - p1.GetX() , p3.GetY() - p1.GetY());

    float p;
    p = ((m_e1 + m_e2 + m_e3)/2);
    m_area = sqrt(p*(p-m_e1)*(p-m_e2)*(p-m_e3));
};
//Triangulo plano YZ1
void Tetrahedron::CalcEdgesYZ1(Point3d p1, Point3d p3, Point3d p4)
{
    m_e1 = hypot(p3.GetY() - p1.GetY() , p3.GetZ() - p1.GetZ());
    m_e2 = hypot(p4.GetY() - p3.GetY() , p4.GetZ() - p3.GetZ());
    m_e3 = hypot(p1.GetY() - p4.GetY() , p1.GetZ() - p4.GetZ());

    float p;
    p = ((m_e1 + m_e2 + m_e3)/2);
    m_area = m_area + sqrt(p*(p-m_e1)*(p-m_e2)*(p-m_e3));
};
//Triangulo plano YZ2
void Tetrahedron::CalcEdgesYZ2(Point3d p2, Point3d p3, Point3d p4)
{
    m_e1 = hypot(p3.GetY() - p2.GetY() , p3.GetZ() - p2.GetZ());
    m_e2 = hypot(p4.GetY() - p3.GetY() , p4.GetZ() - p3.GetZ());
    m_e3 = hypot(p2.GetY() - p4.GetY() , p2.GetZ() - p4.GetZ());

    float p;
    p = ((m_e1 + m_e2 + m_e3)/2);
    m_area = m_area + sqrt(p*(p-m_e1)*(p-m_e2)*(p-m_e3));
};
//Triangulo plano XZ
void Tetrahedron::CalcEdgesXZ(Point3d p1, Point3d p2, Point3d p4)
{
    m_e1 = hypot(p2.GetX() - p1.GetX() , p2.GetZ() - p1.GetZ());
    m_e2 = hypot(p4.GetX() - p2.GetX() , p4.GetZ() - p2.GetZ());
    m_e3 = hypot(p1.GetX() - p4.GetX() , p1.GetZ() - p4.GetZ());

    float p;
    p = ((m_e1 + m_e2 + m_e3)/2);
    m_area = m_area + sqrt(p*(p-m_e1)*(p-m_e2)*(p-m_e3));
};
