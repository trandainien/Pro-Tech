#include "Student.h"

void inputStudent(Student*& pA, int& n, ifstream& fin) {
    fin >> n;
    pA = new Student[n];
    for (int i = 0; i < n; i++) {
        fin >> pA[i].id;
        fin.ignore();
        getline(fin, pA[i].fullname);
        fin >> pA[i].gpa;
    }
}

void outputStudent(Student* pA, int n, ofstream& fout) {
    for (int i = 0; i < n; i++) {
        fout << pA[i].id << ' ' << pA[i].fullname << ' ' << pA[i].gpa << endl;
    }
}

void findMaxGpaStudent(Student* pA, int n, ofstream& fout) {
    if (n == 0) {
        fout << "This class is empty";
        return;
    }
    int index, id;
    float gpa;
    index = 0;
    id = pA[index].id;
    gpa = pA[index].gpa;
    for (int i = 1; i < n; i++) {

        if (gpa < pA[i].gpa || (gpa == pA[i].gpa && id > pA[i].id)) {
            index = i;
            id = pA[index].id;
            gpa = pA[index].gpa;
        }
    }
    fout << pA[index].id << ' ' << pA[index].fullname << ' ' << pA[index].gpa;
}

