#include <stdio.h>
#include <stdlib.h>

#define max 10

int ma[max][max];
int tamanho = 0;

int grafo_tamanho()
{
    int tam = 0;
    while (tam > max || tam < 1)
    {
        printf("Escolha a quantidade de vértices: \n");
        scanf("%d", &tam);
    }
    return tam;
}

void inserir_aresta(int num1, int num2)
{
    if (num1 > tamanho - 1 || num2 > tamanho - 1 || num1 < 0 || num2 < 0)
    {
        printf("Erro!");
    }
    else
    {
        ma[num1][num2] = 1;
        ma[num2][num1] = 1;
    }
}

void exibir_ma()
{
    printf("Matriz de arestas: \n");
    for (size_t i = 0; i < tamanho; i++)
    {
        printf("[ ");
        for (size_t j = 0; j < tamanho; j++)
        {
            printf("%d", ma[i][j]);
        }
        printf("]\n");
    }
}

int main()
{
    inserir_aresta(1, 1);
    exibir_ma();
    return 0;
}