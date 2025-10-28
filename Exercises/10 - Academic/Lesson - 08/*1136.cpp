/*
    Name: Bingo!
    Link: https://judge.beecrowd.com/en/problems/view/1136
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, bool> exist;
    map<int, bool>::iterator it;
    int numbers, balls;
    int remaning[93], i, j;
    bool possible;

    while(scanf("%d %d", &numbers, &balls)){
        possible = true;
        exist.clear();
        if(numbers == 0 && balls == 0){
            break;
        }

        for(i = 0; i < balls; i++){
            scanf("%d", &remaning[i]);
        }

        for(i = 0; i < balls; i++){
            for(j = i; j < balls; j++){
                exist[fabs(remaning[i] - remaning[j])] = true;
                cout << fabs(remaning[i] - remaning[j]) << ' ';
            }
        }
        
        cout << endl;

        i = 0;
        for(it = exist.begin(); it != exist.end(); it++){
            if(it->second == i){
                cout << it->second << endl;
                possible = false;
                break;
            }
            i++;
        }

        if(possible){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }

    }

    return 0;
}