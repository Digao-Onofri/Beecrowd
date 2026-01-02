/*
    Name: Roman Numerals for Page Numbers
    Link: https://judge.beecrowd.com/en/problems/view/1960
    incomplete solution
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int value;

    cin >> value;

    while(value > 0){
        if(value > 500){
            cout << "D";
            value -= 500;
        } else if(value > 100){
            cout << "C";
            value -= 100;
        } else if(value > 50){
            cout << "L";
            value -= 50;
        } else if(value > 10){
            cout << "X";
            value -= 10;
        } else if(value > 5){
            cout << "V";
            value -= 5;
        } else{
            cout << "I";
            value -= 1;
        }
    }

    cout << endl; 

    return 0;
}