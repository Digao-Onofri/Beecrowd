/*
    Name: Descriptografando
    Link: https://codeforces.com/group/YgJmumGtHD/contest/103794/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

char mat[1010][1010];

int bfs(int i, int j, int count){
    queue<pair<int, int>> fila;
    int u, v;
    
    fila.push(pair{i, j});

    while(!fila.empty()){
        u = fila.front().first;
        v = fila.front().second;
        fila.pop();
        count++;

        if(mat[u + 1][v] == '.'){
            fila.push(pair{u + 1, v});
            mat[u + 1][v] = '#';
        }        
        
        if(mat[u - 1][v] == '.'){
            fila.push(pair{u - 1, v});
            mat[u - 1][v] = '#';
        }        
        
        if(mat[u][v + 1] == '.'){
            fila.push(pair{u, v + 1});
            mat[u][v + 1] = '#';
        }        
        
        if(mat[u][v - 1] == '.'){
            fila.push(pair{u, v - 1}); 
            mat[u][v - 1] = '#';
        }
    }

    return count;
}   

int main(){
    int n, m, i, time, j, posi, posj;
    int count = 0;

    cin >> n >> m >> time >> posi >> posj;

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }


    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(mat[i][j] == '.'){
                count = bfs(i, j, count);
                count--;
            }
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){ 
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }

    cout << count << endl;

    return 0;
}