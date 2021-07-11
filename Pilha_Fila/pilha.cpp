//FILO
#include "pilha.hpp"

void Pilha::Limpar()
{
  for(int i = m_pilha.size(); i > 0; i--)
  {
    m_pilha.pop();
    if(m_pilha.empty())
    {
      cout << "Pilha Vazia." << endl;
    }
  }
};
