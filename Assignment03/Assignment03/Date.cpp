#include "Date.h"

void inputDate(Date*& pA, int& n, ifstream& fin) {
    fin >> n;
    pA = new Date[n];

    for (int i = 0; i < n; i++) {
        fin >> pA[i].year >> pA[i].month >> pA[i].day;
    }
}

void outputDate(Date* pA, int n, ofstream& fout) {
    for (int i = 0; i < n; i++) {
        fout << pA[i].day << ' ' << pA[i].month << ' ' << pA[i].year << endl;
    }
}

void sortDate(Date* pA, int n) { // do we need reference here becauase we are sorting which means changing the order of the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (pA[i].year > pA[j].year) swap(pA[i], pA[j]);
            else if (pA[i].year == pA[j].year) {
                if (pA[i].month > pA[j].month) swap(pA[i], pA[j]);
                else if (pA[i].month == pA[j].month) {
                    if (pA[i].day > pA[j].day) swap(pA[i], pA[j]);
                }
            }
        }
    }
}