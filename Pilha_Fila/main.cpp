#include "estruturadados.hpp"
#include "pilha.hpp"
#include "fila.hpp"

#define vrs 1

int main() {

  EstruturaDados a;
  Fila b;
  Pilha c;

  while(true)
  {
    if(vrs) cout << "1. Pilha" << endl;
    if(vrs) cout << "2. Fila" << endl;
    if(vrs) cout << "0. Sair" << endl;

    char ch;
    cin >> ch;

    // fflush();
    cin.ignore();

    if(ch == '1')
    {
      while(true)
      {
        if(vrs) cout << "1. Inserir" << endl;
        if(vrs) cout << "2. Remover" << endl;
        if(vrs) cout << "3. Limpar" << endl;
        if(vrs) cout << "4. Imprimir" << endl;
        if(vrs) cout << "0. Retonar Menu Anterior" << endl;

        char op;
        cin >> op;

        if(op == '1')
        {
          int num;
          cout << "Digite um numero para inserir: " << endl;
          cin >> num;
          c.Inserir(num);
        }
        if(op == '2')
        {
          c.Remover();
        }
        if(op == '3')
        {
          c.Limpar();
        }
        if(op == '4')
        {
          c.Imprimir();
        }
        if(op == '0')
        {
          break;
        }
      }
    }
    if (ch == '2')
    {
      while(true)
      {
        if(vrs) cout << "1. Inserir" << endl;
        if(vrs) cout << "2. Remover" << endl;
        if(vrs) cout << "3. Limpar" << endl;
        if(vrs) cout << "4. Imprimir" << endl;
        if(vrs) cout << "0. Retonar Menu Anterior" << endl;

        char op;
        cin >> op;

        if(op == '1')
        {
          int num;
          cout << "Digite um numero para inserir: " << endl;
          cin >> num;
          b.Inserir(num);
        }
        if(op == '2')
        {
          b.Remover();
        }
        if(op == '3')
        {
          b.Limpar();
        }
        if(op == '4')
        {
          b.Imprimir();
        }
        if(op == '0')
        {
          break;
        }
      }
    }
      if (ch == '0')
      {
        system("pause");
        system("cls");
        break;
      }
  }


  return 0;
}
