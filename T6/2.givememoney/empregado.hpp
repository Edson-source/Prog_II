#ifndef EMPREGADO_H
#define EMPREGADO_H

#define vrs 1

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Empregado
{
private:

protected:
  string m_name;
  float m_salary;

public:
  //constructor
  Empregado(): m_salary(0), m_name() { };
  Empregado(float sal, string name): m_salary(sal), m_name(name) { };
  //Desconstructor
  ~Empregado() { };

  //Setter
  void SetName(string name) { m_name = name; };
  void SetSal(float sal) { m_salary = sal; };
  //Getter
  void toString();
};
#endif
