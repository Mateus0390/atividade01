#include <stdio.h>
#include <stdlib.h>

int main (){
    int notas[5];
    int soma;


    for(int i=0; i<5; i++){
    scanf("%d", &notas[i]);
    soma += notas[i];
    }

    for (int i = 0; i<5; i++){
        printf("%d", notas[i]);
    }

    float media = soma/5;
    printf("%f", media);

    return 0;

}