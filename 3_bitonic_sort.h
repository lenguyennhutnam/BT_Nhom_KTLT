#include <bits/stdc++.h>

using namespace std;

void bitonic_sort(int a[], int n) {
    int k, j, l, i, temp;
    for (k = 2; k <= n; k *= 2) {
        for (j = k/2; j > 0; j /= 2) {
            for (i = 0; i < n; i++) {
                l = i ^ j;
                if (l > i) {
                    if ( ((i&k)==0) && (a[i] > a[l]) || ( ( (i&k)!=0) && (a[i] < a[l])) )  {
                        temp = a[i];
                        a[i] = a[l];
                        a[l] = temp;
                    }
                }
            }
        }
    }
}

double timer_bitonic(int b[], int n)
{
    clock_t start, end; // khai bao thoi gian luc bat dau, ket thuc
    double time_use;
    start = clock(); // thoi gian ban dau truoc khi sap xep
    bitonic_sort(b, n);
    end = clock();                                     // thoi gian khi sap xep xong
    time_use = (double)(end - start) / CLOCKS_PER_SEC; // ham clock tra ve tich tac
    cout << fixed << setprecision(4) << time_use << "s" << endl;
    return time_use;
}