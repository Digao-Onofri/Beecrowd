/*
    Name: Square Root of 10
    Link: https://judge.beecrowd.com/en/problems/view/2161
    incomplete solution
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size, i;
    double value, calc;

    cin >> size; 

    value = 3.0000000000;
    calc = 0.16666666667;
    i = 0;
    while(i < size){
        value += calc;
        calc = calc * (1 / 6.0);
        i++;
    }

    cout << fixed << setprecision(10) << value << endl;

    return 0;
}