#include <stdio.h>

int main(){
    float nota;

    do{
        printf("Digite a nota do aluno ");
        scanf("%f",&nota);
        if(nota < 0 || nota > 10){
            printf("ERRO: valor incorreto digite novamente \n\n"); 
            // o if acima so esta servindo para colocar a mensagem de erro o while que faz a verificao para voltar a repeticao
        }
    }while(nota < 0 || nota > 10);

    printf("Nota = %.2f\n",nota);


    return 0;
}