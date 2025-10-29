/*
    Name: Connected Components
    Link: https://judge.beecrowd.com/en/problems/view/1082
*/

#include <stdio.h> 

void dfs_rec(int *visited, int **graph, int n, int u){
    int i;
 
    if(!visited[u]){
        visited[u] = 1;
        printf("%d ", u);
    }

    for(i = 0; i < N; i++){
        if(graph[u][i] && !visited[i]){
            anterior[i] = u;
            dfs_rec(visited, graph, n, i);
        }
    }
}


int main(){
    int cases;
    


    return 0;
}