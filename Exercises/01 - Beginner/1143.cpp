/*
    Name: Squared and Cubic
    Link: https://judge.beecrowd.com/en/problems/view/1143
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int value, i;

    cin >> value;

    for(i = 1; i <= value; i++){
        cout << i << ' ' << i * i << ' '  << i * i * i << endl;
    }

    return 0;
}