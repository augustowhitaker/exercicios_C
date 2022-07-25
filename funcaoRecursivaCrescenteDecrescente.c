#include <stdio.h>
#include <stdlib.h>


// Usando funcao recursiva
int main(){

    int n;

    printf("Digite um numero maior que zero: ");
    scanf("%d", &n);
    imprimir(n);
    
    return 0;
}


void imprimir(int x){
    if( x == 0){
        printf("%d ", x);
    }else{
        // printf("%d ",x);usando o print nessa ordem,ou seja primeiro fara a chamada decrescente
        imprimir(x - 1);
        printf("%d ",x);//desta maneira a funcao recursiva fara na ordem crescente
    }
}
