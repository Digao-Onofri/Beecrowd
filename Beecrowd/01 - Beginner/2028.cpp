/*
    Name: Sequence of Sequence
    Link: https://judge.beecrowd.com/en/problems/view/2028
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, value, cases;
    int values[201], sizes[201];

    memset(values, 0, sizeof(values));
    memset(sizes, 0, sizeof(sizes));

    sizes[0] = 1;
    for(i = 1; i < 201; i++){
        sizes[i] += sizes[i - 1] + i;
    }

    cases = 1;
    while(cin >> value){

        cout << "Caso " << cases << ": " << 
        sizes[value] << (sizes[value] > 1 ? " numeros" : " numero") 
        << endl;
        
        memset(values, 0, sizeof(values));
        i = 1;
        cout << 0;
        while(i <= value){
            if(values[i] == i){
                i++;
            } else{
                values[i]++;
                cout << " " << i;
            }
        }

        cout << endl << endl;
        cases++;
    }

    return 0;
}