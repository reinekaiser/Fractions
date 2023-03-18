#include "Multiply_fraction.cpp"
PhanSo Divide(PhanSo A[], int n){
    PhanSo P;
    P.tu = A[0].tu;
    P.mau= A[0].mau;
    for (int i=0; i<n; i++){
        P.tu=P.tu*A[i].mau;
        P.mau=P.mau*A[i].tu;
    }
    
    return P;
}