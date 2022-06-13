#include <stdio.h>

int main(){
    char str1[] = "Curso de linguagem C";
    char str2[] = "Contando caracteres dentro de uma string";
    int cont = 0; //variável que vai armazenar o tamanho da string

    // enquanto o valor que está contido na posição cont do vetor for diferente do caracter terminado '\0'
    // incrementar o valor do contador em uma unidade 
    while (str1[cont] != '\0'){
        cont++;
    }
    printf("O tamanho da string \"%s\" e %d caracteres.\n", str1, cont);
    cont = 0; //zerando o contador para depois fazer a contagem da segunda string

    while(str2[cont] != '\0'){//enquanto não encontrar o caracter terminado com '\0' incrementa o contador
    cont++;
    }
    printf("O tamanho da string \"%s\" e %d caracteres.\n", str2, cont);


    return 0;
}