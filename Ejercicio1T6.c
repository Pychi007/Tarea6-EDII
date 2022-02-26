//
// Created by admin on 24/02/2022.
#include <stdio.h>

int validaNum(int x);
int main() {
    int x, res;
    printf("Escriba el numero:\n");
    scanf("%i", &x);
    res= validaNum(x);
    if (res == 1) {
        printf("El numero %i es perfecto",x);
    }
    if (res == 0) {
        printf("El numero %i no es perfecto",x);
    }
}
int validaNum(int x){
    int i;
    float suma =0;
    int res;
    for (i = 1; i < x; i++) {
        if (x % i ==0) {
            suma = suma + i;
        }
    }
    if(x==suma)
        res=1;
        else
            res=0;
    return res;
}