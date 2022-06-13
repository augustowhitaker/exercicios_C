#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero inteiro ");
    scanf("%d",&numero);

    // -------------usando o operador ternario-------------------
// Condição a testar ? ação para condição verdadeira : ação para condição falsa
    numero > 0 ? printf("Valor válido \n") : printf ("Valor inválido\n");

    // teste equivalente usando if
    // normalmente se usa mais o if do que o ternario

    // if (numero > 0){
    //     printf("Valor válido\n");

    // }
    // else{
    //     printf("Valor inválido;\n");
    // }


    return 0;
}