#include "menu.hpp"

PersonPJ inserePessoaPJ ()
{
  PersonPJ newp;

      if (vrs) cout << "Insira um Nome: " << endl;
      getline(cin, newp.nome);
      if (vrs) cout << "Insira a Razao Social: " << endl;
      getline(cin, newp.razao);
      if (vrs) cout << "Insira o CNPJ: " << endl;
      getline(cin, newp.cnpj);
      if (vrs) cout << "Insira o Endereco: " << endl;
      getline(cin, newp.address);
      if (vrs) cout << "Insira a Data de Abertura: " << endl;
      getline(cin, newp.abertura);
      if (vrs) cout << "Insira o Capital Social: " << endl;
      getline(cin, newp.capital);

return newp;
}

string searchNamePJ(vector<string>& NameList, vector<PersonPJ>& pjlist, string name)
{

    for (size_t i = 0; i < pjlist.size(); i++) {
      size_t Lctd = pjlist.at(i).nome.find(name);
      if (Lctd != string::npos) {
        cout << pjlist.at(i).nome << "-> PJ Pos: " << i << endl;
      }
      else{}
    }
return "\n";
}

string visuPJ(vector<string>& NameList, vector<PersonPJ>& pjlist, size_t& index)
{
  for (size_t i = index; i <= index; i++) {
    for (size_t j = 0; j < NameList.size(); j++) {
      if (j < pjlist.size() && NameList.at(i) == pjlist.at(j).nome) {
        cout << NameList.at(i) << " -> PJ pos: " << j << endl;
      }
    }
  }
return "\n";
}
