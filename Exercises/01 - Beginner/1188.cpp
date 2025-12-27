/*
    Name: Inferior Area
    Link: https://judge.beecrowd.com/en/problems/view/1188
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double mat[13][13], sum, avg;
    int i, j, count, flag;
    char op;
    bool main, secondary;

    cin >> op;

    flag = 11;
    sum = avg = count = 0;
    for(i = 0; i < 12; i++){
        main = true;
        secondary = false;
        for(j = 0; j < 12; j++){
            cin >> mat[i][j];            
            
            if(i == j){
                main = false;
            }

            if(main && secondary){
                count++;
                sum += mat[i][j];
                avg += mat[i][j];
            }

            if(j - i == flag){
                flag -= 2;
                secondary = true;
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