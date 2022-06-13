/*
Exercicio 2 - Elaborar uma aplicação console que receba os dados digitados pelo usuário e preencha um vetor com 10 números reais, calcule e mostre os números superiores a 99 e suas respectivas posições.
Deverá ser mostrada mensagem se não existir nehum número que satisfaça essa condição*/
#include <stdio.h>

int main(){
    float v1[10];//Declarando vetor do tipo float com 10 pisições
    int contMaior = 0;//Contador para exibir quantos valores correspondem a condição

    // Armazenando os dados digitados pelo usuário no vetor v1
    for(int i = 0; i <= 9; i++){
        printf("Informe o valor do elemento para a posição %d do vetor v1 = ",i);
        scanf("%f",&v1[i]);
    }

    // Percorrendo o vetor v1 e mostrando os valores que foram armazenados e são maiores que 99
    for(int i = 0; i <= 9; i++){
        if(v1[i] > 99.0){
            printf("\nValor maior que 99 encontrado na posição [%d] do vetor = %.2f\n",i,v1[i]);
            contMaior++;//Incrementando o contador
        }
    }
    // Mostrando quantos valores que correspondem á condição de ser maior que 99
    if(contMaior == 0){
        printf("\nNão foi encontrado nehum valor maior que 99 neste vetor\n");
    }
    else{
        printf("\nForam encontrados %d valor(es) maiores neste vetor\n",contMaior);
    }
    return 0;
}