#include "header.h"


int main()
{
    string fileName = "datafile.txt";
    vector<string> data = loadData(fileName);
    vector<int> visual = visualizer(data);
    
    displayer(visual);
    insertionSort(visual);
    displayer(visual);


    return 0;
}