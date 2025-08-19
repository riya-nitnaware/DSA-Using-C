#include <stdio.h>
#include <stdbool.h>

#define V 6
#define INF 1000000

// Graph represented as adjacency matrix
int adj[V][V] = {
    {0,   1,   5,   INF, INF, INF},  // s
    {INF, 0,   2,   2,   1,   INF},  // a
    {INF, INF, 0,   INF, 2,   INF},  // b
    {INF, INF, INF, 0,   3,   1},    // c
    {INF, INF, INF, INF, 0,   2},    // d
    {INF, INF, INF, INF, INF, 0}     // e
};

// Arrays to store shortest distances, predecessors, and visited set
int dist[V], pred[V];
bool visited[V];

// Function to perform Dijkstra's Algorithm
void dijkstra(int src) {
    // Initialization
    int i;
    for ( i = 0; i < V; i++) {
        dist[i] = INF;
        pred[i] = -1;
        visited[i] = false;
    }
    dist[src] = 0;
    int iter;
    for (iter = 0; iter < V; iter++) {
        // Pick the unvisited node with the smallest distance
        int u = -1, minDist = INF, i;
        for (i = 0; i < V; i++) {
            if (!visited[i] && dist[i] < minDist) {
                minDist = dist[i];
                u = i;
            }
        }

        if (u == -1) break; // No reachable nodes left
        visited[u] = true;
        int v;
        // Relax neighbours
        for (v = 0; v < V; v++) {
            if (!visited[v] && adj[u][v] != INF) {
                if (dist[u] + adj[u][v] < dist[v]) {
                    dist[v] = dist[u] + adj[u][v];
                    pred[v] = u;
                }
            }
        }
    }
}

// Function to print the shortest path from src to dest
void printPath(int dest) {
    if (pred[dest] == -1) {
        printf("%d ", dest);
        return;
    }
    printPath(pred[dest]);
    printf("%d ", dest);
}

int main() {
    int src = 0;  // node s = 0
    int dest = 5; // node e = 5

    dijkstra(src);

    printf("Minimum cost from s to e = %d\n", dist[dest]);

    printf("Path: ");
    printPath(dest);
    printf("\n");

    return 0;
}

