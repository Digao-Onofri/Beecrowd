/*
    Name: Roller Coaster
    Link: https://judge.beecrowd.com/en/problems/view/2547
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int guests, minimum, maximum, height, count;

    while(cin >> guests >> minimum >> maximum){
        count = 0;
        while(guests--){
            cin >> height;
            if(height >= minimum && height <= maximum){
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}