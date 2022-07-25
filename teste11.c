#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int tam = 5;
int main(){
       int mat[5][5];

       srand(time(NULL));

       for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
                mat[i][j] = rand() % 10;
        }
       }
       linhaTabulda();
       imprimir(mat);
       linhaTabulda();
        for(int i = 0; i < tam; i++){
         printf("soma linha eh %d \n" , somarLinha(mat,i));
        }
        linhaTabulda();
        for(int i = 0; i < tam; i++){
         printf("soma coluna eh %d \n", somarColuna(mat ,i ));
        }
        linhaTabulda();

    return 0;
}
 void imprimir(int m [][5]){
        for(int i = 0; i < tam; i++){
                for(int j = 0; j < tam; j++){
                        printf("%2d ", m[i][j]);
                }
                printf("\n");
        }
 }
int somarLinha(int x [][5],int l){
        int soma = 0;

        for(int i = 0; i < tam; i++){
                soma += x[l][i];
        }
        return soma;
}

int somarColuna(int z [][5], int c){
        int soma = 0;
        for(int i = 0; i < tam; i++){
                soma += z[i][c];
        }

        return soma;
        
}

void linhaTabulda(){
        printf("*************************************************\n");
}