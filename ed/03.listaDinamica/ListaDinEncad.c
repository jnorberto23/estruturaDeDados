#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "ListaDinEncad.h"

struct elemento
{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Lista *cria_lista()
{
    Lista *li = (Lista *)malloc(sizeof(Lista));
}

void libera_lista(Lista *li)
{
    if (li != NULL)
    {
        Elem *no;
        while ((*li) != NULL)
        {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

void tamanho_lista(Lista *li)
{
    if (li != NULL)
    {
        return 0;
    }
    int cont = 0;
    Elem* no = *li;
    while (no != NULL)
    {
        cont++;
        no = no ->prox;
    }

    return cont;
}

void lista_vazia(Lista *li){
    if (li == NULL)
    {
        return 1;
    }
     if (*li == NULL)
    {
        return 1;
    }

    return 0;
}