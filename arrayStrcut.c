#include <stdio.h>
#define QTD 3

typedef struct{
    int matricula;
    char nome[20];
    float nota;
} 
CAD_INFO;

int main(){
    FILE *ptrArq;//ponteiro para arquiv

    //declarando um vetor de struct CAD_INFO denominado vetDados com 3 posições porque QTD foi definido com 3 posições. Em seguida é atribuido o conjunto de valores de cada elemento do vetor
    CAD_INFO vetDados[QTD] = {
        {10, "Augusto", 9.67},
        {20, "Eduardo", 8.34},
        {30, "Gabriel", 7.65}
    };
    for(int i = 0; i < QTD; i++){
        printf("%d %s %f\n", vetDados[i].matricula, vetDados[i].nome,vetDados[i].nota);
    }
    // abrindo o arquivo onde serão gravados os dados
    ptrArq = fopen("Arquivos.txt","a");

    // verificando se o arquivo foi aberto
    if(ptrArq == 0){//se o ponteiro do arquivo retorna 0 nao conseguiu abrir
        printf("ERRO: Não foi possivel abrir o arquivo\n");
        printf("Os dados não foram gravados");
    }
    else{
        for(int i = 0; i < QTD; i++){
            fprintf(ptrArq,"%d %s %.2f\n",vetDados[i].matricula,vetDados[i].nome,vetDados[i].nota);
        }
        fclose(ptrArq);
        printf("\nDados gravados com sucesso");
    }


    return 0;
}