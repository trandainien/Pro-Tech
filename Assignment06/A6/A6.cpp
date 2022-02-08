// A6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int l, r;
    cin >> l >> r;
    long ans = (r - l) * p1;
    for (int i = 1; i < n; i++) {
        int l1, r1;
        cin >> l1 >> r1;
        ans += (r1 - l1) * p1;
        
        int dem = 0;
        while (l1 > r) {
            if (dem == 0) {
                if (r + t1 > l1) {
                    ans += (l1 - r) * p1;
                }
                else {
                    ans += t1 * p1;                
                }
                r += t1;
                dem++;
            }
            else {
                if (dem == 1) {
                    if (r + t2 > l1) {
                        ans += (l1 - r) * p2;
                    }
                    else {
                        ans += t2 * p2;
                    }
                    r += t2;
                    dem++;
                }
                else {
                    ans += (l1 - r) * p3;
                    break;
                }
            }
        }
        r = r1;
        l = l1;
    }
    cout << ans;
}


