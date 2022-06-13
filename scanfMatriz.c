#include <stdio.h>

int main(){
    float media [5][2];

    printf("\nLeitura e apresentação de notas armazenadas na matriz\n");

    // Leitura das notasd dos alunos
    for(int i = 0; i <= 4; i++){//controla as linhas
        printf("\nInforme as notas do %do. aluno: \n\n", i + 1);
        for(int j = 0; j <= 1; j++){//controla as colunas
            printf("Nota %d: ",j + 1);
            scanf("%f",&media[i][j]);
        }
    }
    printf("\n\n ***************** Saida de notas *********************\n\n");

    for(int i = 0; i <= 4; i++){
        printf("\nAs notas do aluno %d sao : \n\n", i + 1);
            for(int j = 0;j <= 1; j++){
                printf("Notas %d: %5.2f\n",j + 1, media[i][j]);
            }
    }



    return 0;
}