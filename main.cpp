#include "1heapsort.h"
#include "2shakersort.h"

int a[100000000], b[100000000];

void reset(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
}

double timer(int b[], int n)
{
    clock_t start, end; // khai bao thoi gian luc bat dau, ket thuc
    double time_use;
    start = clock(); // thoi gian ban dau truoc khi sap xep

    end = clock(); // thoi gian khi sap xep xong
}

int main()
{
    FILE *f = fopen("output.txt", "a");
    cout << "=====THUAT TOAN SAP XEP:=====" << endl;
    cout << "Nhap so luong phan tu cua mang: ";
    int n;
    cin >> n;
    fprintf(f, "n = %d \n", n); //ghi so luong phan tu trong mang vao file

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        b[i] = a[i];
    }
    // cout << "Cac phan tu cua mang duoc sinh ra ngau nhien la:" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    cout << endl;
    cout << "Lua chon: " << endl
         << "1.Heap sort" << endl
         << "2.Shaker sort" << endl
         << "4.Thoat" << endl;
    clock_t start, end; // khai bao thoi gian luc bat dau, ket thuc
    double time_use;
    while (true)
    {
        int option;
        cout << "Chon thao tac: ";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            fprintf(f, "TT heapsort: %.4llfs \n", timer_heap(b, n)); //ghi thoi gian thuc hien TT vao file
            reset(a, b, n); //reset lai gia tri cua mang
            break;
        }
        case 2:
        {
            reset(a, b, n);
            break;
        }
        case 3:
        {
            reset(a, b, n);
            break;
        }
        }
        if (option == 4)
            break;
    }
    fclose(f);
}
