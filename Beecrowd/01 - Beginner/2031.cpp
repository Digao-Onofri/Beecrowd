/*
    Name: Rock, Paper, Airstrike
    Link: https://judge.beecrowd.com/en/problems/view/2031
*/

#include <bits/stdc++.h>
using namespace std;

// rock, paper, airstrike
int mat[4][4] = {{-1, 1, 0},
                {0, 2, 0},
                {1, 1, -2}};

int choose(string a){
    if(a == "pedra"){
        return 0;
    } else if(a == "papel"){
        return 1;
    } else{
        return 2;
    }
}

int main(){
    string choose1, choose2;
    int cases, j1, j2;

    cin >> cases;
    
    while(cases--){
        cin >> choose1 >> choose2;

        j1 = choose(choose1);
        j2 = choose(choose2);

        if(mat[j1][j2] == 1){
            cout << "Jogador 1 venceu" << endl;
        } else if(mat[j1][j2] == 0){
            cout << "Jogador 2 venceu" << endl;
        } else if(mat[j1][j2] == -1){
            cout << "Sem ganhador" << endl;
        } else if(mat[j1][j2] == 2){
            cout << "Ambos venceram" << endl;
        } else{
            cout << "Aniquilacao mutua" << endl;
        }
    }

    return 0;
}