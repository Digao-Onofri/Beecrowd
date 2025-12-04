#include <bits/stdc++.h>
using namespace std;

mat[52][52]

void bfs(int x, int y, int n, int m){
    queue<pair<int, int>> fila;
    dist[x][y] = 0;
    fila.push({x,y});
    while(!fila.empty()){
        int xx = fila.front().first, yy = fila.front().second;
        fila.pop();
        if(mat[xx - 1][y] != 'X' && !dist[xx - 1][yy]){
            dist[xx - 1][yy] = 1;
            fila.push({xx - 1, yy});
            mat[xx - 1][yy] = 'T';
        }        
        if(mat[xx + 1][y] != 'X' && !dist[xx + 1][yy]){
            dist[xx + 1][yy] = 1;
            fila.push({xx + 1, yy});
            mat[xx + 1][yy] = 'T';
        }
        if(mat[xx][yy - 1] != 'X' && !dist[xx][yy - 1]){
            dist[xx][yy - 1] = 1;
            fila.push({xx, yy - 1});
            mat[xx][yy - 1] = 'T';
        }
        if(mat[xx][y] != 'X' && !dist[xx - 1][yy]){
            dist[xx - 1][yy] = 1;
            fila.push({xx - 1, yy});
            mat[xx - 1][yy] = 'T';
        }
    }
}