#include "dictionary.hpp"

int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        cout << "Error, input should be <exec> <file.txt> <query2search>" << endl;
        return 1;
    }

    //LOADING DICTIONARY
    vector<string> list = LoadDictionary(argv[1]);
    if(list.size() == 0)
    {
        cout << "File not found" << endl;
        return 1;
    }

    //DISPLAY DICTIONARY
    for (size_t i=0; i<list.size(); i++)
    {
        //cout << "Word #" << i+1 << " -> " << list.at(i) << endl;
    }

    //SEARCH WORD IN OUR DICTIONARY
    string query = argv[2];
    size_t index=0;
    bool located = searchWord(list, query, index);
    if(located)
    {
        cout << "Word :" << query << " was located at index " << index << endl;
    }
    else
    {
        cout << "There is no :" << query << " in our dictionary" << endl;
    }

    //SEARCH SUBSTRINGS IN OUR DICTIONARY



    return 0;
}
