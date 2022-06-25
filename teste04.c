#include <stdio.h>
// escreva um programa que leia dois vetores A e B com 5 elementos numericos
// contruir um vetor C onde cada elemento de C é a soma de A com B, apresentar os vetores no final

int main(){
    int vetA [5], vetB[5],vetC[5];

    // Guardando e somando os valores de vetA e vetB e 
    for(int i = 0; i < 5; i++){
        printf("Digite o elemento de vetA[%d] = ",i + 1);
        scanf("%d",&vetA[i]);
        printf("Digite o elemento de vetB[%d] = ",i + 1);
        scanf("%d",&vetB[i]);

        vetC[i] = vetA[i] + vetB[i];
    }
    // Mostrando o valores de vetA e vetB na tela
    for(int i = 0; i < 5; i++){
        printf("%d + %d = %d \n",vetA[i],vetB[i],vetC[i]);

    }

    


    return 0;
}
