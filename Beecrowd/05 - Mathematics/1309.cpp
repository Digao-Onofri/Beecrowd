/*
    Name: Monetary Formatting
    Link: https://judge.beecrowd.com/en/problems/view/1309
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string dollars, cents, aux;
    int i, count;

    while(cin >> dollars >> cents){
        aux.clear();
        count = 0;
        for(i = dollars.size() -1; i >= 0 ; i--){
            if(count && count % 3 == 0){
                aux += ',';
            }
            count++;
            aux += dollars[i];
        }
        
        reverse(aux.begin(), aux.end());

        if(stoi(cents) > 9){
            aux += '.';
            aux += cents;
        } else{
            aux += ".0";
            aux += cents;
        }

        cout << '$' << aux << endl;
    }

    return 0;
}