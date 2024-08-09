#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[10];
    int ad = 0;
    float ab = 0.0;

    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            ab++;
        } else {
            ad += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", ab);
    printf("Soma dos números positivos: %.2f\n", ad);

    return 0;
}