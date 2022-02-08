#pragma once
#include <fstream>
using namespace std;
struct Circle
{
    int x;
    int y;
    float area;
};

void inputCircle(Circle*& pA, int& n, ifstream& fin);
void outputCircle(Circle* pA, int n, ofstream& fout);
void sumOfAllCirclesArea(Circle* pA, int n,ofstream& fout);
