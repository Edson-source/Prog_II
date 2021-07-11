#ifndef SHAPES_H
#define SHAPES_H

#define vrs 0

#include <iostream>

using namespace std;

class Shapes
{
private:

protected:
    float m_area;

public:
    Shapes() : m_area(0) { if(vrs)cout << "I'm a shape constructor" << endl; };
    ~Shapes() { if(vrs)cout << "I'm a shape desconstructor" << endl; };

    float GetArea() const { return m_area; };
};

#endif
