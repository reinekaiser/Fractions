#include "Minus_fraction.cpp"

PhanSo Multiply(PhanSo A[], int n){
    PhanSo P;
    P.tu = A[0].tu;
    P.mau= A[0].mau;

    for (int i=1; i<n; i++){
        P.tu=P.tu*A[i].tu;
        P.mau=P.mau*A[i].mau;
    }
    return P;
}