#include <cstring>
#include <cctype>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;



vector<string> loadData(string fileName);


bool mergeSort(vector<string> &data);
bool insertionSort(vector<string> &data);
bool quickSort(vector<string> &data);
bool bubbleSort(vector<string> &data);
bool selectionSort(vector<string> &data);
