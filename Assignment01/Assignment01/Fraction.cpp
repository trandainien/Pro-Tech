#include "Fraction.h"

void inputFraction(Fraction*& pA, int& n, ifstream& fin) {
    fin >> n;
    pA = new Fraction[n];

    for (int i = 0; i < n; i++) {
        fin >> pA[i].numerator >> pA[i].denominator;
    }
}

void outputFraction(Fraction* pA, int n, ofstream& fout) {
    for (int i = 0; i < n; i++) {
        fout << pA[i].numerator << '/' << pA[i].denominator << endl;
    }
}
//sort in ascending order
void sortFraction(Fraction* pA, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            float val1, val2; //val1 is value of fraction 1th and val2 is value of fraction 2th
            val1 = pA[i].numerator / pA[i].denominator;
            val2 = pA[j].numerator / pA[j].denominator;
            /*output << val1 << ' ' << val2 << endl;*/
            if (val1 > val2) {
                swap(pA[i], pA[j]);
            }
        }
    }
}