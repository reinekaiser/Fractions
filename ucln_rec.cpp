#include "PhanSo.h"
int recUcln(PhanSo a[], int i){
    int m=a[i].tu;
    int n=a[i].mau;
    if (m*n==0) return m+n;
    return uclnRec(n,m%n);
}
