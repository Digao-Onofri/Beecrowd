/*
    Name: Rest of a Division
    Link: https://judge.beecrowd.com/en/problems/view/1133
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, aux, i;

    cin >> x >> y;

    if(x > y){
        aux = x;
        x = y;
        y = aux;
    }

    i = x + 1;
    while(i < y){
        if(i % 5 == 2 || i % 5 == 3){
            cout << i << endl;
        }
        i++;
    }

    return 0;
}