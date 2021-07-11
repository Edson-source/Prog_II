#ifndef PILHA_H
#define  PILHA_H

#include "estruturadados.hpp"

#include <stack>
#include <iostream>

class Pilha : public EstruturaDados
{
private:
protected:
  stack<int> m_pilha;
public:
  Pilha() { };
  ~Pilha() { };

  //LIFO
  void Inserir(int num) { m_pilha.push(num); };
  void Remover() { m_pilha.pop(); };
  void Limpar();
  void Imprimir() { cout << "Tamanho total: " << m_pilha.size()
                         << " Elemento de cima: " << m_pilha.top() << endl; };
};

#endif
