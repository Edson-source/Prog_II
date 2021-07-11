#ifndef ESTRUTURADADOS_H
#define  ESTRUTURADADOS_H

#include <iostream>
#include <vector>

using namespace std;

class EstruturaDados
{
private:
protected:
  vector<float> m_num;
public:
  EstruturaDados(): m_num(0) { };
  ~EstruturaDados() { };

  void Resetar() { };
  float GetTamanho() { return m_num.size(); };
};

#endif
