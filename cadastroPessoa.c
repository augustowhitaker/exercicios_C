#include <stdio.h>
#include <stdlib.h>

#define SIZE 200
char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE][SIZE];
int op;

int main(){
    // system("color F4");
    cadastro();
    pesquisa();

    return 0;
}

void cadastro(void){
    static int linha;

    do{
        system ("color F4");
        printf("\nDigite o nome: ");
        scanf("%c",&nome[linha]);
        printf("\nDigite o email: ");
        scanf("%c",&email[linha]);
        printf("\nDigite CPF: ");
        scanf("%d",&cpf[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair\n");
        scanf("%d",&op);
        linha++;
    }while(op == 1);
}
void pesquisa(){
    int cpfPesquisa;
    int i;
    char emailPesquisa[50];
    do{
        printf("\nDigite 1 para pesquisar CPF ou 2 para pesquisar E-mail\n");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("\nDigite o CPF");
                scanf("%d",&cpfPesquisa);
                for(i = 0; i < SIZE; i++){
                    if(cpf[i] == cpfPesquisa){
                        printf("\nNome: %s\nEmail: %s \nCPF: %d",nome,[i],email[i],cpf[i]);
                    }
                }
                break;
            case 2:
                printf("\nDigite o Email");
                scanf("%c",&emailPesquisa);
                  for(i = 0; i < SIZE; i++){
                    if(strcmp(email[i], emailPesquisa)){
                        printf("\nNome: %s\nEmail: %s \nCPF: %d",nome,[i],email[i],cpf[i]);
                    }
                }

                break;
            default:
                    printf("\nOpcao Invalida");
                break;
        }
        printf("\nDigite 1 para continuar a pesquisando \n");
        scanf("%d",&op);
    }while(op == 1);
}