/*
    Name: Lowest Number and Position
    Link: https://judge.beecrowd.com/en/problems/view/1180
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double mat[13][13], avg, sum;
    int i, j, line;
    char op;

    cin >> line;
    cin >> op;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }

    if(op == 'S'){
        sum = 0;
        for(j = 0; j < 12; j++){
            sum += mat[line][j];
        }
        printf("%.1lf\n", sum);
    } else{
        avg = 0;
        for(j = 0; j < 12; j++){
            avg += mat[line][j];
        }
        avg /= 12;
        printf("%.1lf\n", avg);
    }

    return 0;
}