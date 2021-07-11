#include "dict.hpp"

int main() {

  vector<Dictionary> listdict;

  while(true){
    if(vrs) cout << "Insert an option" << endl;
    if(vrs) cout << "1.Insert the dictionary" << endl;
    if(vrs) cout << "2.Show dicitionaries (all)" << endl;
    if(vrs) cout << "3.Search (substring for everywhere)" << endl;
    if(vrs) cout << "4.insert a word (in the last dictionary)" << endl;
    if(vrs) cout << "5.Remove word (substring all from everywhere)" << endl;
    if(vrs) cout << "6.Remove duplicate (all from everywhere)" << endl;
    if(vrs) cout << "0.Quit" << endl;

  char ch;
  cin >> ch;

  // fflush();
  cin.ignore();

  if (ch == '1') {
    cout << "Enter a dictionary path:";
    string path;
    cin >> path;

    Dictionary a(path);
    if (a.GetSize() > 0)
      listdict.push_back(a);
  }

  if (ch == '2') {
    for (size_t i = 0; i < listdict.size(); i++) {
      cout << "Dicitionary ID: " << i << " -> Dictionary path: "<< listdict.at(i).GetPath() << endl;
      for (size_t j = 0; j < listdict.at(i).GetSize(); j++) {
        cout << "-> " << listdict.at(i).GetWord(j) << endl;
      }
    }
    cout << "Loaded dicitionaries: " << listdict.size() << endl;
  }
  if (ch == '3') {
    if(vrs) cout << "Enter with a word to be searched" << endl;

    size_t i=0;
    string src;
    cin >> src;

    for (size_t i = 0; i < listdict.size(); i++) {
      for (size_t j = 0; j < listdict.at(i).GetSize(); j++) {
        // cout << "Dicitionary ID: " << "-> Dictionary path: "<< listdict.at(i).GetPath() << endl;
        bool located = listdict.at(i).GetSubStrings(src, j);
        if(located) cout << listdict.at(i).GetPath() << endl;
      }
    }
  }
  if (ch == '4') {
    cout << "Enter with a new word:";
    string newWord;
    cin >> newWord;

    listdict.at(listdict.size()-1).Insert(newWord);

  }
  if (ch == '5') {
    if(vrs) cout << "Enter with a word to be removed" << endl;

    string query;
    cin >> query;

    for (size_t i = 0; i < listdict.size(); i++) {
      for (size_t j = 0; j < listdict.at(i).GetSize(); j++){
        listdict.at(i).RemoveSubstring(query, j);
      }
    }
  }
  if (ch == '6') {
    if(vrs) cout << "Removing repeted substrings" << endl;
    vector<string> substring;
    vector<size_t> w;
    vector<size_t> v;
          for (size_t i = 0; i < listdict.size(); i++) {
            for (size_t j = 0; j < listdict.at(i).GetSize(); j++) {
                pair<size_t, string> p(j, listdict.at(i).GetWord(j));
                substring.push_back(listdict.at(i).GetWord(j));
                w.push_back(j);
                v.push_back(i);
            }
                // listdict.at(i).Getduplicates(substring, i);
          }
              stable_sort(substring.begin(), substring.end());
              cout << "___" << endl;
              for (size_t i = 0; i < substring.size(); i++) {
                cout << "dictionary #" << v.at(i) << " "
                << listdict.at(v.at(i)).GetPath() << "-> word pos: "
                << w.at(i) << "-> words: " << substring.at(i) << endl;
              }
              size_t i=0;
              size_t acum[listdict.size()];
              for (size_t i = 0; i < listdict.size(); i++) {
                acum[i]=0;
              }
              while(i < substring.size()-1)  {
                if(substring.at(i) == substring.at(i+1))
                {
                    acum[v.at(i+1)]++;
                    substring.erase(substring.begin() + i+1);
                }
                else
                    i++;
              }
              for (size_t i = 0; i < substring.size(); i++) {
                cout << "dict pos:" << v.at(i) << "-> word pos: "
                << w.at(i) << "-> words: " << substring.at(i) << endl;
              }
              for (size_t i = 0; i < listdict.size(); i++) {
                cout << "dictionary #" << i << " " << listdict.at(i).GetPath() << "-> lost "
                << acum[i] << " words: " << "-> now has " << listdict.at(i).GetSize()-acum[i]
                << endl;

              }
            }
  if (ch == '0') {
    if(vrs) cout << "Saindo" << endl;
    system("pause");
    break;
  }
}



/*
  //chamada do constructor
  Dictionary d1; //estatico, chama os dois
  Dictionary *d2 = new Dictionary; //dinamico, chama somente o constructor

  d1.LoadDictionary("dict.txt");//alocado estaticamente
  d2->LoadDictionary("dict.txt");//alocado dinamicamente
  //chamada do destructor
  delete d2;
  */

  return 0;
}
