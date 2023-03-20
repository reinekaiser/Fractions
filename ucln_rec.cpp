#include "PhanSo.h"
int ucln(PhanSo a[], int i){
    int r;
    int m=a[i].tu;
    int n=a[i].mau;
    do {
        r=m;
        m=n;
        n=r%m;
    }while(n!=0);
    if (m<0) return -m;
    else return m;
}
