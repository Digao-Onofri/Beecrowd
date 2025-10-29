/*
    Name: DFSr - Depth Hierarchy
    Link: https://judge.beecrowd.com/en/problems/view/1081
*/

#include <bits/stdc++.h> 
using namespace std;

void dfs_rec(vector<int> &connected, int *visited, int graph[][27], int n, int u){
    int v;
    visited[u] = 1;

    connected.push_back(u);

    for(v = 0; v < n; v++){
        if(graph[u][v] > 0 && visited[v] == 0){
            dfs_rec(connected, visited, graph, n, v);
        }
    }
}

int main(){
    int cases, visited[27];
    vector<int> connected;
    vector<int>::iterator it;
    int vertices, edges;
    int graph[27][27];
    int verta, vertb;
    int components, i, j, k;

    scanf("%d", &cases);

    for(j = 1; j <= cases; j++){
        cout << "Caso " << j << ':' << endl;
        scanf("%d %d", &vertices, &edges);

        memset(visited, 0, sizeof(visited));
        for(k = 0; k < 27; k++){
            memset(graph[k], 0, sizeof(graph[k]));
        }
        components = 0;

        while(edges--){
            scanf("%d %d", &verta, &vertb);
            graph[verta][vertb] = 1;
        }

        for(i = 0; i < vertices; i++){
            if(visited[i] == 0){
                components++;
                dfs_rec(connected, visited, graph, vertices, i);        
                sort(connected.begin(), connected.end());    
                for(it = connected.begin(); it != connected.end(); it++){
                    cout << char (*it + 97) << ',';
                }
                cout << endl;
            }
            connected.clear();
        }

        cout << components << " connected components" << endl << endl;
    }

    return 0;
}