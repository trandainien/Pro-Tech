#pragma once
#include <fstream>
using namespace std;
struct Fraction
{
	float numerator;
	float denominator;
};

void inputFraction(Fraction*& pA, int& n, ifstream& fin);
void outputFraction(Fraction* pA, int n, ofstream& fout);
void sortFraction(Fraction* pA, int n);

