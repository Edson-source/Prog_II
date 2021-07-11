#include <iostream>
#include "menu.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    // if (argc != 2 ) {
      // cout << "Entrada deveria ser <nome>.exe < <tester>.txt" << endl;
    // }

    // LOADING TESTER
    // vector<string> list = LoadTester(argv[1]);
    // cout << list.size() << endl;
    // system("pause");

    // if(list.size() == 0)
    // {
        // cout << "File not found" << endl;
        // return 1;
    // }


    vector<PersonPF> pflist;
    vector<PersonPJ> pjlist;
    vector<string> NameList;

    //Display Menu
    for(;;)
    {
        if(vrs) cout << "Tamanho da lista Pessoa Fisica: " << pflist.size() << endl;
        if(vrs) cout << "Tamanho da lista Pessoa Juridica: " << pjlist.size() << endl;
        if(vrs) cout << "Digite uma opcao: " << endl;
        if(vrs) cout << "1. Insere Pessoa Fisica" << endl;
        if(vrs) cout << "2. Insere Pessoa Juridica" << endl;
        if(vrs) cout << "3. Remover Pessoa" << endl;
        if(vrs) cout << "4. Pesquisar Nome" << endl;
        if(vrs) cout << "5. Visualizar Alfabetico" << endl;
        if(vrs) cout << "6. Visualizar por Grupo" << endl;
        if(vrs) cout << "7. Sair" << endl;

        //fflush();
        // cin.ignore(); //limpando buffer

        string ch;
        getline(cin, ch);

        if(ch == "1")
        {
            if(vrs) cout << "*** Inserindo PF" << endl;
            PersonPF newp = inserePessoaPF();
            pflist.push_back(newp);
        }
        if(ch == "2")
        {
            if(vrs) cout << "*** Inserindo PJ" << endl;
            PersonPJ newp = inserePessoaPJ();
            pjlist.push_back(newp);
        }
        if(ch == "3")
        {
            if(vrs) cout << "*** Removendo alguem" << endl;
            if(vrs) cout << "Deletar Pessoa Fisica ou Juridica (F/J):" << endl;

            string option;
            getline(cin, option);

            if (option == "F") {
              cout << "Digitar Pos Vetor:" << endl;
              size_t index;
              cin >> index;
              pflist.erase(pflist.begin()+index);
            }
            else if (option == "J") {
              cout << "Digitar Pos Vetor:" << endl;
              size_t index;
              cin >> index;
              pjlist.erase(pjlist.begin()+index);
            }
        }
        if(ch == "4")
        {
            if(vrs) cout << "*** Pesquisar nome" << endl;

              string name;
              getline(cin, name);

              string locatedPF = searchNamePF(NameList, pflist, name);
              string locatedPJ = searchNamePJ(NameList, pjlist, name);
        }
        if(ch == "5")
        {

            if(vrs) cout << "*** Visualizar Alfabetico" << endl;

            // Concatenate Lists
            NameList.clear();
            for (size_t i=0; i<pflist.size(); i++)
            {
                NameList.push_back(pflist.at(i).nome);
            }
            for (size_t i = 0; i < pjlist.size(); i++) {
                NameList.push_back(pjlist.at(i).nome);
            }

            // Organiza Lista
            sort(NameList.begin(), NameList.end());

            for (size_t i = 0; i < NameList.size(); i++) {
              size_t index = i;
              string list=visuPF (NameList, pflist, index);
                     list=visuPJ (NameList, pjlist, index);
            }
        }
        if(ch == "6")
        {
            if(vrs) cout << "*** Visualizar Grupo" << endl;

                cout << "Pessoa Fisica: " << endl;
                for (size_t i = 0; i < pflist.size(); i++) {
                  cout << pflist.at(i).nome << " -> PF Pos: " << i << endl;
                }
                cout << endl;
                cout << "Pessoa Juridica: " << endl;
                for (size_t i = 0; i < pjlist.size(); i++) {
                  cout << pjlist.at(i).nome << " -> PJ Pos: " << i << endl;
                }
        }
        if(ch == "7"){
            break;
            system("cls"); //linux eh 'clear'
        }
    }
    return 0;
}
