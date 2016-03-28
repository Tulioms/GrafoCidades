typedef struct cidade Cidade;
typedef struct ligacao Ligacao;
typedef struct grafo Grafo;

Cidade* gfcdd_cdd_cria(char nome[]);
Cidade* gfcdd_cdd_cria_vazia();
Cidade* gfcdd_cdd_editar(Cidade* cdd, char nome[]);
void gfcdd_cdd_imprime(Cidade* cdd);
