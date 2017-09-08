#define MAX 100
typedef int CHAVE;
struct ITEM
{
    CHAVE codigo;
    char nome[40];
    char telefone[10];
    char endereco[50];
    char email[20];
};

void incluir(struct ITEM *a, int *cont);
void imprimir(struct ITEM *a, int *cont);
