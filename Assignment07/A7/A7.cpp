// A7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
  
    int n, d;
    cin >> n >> d;
    int* pA;
    pA = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> pA[i];
    }
    
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (pA[i] <= pA[i - 1]) {
            count += ((pA[i - 1] - pA[i]) / d) + 1;
            pA[i] += (((pA[i - 1] - pA[i]) / d) + 1) * d;
      
        }
    }
    
    cout << count;
    delete[]pA;
}

