#include "circle.hpp"
#include "square.hpp"
#include "triangle.hpp"
#include "sphere.hpp"
#include "cube.hpp"
#include "tetrahedron.hpp"
#include "shapes.hpp"
#include "shapes2d.hpp"
#include "shapes3d.hpp"
#include "node.hpp"
#include <vector>

int main()
{
  Shapes a;
  Shapes2D b;
  Shapes3D c;
  // Circle d(11.5);
  // Triangle e(Point2d(2.5,2.5), Point2d(12.1,0), Point2d(7,7.5));
  // Square f(6.6);
  // Sphere g(15);
  // Tetrahedron h(Point3d(2.5,2.5,0), Point3d(12.1,0,0), Point3d(7,7.5,0), Point3d(5,5,10));
  // Cube i(6);

  Node n1 (Circle(11.5));
  Node n2 (Triangle(Point2d(2.5, 2.5), Point2d(7, 7.5), Point2d(12.1, 0)));
  Node n3 (Square(6.6));
  Node n4 (Sphere(15));
  Node n5 (Tetrahedron(Point3d(2.5, 2.5, 0), Point3d(12.1, 0, 0), Point3d(7, 7.5, 0), Point3d(5, 5, 10)));
  Node n6 (Cube(6));

    // b.GetInfo();
    // c.GetInfo();
    // d.GetInfo();
    // e.GetInfo();
    // f.GetInfo();
    // g.GetInfo();
    // h.GetInfo();
    // i.GetInfo();

    vector< Node > listofstuffs;
    listofstuffs.push_back(n1);
    listofstuffs.push_back(n2);
    listofstuffs.push_back(n3);
    listofstuffs.push_back(n4);
    listofstuffs.push_back(n5);
    listofstuffs.push_back(n6);
    // listofstuffs.push_back(n7);
    // listofstuffs.push_back(n8);
    // listofstuffs.push_back(n9);
    // listofstuffs.push_back(n10);
    // listofstuffs.push_back(n11);


    for (size_t i = 0; i < listofstuffs.size(); i++)
    {
      datatypes type;
      void* rawdata = listofstuffs.at(i).getRawData(type);

      if(type == tnone)
      {
        cout << "Node: None x: None, Type: tnone" << endl;
        continue;
      }
    if(type == tcircle)
    {
        cout << "Node: x: " << ((Point2d*)rawdata)->GetX() << " y: " << ((Point2d*)rawdata)->GetY() << " Area: " << ((Point2d*)rawdata)->GetArea() << ", Type: tcircle" << endl;
        continue;
    }
      if(type == ttriangle)
      {
          cout << "Node: x: " << ((Point2d*)rawdata)->GetY() << " y: " << ((Point2d*)rawdata)->GetY() << " Area: " << ((Point2d*)rawdata)->GetArea() << ", Type: ttriangle" << endl;
          continue;
      }
      if(type == tsquare)
      {
          cout << "Node: x: " << ((Point2d*)rawdata)->GetX() << " y: " << ((Point2d*)rawdata)->GetY() << " Area: " << ((Point2d*)rawdata)->GetArea() << ", Type: tsquare" << endl;
          continue;
      }
      if(type == tsphere)
      {
        Point3d* p = (Point3d*)rawdata;
        cout << "Node: x: " << p->GetY() << " y: " << p->GetZ() << " z: " << p->GetX() << " Area: " << p->GetArea() << ", Type: tsphere" << endl;
          continue;
      }
      if(type == ttetrahedron)
      {
        Point3d* p = (Point3d*)rawdata;
        cout << "Node: x: " << p->GetY() << " y: " << p->GetZ() << " z: " << p->GetX() << " Area: " << p->GetArea() << ", Type: ttetrahedron" << endl;
          continue;
      }
      if(type == tcube)
      {
        Point3d* p = (Point3d*)rawdata;
        cout << "Node: x: " << p->GetY() << " y: " << p->GetZ() << " z: " << p->GetX() << " Area: " << p->GetArea() << ", Type: tcube" << endl;
          continue;
      }
      if(type == tpoint2d)
      {
          cout << "Node: x: " << ((Point2d*)rawdata)->GetX() << " y: " << ((Point2d*)rawdata)->GetY() << ", Type: tpoint2d" << endl;
          continue;
      }
      if(type == tpoint3d)
      {
          Point3d* p = (Point3d*)rawdata;
          cout << "Node: x: " << p->GetX() << " y: " << p->GetY() << " z: " << p->GetZ() << ", Type: tpoint3d" << endl;
          continue;
      }
    }

    return 0;
}
