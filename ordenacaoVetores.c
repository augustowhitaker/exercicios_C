#include <stdio.h>

int main(){
    int v[6];
    int j, auxiliar;

    // recebendo dados para o vetor
    for(int i = 0; i <=5; i++){
        printf("Digite um inteiro para o elemento [%d] : ");
        scnf("%d",&v[i]);
    }

    printf("\nValores inseridos no vetor antes de ordenar:\n");

    return 0;
}