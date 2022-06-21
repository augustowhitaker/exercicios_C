#include <stdio.h>

int main(){

    int N;

    printf("Quantos numeros = ");
    scanf("%d", &N);

    int vetor  [N];

    for(int i = 0; i < N; i++){
        printf("Digite o numero do indice %d ",i + 1);
        scanf("%d", &vetor[i]);

    }
    for(int i = 0; i < N; i++){
        printf("\nnumero digitado no indice = [%d] %d ",i +1, vetor[i]);
    }

    return 0;
}