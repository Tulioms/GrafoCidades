struct cidade{
    char nome[255];
};

struct ligacao{
    struct cidade* origem;
    struct cidade* destino;
    float distancia;
};

struct grafo{
    struct ligacao* ligacao;
    struct grafo* proximo;
};

Cidade* gfcdd_cdd_cria_vazia(){
    return NULL;
}
