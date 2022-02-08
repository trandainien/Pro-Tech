#include "Product.h"

void inputProduct(Product*& pA, int& n, ifstream& fin) {
	fin >> n;
	pA = new Product[n];
	for (int i = 0; i < n; i++) {
		fin >> pA[i].id;
		fin.ignore();
		getline(fin, pA[i].name);
		fin >> pA[i].stock >> pA[i].price;
	}
}

void outputProduct(Product* pA, int n, ofstream& fout) {
	for (int i = 0; i < n; i++) {
		fout << pA[i].id << ' ' << pA[i].name << ' ' << pA[i].stock << ' ' << pA[i].price << endl;
	}
}

void sumForAllProducts(Product* pA, int n, ofstream& fout) {
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += pA[i].price * pA[i].stock;
	}
	fout << "Sum of all products is: " << sum;
}