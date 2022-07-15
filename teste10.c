#include <stdio.h>

int chamada_funcao_contagem;

int main(void)
{
int Multiplicacao_funcao (void);

//chame esta funcao quantas vezes quiser para observar melhor como funciona uma variavel com o modificador static.
Multiplicacao_funcao();
Multiplicacao_funcao();
Multiplicacao_funcao();





    return 0;
}

int Multiplicacao_funcao (void)
{
static int num1 = 0;
int num2 = 0;

num1++;
num2++;

if(num1 || num2 > 1)
{
   chamada_funcao_contagem++;
   printf("\n\n\n\n-------------CHAMADA %i-------------\n\n", chamada_funcao_contagem);
}

printf("\nVariavel ESTATICA: %i\n", num1);
printf("\nVariavel NAO ESTATICA: %i\n", num2);

    return 0;
}