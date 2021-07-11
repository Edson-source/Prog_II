#include <iostream>

using namespace std;

class Base
{
private:
protected:
public:
    Base() { };
    ~Base() { };

    void Call() { cout << "I'm Base class" << endl; };
};

class Derived1 : public Base
{
private:
protected:
public:
  Derived1() { };
  ~Derived1() { };

  void Call() { cout << "Derived1" << endl; };
};

class Derived2 : public Base
{
private:
protected:
public:
  Derived2() { };
  ~Derived2() { };

  void Call() { cout << "Derived2" << endl; };
};

int main()
{
  Base b;

  Derived1* d1 = (Derived1*) &b;
  Derived2* d2 = (Derived2*) &b;

  b.Call();
  d1->Call();
  d2->Call();

  return 0;
}
