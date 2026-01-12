/*
    Name: The Return of Radar
    Link: https://judge.beecrowd.com/en/problems/view/2143
    wrong answer (15%)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, value;

    while(cin >> cases){
        if(cases == 0){
            break;
        }

        while(cases--){
            cin >> value;

            value *= 2;

            cout << value - 1 << endl;
        }
    }

    return 0;
}