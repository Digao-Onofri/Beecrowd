/*
    Name: Troco
    Link: https://judge.beecrowd.com/en/problems/view/2446
*/

#include <bits/stdc++.h>
#define MAX 100010
#define INF 100010
using namespace std;

int value[MAX];
int coins[MAX];

int solve (int x){
    value[0] = 0;
    for (int i=1; i <= x; i++) {
        value[i]=INF;
        for (auto c : coins) {
            if (i-c >= 0) {
                value[i] = min(value[i], value[i-c]+1);
            }
        }
    }
    return value[x];
}

int main(){
    int values, coin, i;

    cin >> values >> coin;

    for(i = 0; i < coin; i++){
        cin >> coins[i];
    }

    cout << solve(values) << endl;
    if(solve(values) != INF){
        cout << 'S' << endl;
    } else{
        cout << 'N' << endl;
    }

    return 0;
}