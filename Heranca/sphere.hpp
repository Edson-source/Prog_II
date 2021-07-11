#ifndef SPHERE_H
#define SPHERE_H

#define vrs 0

#include <iostream>
#include "shapes3d.hpp"

using namespace std;

class Sphere : public Shapes3D
{
private:

protected:
  float m_ratio;
  void CalcArea() { m_area =  4*3.14159*m_ratio*m_ratio; }
public:
  // construtores
  Sphere(): m_ratio(0) { if(vrs)cout << "I'm a sphere constructor...." << endl; };
  Sphere(float r): m_ratio(r) { if(vrs)cout << "I'm a sphere constructor.." << endl; this->CalcArea(); };
  ~Sphere() { if(vrs)cout << "I'm a sphere desconstructor...." << endl; };

  // getter
  void GetInfo() {
        cout << "Hi, I'm a Sphere -> ";
        Shapes3D::GetInfo();
    }
  // setter
};
#endif
