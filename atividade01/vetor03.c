#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int num[10];
    int par = 0;
    int contador = 0;

    for( int i = 0; i<10 ; i++){
        printf("informe o valor");
        scanf("%d", &num[i]);
        printf("%d\n", num[i]);
    }

    for( int i = 0; i<10 ; i++){
        if(num[i]%2==0){
            contador = contador + 1;
        }
    }
    printf(" O total de numeros pares e %d", contador);

    return 0;
}