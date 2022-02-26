//
// Created by admin on 25/02/2022.
//
#include <stdio.h>
int main() {
    int x;
    do{
        printf("Escriba un numero:\n");
        scanf("%i", &x);
    }while(x<0 || x>0);
    if(x==0){
        printf("GRACIAS");
    }
}
