#include <cstring>
#include <cctype>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;



vector<string> loadData(string fileName);
vector<int> visualizer(vector<string> data);
void displayer(vector<int> data);

bool mergeSort(vector<string> &data);
bool mergeSort(vector<int> &data);
bool insertionSort(vector<string> &data);
bool insertionSort(vector<int> &data);
bool quickSort(vector<string> &data);
bool quickSort(vector<int> &data);
bool bubbleSort(vector<string> &data);
bool bubbleSort(vector<int> &data);
bool selectionSort(vector<string> &data);
bool selectionSort(vector<int> &data);
