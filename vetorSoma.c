#include <stdio.h>

main(void){

    int notas;

    printf("Quantas notas? ");
    scanf("%d",&notas);
    int vetor [notas];
    int soma = 0;
    for(int i = 0; i < notas; i++){
        printf("Digite as notas do elemento  [%d] = " , i +1);
        scanf("%d",&vetor[i]);
        soma += vetor[i];
    }
    for(int i = 0; i < notas; i++){
        printf(" Nota no elemento [%d] = %d " ,i + 1, vetor[i]);
        printf("\n");
    }
    printf("Soma de todas as notas eh =  %d  " , soma);
}