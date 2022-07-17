#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// todos os comentarios dentros dos parametros() é pelo fato de ter colocado a matriz em variavel global a forma comentada é como funcionaria se estivesse em variavel local,ou seja a variavel que é lida somente dentro do escopo em uso

int  tam = 5;
int mat[5][5];//colocando a matriz em variavel global, assim nao sera necessario passar ela como parametro sendo assim todas as funcoes e procedimentos tem acesso a ela

int main(){
       int i ,j;

       srand(time(NULL));

       for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++){
               mat[i][j] = rand() % 10;//preenchendo a matriz com numeros aleatorios
            }
       }

       imprimir(/*mat*/);//repare que estamos pegando a matriz feita acima e colocando ela dentro da funcao imprimir
       printf("\n");
    //    ****************************************************
    // abaixo lendo as linhas da funcao somarLinha com o parametro da funcao mat
       for(i = 0; i < tam; i++){
            printf("Soma da linha %d: %d\n",i,somarLinha(/*mat*/ i));
       }
       printf("\n");
      // abaixo lendo as colunas da funcao somarColuna
       for(i = 0; i < tam; i++){
            printf("Soma da coluna %d: %d\n",i,somarColuna(/*mat*/ i));
       }
      
    return 0;
}
// Funcao criada para ler a matriz
void imprimir(/*int m[][5] devido a matriz global nao é mais necessaria passar esse parametro*/){//sempre é necessario colocar a qtd de colunas de linhas não é necessaria
    int i,j;
     for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
           printf("%2d ", mat[i][j]);
        }
            printf("\n");
    }
}

// função que calcula e retorna a soma de uma linha da matriz
int somarLinha(/*int somandoLinhaPorLinha[][5],*/ int l){//utilizando o l para calcular e imprimir
int c, soma =0;

for(c = 0; c < tam; c++){
    soma += mat[l][c];
    }

    return soma;
}

// funcao que calcula a soma de uma coluna da matriz
int somarColuna(/*int somandoColunaPorColuna[][5],*/ int c){
         int l, soma = 0;

         for(l = 0; l < tam; l++){
            soma += mat[l][c];
         }

   return soma;
}