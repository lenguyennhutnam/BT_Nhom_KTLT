#include <bits/stdc++.h>

using namespace std;

void shakesort()
{
}

double timer_shake()
{
    clock_t start, end; // khai bao thoi gian luc bat dau, ket thuc
    double time_use;
    start = clock(); // thoi gian ban dau truoc khi sap xep
    shakesort();
    end = clock();                                     // thoi gian khi sap xep xong
    time_use = (double)(end - start) / CLOCKS_PER_SEC; // ham clock tra ve tich tac
    return time_use;
}