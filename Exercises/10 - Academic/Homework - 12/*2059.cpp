/*
    Name: Odd, Even or Cheating
    Link: https://judge.beecrowd.com/en/problems/view/2059
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> game;
    int value, i, amount;

    for(i = 0; i < 5; i++){
        cin >> value;
        game.push_back(value);
    }

    if(game[0] == 1){
        //player one choose even
        amount = game[1] + game[2];
        if(amount % 2 == 0 || game[3] == 1){
            //player one wins
            if(game[4] == 1){
                cout << "Jogador 2 ganha!" << endl;
            } else{
                cout << "Jogador 1 ganha!" << endl;
            }
        } else{
            cout << "Jogador 2 ganha!" << endl;
        }
    } else{
        //player one choose odd
        amount = game[1] + game[2];
        if(amount % 2 == 0 && game[3] == 1){
            //player one wins
            if(game[4] == 1){
                cout << "Jogador 2 ganha!" << endl;
            } else{
                cout << "Jogador 1 ganha!" << endl;
            }
        } else{
            cout << "Jogador 2 ganha!" << endl;
        }
    }

    return 0;
}