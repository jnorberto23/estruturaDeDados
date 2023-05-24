#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

struct tipo_fila
{
    int dados[tamanho];
    int ini;
    int fim;
};

struct tipo_fila fila;

void enfileira(int elemento)
{
    if (fila.fim == tamanho)
    {
        printf("Fila cheia.\n");
    }
    else
    {
        fila.dados[fila.fim] = elemento;
        printf("Item adicionado na fila.\n");
        fila.fim++;
    }
}

int desenfileira()
{
    int elemento;
    if (fila.fim != fila.ini)
    {
        printf("Fila vazia.\n");
    }
    else
    {
        elemento = fila.dados[fila.ini];
        for (size_t i = 0; i < tamanho; i++)
        {
            fila.dados[i] = fila.dados[i + 1];
        }
        fila.dados[fila.fim] = 0;
        fila.fim--;

        printf("Item removido na fila.\n");
        return elemento;
    }
}

int main()
{
    for (size_t i = 0; i < 4; i++)
    {
        enfileira(i);
    }

    int elemento = desenfileira();
    printf("Elemento retirado %d.\n", elemento);
    return 0;
}