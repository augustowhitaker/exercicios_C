#include <stdio.h>


int main(){
    // Declarando e inicializando o vetor v1
    float v1[4] = {5.1, 8.3, 4.5, 7.2};

    printf("Exibindo os valores do vetor v1\n\n");
    
    for(int i = 0; i <= 3; i++){
    printf("v1[%d] = %.1f\n",i, v1[i]);

    }

    return 0;
}
