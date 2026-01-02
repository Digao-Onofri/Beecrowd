/*
    Name: Jumping Frog
    Link: https://judge.beecrowd.com/en/problems/view/1961
    wrong answer(35%)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int height, pipes;
    int p1, p2;
    bool first, win;

    cin >> height >> pipes;

    first = true;
    while(pipes--){
        cin >> p2;

        if(first){
            p1 = p2;
            first = false;
        } else{
            if(height >= fabs(p1 - p2)){
                win = true;
            } else{
                win = false;
            }
            p1 = p2;
        }
    }

    if(win){
        cout << "YOU WIN" << endl;
    } else{
        cout << "GAME OVER" << endl;
    }

    return 0;
}