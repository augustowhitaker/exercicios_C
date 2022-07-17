#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str1[] = "Ola. Estou Testando Funcao de Maiusculo e Minusculo :)";
    char str2[50];

    printf("%s\n",str1);

    maiusculo(str1 , str2);
    printf("%s\n", str2);

    minusculo(str1, str2);
    printf("%s\n", str2);

    return 0;
}
    // Procedimento que converte uma string para maiusculo
void maiusculo(char str1[], char str2[]){
        int i = 0;
        while(str1[i] != '\0'){
            str2[i] = toupper(str1[i]);
            i++;
        }
    str2[i] = '\0';
}
    // Procedimento que converte uma string para minusculo
void minusculo(char str1[], char str2[]){
        int i = 0;
        while(str1[i] != '\0'){
            str2[i] = tolower(str1[i]);
            i++;
        }
    str2[i] = '\0';
}