/*
    Name: Descriptografando
    Link: https://codeforces.com/group/YgJmumGtHD/contest/103794/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

char mat[1010][1010];

int bfs(int i, int j, int count, int time){
    queue<tuple<int, int, int>> fila;
    int u, v;
    int arestas = 0;
    
    fila.push({i, j, 0});

    while(!fila.empty()){
        u = get<0>(fila.front());
        v = get<1>(fila.front());
        arestas = get<2>(fila.front());
        mat[u][v] = '#';
        fila.pop();
        count++;

        if(mat[u + 1][v] == '.' && arestas < time){
            fila.push({u + 1, v, arestas + 1});
            mat[u + 1][v] = '#';
        }        
        
        if(mat[u - 1][v] == '.' && arestas < time){
            fila.push({u - 1, v, arestas + 1});
            mat[u - 1][v] = '#';
        }        
        
        if(mat[u][v + 1] == '.' && arestas < time){
            fila.push({u, v + 1, arestas + 1});
            mat[u][v + 1] = '#';
        }        
        
        if(mat[u][v - 1] == '.' && arestas < time){
            fila.push({u, v - 1, arestas + 1}); 
            mat[u][v - 1] = '#';
        }

    }

    return count;
}   

int main(){
    int n, m, i, time, j, posi, posj;
    int count = 0, div;
    int possible = 0;

    cin >> n >> m >> time >> posi >> posj;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            cin >> mat[i][j];
            if(mat[i][j] == '.'){
                possible++;
            }
        }
    }

    count = bfs(posi, posj, count, time);

    div = gcd(count, possible);

    cout << count / div << ' ' << possible / div << endl;

    return 0;
}