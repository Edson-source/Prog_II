#include <iostream>
#include <vector>

using namespace std;

class Shape
{
private:
protected:
public:
  Shape() {};
  ~Shape() {};

  virtual void ShowMe() { cout << "I'm a shape class" << endl; };
};

class Shape2D : public Shape
{
private:
protected:
public:
  Shape2D() {};
  ~Shape2D() {};

  void ShowMe() { cout << "I'm a shape2D class" << endl; };
};

class Triangle : public Shape2D
{
private:
protected:
public:
  Triangle() {};
  ~Triangle() {};

  void ShowMe() { cout << "I'm a triangle class" << endl; };
};

int main(int argc, char const *argv[]) {

  Shape *a = new Shape();
  Shape2D *b = new Shape2D();
  Triangle *c = new Triangle();

  // a.ShowMe();
  // b.ShowMe();
  // c.ShowMe();

  // Shape* p;
  // p = &a;
  // p->ShowMe();

  // p = &b;
  // p->ShowMe();

  // p = &c;
  // p->ShowMe();

  vector<Shape*> listaGenericaDeCoisas;
  listaGenericaDeCoisas.push_back(a);
  listaGenericaDeCoisas.push_back(b);
  listaGenericaDeCoisas.push_back(c);

  for (size_t i = 0; i < listaGenericaDeCoisas.size(); i++) {
    listaGenericaDeCoisas.at(i)->ShowMe();
  }

  for (size_t i = 0; i < listaGenericaDeCoisas.size(); i++) {
     delete listaGenericaDeCoisas.at(i);
  }


  
  return 0;
}
