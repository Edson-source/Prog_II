#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

#define vrs 0 //release 0

using namespace std;

class Dictionary{
  //Atributes
private:
  vector<string> m_list;
          string m_path;

  //Methods
public:

  //constructor and destructor
  Dictionary(); //constructor é chamado apenas uma unica vez quando instanciar
  // ~Dictionary();//destructor
  Dictionary(string path);

  // bool ordbysort(string &a, string &b);
  bool LoadDictionary (string path);
  //Getters - output
  string GetPath() const {return m_path;}
  size_t GetSize() const {return m_list.size();}
  string GetWord(size_t i) const {return m_list.at(i);}
  // void GetDuplicates(vector<string> substring, size_t index);
  bool GetSubStrings(string query, size_t j);

  //Setter - input
  void Insert(string newWord) {m_list.push_back(newWord);}
  void RemoveSubstring(string query, size_t j);
};
