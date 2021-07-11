#include <iostream>
#include <fstream>
#include <sstream>
#include <utility>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>

#define vrs 0 //release 0

using namespace std;

bool sortbyrev (const pair<char, size_t> &freq,
                const pair<char, size_t> &freq1)
{
  return (freq.second>freq1.second);
}

int main()
{
  vector < pair < char, size_t > > table; //lockuptable

  //Leitura do alphabet
  if(vrs) cout << "enter with a alphabet: ";
  string pathfile;
  cin >> pathfile;

  ifstream pfile(pathfile); //tipo para leitura de arquivos
  if(!pfile.is_open())
  {
    if(vrs) cout << "Error, alphabet cannot be found..." << endl;
    return 1;
  }

  char ch;
  while (pfile.get(ch))
  {
      if(ch == '\n') continue;

      pair<char, size_t> p;
      p.first = ch;
      p.second = 0;
      table.push_back(p);
      cout << table.at(table.size()-1).first << endl;
      }

      cout << endl;

//Leitura Manuscript
  if(vrs) cout << "enter with a manuscript: ";
  string pathfileman;
  cin >> pathfileman;

  ifstream pfilem(pathfileman); //tipo para leitura de arquivos
  if(!pfilem.is_open())
  {
    if(vrs) cout << "Error, manuscript cannot be found..." << endl;
    return 1;
  }


  //criar table para calcular as frequencias dos caracteres ASC II Table
  vector < pair < char, size_t > > freq(256);  //#***
  for(size_t i=0; i<256; i++)
  {
      freq.push_back(make_pair(i, 0));             //#***
  }

  stringstream manuscript, encoded;
  char tmpstr;
  size_t i = 0;

  while (pfilem.get(tmpstr)) {
    if(tmpstr == '\n') continue;
    manuscript << tmpstr;
    encoded << table[tmpstr].first;
    freq.at(tmpstr).first = tmpstr;
    freq.at(tmpstr).second++;
  }

  cout << manuscript.str();

  cout << endl;
  cout << endl;

  sort(freq.begin(), freq.end(), sortbyrev);

  if(vrs) cout << "Manuscript Frequency in descending order (removing 0 freqs): " << endl;
  size_t count=0;
  //mostrar a frequencia de caracteres
  for(size_t i=0; i<freq.size(); i++)
  {
      if(freq.at(i).second != 0){
          cout << freq[i].first << " -> " << freq[i].second << endl;
          count++;
        }
  }
  //mostrar lockup table
  cout << endl;
  if(vrs)cout << "Lockup table: " << endl;

  //Se manuscript maior que alphabet
  if(table.size() < count){
  if(vrs)cout << "Error, alphabeth with insufficient chars to be encoded";
  return 0;
  }

  //Se manuscript menor que alphabet
  for (size_t i = 0; i < table.size(); i++) {
    if(freq[i].second == 0) freq.at(i).first = '-';
    if(freq.at(i).second != 0 || freq[i].first == '-')
    cout << freq[i].first << " -> " << table.at(i).first << endl;
  }

  cout << endl;

  if(vrs)cout << "Encrypted manuscript:" << endl;
      cout << encoded.str();

  cout << endl;

pfile.close();

  return 0;
}
