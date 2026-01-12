/*
    Name: The Coins of Robbie
    Link: https://judge.beecrowd.com/en/problems/view/2709
    wrong answer(10%)
    */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size, i, coins[22];
    int sum, jumps;
    bool prime;

    while(cin >> size){
        for(i = 0; i < size; i++){
            cin >> coins[i];
        }

        cin >> jumps;

        sum = 0;
        prime = true;
        for(i = 0; i < size; i += jumps){
            sum += coins[i];
        }
        
        if(sum == 1){
            prime = false;
        } else{
            for(i = 2; i < sum; i++){
                if(sum % i == 0){
                    prime = false;
                    break;
                }
            }
        }

        if(prime){
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        } else{
            cout << "Bad boy! I’ll hit you." << endl;
        }
    }

    return 0;
}