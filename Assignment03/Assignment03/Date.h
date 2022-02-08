#pragma once
#include<fstream>
#include <string>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

void inputDate(Date*& pA, int& n, ifstream& fin);
void outputDate(Date* pA, int n, ofstream& fout);
void sortDate(Date* pA, int n);
