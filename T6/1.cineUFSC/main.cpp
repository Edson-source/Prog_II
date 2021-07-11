#include "ingressos.hpp"

int main() {

  Ingresso value;
  IngressoVIP advalue;

  while(true){
    if(vrs) cout << "What ticket do you want to buy" << endl;
    if(vrs) cout << "1. Normal ticket" << endl;
    if(vrs) cout << "2. VIP ticket" << endl;
    if(vrs) cout << "0.Quit" << endl;

  char ch;
  cin >> ch;

  // fflush();
  cin.ignore();

  if (ch == '1')
  {
    Ingresso a;
    cout << "The ticket cost: " << value.toString() << ",00" << endl;
    system("pause");
    system("cls");
  }
  if (ch == '2')
  {
    cout << "The ticket have an additional value of $65,00" << endl;
    IngressoVIP b;
    cout << "The VIPticket cost: " << advalue.toString() << ",00" << endl;
    system("pause");
    system("cls");
  }
  if (ch == '0')
  {
    cout << "Leaving..." << endl;
    system("pause");
    system("cls");
    break;
  }

}
  return 0;
}
