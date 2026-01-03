/*
    Name: A long, Long Time Ago
    Link: https://judge.beecrowd.com/en/problems/view/1962
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    long long int year;

    cin >> cases;

    while(cases--){
        cin >> year;

        if(year <= 2014){
            year = 2015 - year;
            cout << year << " D.C." << endl;
        } else{
            year -= 2014;
            cout << year << " A.C." << endl;
        }
    }

    return 0;
}