#include <stdio.h>


int main(){
    FILE *pont_arq;
    char palavra[20];

    // abrindo o arquivo com o tipo de abertura w
    pont_arq = fopen("arquivo_palavra.txt", "w");

    // testando se o arquivo foi realmente criado
    if(pont_arq == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    else{
        printf("Escreva uma palavra para testar a gravação de arquivo: ");
        scanf("%s", palavra);
        // usando fprintf para armazenar a string no arquivo
         fprintf(pont_arq, "%s", palavra);

        // usando o fclose para fechar o arquivo
        fclose(pont_arq);
        printf("Dados gravados com sucesso");
    }




    return 0;
}