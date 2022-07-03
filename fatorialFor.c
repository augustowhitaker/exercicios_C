#include <stdio.h>


main(void){

    int fatorial;
    int resposta = 1;

    printf("Digite o numero que deseja fatorar = ");
    scanf("%d", &fatorial);

    for( ; fatorial >= 1; fatorial--){
        resposta *= fatorial;
    }
    printf("O numero fatorial eh = %d",resposta);
}