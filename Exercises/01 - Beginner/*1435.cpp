/*
    Name: Square Matrix I
    Link: https://judge.beecrowd.com/en/problems/view/1435
    incomplete
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size, i, j, level;

    while(cin >> size){
        if(size == 0){
            break;
        }

        level = 0;
        for(i = 0; i < size; i++){
            for(j = 0; j < size; j++){
                if((i == 0 || i == size) && (j == 0 || j == size)){
                    level = 1;
                } 

                if(i == j && (i != 0 || i != size) && (j != 0 || j != size)){
                    level++;
                } 

                
                cout << " " << level << endl;
            }
        }
    }
    
    return 0;
}