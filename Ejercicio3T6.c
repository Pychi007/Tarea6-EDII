//
// Created by admin on 25/02/2022.
//

#include <stdio.h>
int main() {
    int n;
    int cont;
    int x, mayor, menor;
    printf("Escriba el total de numeros:\n");
    scanf("%i", &n);

    for (cont=0; cont<n; cont++) {
            printf("Digite el numero:\n");
            scanf("%i", &x);

        if (cont==0) {
            mayor = x;
            menor = x;
        } else{
            if (x>mayor) mayor=x;
            if (x<menor) menor=x;
        }
        }
    printf("El numero mayor es: %i\n", mayor);
    printf("El numero menor es: %i\n", menor);

}