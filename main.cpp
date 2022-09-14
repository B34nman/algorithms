#include "header.h"


int main()
{
    string fileName = "datafile.txt";
    vector<string> data = loadData(fileName);
    for(int i = 0; i < data.size(); ++i)
    {
        cout << data[i] << endl;
    }
    return 0;
}