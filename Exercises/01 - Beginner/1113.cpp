/*
    Name: Ascending and Descending
    Link: https://judge.beecrowd.com/en/problems/view/1113
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;

    while(cin >> x >> y){
        if(x == y){
            break;
        }

        if(x > y){
            cout << "Decrescente" << endl;
        } else{
            cout << "Crescente" << endl;
        }
    }

    return 0;
}