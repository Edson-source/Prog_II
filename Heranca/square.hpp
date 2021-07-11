#ifndef SQUARE_H
#define SQUARE_H

#define vrs 0

#include <iostream>
#include "shapes2d.hpp"

using namespace std;

class Square : public Shapes2D
{
private:

protected:
    float m_edge;
    void CalcArea() { m_area = m_edge*m_edge; }

public:
    Square() { if(vrs)cout << "I'm a square constructor" << endl; };
    Square(float edge) : m_edge(edge) { if(vrs)cout << "I'm a square constructor" << endl; this->CalcArea(); };
    ~Square() { if(vrs)cout << "I'm a square desconstructor" << endl; };

    void GetInfo() {
        cout << "Hi, I'm a Square -> "; Shapes2D::GetInfo();
    }
};

#endif
