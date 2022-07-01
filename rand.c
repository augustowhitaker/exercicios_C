#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nro, nro_usr;

int main()
{
    srand(time(NULL));
    // entrada de dados
    nro=1+rand()%10; //[1 ,10]
    printf("**** Programa de tentativa de adivinhar o numero ****\n\n");
    printf("Tentativa 1: digite um numero entre 1 e 10 = ");
    scanf("%d", &nro_usr);

    // processamento
    if(nro == nro_usr){
        printf("Parabéns vc acertou de primeira!!");
    }else{
         printf("Tentativa 2: digite um numero entre 1 e 10 = ");
         scanf("%d", &nro_usr);
         if(nro == nro_usr){
            printf("Parabéns vc acertou a segunda!!!");
            }
                else{
                     printf("Tentativa 3: digite um numero entre 1 e 10 = ");
                     scanf("%d", &nro_usr);
                        if(nro == nro_usr){
                            printf("Parabéns vc conseguiu na ultima tentativa !");
                        }
                            else{
                                printf("Voce nao acertou nenhuma o numero sorteado foi %d ", nro);
                            }
         }
    }

    return 0;
}