/*
    Name: Multiples of 13
    Link: https://judge.beecrowd.com/en/problems/view/1132
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, aux, i, sum = 0;

    cin >> x >> y;

    if(x > y){
        aux = x;
        x = y;
        y = aux;
    }

    i = x;
    while(i <= y){
        if(i % 13 != 0){
            sum += i;
        }
        i++;
    }

    cout << sum << endl;

    return 0;
}