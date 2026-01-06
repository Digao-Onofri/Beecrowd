/*
    Name: Will's Message
    Link: https://judge.beecrowd.com/en/problems/view/2523
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    char order[28];
    int length, value;

    while(cin >> order){
        cin >> length;
        while(length--){
            cin >> value;
            cout << order[value - 1];
        }
        cout << endl;
    }

    return 0;
}