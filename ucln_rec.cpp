#include "PhanSo.h"
int recUcln(PhanSo a[], int i){
    int m=a[i].tu;
    int n=a[i].mau;
    if (m*n==0) return m+n;
    return uclnRec(n,m%n);
}
int uclnRec(int a, int b){
    if (a*b==0) return a+b;
    return uclnRec(b,a%b);
}