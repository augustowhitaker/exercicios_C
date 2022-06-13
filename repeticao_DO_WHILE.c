#include <stdio.h>


int main(){

    int contador = 0;

    do 
        {
            printf("%d do while \n",contador);
            contador ++;//nao esquecer o incremento da variavel de controle
        }
        while(contador <= 10);

    return 0;
}