#include <stdio.h>


int main(){

    int N,M,i,j;//declarando o i e j pra usar nos FOR`s
    printf("Digite quantas linhas vai ter a matriz = ");
    scanf("%d",&M);
    printf("Digite quantas colunas vai ter a matriz = ");
    scanf("%d",&N);

    int matriz [M][N];

    //adicionando numeros a matriz
    for(i = 0; i < M; i++){
       for(j =0; j < N; j++){
           printf("Elemento [%d,%d]: ", i,j);
           scanf("%d", &matriz[i][j]);
       }
    }
    // Lendo a matriz
    printf("\nMatriz digitada\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}