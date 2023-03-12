#include "1_heap_sort.h"
#include "2_shaker_sort.h"
#include "3_bitonic_sort.h"
#include "function.h"

int a[100000000], b[100000000]; // b dung de kiem tra thoi gian, khong can dung vao a

int main()
{
    FILE *f = fopen("output.txt", "a");
    cout << "=====THUAT TOAN SAP XEP:=====" << endl;
    cout << "Nhap so luong phan tu cua mang: ";
    int n;
    cin >> n;
    fprintf(f, "n = %d \n", n); // ghi so luong phan tu trong mang vao file
    fclose(f);
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % n; // random cac phan tu cua mang
        b[i] = a[i];
    }
    // cout << "Cac phan tu cua mang duoc sinh ra ngau nhien la:" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    cout << endl;
    show_menu();
    clock_t start, end; // khai bao thoi gian luc bat dau, ket thuc
    double time_use;
    while (true)
    {
        int option;
        cout << "Chon thao tac: ";
        cin >> option;
        switch (option)
        {
        case 0:
        {
            clear_data(f, n);
            fprintf(f, "n = %d \n", n);
            break;
        }
        case 1:
        {
            f = fopen("output.txt", "a");
            fprintf(f, "TT Heap Sort: %.4llfs \n", timer_heap(b, n)); // ghi thoi gian thuc hien TT vao file
            fclose(f);
            reset(a, b, n); // reset lai gia tri cua mang
            break;
        }
        case 2:
        {
            f = fopen("output.txt", "a");
            fprintf(f, "TT Shaker Sort: %.4llfs \n", timer_shaker(b, n)); // ghi thoi gian thuc hien TT vao file
            fclose(f);
            reset(a, b, n);
            break;
        }
        case 3:
        {
            f = fopen("output.txt", "a");
            fprintf(f, "TT Bitonic Sort: %.4llfs \n", timer_bitonic(b, n)); // ghi thoi gian thuc hien TT vao file
            fclose(f);
            reset(a, b, n);
            break;
        }
        }
        if (option == 4)
            break;
    }
}
