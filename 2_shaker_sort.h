#include <bits/stdc++.h>

using namespace std;

void shaker_sort(int a[], int n)
{
    int Left = 0;
    int Right = n - 1;
    int k = 0;
    while (Left < Right)
    {
        for (int i = Left; i < Right; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                k = i;
            }
        }
        Right = k;
        for (int i = Right; i > Left; i--)
        {
            if (a[i] < a[i - 1])
            {
                swap(a[i], a[i - 1]);
                k = i;
            }
        }
        Left = k;
    }
}

double timer_shaker(int b[], int n)
{
    clock_t start, end; // khai bao thoi gian luc bat dau, ket thuc
    double time_use;
    start = clock(); // thoi gian ban dau truoc khi sap xep
    shaker_sort(b, n);
    end = clock();                                     // thoi gian khi sap xep xong
    time_use = (double)(end - start) / CLOCKS_PER_SEC; // ham clock tra ve tich tac
    cout << fixed << setprecision(4) << time_use << "s" << endl;
    return time_use;
}