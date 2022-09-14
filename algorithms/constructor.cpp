#include "header.h"


std::vector<string> loadData(string fileName)
{
    vector<string> data;
    ifstream infile;
    infile.open(fileName);
    
    string temp;
    while(!infile.eof())
    {
        getline(infile, temp);
        data.push_back(temp);
    }
    return data;
}
