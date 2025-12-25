/*
    Name: S Sequence II
    Link: https://judge.beecrowd.com/en/problems/view/1156
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    double s;
    int i = 1, j = 1;

    while(i <= 39){
        s += i / (double) j;
        i += 2;
        j *= 2;
    }

    printf("%.2f\n", s);
    
    return 0;
}