/*
    Name: Sum of Consecutive Odd Numbers II
    Link: https://judge.beecrowd.com/en/problems/view/1158
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, x, y, sum, count;

    cin >> cases;

    while(cases--){
        cin >> x >> y;

        count = sum = 0;
        while(count < y){
            if(x & 0x1){
                sum += x;
                count++;
            }
            x++;
        }

        cout << sum << endl;
    }

    return 0;
}