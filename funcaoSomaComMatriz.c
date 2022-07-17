#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int  tam = 5;

int main(){
       int mat[5][5];
       int i ,j;

       srand(time(NULL));

       for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++){
               mat[i][j] = rand() % 10;//preenchendo a matriz com numeros aleatorios
            }
       }

       imprimir(mat);//repare que estamos pegando a matriz feita acima e colocando ela dentro da funcao imprimir
    //    ****************************************************
    // abaixo lendo as linhas da funcao somarLinha com o parametro da funcao mat
       for(i = 0; i < tam; i++){
            printf("Soma da linha %d: %d\n",i,somarLinha(mat, i));
       }
      
    return 0;
}
// Funcao criada para ler a matriz
void imprimir(int m[][5]){//sempre é necessario colocar a qtd de colunas de linhas não é necessaria
    int i,j;
     for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
           printf("%2d ", m[i][j]);
        }
            printf("\n");
    }
}

// função que calcula e retorna a soma de uma linha da matriz
int somarLinha(int x[][5], int l){//utilizando o l para calcular e imprimir
int c, soma =0;

for(c = 0; c < tam; c++){
    soma += x[l][c];
    }

    return soma;
}