/*
    Name: Bill
    Link: https://judge.beecrowd.com/en/problems/view/1866
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, value;

    cin >> cases;

    while(cases--){
        cin >> value;

        if(value & 0x1){
            cout << 1 << endl;
        } else{
            cout << 0 << endl;
        }
    }

    return 0;
}