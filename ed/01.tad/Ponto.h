typedef struct ponto Ponto;

Ponto *pto_cria(float x, float y); // equivalente ao FOpen, cria um novo ponto

void pto_libera(Ponto *p); // libera um ponto, equivalente ao FClose

void pto_acessa(Ponto *p, float *x, float *y); // acessa os valores x e y de um ponto

void pto_atribui(Ponto *p, float x, float y); // atribui os valores x e y a um ponto

float  pto_distancia(Ponto *p1, Ponto *p2); // calcula a distancia entre dois pontos