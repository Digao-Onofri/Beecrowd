/*
    Name: UFPR Gaming
    Link: https://judge.beecrowd.com/en/problems/view/2543
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int gameplays, id, count;
    int idvideo, game;

    while(cin >> gameplays >> id){
        count = 0;
        while(gameplays--){
            cin >> idvideo >> game;
            if(idvideo == id && !game){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}