#include "header.h"


vector<string> loadData(string fileName)
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

vector<int> visualizer(vector<string> data)
{
    vector<int> visual;
    for(int i = 0; i < data.size(); i++)
    {
        int count = 0;
        for(int j = 0; j < data[i].size(); j++)
        {
            count++;
        }
        visual.push_back(count);
    } 
    return visual;
}

void displayer(vector<int> data)
{
    cout << endl;
    for(int i = 0; i < data.size(); i++)
    {
        for(int j = 0; j < data[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
