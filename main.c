#include <stdio.h>
#include <stdlib.h>
#include "agenda.h"

void menu()
{
    system("cls");
    printf("\tMenu\n1-Incluir\n2-Imprimir\n0-Sair\n");
    system("cls");
}

int main()
{
    int opc, cont=0;
    struct ITEM a[MAX];
    do
    {
        menu();
        scanf("%d", &opc);
        switch(opc)
        {
        case 1:
            incluir(a, &cont);
            break;
        case 2:
            imprimir(a, &cont);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Erro!\n");
        }
    }
    while(opc!=0);
    return 0;
}
