#include <iostream>
#include <fstream>
#include <sstream>
#include <utility>
#include <vector>

#define vrs 1 //release 0

using namespace std;


int main()
{
  if(vrs) cout << "Enter with a filename: ";
  string pathfile;
  cin >> pathfile;

  ifstream pfile(pathfile);
  if (!pfile.is_open()) {
    if(vrs) cout << "Error, file cannot be open" << endl;
    return 1;
  }

  cout << endl;

  //Criar tabela
  vector <pair <char, size_t>> table(256);
  for (size_t i = 0; i < table.size(); i++) {
    table.at(i).first = i;
    table.at(i).second = 0;
  }

  stringstream sst;
  char ch;


  while(pfile.get(ch)){ //Leitura e inicialização
    sst << ch;
    table.at(ch).second++;
  }

  // Implementação
  for (size_t i = 0; i < table.size(); i++) {
    if (table.at(i).second != 0) cout << table.at(i).first << " -> " << table.at(i).second << endl;
  }

  // cout << sst.str() << endl;
  // pfile.open(pathfile);


  pfile.close();

  return 0;
}
