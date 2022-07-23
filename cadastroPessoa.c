#include <stdio.h>
#include <stdlib.h>

#define SIZE 200
char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int op;

int main(){
   system("color b0");
    do{
        system("clear"); //no windows se usa cls
        printf("\n**** Menu ****\n1 - Cadastrar\n2 - Listar todos\n3 - Pesquisar\n4 - Sair");
        scanf("%d",&op);
        switch(op){
            case 1:
                cadastro();
                break;
            case 2:
                lista();
                break;
            case 3:
                pesquisa();
                break;
            case 4:
                system("exit");
                break;
            default:
                printf("Digite uma opcao valida");
                break;
        }
    }while(op != 4);

    return 0;
}

void cadastro(void){
   system("color b0");
    static int linha;

    do{
        printf("\nDigite o nome: ");
        scanf("%s",&nome[linha]);
        printf("\nDigite o email: ");
        scanf("%s",&email[linha]);
        printf("\nDigite CPF: ");
        scanf("%d",&cpf[linha]);
        printf("\nDigite 1 para continuar ou outro valor para sair\n");
        scanf("%d",&op);
        linha++;
    }while(op == 1);
    // fim funcao cadastro
}
void pesquisa(){
    int cpfPesquisa;
    char emailPesquisa[50];
    int i;
    do{
        printf("\nDigite 1 para pesquisar CPF ou 2 para pesquisar E-mail\n");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("\nDigite o CPF: ");
                scanf("%d",&cpfPesquisa);
                for(i = 0; i < SIZE; i++){
                    if(cpf[i] == cpfPesquisa){
                        printf("\nNome: %s\nEmail: %s \nCPF: %d",nome[i],email[i],cpf[i]);
                    }
                }
                break;
            case 2:
                printf("\nDigite o Email: ");
                scanf("%s",&emailPesquisa);
                  for(i = 0; i < SIZE; i++){
                    if(strcmp(email[i], emailPesquisa) == 0){
                        printf("\nNome: %s\nEmail: %s \nCPF: %d",nome[i],email[i],cpf[i]);
                    }
                }
                break;
            default:
                    printf("\nOpcao Invalida");
                break;
        }
        printf("\nDigite 1 para continuar  pesquisando ou 0 para sair\n");
        scanf("%d",&op);
    }while(op == 1);
}

void lista(){
    int i;
    for(i = 0; i < SIZE; i++){
        if(cpf[i] > 0){
            printf("\nNome: %s\nEmail: %s \nCPF: %d",nome[i],email[i],cpf[i]);
        }else{
            break;
        }
    }
    getchar();
    getchar();
}
