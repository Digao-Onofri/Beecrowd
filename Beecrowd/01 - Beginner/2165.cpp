/*
    Name: Twitting
    Link: https://judge.beecrowd.com/en/problems/view/2165
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string tweet;

    getline(cin, tweet);

    cout << (size(tweet) <= 140 ? "TWEET" : "MUTE") << endl;

    return 0;
}