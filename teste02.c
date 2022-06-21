#include <stdio.h>


int main(){
     int notas;

    printf("Digite as notas do Bimestre ");
    scanf("%d", &notas);
    
    int vetor [notas];
    float soma = 0, media = 0;
    

    for(int i = 0; i < notas; i++){
          printf("notas aluno =  %d ", i + 1);
          scanf("%d", &vetor[i]);
          soma += vetor[i];
    }
    media  =  soma / notas;
    for(int i = 0; i < notas; i++){
        printf("\nnota do aluno = %d %d " ,i + 1, vetor[i]);
    }

    if(media <= 6){

     printf("\nREPROVADO nota final = %.1f ", media);


    }else if (media < 9){
        printf("APROVADO  nota final= %.1f ", media);
    }
    else{
        printf("APROVADO COM MEDIA ELEVADA  nota final = %.1f", media);
    }

    return 0;
}