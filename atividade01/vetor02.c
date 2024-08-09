#include <stdio.h>
#include <stdlib.h>

int main (){
    int a[6];

    a[0] = 1;
    a[1] = 0;
    a[2] = 5;
    a[3] = -2;
    a[4] = -5;
    a[5] = -7;

    int soma = 0;
    int contador = 0;

    soma = a[0]+a[1]+a[5];
    printf("A soma e %d\n", soma);

    a[4]=100;

    for(int i = 0 ; i<6; i++){
        printf("%d %d\n", i, a[i]);
    }

    return 0;
}