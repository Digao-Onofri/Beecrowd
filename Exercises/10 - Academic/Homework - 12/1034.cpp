/*
    Name: Ice Statues Festival
    Link: https://judge.beecrowd.com/en/problems/view/1034
*/

#include<bits/stdc++.h>
#define MAX 1000010
#define INF 1000010
using namespace std;

int ready[MAX];
int value[MAX];    
vector<int> blocks;

int solve (int x){
    value[0] = 0;
    for (int i=1; i <= x; i++) {
        value[i]=INF;
        for (auto c : blocks) {
            if (i-c >= 0) {
                value[i] = min (value[i], value[i-c]+1);
            }
        }
    }
    return value[x];
}

int main(){
    int cases, size, block, types;

    cin >> cases;

    while(cases--){

        cin >> size >> block;
        memset(ready, 0, block + 1);
        memset(value, 0, block + 1);
        blocks.clear();
        while(size--){
            cin >> types;
            blocks.push_back(types);
        }

        cout << solve(block) << endl;
    }

    return 0;
}