// Assignment03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Date.h"



int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
   
    if (fin.fail()) {
        fout << "file doesn't exist";
        return 0;
    }
    Date* pA;
    int n;
    inputDate(pA, n, fin);
    sortDate(pA, n);
    outputDate(pA, n, fout);
    delete[]pA;
    fin.close();
    fout.close();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

