#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

#define vrs 1      // quando 0 - release   /    1 - produção

struct PersonPF
{
    string nome;
    string cpf;
    string address;
    string data;
    string estado;
};

struct PersonPJ
{
  string nome;
  string razao;
  string cnpj;
  string address;
  string abertura;
  string capital;
};

//Function Declaration
PersonPF inserePessoaPF();
PersonPJ inserePessoaPJ();
string visuPF(vector<string>& NameList, vector<PersonPF>& pflist, size_t& index);
string visuPJ(vector<string>& NameList, vector<PersonPJ>& pjlist, size_t& index);
vector<string> removePessoaPF(vector<string>& NameList, size_t& index);
vector<string> removePessoaPJ(vector<string>& NameList, size_t& index);
string searchNamePJ(vector<string>& NameList, vector<PersonPJ>& pjlist, string name);
string searchNamePF(vector<string>& NameList, vector<PersonPF>& pflist, string name);
