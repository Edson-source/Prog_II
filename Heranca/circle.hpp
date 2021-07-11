#ifndef CIRCLE_H
#define CIRCLE_H

#define vrs 0

#include <iostream>
#include "shapes2d.hpp"

using namespace std;

class Circle : public Shapes2D
{
private:

protected:
    float m_ratio;
    void CalcArea() { m_area = 3.14159 * m_ratio * m_ratio; }

public:
    Circle() : m_ratio(0) { if(vrs)cout << "I'm a circle constructor...." << endl; };
    Circle(float r) : m_ratio(r) { if(vrs)cout << "I'm a circle constructor.." << endl; this->CalcArea(); };
    ~Circle() { if(vrs)cout << "I'm a circle desconstructor" << endl; };

    void GetInfo() {
        cout << "Hi, I'm a Circle -> ";
        Shapes2D::GetInfo();
    }
};

#endif
