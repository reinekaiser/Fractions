
#include "PhanSo.h"

void Nhap(PhanSo a[], int &n){
    cin >>n;
    for (int i=0; i<n; i++){
        cin >>a[i].tu;
        cin>>a[i].mau;
    }
}
int ucln(int m, int n){
    int r;
    do {
        r=m;
        m=n;
        n=r%m;
    }while(n!=0);
    if (m<0) return -m;
    else return m;
}
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
void reduce(PhanSo a[], int i){

    if (a[i].tu==0) a[i].tu=0;
    else if (a[i].tu==a[i].mau){ 
        a[i].tu=1;
        a[i].mau=1;
    }
    else if (a[i].tu%a[i].mau==0) { 
        a[i].tu=a[i].tu/a[i].mau; 
        a[i].mau=1; 
        }
    else{
        
        if (a[i].mau<0) {
            a[i].tu=a[i].tu*(-1);
            a[i].mau=a[i].mau*(-1);
        }

        int u=ucln(a,i);
        a[i].tu=a[i].tu/u;
        a[i].mau=a[i].mau/u;
    }
}
void Xuat (PhanSo a[], int n){
    for (int j=0; j<n; j++){
        reduce (a,j);
    }
    for (int i=0; i<n; i++){
        if (a[i].mau==0) cout <<"Khong thoa yeu cau bai toan"<<endl;
        else if(a[i].tu==0) cout <<0<<endl;
        else if (a[i].tu==a[i].mau) cout <<1<<endl;
        else if (a[i].mau==1) cout <<a[i].tu<<endl;
        else cout <<a[i].tu<<"/"<<a[i].mau<<endl;
    }
}
void reduce(PhanSo &a){
    if (a.tu==0) a.tu=0;
    else if (a.tu==a.mau){ 
        a.tu=1;
        a.mau=1;
    }
    else if (a.tu%a.mau==0) { 
        a.tu=a.tu/a.mau; 
        a.mau=1; 
        }
    else{
        
        if (a.mau<0) {
            a.tu=a.tu*(-1);
            a.mau=a.mau*(-1);
        }

        int u=ucln(a.tu, a.mau);
        a.tu=a.tu/u;
        a.mau=a.mau/u;
    }
}
void Xuat(PhanSo a){
    reduce(a);
    if (a.mau==0) cout <<"Khong thoa yeu cau bai toan"<<endl;
    else if(a.tu==0) cout <<0<<endl;
    else if (a.tu==a.mau) cout <<1<<endl;
    else if (a.mau==1) cout <<a.tu<<endl;
    else cout <<a.tu<<"/"<<a.mau<<endl;
}




