/*
    Name: Robot Basketball
    Link: https://judge.beecrowd.com/en/problems/view/2780
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int distance;

    cin >> distance;

    if(distance > 1400){
        cout << 3 << endl;
    } else if(distance > 800){
        cout << 2 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}