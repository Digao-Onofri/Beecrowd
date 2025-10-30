/*
    Name: Come and Go
    Link: https://judge.beecrowd.com/en/problems/view/1128
*/

#include <bits/stdc++.h> 
using namespace std;

void dfs_rec(int *visited, int graph[][2010], int n, int u){
    int v;
    visited[u] = 1;

    for(v = 1; v <= n; v++){
        if(graph[u][v] > 0 && visited[v] == 0){
            dfs_rec(visited, graph, n, v);
        }
    }
}

int graph[2010][2010];
int reversegraph[2010][2010];

int main(){
    int visited[2010];
    int vertices, edges, i;
    int verta, vertb, way;
    bool ok; 

    while(cin >> vertices >> edges){

        if(vertices == 0 && edges == 0){
            break;
        }

        memset(visited, 0, sizeof(visited));
        memset(graph, 0, sizeof(graph));
        memset(reversegraph, 0, sizeof(reversegraph));

        while(edges--){
            scanf("%d %d %d", &verta, &vertb, &way);
            if(way == 1){
                graph[verta][vertb] = 1;
                reversegraph[vertb][verta] = 1;
            }
            else{
                graph[verta][vertb] = 1;
                graph[vertb][verta] = 1;
                reversegraph[vertb][verta] = 1;
                reversegraph[verta][vertb] = 1;
            }
        }

        ok = true;
        dfs_rec(visited, graph, vertices, 1); 
        for(i = 1; i <= vertices; i++){
            if(!visited[i]){
                ok = false;
                break;
            }
        }

        if(ok){
            memset(visited, 0, sizeof(visited));
            dfs_rec(visited, reversegraph, vertices, 1);
            for (i = 1; i <= vertices; i++) {
                if (!visited[i]) {
                    ok = false;
                    break;
                }
            }

        }

        cout << (ok ? 1 : 0) << endl;
        
    }

    return 0;
}