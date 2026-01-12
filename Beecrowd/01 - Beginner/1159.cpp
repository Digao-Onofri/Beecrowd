/*
    Name: Sum of Consecutive Even Numbers
    Link: https://judge.beecrowd.com/en/problems/view/1159
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int value, sum, count;

    while(cin >> value){
        if(value == 0){
            break;
        }

        count = sum = 0;
        while(count < 5){
            if(!(value & 0x1)){
                sum += value;
                count++;
            }
            value++;
        }

        cout << sum << endl;
    }

    return 0;
}