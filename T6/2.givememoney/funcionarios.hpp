#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

#include <iostream>
#include "empregado.hpp"

using namespace std;

class Gerente : public Empregado
{
private:
  string m_department;

public:
  //constructor
  Gerente(): m_department() { };
  Gerente(string dep) : m_department(dep) { };
  //Desconstructor
  ~Gerente() { };

  //Setter
  // void SetName(string name) { m_name = name; };
  // void SetSal(float sal) { m_salary = sal; };
  void SetDep(string dep) { m_department = dep; };
  //Getter
  void toString() { cout << "Gerente: " << m_name
                << " Salario: " << m_salary
                << " Departamento: " << m_department << endl; };
};

class Vendedor : public Empregado
{
private:
  float m_commission;

public:
  //constructor
  Vendedor(): m_commission(0) { };
  //Desconstructor
  ~Vendedor() { };

  //Setter
  // void SetName(string name) { m_name = name; };
  // void SetSal(float sal) { m_salary = sal; };
  void SetCom() { m_commission = m_salary * 0.10; };
  float CalcSalary() { return m_salary = m_commission + m_salary; };

  //Getter
  void toString() { cout << "Vendedor: " << m_name
                << " - Salario: " << m_salary
                << " - Comissao: " << m_commission
                << " - Salario Total: " << CalcSalary() << endl; };
};
#endif
