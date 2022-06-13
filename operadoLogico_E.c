#include <stdio.h>

int main(){
    float notaFinal, frequencia;

    printf("Digite a nota final do aluno\n");
    scanf("%f",&notaFinal);

    printf("Digite a frequencia do aluno\n");
    scanf("%f",&frequencia);

    if(notaFinal > 6.0 && frequencia >= 75){
        printf("Aluno aprovado");
    }
    else{
        printf("Aluno reprovado");
    }


    return 0;
}