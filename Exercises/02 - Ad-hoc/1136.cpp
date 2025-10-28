/*
    Name: Bingo!
    Link: https://judge.beecrowd.com/en/problems/view/1136
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> exist;
    set<int>::iterator it;
    int numbers, balls;
    int remaning[93], i, j;

    while(scanf("%d %d", &numbers, &balls)){
        exist.clear();
        if(numbers == 0 && balls == 0){
            break;
        }

        for(i = 0; i < balls; i++){
            scanf("%d", &remaning[i]);
        }

        for(i = 0; i < balls; i++){
            for(j = i; j < balls; j++){
                exist.insert(abs(remaning[i] - remaning[j]));
            }
        }

        printf("%c\n", exist.size() == numbers + 1 ? 'Y' : 'N');

    }

    return 0;
}