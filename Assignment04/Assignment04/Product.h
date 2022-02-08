#pragma once
#include <fstream>
#include <string>
using namespace std;
struct Product
{
	int id;
	string name; 
	int stock;
	int price;
};

void inputProduct(Product*& pA, int& n, ifstream& fin);
void outputProduct(Product* pA, int n,ofstream& fout);
void sumForAllProducts(Product* pA, int n, ofstream& fout);

