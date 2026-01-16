/*
    Name: Album of the Cup
    Link: https://judge.beecrowd.com/en/problems/view/2779
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> cards;
    int amount, purchased, discovered;

    cin >> amount >> purchased;

    while(purchased--){
        cin >> discovered;
        if(cards.find(discovered) == cards.end()){
            cards.insert(discovered);
            amount--;
        }
    }

    cout << amount << endl;

    return 0;
}