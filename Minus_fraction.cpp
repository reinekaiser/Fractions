#include "sum_fraction.cpp"
PhanSo Minus(PhanSo A[], int n){
    PhanSo S;
    S.tu=A[0].tu;
    S.mau=A[0].mau;
    for (int i=1; i<n; i++){
        S.tu=S.tu*A[i].mau-S.mau*A[i].tu;
        S.mau=S.mau*A[i].mau;
    }
    return S;
}