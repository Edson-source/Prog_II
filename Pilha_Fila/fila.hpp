#ifndef FILA_H
#define  FILA_H

#include "estruturadados.hpp"

#include <queue>
#include <iostream>

class Fila : public EstruturaDados
{
private:
protected:
  queue<int> m_fila;
public:
  Fila() { };
  ~Fila() { };

  //FIFO
  void Inserir(int num) { m_fila.push(num); };
  void Remover() { m_fila.pop(); };
  void Limpar();
  void Imprimir() { cout << "Tamanho total: " << m_fila.size()
                         << " Primeiro elemento: " << m_fila.front()
                         << " Ultimo elemento: " << m_fila.back() << endl; };
};

#endif
