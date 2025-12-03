/*
    Name: Grains in a Chess Board
    Link: https://judge.beecrowd.com/en/problems/view/1169
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, squares, i;
    unsigned long long int value, answer;

    cin >> cases;

    while(cases--){
        value = 1;
        cin >> squares;

        for(i = 0; i < squares; i++){
            value = value * 2;
        }

        answer = (value / 12) / 1000;

        cout << answer << " kg" << endl;
    }

    return 0;
}