/*
    Name: Exceeding Z
    Link: https://judge.beecrowd.com/en/problems/view/1150
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, z, count, sum;

    cin >> x;

    while(cin >> z){
        if(z > x){
            break;
        }
    }

    count = 0;
    sum = 0;
    while(sum < z){
        count++;
        sum += x++;
    }

    cout << count << endl;

    return 0;
}