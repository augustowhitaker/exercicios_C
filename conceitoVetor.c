#include <stdio.h>


int main(){
    // Declarando e inicializando o vetor v1
    float v1[4] = {5.1, 8.3, 4.5, 7.2};

    printf("Exibindo os valores do vetor v1\n\n");
    
    for(int i = 0; i <= 3; i++){
    printf("v1[%d] = %.1f\n",i, v1[i]);

    }
//    abaixo escrevendo em varios prints mas nao se usa assim
    // printf("v1[1] = %.1f\n", v1[1]);
    // printf("v1[2] = %.1f\n", v1[2]);
    // printf("v1[3] = %.1f\n", v1[3]);


    return 0;
}