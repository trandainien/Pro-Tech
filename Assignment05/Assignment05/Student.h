#pragma once
#include<fstream>
#include<string>
using namespace std;

struct Student {
    int id;
    string fullname;
    float gpa;
};

void inputStudent(Student*& pA, int& n, ifstream& fin);
void outputStudent(Student* pA, int n, ofstream& fout);
void findMaxGpaStudent(Student* pA, int n, ofstream& fout);