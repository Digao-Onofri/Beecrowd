/*
    Name: Logical Sequence
    Link: https://judge.beecrowd.com/en/problems/view/1144
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, i;

    cin >> N;

    for(i = 1; i <= N; i++){
        printf("%d %d %d\n", i, (i * i), (i * i * i));
        printf("%d %d %d\n", i, (i * i) + 1, (i * i * i) + 1);
    }

    return 0;
}