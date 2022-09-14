#include <cstring>
#include <cctype>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;



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


bool mergeSort(vector<string> &data);
bool insertionSort(vector<string> &data);
bool quickSort(vector<string> &data);
bool bubbleSort(vector<string> &data);
bool selectionSort(vector<string> &data);
