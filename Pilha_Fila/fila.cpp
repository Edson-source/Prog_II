//FIFO
#include "fila.hpp"

void Fila::Limpar()
{
  for(int i = m_fila.size(); i > 0; i--)
  {
    m_fila.pop();
    if(m_fila.empty())
    {
      cout << "Fila Vazia." << endl;
    }
  }
};
