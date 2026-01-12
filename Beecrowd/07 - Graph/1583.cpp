#include <bits/stdc++.h>
using namespace std;

char mat[52][52];
int dist[52][52];

void bfs(int x, int y, int n, int m){
    queue<pair<int, int>> fila;
    dist[x][y] = 0;
    fila.push({x,y});
    while(!fila.empty()){
        int xx = fila.front().first, yy = fila.front().second;
        fila.pop();
        if(mat[xx - 1][yy] != 'X' && !dist[xx - 1][yy]){
            dist[xx - 1][yy] = 1;
            fila.push({xx - 1, yy});
            mat[xx - 1][yy] = 'T';
        }        
        if(mat[xx + 1][yy] != 'X' && !dist[xx + 1][yy]){
            dist[xx + 1][yy] = 1;
            fila.push({xx + 1, yy});
            mat[xx + 1][yy] = 'T';
        }
        if(mat[xx][yy - 1] != 'X' && !dist[xx][yy - 1]){
            dist[xx][yy - 1] = 1;
            fila.push({xx, yy - 1});
            mat[xx][yy - 1] = 'T';
        }
        if(mat[xx][yy + 1] != 'X' && !dist[xx][yy + 1]){
            dist[xx][yy + 1] = 1;
            fila.push({xx, yy + 1});
            mat[xx][yy + 1] = 'T';
        }
    }
}


int main(){
    int n, m, i, j;

    while(cin >> n >> m){
        if(n == 0 && m == 0){
            break;
        }

        memset(dist, 0, sizeof(dist));
        memset(mat, 'X', sizeof(mat));

        for(i = 1; i <= n; i++){
            for(j = 1; j <= m; j++){
                cin >> mat[i][j];
            }
        }

        for(i = 1; i <= n; i++){
            for(j = 1; j <= m; j++){
                if(mat[i][j] == 'T'){
                    bfs(i, j, n, m);
                }
            }
        }

        for(i = 1; i <= n; i++){
            for(j = 1; j <= m; j++){
                cout << mat[i][j];
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}