/*
    Name: The Last Analógimôn
    Link: https://judge.beecrowd.com/en/problems/view/2520
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i, j, sum;
    int mat[101][101];
    int myposn, myposm, aposn, aposm;

    while(cin >> n >> m){

        sum = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                cin >> mat[i][j];
                if(mat[i][j] == 2){
                    aposn = i;
                    aposm = j;
                }
                if(mat[i][j] == 1){
                    myposn = i;
                    myposm = j;
                }
            }
        }

        sum += abs(myposn - aposn);
        sum += abs(myposm - aposm);

        cout << sum << endl;
    }

    return 0;
}