#include <bits/stdc++.h>

using namespace std;

void heapify(int a[], int n, int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;
    if (l < n && a[l] > a[largest])
    {
        largest = l;
    }
    if (r < n && a[r] > a[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heap_sort(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[i], a[0]);
        heapify(a, i, 0);
    }
}

double timer_heap(int b[], int n)
{
    
    clock_t start, end; // khai bao thoi gian luc bat dau, ket thuc
    double time_use;
    start = clock(); // thoi gian ban dau truoc khi sap xep
    heap_sort(b, n);
    end = clock();                                     // thoi gian khi sap xep xong
    time_use = (double)(end - start) / CLOCKS_PER_SEC; // ham clock tra ve tich tac
    cout << fixed << setprecision(4) << time_use << "s" << endl;
    return time_use;
}