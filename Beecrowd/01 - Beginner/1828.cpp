/*
    Name: Bazinga!
    Link: https://judge.beecrowd.com/en/problems/view/1828
*/

#include <bits/stdc++.h>
using namespace std;

// [scissor, paper, rock, lizard, spock]
int mat[5][5] = {{-1, 1, 0, 1, 0},
                {0, -1, 1, 0, 1},
                {1, 0, -1, 1, 0},
                {0, 1, 0, -1, 1},
                {1, 0, 1, 0, -1}};
          
int s, r;
void choose(string a, bool option){
    if(option){
        if(a == "tesoura"){
            s = 0;
        } else if(a == "papel"){
            s = 1;
        } else if(a == "pedra"){
            s = 2;
        } else if(a == "lagarto"){
            s = 3;
        } else{
            s = 4;
        }
    } else{
        if(a == "tesoura"){
            r = 0;
        } else if(a == "papel"){
            r = 1;
        } else if(a == "pedra"){
            r = 2;
        } else if(a == "lagarto"){
            r = 3;
        } else{
            r = 4;
        }
    }
}

int main(){
    int cases, i;
    string sheldon, raj;

    cin >> cases;

    for(i = 1; i <= cases; i++){
        cin >> sheldon >> raj;
        choose(sheldon, true);
        choose(raj, false);
        cout << "Caso #" << i << ": ";

        if(mat[s][r] == -1){
            cout << "De novo!" << endl;
        } else if(mat[s][r]){
            cout << "Bazinga!" << endl;
        } else{
            cout << "Raj trapaceou!" << endl;
        }
    }

    return 0;
}