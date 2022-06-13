#include <stdio.h>

int main(){
    int v[6];
    int  auxiliar;

    // recebendo dados para o vetor
    for(int i = 0; i <=5; i++){
        printf("Digite um inteiro para o elemento [%d] : ",i);
        scanf("%d",&v[i]);
    }

    printf("\nValores inseridos no vetor antes de ordenar:\n");

    // percorre o vetor mostrando os valores armazenados originalmente
    for(int i = 0; i <= 5; i++){
        printf("Valor armazenado no elemento de indice [%d] = %d\n",i,v[i]);
    }
    printf("\n");
        //--------------ordenando o vetor----------------
        for(int i = 0; i < 5; i++){
            for(int j = i + 1; j < 6; j++){
                if(v[i] > v[j]){//caso o numero anterior seja maior que o numero posterior  
                    auxiliar = v[i];
                    v[i] = v[j];
                    v[j] = auxiliar;  
                }
            }
        }
         printf("\n\t\tVetor ordenado\n");
         for(int i =0; i < 6; i++){
            printf("Valor armazenado no elemento de indice [%d] = %d \n",i,v[i]);
         }

    return 0;
}