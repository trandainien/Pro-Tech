// Assignment02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Circle.h"
using namespace std;



int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if (fin.fail()) {
        fout << "file doesn't exist";
    }
    Circle* pA;
    int n;
    inputCircle(pA, n, fin);
    sumOfAllCirclesArea(pA, n, fout);
    /*outputCircle(pA, n);*/

    delete[]pA;
    fin.close();
    fout.close();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

