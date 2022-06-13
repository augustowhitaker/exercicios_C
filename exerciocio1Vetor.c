#include <stdio.h>

int main(){
/* Exercicio 1 - elaborar uma aplicação console para ler 5 valores inteiros digitados pelo usuário e armazena-los em vetor denominado v1. Contruir um vetor v2 do mesmo tipo, onde todo elemento do vetor v2 deverá ser o quadrado do elementode posição correspondente no vetor v1. Exibir o contéudo do vetor v2 */

// Declarando os vetores v1 e v2, cada um com 5 posições
    int v1[5], v2[5];

// Armazenando os dados digitados pelo usuário no vetor v1
    for(int i = 0; i <= 4; i++){
        printf("Informe o valor do elemento para a posição %d do vetor v1 = " ,i);
        scanf("%d",&v1[i]);     
    }
// Percorrendo o vetor v1 e mostrando os valores que foram armazenados
    printf("\nElementos do vetor v1\n\n");
    for(int j = 0; j <= 4; j++){//tanto fz usar o i ou o j
        printf("v[%d] do vetor : %d\n",j,v1[j]);
    }
// Calculando e exibindo os dados para o vetor v2 a partir do vetor v1
    printf("\nElementos do vetor v2\n\n");
    for(int i = 0; i <= 4; i++){
        // Calculando o valor de cada elemento de v2[i] e armazenando em v2[i]
        v2[i] = v1[i] * v1[i];

        // Exibindo o valor do elento v2[i] na tela
        printf("v2[%d] do vetor: %d\n",i,v2[i]);
    }

    return 0;
}