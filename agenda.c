#include "agenda.h"

void incluir(struct ITEM *a, int *cont)
{
    int i, erros=0;
    printf("Digite o codigo da pessoa:\n");
    fflush(stdin);
    scanf("%d", (a+cont).codigo);
    for(i=0; i<cont; i++)
    {
        if((*(a+i)).codigo==(*(a+cont)).codigo)
        {
            erros++;
        }
    }
    if(erros==0)
    {
        printf("Digite o nome da pessoa:\n");
        fflush(stdin);
        scanf("%s", (a+cont).nome);
        printf("Digite o telefone da pessoa:\n");
        fflush(stdin);
        scanf("%s", (a+cont).telefone);
        printf("Digite o endereco da pessoa:\n");
        fflush(stdin);
        scanf("%d", (a+cont).endereco);
        printf("Digite o email da pessoa:\n");
        fflush(stdin);
        scanf("%d", (a+cont).email);
    }
}

void imprimir(struct ITEM *a, int *cont)
{
    int i;
    for(i=0; i<=cont; i++)
    {
        printf("Codigo: %d\n", (*(a+i)).codigo);
        printf("Nome: %s\n", (*(a+i)).nome);
        printf("Telefone: %s\n", (*(a+i)).telefone);
        printf("Endereco: %s\n", (*(a+i)).endereco);
        printf("Email: %s\n", (*(a+i)).email);
        putchar('\n');
    }
}
