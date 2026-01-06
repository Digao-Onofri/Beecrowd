/*
    Name: CheeseBreadSweeper
    Link: https://judge.beecrowd.com/en/problems/view/2552
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int board[102][102], cheese[102][102];
    int i, j, n, m;

    while(cin >> n >> m){
        for(i = 1; i <= n; i++){
            for(j = 1; j <= m; j++){
                cin >> board[i][j];
            }
        }

        memset(cheese, 0, sizeof(cheese));
        for(i = 1; i <= n; i++){
            for(j = 1; j <= m; j++){
                if(i - 1 >= 1){
                    if(board[i - 1][j]){
                        cheese[i][j]++;
                    }
                }

                if(i + 1 <= n){
                    if(board[i + 1][j]){
                        cheese[i][j]++;
                    }
                }
                
                if(j - 1 >= 1){
                    if(board[i][j - 1]){
                        cheese[i][j]++;
                    }
                }
                
                if(j + 1 <= m){
                    if(board[i][j + 1]){
                        cheese[i][j]++;
                    }
                }

                if(board[i][j]){
                    cheese[i][j] = 9;
                }
            }
        }

        for(i = 1; i <= n; i++){
            for(j = 1; j <= m; j++){
                cout << cheese[i][j];
            }
            cout << endl;
        }

    }

    return 0;
}