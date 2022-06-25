#include <stdio.h>
// Escreva um programa que leia um vaetor A com 5 elementos numéricos.Contruir um vetor B onde cada elemento de B é o quadrado do elemento correspondente de A. Apresentar os vetores no final

int main(){

    int vetA[5],vetB[5];

    // lendo e calculando os vetores
    for(int i = 0; i < 5; i++){
        printf("Digite o valor de vetA [%d] = ", i + 1);
        scanf("%d",&vetA[i]);

        vetB[i] = vetA[i] * vetA[i];

    }
    // mostrando na tela o resultado

    for(int i = 0; i < 5; i++){
        printf("%d * %d = %d \n",vetA[i],vetA[i],vetB[i]);
    }

    return 0;
}
