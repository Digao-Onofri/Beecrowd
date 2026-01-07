/*
    Name: JB6 Team
    Link: https://judge.beecrowd.com/en/problems/view/2626
*/

#include <bits/stdc++.h>
using namespace std;

//rock, paper, scissors
int mat[4][4] = {{0, 0, 1},
                 {1, 0, 0}, 
                 {0, 1, 0}};

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
    string dodo, leo, pepper;

    while(cin >> dodo >> leo >> pepper){
        if(mat[choose(dodo)][choose(leo)] && mat[choose(dodo)][choose(pepper)]){
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        } else if(mat[choose(leo)][choose(dodo)] && mat[choose(leo)][choose(pepper)]){
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        } else if(mat[choose(pepper)][choose(dodo)] && mat[choose(pepper)][choose(leo)]){
            cout << "Urano perdeu algo muito precioso..." << endl;
        } else{
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
    }

    return 0;
}