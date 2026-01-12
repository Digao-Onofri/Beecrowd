/*
    Name: Odd, Even or Cheating
    Link: https://judge.beecrowd.com/en/problems/view/2059
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> game;
    int value, i;

    for(i = 0; i < 5; i++){
        cin >> value;
        game.push_back(value);
    }

    if(game[3] || game[4]){
        if(game[3] && !game[4]) cout << "Jogador 1 ganha!" << endl;
        if(!game[3] && game[4]) cout << "Jogador 1 ganha!" << endl;
        if(game[3] && game[4]) cout << "Jogador 2 ganha!" << endl;
    }   else{
        if(((game[1] + game[2]) & 0x1) == !game[0]) cout << "Jogador 1 ganha!" << endl;
        else cout << "Jogador 2 ganha!" << endl;
    }

    return 0;
}