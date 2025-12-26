/*
    Name: Above the Main Diagonal
    Link: https://judge.beecrowd.com/en/problems/view/1183
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, count;
    char op;
    double mat[13][13], sum, avg;
    bool above = true;
    
    cin >> op;

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            cin >> mat[i][j];
        }
    }

    if(op == 'S'){
        sum = 0;
        for(i = 0; i < 12; i++){
            above = false;
            for(j = 0; j < 12; j++){
                if(above){
                    sum += mat[i][j];
                }

                if(i == j){
                    above = true;
                }
            }
        }

        printf("%.1lf\n", sum);
    } else{
        avg = count = 0;
        for(i = 0; i < 12; i++){
            above = false;
            for(j = 0; j < 12; j++){
                if(above){
                    count++;
                    avg += mat[i][j];
                }

                if(i == j){
                    above = true;
                }
            }
        }

        avg /= count;
        printf("%.1lf\n", avg);
    }

    return 0;
}