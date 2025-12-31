/*
    Name: Square Matriz III
    Link: https://judge.beecrowd.com/en/problems/view/1557
    presentation error (20%)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size, spaces, count;
    int i, j, k, value, current;
    bool first;

    count = spaces = 0;
    while(cin >> size){
        count++;
        if(size == 0){
            break;
        }

        value = current = 1;
        for(i = 0; i < size; i++){
            first = true;
            value = current;
            for(j = 0; j < size; j++){
                if(first){                
                    for(k = 0; k < spaces; k++){
                        cout << " ";
                    }
                    cout << value;
                    current = value * 2;
                    first = false;
                } else{
                    cout << " " << value;
                }
                value *= 2;
            }
            cout << endl;
        }

        cout << endl;
        if(count % 2 == 0){
            spaces++;
        }
    }
    
    return 0;
}