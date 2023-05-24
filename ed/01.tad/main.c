#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Ponto.h"
#include "Ponto.c"

int main(void)
{
    float d;
    Ponto *p, *q;
    p = pto_cria(10, 21);
    q = pto_cria(7, 25);

    d = pto_distancia(p, q);
    printf("Distancia entre pontos: %f\n", d);
    pto_libera(p);
    pto_libera(q);

    system("pause");
    return 0;
}