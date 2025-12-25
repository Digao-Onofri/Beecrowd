/*
    Name: Easy Fibonacci
    Link: https://judge.beecrowd.com/en/problems/view/1151
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, size, count, last, aux;

    cin >> size;
    
    i = 0;
    last = 1;
    cout << i;
    cout << " " << last;
    count = 2;
    while(count < size){
        cout << " " << last + i;
        aux = i;
        i = last;
        last = last + aux;
        count++;
    }

    cout << endl;

    return 0;
}