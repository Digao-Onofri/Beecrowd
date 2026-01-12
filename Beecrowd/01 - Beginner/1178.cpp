/*
    Name: Array Fill III
    Link: https://judge.beecrowd.com/en/problems/view/1178
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double value;
    int i;

    cin >> value;

    for(i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, value);
        value /= 2;
    }

    return 0;
}