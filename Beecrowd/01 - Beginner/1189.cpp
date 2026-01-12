/*
    Name: Left Area
    Link: https://judge.beecrowd.com/en/problems/view/1189
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double mat[13][13], sum, avg;
    int i, j, count, flag;
    bool main, secondary;
    char op;

    cin >> op;

    flag = 11;
    sum = avg = count = 0;
    for(i = 0; i < 12; i++){
        main = secondary = true;
        for(j = 0; j < 12; j++){
            cin >> mat[i][j];

            if(i == j){
                main = false;
            }

            if(j - i == flag){
                flag -= 2;
                secondary = false;
            }

            if(main && secondary){
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