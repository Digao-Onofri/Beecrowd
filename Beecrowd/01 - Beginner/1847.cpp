/*
    Name: Welcome to the Winter!
    Link: https://judge.beecrowd.com/en/problems/view/1847
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t1, t2, t3;

    cin >> t1 >> t2 >> t3;
    if((t1 < t2 && t2 < t3) && ((t3 - t2) < (t2 - t1))){
        cout << ":(" << endl;
    } else if((t1 < t2 && t2 < t3) && ((t3 - t2) >= (t2 - t1))){
        cout << ":)" << endl;
    } else if((t1 > t2 && t2 > t3) && ((t3 - t2) > (t2 - t1))){
        cout << ":)" << endl;
    } else if((t1 > t2 && t2 > t3) && ((t3 - t2) <= (t2 - t1))){
        cout << ":(" << endl;
    } else if(t1 > t2 && t2 <= t3){
        cout << ":)" << endl;
    } else if(t1 < t2 && t2 >= t3){
        cout << ":(" << endl;
    } else if(t1 == t2 && t2 < t3){
        cout << ":)" << endl;
    } else{
        cout << ":(" << endl;
    }

    return 0;
}