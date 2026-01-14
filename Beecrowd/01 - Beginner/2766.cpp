/*
    Name: Input and Output Reading and Skipping Names
    Link: https://judge.beecrowd.com/en/problems/view/2766
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    string str;

    cases = 1;

    while(cases <= 10){
        cin >> str;
        if(cases == 3 || cases == 7 || cases == 9){
            cout << str << endl;
        }
        cases++;
    }

    return 0;
}