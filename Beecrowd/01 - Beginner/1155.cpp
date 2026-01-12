/*
    Name: S Sequence 
    Link: https://judge.beecrowd.com/en/problems/view/1155
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double s;
    int i;

    for(i = 1; i <= 100; i++){
        s += 1.0 / i;
    }

    printf("%.2f\n", s);

    return 0;
}