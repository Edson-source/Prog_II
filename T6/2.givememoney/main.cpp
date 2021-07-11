#include "empregado.hpp"
#include "funcionarios.hpp"

int main()
{
  Empregado e;
  Gerente g;
  Vendedor v;

  while(true){
    if(vrs) cout << "Que tipo de funcionario voce quer registrar ?" << endl;
    if(vrs) cout << "1. Gerente" << endl;
    if(vrs) cout << "2. Vendedor" << endl;
    if(vrs) cout << "0.Quit" << endl;

  char ch;
  cin >> ch;

  // fflush();
  cin.ignore();

  if(ch == '1')
  {
    string name, dep;
    float sal;

    if(vrs)cout << "Digite o Nome: ";
    getline(cin, name);
    g.SetName(name);
    if(vrs)cout << "Digite o Salario:";
    cin >> sal;
    g.SetSal(sal);
    if(vrs)cout << "Digite o Departamento:";
    cin >> dep;
    g.SetDep(dep);
    if(vrs)cout << "\n";
    g.toString();
    if(vrs)cout << "\n";
  };
  if (ch == '2')
  {
    string name;
    float sal;

    if(vrs)cout << "Digite o Nome:";
    getline(cin, name);
    v.SetName(name);
    if(vrs)cout << "Digite o Salario:";
    cin >> sal;
    v.SetSal(sal);
    v.SetCom();
    if(vrs)cout << "\n";
    v.toString();
    if(vrs)cout << "\n";
  };
  if (ch == '0')
  {
    if(vrs)cout << "Leaving..." << endl;
    system("cls");
    break;
  }
};
  return 0;
}
