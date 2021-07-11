#include <iostream>

using namespace std;

class Shape
{
private:
protected:
public:

  virtual void ShowMe() { cout << "I'm a shape constructor" << endl; };
};

class Shape2D : public Shape
{
private:
protected:
public:

  void ShowMe() { cout << "I'm a shape2D constructor" << endl; };
};

class Shape3D : public Shape
{
private:
protected:
public:

  void ShowMe() { cout << "I'm a shape3D constructor" << endl; };
};

class Shape4D : public Shape
{
private:
protected:
public:
};

class Shape5D : public Shape
{
private:
protected:
public:
};
