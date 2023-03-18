//#include "Minus_fraction.cpp"
//#include "Multiply_fraction.cpp"
#include "Divide.cpp"
int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    PhanSo S = Sum(a,n);
    PhanSo M = Minus(a,n);
    PhanSo P = Multiply(a,n);
    PhanSo D = Divide(a,n);
    Xuat(S);
    Xuat(M);
    Xuat(P);
    Xuat(D);
    return 0;
}