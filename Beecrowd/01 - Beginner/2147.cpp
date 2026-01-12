/*
    Name: Galopeira
    Link: https://judge.beecrowd.com/en/problems/view/2147
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    string word;
    double time;

    cin >> cases;

    while(cases--){
        cin >> word;

        time = size(word) * 0.01;

        cout << fixed << setprecision(2) << time << endl;
    }

    return 0;
}