// Assignment01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "Fraction.h"
using namespace std;


int main()
{
    Fraction* pA; 
    int n;
    ifstream fin("input.txt");
    ofstream fout("output.txt");
   
    if (fin.fail()) {
        fout << "File doesn't exist";
        return 0;
    }
    
    inputFraction(pA,n,fin);
    sortFraction(pA, n);
    outputFraction(pA, n, fout);

    delete[]pA;
    fin.close();
    fout.close();
}


