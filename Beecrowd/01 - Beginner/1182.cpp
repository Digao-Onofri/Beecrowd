/*
    Name: Column in Array
    Link: https://judge.beecrowd.com/en/problems/view/1182
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double mat[13][13], avg, sum;
    int i, j, column;
    char op;

    cin >> column >> op;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }

    if(op == 'S'){
        sum = 0;
        for(i = 0; i < 12; i++){
            sum += mat[i][column];
        }
        printf("%.1lf\n", sum);
    } else{
        avg = 0;
        for(i = 0; i < 12; i++){
            avg += mat[i][column];
        }
        avg /= 12;
        printf("%.1lf\n", avg);
    }

    return 0;
}