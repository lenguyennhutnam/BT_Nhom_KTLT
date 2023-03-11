#include <bits/stdc++.h>

using namespace std;

void show_menu()
{
    cout << "Lua chon: " << endl
         << "0.Xoa du lieu trong file" << endl
         << "1.Heap Sort" << endl
         << "2.Shaker Sort" << endl
         << "3.Bitonic Sort" << endl
         << "4.Thoat" << endl;
}

void reset(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

void clear_data(FILE *f)
{
    fclose(f);
    fclose(fopen("output.txt", "w"));
    f = fopen("output.txt", "a");
    cout << "Da xoa" << endl;
}

double timer(int b[], int n)
{
    clock_t start, end; // khai bao thoi gian luc bat dau, ket thuc
    double time_use;
    start = clock(); // thoi gian ban dau truoc khi sap xep

    end = clock(); // thoi gian khi sap xep xong
}