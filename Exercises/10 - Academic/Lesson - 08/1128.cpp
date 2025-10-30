/*
    Name: Come and Go
    Link: https://judge.beecrowd.com/en/problems/view/1128
*/

#include <bits/stdc++.h> 
using namespace std;

void dfs_rec(vector<int> &connected, int *visited, int graph[][2010], int n, int u){
    int v;
    visited[u] = 1;

    connected.push_back(u);

    for(v = 1; v <= n; v++){
        if(graph[u][v] > 0 && visited[v] == 0){
            dfs_rec(connected, visited, graph, n, v);
        }
    }
}

int graph[2010][2010];

int main(){
    int visited[2010];
    vector<int> connected;
    vector<int>::iterator it;
    int vertices, edges;
    int verta, vertb, way;

    while(cin >> vertices >> edges){
        connected.clear();

        if(vertices == 0 && edges == 0){
            break;
        }

        memset(visited, 0, sizeof(visited));
        memset(graph, 0, sizeof(graph));

        while(edges--){
            scanf("%d %d %d", &verta, &vertb, &way);
            if(way == 1){
                graph[verta][vertb] = 1;
            }
            else{
                graph[verta][vertb] = 1;
                graph[vertb][verta] = 1;
            }
        }

        dfs_rec(connected, visited, graph, vertices, 1); 
        if(connected.size() == vertices){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }

        //for(i = 1; i <= vertices; i++){
        //     dfs_rec(connected, visited, graph, vertices, i); 
        //     if(connected.size() != vertices){
        //         cout << 0 << endl;
        //         printed = true;
        //         break;
        //     }
        //     connected.clear();
        // }
        
        // if(!printed){
        //     cout << 1 << endl;
        // }
    }

    return 0;
}