#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int transpose[MAX][MAX];
int visited[MAX];
int stack[MAX];
int top = -1;
int n;

void push(int vertex) {
    stack[++top] = vertex;
}

int pop() {
    if (top == -1) return -1;
    return stack[top--];
}

// Step 1: Perform DFS and fill stack by finish time
void dfsFillStack(int graph[MAX][MAX], int vertex) {
    visited[vertex] = 1;
    for (int i = 0; i < n; i++) {
        if (graph[vertex][i] && !visited[i]) {
            dfsFillStack(graph, i);
        }
    }
    push(vertex);
}

// Step 2: DFS on transposed graph to print SCC
void dfsPrintSCC(int graph[MAX][MAX], int vertex) {
    printf("%d ", vertex);
    visited[vertex] = 1;
    for (int i = 0; i < n; i++) {
        if (graph[vertex][i] && !visited[i]) {
            dfsPrintSCC(graph, i);
        }
    }
}

// Step 3: Create transpose of the adjacency matrix
void transposeGraph() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[i][j] = adj[j][i];
        }
    }
}

// Step 4: Find all SCCs using Kosaraju’s algorithm
void findSCCs() {
    // Step 1: Clear visited
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Step 2: Fill vertices in stack according to their finishing times
    for (int i = 0; i < n; i++) {
        if (!visited[i])
            dfsFillStack(adj, i);
    }

    // Step 3: Create transpose graph
    transposeGraph();

    // Step 4: Process all vertices in order defined by the stack
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    printf("\nStrongly Connected Components:\n");

    while (top != -1) {
        int vertex = pop();
        if (vertex != -1 && !visited[vertex]) {
            dfsPrintSCC(transpose, vertex);
            printf("\n");
        }
    }
}

// Step 5: Main function
int main() {
    int edges, u, v;

    printf("Enter the number of vertices: ");
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            adj[i][j] = 0;
    }

    printf("Enter the number of edges: ");
    if (scanf("%d", &edges) != 1) return 0;

    printf("Enter the edges (u v) with vertices in range 0 to %d:\n", n - 1);
    for (int i = 0; i < edges; i++) {
        if (scanf("%d %d", &u, &v) != 2) return 0;
        if (u >= 0 && u < n && v >= 0 && v < n)
            adj[u][v] = 1;
        else
            printf("Invalid edge (%d, %d) ignored.\n", u, v);
    }

    findSCCs();

    return 0;
}

