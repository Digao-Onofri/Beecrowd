/*
    Name: Array Selection I
    Link: https://judge.beecrowd.com/en/problems/view/1174
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    double value;

    for(i = 0; i < 100; i++){
        cin >> value;
        if(value <= 10){
            printf("A[%d] = %.1lf\n", i, value);
        }
    }

    return 0;
}