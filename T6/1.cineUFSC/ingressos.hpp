#ifndef INGRESSO_H
#define INGRESSO_H

#define vrs 1

#include <iostream>
#include <stdlib.h>

using namespace std;

class Ingresso
{
private:

protected:
  float m_value;

public:
  //constructor
  Ingresso(): m_value(100.00){ };
  //Desconstructor
  ~Ingresso() { };

  //Getter
  toString() { return m_value; };
};

class IngressoVIP : public Ingresso
{
private:
  float m_AdValue;

public:
  //constructor
  IngressoVIP(): m_AdValue(65.00){ };
  //Desconstructor
  ~IngressoVIP() { };

  //Getter
  toString() { return (m_AdValue + m_value); };
};

#endif
