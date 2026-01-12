/*
    Name: Little Ducks
    Link: https://judge.beecrowd.com/en/problems/view/2334
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int value;

    while(cin >> value){
        if(value == -1){
            break;
        }

        cout << (value > 0 ? value - 1 : 0) << endl;

    }

    return 0;
}