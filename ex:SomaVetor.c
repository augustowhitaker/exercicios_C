#include <stdio.h>

int main(){
    // declarando e inizializando o vetor v
    float v [5], soma = 0;

    printf("Exibindo o valores do vetor \n\n");
    for(int i = 0; i <=4; i++){//armazenando os dados nas posicoes do vetor
        printf("Informe o valor do elemento para a posição %d do vetor:",i);
        scanf("%f",&v[i]); // recebendo os valores do vetor

        // somando os valores de cada posição do vetor e armazenando na variavel soma
        soma = soma + v[i];
        printf("Valor atual da soma = %.1f\n",soma);
    }
    printf("\nSomatoria dos elementos do vetor = %.1f \n",soma);

    return 0;
}