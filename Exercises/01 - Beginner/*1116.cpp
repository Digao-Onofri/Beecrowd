/*
    Name: Dividing X by Y
    Link: https://judge.beecrowd.com/en/problems/view/1116
    wrong answer (40%)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases;
    int x, y;

    cin >> cases;

    while(cases--){
        cin >> x >> y;

        if(x >= 0){
            printf("%.1f\n", x / (float) y);
        } else{
            cout << "divisao impossivel" << endl;
        }
    }

    return 0;
}