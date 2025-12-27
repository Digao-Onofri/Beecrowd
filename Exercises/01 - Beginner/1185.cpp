/*
    Name: Above the Secundary Diagonal
    Link: https://judge.beecrowd.com/en/problems/view/1185
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double mat[13][13], avg, sum;
    int i, j, count, flag;
    char op;
    bool above;

    cin >> op;

    flag = 11;
    sum = avg = count = 0;
    for(i = 0; i < 12; i++){
        above = true;
        for(j = 0; j < 12; j++){
            cin >> mat[i][j];

            if(j - i == flag){
                flag -= 2;
                above = false;
            } 

            if(above){
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