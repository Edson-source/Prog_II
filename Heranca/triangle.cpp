#include "triangle.hpp"

Triangle::Triangle (Point2d p1, Point2d p2, Point2d p3)
{
    Point2d m_p1(p1); Point2d m_p2(p2); Point2d m_p3(p3);
    m_positioning = m_p1;
    this->CalcEdges(m_p1,m_p2,m_p3);
    this->CalcAngles();
    this->CalcArea();
}
void Triangle::CalcEdges(Point2d p1, Point2d p2, Point2d p3)
{
    m_e1 = hypot(p2.GetX() - p1.GetX() , p2.GetY() - p1.GetY());
    m_e2 = hypot(p3.GetX() - p2.GetX() , p3.GetY() - p2.GetY());
    m_e3 = hypot(p3.GetX() - p1.GetX() , p3.GetY() - p1.GetY());
}
void Triangle::CalcArea()
{
    float p;
    p = ((m_e1 + m_e2 + m_e3)/2);
    m_area = sqrt(p*(p-m_e1)*(p-m_e2)*(p-m_e3));
}
void Triangle::CalcAngles()
{
    float pi = 3.14159;
    m_a1 = (acos((((m_e2*m_e2) - (m_e3*m_e3) - (m_e1*m_e1))/(-2*m_e3*m_e1)))*180)/pi;
    m_a2 = (acos((((m_e3*m_e3) - (m_e2*m_e2) - (m_e1*m_e1))/(-2*m_e2*m_e1)))*180)/pi;
    m_a3 = (acos((((m_e1*m_e1) - (m_e2*m_e2) - (m_e3*m_e3))/(-2*m_e2*m_e3)))*180)/pi;
}
