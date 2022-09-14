#include "header.h"

bool insertionSort(vector<int> &data)
{
    int i, j, temp;
    for(i = 1; i < data.size(); i++)
    {
        temp = data[i];
        j = i - 1;
        while(j >= 0 && data[j] > temp)
        {
            data[j + 1] = data[j];
            j--;
            system("CLS");
            displayer(data);
        }
        data[j + 1] = temp;
    }
    return true;
}