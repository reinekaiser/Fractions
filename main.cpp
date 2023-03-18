//#include "Minus_fraction.cpp"
#include "Multiply_fraction.cpp"
int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    PhanSo S = Sum(a,n);
    PhanSo M = Minus(a,n);
    PhanSo P = Multiply(a,n);
    Xuat(S);
    Xuat(M);
    Xuat(P);
    return 0;
}