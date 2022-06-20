#include <stdio.h>
#include <stdlib.h>


main()
{

    int i, flag, codigo;
    int produtos[3];

    for (i = 0; i < 3; i++)
    {
        printf("Informe o codigo do produto: \n");
        scanf("%d", &produtos[i]);
    }
    flag = 0; // utilizado para sinalizar se achou ou não achou
    printf("Informe o codigo para a pesquisa\n");
    scanf("%d", &codigo);
    for (i = 0; i < 3; i++)
        if (produtos[i] == codigo)
        {
            flag = 1;
            printf("O Codigo foi encontrado\n\n");
        }
    if (flag == 0)
        printf("Codigo do produto nao encontrado");


        system("pause");

    return 0;
}
