#include "polimorfismo.hpp"

int main()
{

  Shape a;
  Shape2D b;
  Shape3D c;
  Shape4D d;
  Shape5D e;


  a.ShowMe();
  b.ShowMe();
  c.ShowMe();
  // d->ShowMe();
  // e->ShowMe();

  Shape* p;
  p = &a;
  p->ShowMe();

  // Shape* p;
  // p = &b;
  // p->ShowMe();

  // Shape* p;
  // p = &c;
  // p->ShowMe();

  // Shape* p;
  // p = &d;
  // p->ShowMe();

  return 0;
}
