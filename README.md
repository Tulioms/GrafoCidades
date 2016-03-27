# GrafoCidades

GrafoCidades é um projeto para a implementação de um grafo relacionando 
cidades e as distâncias das ligações entre cada uma delas. Dessa 
maneira, futuros projetos que utilizam este tipo de informação ou 
utilizem grafos que armazenem outros tipos de dados poderão reaproveitar 
este código e aprender com ele.

## Estrutura

Um grafo é caracterizado como uma estrutura de dados que tem por 
principal característica a ligação vários nós entre si sem a necessidade 
de uma sequência específica. Desta forma o elemento de grafo precisa 
guardar:

* Ponteiro para cada objeto a ser armazenado
* Distância ou custo da ligação
* Ponteiro para lista de vizinhos

Vemos assim que esta estrutura usará uma outra estrutura (lista) para a 
sua existência.
