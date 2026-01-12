/*
    Name: DFSr - Depth Hierarchy
    Link: https://judge.beecrowd.com/en/problems/view/1081
    Presentation error (5%)
*/

#include <bits/stdc++.h> 
using namespace std;

void dfs_rec(int level, int *visited, int graph[][27], int n, int u){
    visited[u] = 1;

    for (int v = 0; v < n; v++) {
        if (graph[u][v] > 0) {
            for (int i = 0; i < level; i++)
                cout << "  ";

            cout << u << '-' << v;
            if (visited[v] == 0) {
                cout << " pathR(G," << v << ")\n";
                dfs_rec(level + 1, visited, graph, n, v);
            }
            else{
                cout << endl;
            }
        }
    }
}

int main() {
    int cases, visited[27];
    int vertices, edges;
    int graph[27][27];
    int verta, vertb, i, j;
    bool first; 

    scanf("%d", &cases);

    for (j = 1; j <= cases; j++) {
        cout << "Caso " << j << ":\n";
        scanf("%d %d", &vertices, &edges);

        memset(visited, 0, sizeof(visited));
        memset(graph, 0, sizeof(graph));

        while (edges--) {
            scanf("%d %d", &verta, &vertb);
            graph[verta][vertb] = 1;
        }

        first = true;
        for (i = 0; i < vertices; i++) {
            if (visited[i] == 0) {
                if(!first){
                    cout << "\n";
                }
                first = false;
                dfs_rec(1, visited, graph, vertices, i);
            }
        }

        cout << endl;
    }

    return 0;
}
