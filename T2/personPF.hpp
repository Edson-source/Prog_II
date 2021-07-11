#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

#define VRS 1      // quando 0 - release   /    1 - produção

struct PersonPF
{
    string nome;
    string cpf;
    
};

struct PersonPJ
{
  string nome;
  string cnpj;
};

//prototype definition
PersonPF inserePessoaPF(string aux);
PersonPJ inserePessoaPJ(string aux);
