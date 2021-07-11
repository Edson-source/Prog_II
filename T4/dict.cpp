#include "dict.hpp"
//class and metod
Dictionary::Dictionary(string path)
{
  LoadDictionary(path);
}

bool Dictionary::LoadDictionary (string path)
{
  cout << "Reading file: " << path << endl;

  ifstream file;
  file.open(path);

  if(file.is_open() == true)
  {
      string tmp;
      while(getline(file, tmp))
      {
          m_list.push_back(tmp);
      }
      m_path = path;
      m_list.erase(m_list.begin()+0);
  }
  else
   return false;

  return true;
}

void Dictionary::RemoveSubstring(string query, size_t j){

    for (size_t i = j; i <= m_list.size(); i++) {
    size_t pos = m_list.at(j).find(query);
    if (pos < m_list.at(j).size()) {
      if(vrs) cout << "The word: " << m_list.at(j) << " has been removed" << endl;
        m_list.erase(m_list.begin()+j);
    }
  }
}

bool Dictionary::GetSubStrings(string query, size_t j){
    vector<string>substring;
    vector<size_t> index;

      for (size_t i = j; i < m_list.size(); i++) {
      size_t pos = m_list.at(j).find(query);
      if (pos < m_list.at(j).size()) {
          substring.push_back(m_list.at(j));
          index.push_back(i);
      }
    }
      for(size_t i = 0; i < substring.size(); i++){
        cout << "The word: " << substring.at(i) << " is in pos: " << index.at(i) << " in dictionary: ";
        return true;
      }
      substring.clear();
  return false;
}
/*
void Dictionary::GetDuplicates(vector<string> list, size_t index){
  size_t count=0;


  // for (size_t i = 0; i < m_list.size(); i++) {
  //   cout << m_list.at(i) << endl;
  // }

    for (size_t i = 0; i < list.size() ; i++) {
      for (size_t j = 0; j < m_list.size(); j++) {
        //removing repeated
        if (j != i && m_list.at(j) == list.at(i)) {
          // cout << "repeated" << endl;
          m_list.erase(m_list.begin()+j);
          list.erase(list.begin()+i);
          count++;
          }
        }
      }



      // substring.clear();
      //concatenate substrings w/out repeated;
      // for (size_t i = 0; i < m_list.size(); i++) {
      //   substring.push_back(m_list.at(i));
      //   count.push_back(i);
      // }

    stable_sort(m_list.begin(), m_list.end());

      cout << "Dictionary #" << index << " " << m_path << " ->"<< " Lost ";
      cout << count << " words" << " -> Now has " << m_list.size() << " words" << endl;

}
*/
// bool ordbysort (string &a, string &b) { return (a>b); }
