#include "Circle.h"

void inputCircle(Circle*& pA, int& n, ifstream& fin) {
    fin >> n;

    pA = new Circle[n];

    for (int i = 0; i < n; i++) {
        fin >> pA[i].x >> pA[i].y >> pA[i].area;
    }
}

void outputCircle(Circle* pA, int n, ofstream& fout) {
    for (int i = 0; i < n; i++) {
        fout << pA[i].x << ' ' << pA[i].y << ' ' << pA[i].area << endl;
    }
}

void sumOfAllCirclesArea(Circle* pA, int n, ofstream& fout) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pA[i].area;
    }
    fout << "Sum of all circles is: " << sum;
}