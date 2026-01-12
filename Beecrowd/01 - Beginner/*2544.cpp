/*
    Name: Kage Bunshin no Jutsu
    Link: https://judge.beecrowd.com/en/problems/view/2544
    wrong answer (60%)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int value;

    while(cin >> value){
        if(value == 1){
            cout << 0 << endl;
        } else if(value == 2){
            cout << 1 << endl;
        } else{
            cout << fixed << setprecision(0) << sqrt(value) << endl;
        }
    }

    return 0;
}