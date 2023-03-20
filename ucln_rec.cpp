#include "PhanSo.h"

int uclnRec(int a, int b){
    if (a*b==0) return a+b;
    return uclnRec(b,a%b);
}