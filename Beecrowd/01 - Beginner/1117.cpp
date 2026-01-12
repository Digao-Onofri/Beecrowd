/*
    Name: Score Validation
    Link: https://judge.beecrowd.com/en/problems/view/1117
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    float value, avg = 0;
    int count = 0;

    while(cin >> value){
        if(value >= 0 && value <= 10){
            avg += value;
            count++;
        } else{
            cout << "nota invalida" << endl;
        }

        if(count == 2){
            avg /= 2;
            printf("media = %.2f\n", avg);
            break;
        }
    }

    return 0;
}
