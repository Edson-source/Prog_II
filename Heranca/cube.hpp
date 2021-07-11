#ifndef CUBE_H
#define CUBE_H

#define vrs 0

#include <iostream>
#include "shapes3d.hpp"

using namespace std;

class Cube : public Shapes3D
{
private:

protected:
  float m_edge;
  void CalcArea() { m_area =  6*m_edge*m_edge;}
public:
  // construtores
  Cube(): m_edge(0) { if(vrs)cout << "I'm a cube constructor...." << endl; };
  Cube(float e): m_edge(e) { if(vrs)cout << "I'm a cube constructor.." << endl; this->CalcArea(); };
  ~Cube() { if(vrs)cout << "I'm a cube desconstructor...." << endl; };

  // getter
  void GetInfo() {
        cout << "Hi, I'm a Cube -> ";
        Shapes3D::GetInfo();
    }
  // setter
};
#endif
