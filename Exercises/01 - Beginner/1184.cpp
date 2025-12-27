/*
    Name: Below the Main Diagonal
    Link: https://judge.beecrowd.com/en/problems/view/1184
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double mat[13][13], sum, avg;
    char op;
    int i, j, count;
    bool below;

    cin >> op;

    avg = sum = count = 0;
    for(i = 0; i < 12; i++){
        below = true;
        for(j = 0; j < 12; j++){

            cin >> mat[i][j];

            if(i == j){
                below = false;
            }

            if(below){
                count++;
                sum += mat[i][j];
                avg += mat[i][j];
            }
        }
    }

    if(op == 'S'){
        printf("%.1lf\n", sum);
    } else{
        avg /= count;
        printf("%.1lf\n", avg);
    }

    return 0;
}