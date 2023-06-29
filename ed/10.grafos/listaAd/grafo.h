typedef struct grafo Grafo;

Grafo* cria_grafo(int nro_vertices, int grau_max, int eh_ponderado );
int insereAresta(Grafo* gr, int orig, int dest, int eh_digrafo, float peso);
void libera_Grafo(Grafo* gr);
int removeAresta(Grafo* gr, int orig, int dest, int eh_digrafo);
