#include "Minus_fraction.cpp"
int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    PhanSo S = Sum(a,n);
    PhanSo M = Minus(a,n);
    Xuat(S);
    Xuat(M);
    return 0;
}