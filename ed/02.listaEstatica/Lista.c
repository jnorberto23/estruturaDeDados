#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "Lista.h";

struct lista
{
    int qtde;
    struct aluno dados[MAX]
};

Lista *cria_lista()
{
    Lista *li;
    li = (Lista *)malloc(sizeof(struct lista));
    if (li != NULL)
        li->qtde = 0;
    return li;
}

void libera_lista(Lista *li)
{
    free(li);
};

int tamanho_lista(Lista *li)
{
    if (li == NULL)
    {
        return -1;
    }
    else
    {
        return li->qtde;
    }
};

int lista_cheia(Lista *li)
{
    if (li != NULL)
    {
        return -1;
    }
    return (li->qtde == MAX);
};

int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    if (lista_cheia(li))
    {
        return 0;
    }
    li->dados[li->qtde] = al;
    li->qtde++;
    return 1;
}
int insere_lista_inicio(Lista *li, struct aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    if (lista_cheia(li))
    {
        return 0;
    }
    int i;
    for (size_t i = li->qtde - 1; i >= 0; i--)
    {
        li->dados[i + 1] = li->dados[i];
    }

    li->dados[0] = al;
    li->qtde++;
    return 1;
}

int insere_lista_ordenada(Lista *li, struct aluno al)
{
    if (li == NULL)
    {
        return 0;
    }
    if (lista_cheia(li))
    {
        return 0;
    }
    int k, i = 0;
    while (i < li->qtde && li->dados[i].matricula < al.matricula)
    {
        i++;
    }
    for (size_t k = li->qtde - 1; k >= i; k--)
    {
        li->dados[k + 1] = li->dados[k];
    }
    li->dados[i] = al;
    li->qtde++;
    return 1;
}