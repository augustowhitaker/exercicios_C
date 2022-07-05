#include <stdio.h>
#include <time.h>


// Exercicio calculcar duas matrizes e salvar a soma dessas duas em outra matriz, no exercicio nao foi mencionado para o usuario 
//preencher essas matrizes portando usarei a funcao rand para ele preencher com numeros aleatorios

int main()
{
    int  A [3][3], B [3][3],C [3][3];

    srand(time(NULL));

    printf("\nMatriz A:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            A[i][j] = rand() % 100;
            printf("%3d ", A[i][j]);
        }
    printf("\n");
    }
    printf("\nMatriz B:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            B[i][j] = rand() % 100;
            printf("%3d ", B[i][j]);
        }
    printf("\n");
    }
    printf("\nMatriz Soma:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B [i][j];
            printf("%3d ", C[i][j]);
        }
    printf("\n");
    }

    return 0;
}
