struct aluno
{
  int matricula;
  char nome[30];
  float n1, n2, n3;
};

typedef struct elemento* Lista;

Lista* cria_lista();
void libera_lista(Lista* li);
void tamanho_lista(Lista *li);
void lista_vazia(Lista *li);