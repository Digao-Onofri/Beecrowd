/*
    Name: Fibonot
    Link: https://judge.beecrowd.com/en/problems/view/2846
*/

#include <bits/stdc++.h>
using namespace std;
#define MAX 100010

int main(){ 
    map<int, long unsigned int> fibonacci, fibonot;
    int i, j, term, aux;

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for(i = 2; i < MAX; i++){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    
    j = 1;
    for(i = 1; i < MAX; i++){
        if(fibonacci[i] - fibonacci[i - 1] > 0){
            aux = 1;
            while(fibonacci[i - 1] + aux != fibonacci[i]){
                fibonot[j] = fibonacci[i - 1] + aux;
                aux++;
                j++;
            }
        }
    }

    cin >> term;

    cout << fibonot[term] << endl;

    return 0;
}