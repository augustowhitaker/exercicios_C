#include <stdio.h>

int main(){
    int x = 10, y = 5, z = 7, k = 7;
    printf("Os operadores relacionais sao usados para fazer comparacoes\n");
    printf("Quando o resultado da comparacao eh FALSO retorna 0 (zero)\n");
    printf("Quando o resultado da comparacao eh VERDADEIRO retornam 1\n");

    printf("\nValor de x = %d  ",x);
    printf("\nValor de x = %d  ",y);
    printf("\nValor de x = %d  ",z);
    printf("\nValor de x = %d  ",k);

    printf("\nExemplo 1: x > y : %d",x > y);//retorna 1 pois eh verdadeiro
    printf("\nExemplo 2: x < y : %d",x < y);//retorna zero pois eh falso

    printf("\nExemplo 3: z == k : %d",x > y);//retorna 1 pois eh verdadeiro
    printf("\nExemplo 4: z != k : %d",x < y);//retorna zero pois eh falso

    printf("\nExemplo 5: z >= x : %d",x > y);//retorna zerp pois eh falso
    printf("\nExemplo 2: x < y : %d",x < y);//retorna 1 pois eh verdadeiro


    return 0;
}