#include "dictionary.hpp"
#include <algorithm>

int main(int argc, char* argv[])
{

    cout << "Dictionary 1: ";
    string dict1;
    cin >> dict1;

    cout << "Dictionary 2: ";
    string dict2;
    cin >> dict2;

    //LOADING DICTIONARY1
    vector<string> list1 = LoadDictionary(dict1.c_str());
    if(list1.size() == 0)
    {
        cout << "File not found" << endl;
        return 1;
    }

    //LOADING DICTIONARY2
    vector<string> list2 = LoadDictionary(dict2.c_str());
    if(list2.size() == 0)
    {
        cout << "File not found" << endl;
        return 1;
    }

    //CONCATENATE
    for (size_t i=0; i<list2.size(); i++)
    {
        list1.push_back(list2.at(i));
    }
    list2.clear();

    //ELIMINATE DUPLICATE
    //sort::
    sort(list1.begin(), list1.end());

    size_t tamduplicata=0;
    size_t count=0;
    cout << "Tamanho minimo: ";
    cin >> tamduplicata;

    size_t i=0;
    while (i < list1.size()-1) {
        if(list1.at(i) == list1.at(i+1) && (list1.size() >= tamduplicata)) {
        list1.erase(list1.begin()+i);

        cout << list1.at(i) << "==" << list1.at(i) << endl;
        count++;
      }
      else
        i++;
    }

    //DISPLAY DICTIONARY
    cout << "Duplicates:_" << count << endl;
    cout << "Filtered_Words:_" << list1.size() << endl;

    return 0;
}
