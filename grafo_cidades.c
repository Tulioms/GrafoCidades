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
