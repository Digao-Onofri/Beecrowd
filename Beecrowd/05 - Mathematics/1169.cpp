/*
    Name: Grains in a Chess Board
    Link: https://judge.beecrowd.com/en/problems/view/1169
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, squares, i;
    unsigned long long int memo[65];

    cin >> cases;

    memo[0] = 1;
    for(i = 1; i < 64; i++){
        memo[i] = memo[i - 1] * 2;
    }
 
    memo[64] = memo[63];

    while(cases--){
        cin >> squares;

        if(squares == 64){
            cout << (memo[squares] / 6) / 1000 << " kg" << endl;
        }  else{

            cout << memo[squares] / 12000 << " kg" << endl;
        }

    }

    return 0;
}