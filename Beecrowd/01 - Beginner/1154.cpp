/*
    Name: Ages
    Link: https://judge.beecrowd.com/en/problems/view/1154
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int age, avg = 0, count = 0;

    while(cin >> age){
        if(age < 0){
            break;
        }

        count++;
        avg += age;
    }

    printf("%.2f\n", avg / (double) count);

    return 0;
}