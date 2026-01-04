/*
    Name: The Force Awakens
    Link: https://judge.beecrowd.com/en/problems/view/2163
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat[1010][1010];
    int n, m;
    int i, j;
    bool lightsaber = false;

    cin >> n >> m;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            cin >> mat[i][j];
        }
    }
    
    for(i = 1; i <= n; i++){
        if(lightsaber){
            break;
        }
        for(j = 1; j <= m; j++){
            if(mat[i][j] == 42){
                if((i + 1 <= n && i - 1 > 0) && (j + 1 <= m && j - 1 > 0)){
                    if(mat[i - 1][j - 1] == 7 && mat[i - 1][j] == 7 && mat[i - 1][j + 1] == 7 && mat[i][j - 1] == 7 && mat[i][j + 1] == 7 && mat[i + 1][j - 1] == 7 && mat[i + 1][j] == 7 && mat[i + 1][j + 1] == 7){
                        lightsaber = true;
                        cout << i << " " << j << endl;
                    }
                }
            }
        }
    }

    cout << (lightsaber ? "" : "0 0\n");

    return 0;
}