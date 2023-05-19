#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

struct tipo_pilha
{
    int dados[tamanho];
    int ini;
    int topo;
};

struct tipo_pilha pilha;

void empilha(int elemento)
{
    if (pilha.topo == tamanho)
    {
        printf("Pilha cheia.\n");
    }
    else
    {
        pilha.dados[pilha.topo] = elemento;
        printf("Item adicionado na pilha.\n");
        pilha.topo++;
    }
}

int desempilha()
{
    int elemento;
    if (pilha.topo == pilha.ini)
    {
        printf("Pilha vazia.\n");
    }
    else
    {
        pilha.topo--;
        elemento = pilha.dados[pilha.topo];
        printf("Item removido na pilha.\n");
        return elemento;
    }
}

int main()
{
    for (size_t i = 0; i < 10; i++)
    {
        empilha(i);
    }

    int elemento = desempilha();
    printf("Elemento retirado %d.\n", elemento);
    return 0;
}