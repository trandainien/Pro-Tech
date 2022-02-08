// Assignment05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Student.h"




int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    if (fin.fail()) {
        fout << "File doesn't exist";
        return 0;
    }
    Student* pA;
    int n;
    inputStudent(pA, n, fin);
    /*outputStudent(pA, n, fout);*/
    findMaxGpaStudent(pA, n, fout);
    delete[]pA;
    fin.close();
    fout.close();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

