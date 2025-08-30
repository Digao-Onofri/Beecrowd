/*
    Name: Queen
    Link: https://judge.beecrowd.com/en/problems/view/1087
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    
    cin >> x1 >> y1 >> x2 >> y2;

    while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0){
        if(x1 == x2 && y1 == y2){ //Same position
            cout << "0\n";
        }
        else if( x1 == x2 || y1 == y2 ){ //Same line or column
            cout << "1\n";
        }
        else if( fabs(x1 - x2) == fabs(y1 - y2) ){ //Diagonal
            cout << "1\n";
        }
        else{ 
            cout << "2\n";
        }
        
        cin >> x1 >> y1 >> x2 >> y2;
    }

    return 0;
}