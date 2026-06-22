#include <stdio.h>
#include <stdbool.h>
#include "../include/grafo.h"

void bfs(int adj[V][V], int inicio) {
    bool visitado[V] = {false};
    int fila[V], frente = 0, tras = 0;

    visitado[inicio] = true;
    fila[tras++] = inicio;

    while (frente < tras) {
        int atual = fila[frente++];
        printf("%d ", atual);

        for (int i = 0; i < V; i++) {
            if (adj[atual][i] == 1 && !visitado[i]) {
                visitado[i] = true;
                fila[tras++] = i;
            }
        }
    }
}