#include "box.hpp"

int main() {

  Box a;
  CandyBox b;

/*
  a.m_width = 10;
  b.m_width = 20;
  b.m_contents = "doces deliciosos da vovó";
*/

  a.SetDimensions(10,10,10);
  b.SetDimensions(10,10,10);
  b.SetName("doces deliciosos da vovó");

  a.ShowMe();
  b.ShowMe();

  return 0;
};
