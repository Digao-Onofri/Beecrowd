/*
    Name: Counting Crow
    Link: https://judge.beecrowd.com/en/problems/view/1848
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    int scream, sum, count, i;

    count = sum = scream = 0;

    while(count < 3){
        cin >> input;

        if(input != "caw"){
            for(i = 0; i < 3; i++){
                if(input[i] == '*' ){
                    if(i == 0){
                        sum += 4;
                    } else if(i == 1){
                        sum += 2;
                    } else{
                        sum++;
                    }
                }
            }
        } else{
            scream++;
        }

        if(scream == 2){
            scream = 0;
            cout << sum << endl;
            sum = 0;
            count++;
        }
    }

    return 0;
}