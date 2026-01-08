/*
    Name: Hard Choice
    Link: https://judge.beecrowd.com/en/problems/view/2702
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd = 0;
    int x1, x2, x3;
    int y1, y2, y3;

    cin >> x1 >> x2 >> x3;
    cin >> y1 >> y2 >> y3;

    if(x1 < y1){
        qtd += abs(x1 - y1);
    }

    if(x2 < y2){
        qtd += abs(x2 - y2);
    }

    if(x3 < y3){
        qtd += abs(x3 - y3);
    }

    cout << qtd << endl;
    
    return 0;
}