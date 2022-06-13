#include <stdio.h>

int main()
{
    // Declarando e inicializando o vetor(array) em V

    float V[5];

    printf("Exibindo os valores do vetor\n\n");
    // Esse primeiro looping esta armazenando os dados para o vetor
    for (int i = 0; i <= 4; i++)
    {
        printf("Digite o valor da  posição %d ", i);
        scanf("%f", &V[i]);
    }

    printf("\nPercorrendo os elementos do vetor e exibindo seus valores\n");
    // segundo looping esta  lendo os dados do vetor armazenados acima
    for (int j = 0; j <= 4; j++)
    {
        printf("v[%d] = %.1f\n", j, V[j]);
    }

    return 0;
}