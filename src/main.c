#include <stdio.h>
#include "../include/grafo.h"

int main() {
    int adj[V][V] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}
    };

    printf("Ordem de visita BFS: ");
    bfs(adj, 0);
    printf("\n");
    return 0;
}