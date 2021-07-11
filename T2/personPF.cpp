#include "menu.hpp"

PersonPF inserePessoaPF()
{
    PersonPF newp;

    if(vrs) cout << "Insira o Nome:" << endl;
    getline(cin, newp.nome);
    if(vrs) cout << "Insira o CPF: " << endl;
    getline(cin, newp.cpf);
    if(vrs) cout << "Insira o Endereco: " << endl;
    getline(cin, newp.address);
    if(vrs) cout << "Insira a Data de Nascimento: " << endl;
    getline(cin, newp.data);
    if(vrs) cout << "Insira o Estado Social: " << endl;
    getline(cin, newp.estado);

    return newp;
}

string searchNamePF(vector<string>& NameList, vector<PersonPF>& pflist, string name)
{

    for (size_t i = 0; i < pflist.size(); i++) {
      size_t Lctd = pflist.at(i).nome.find(name);
      if (Lctd != string::npos) {
        cout << pflist.at(i).nome << "-> PF Pos: " << i << endl;
      }
      else{}
    }
return "\n";
}

string visuPF(vector<string>& NameList, vector<PersonPF>& pflist, size_t& index)
{
  for (size_t i = index; i <= index; i++) {
    for (size_t j = 0; j < NameList.size(); j++) {
      if (j < pflist.size() && NameList.at(i) == pflist.at(j).nome) {
        cout << NameList.at(i)  << " -> PF pos: " << j << endl;
    }
  }
}

return "\n";
}
