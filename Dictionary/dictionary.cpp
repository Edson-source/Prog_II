#include "dictionary.hpp"

vector<string> LoadDictionary(const char* path)
{
    cout << "Trying to load: " << path << endl;
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

bool searchWord(const vector<string>& list, string query, size_t& index)
{
    for(size_t i=0; i<list.size(); i++)
    {
        if(list.at(i) == query)
        {
            index = i;
            return true;
        }
    }

    return false;
}
