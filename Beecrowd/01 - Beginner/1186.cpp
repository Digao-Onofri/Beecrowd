/*
    Name: Below the Secundary Diagonal
    Link: https://judge.beecrowd.com/en/problems/view/1186
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double mat[13][13], sum, avg;
    int i, j, count, flag;
    bool below;
    char op;

    cin >> op;

    flag = 11;
    sum = avg = count = 0;
    for(i = 0; i < 12; i++){
        below = false;
        for(j = 0; j < 12; j++){
            cin >> mat[i][j];
            
            if(below){
                count++;
                sum += mat[i][j];
                avg += mat[i][j];
            }

            if(j - i == flag){
                flag -= 2;
                below = true;
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