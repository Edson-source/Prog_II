#include "dictionary.hpp"

vector<string> LoadDictionary(const char* path)
{
    ifstream file;
    file.open(path);

    vector<string> list;

    if(file.is_open() == true)
    {
        string tmp;
        while(getline(file, tmp))
        {
            //cout << "string is : " << tmp << endl;
            list.push_back(tmp);
        }

        list.erase(list.begin()+0);
    }

    return list;
}
