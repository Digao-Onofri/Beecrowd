/*
    Name: Division of Nlogonia
    Link: https://judge.beecrowd.com/en/problems/view/1091
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int queries, coordinate_N, coordinate_M;
    int coordinate_X, coordinate_Y;

    cin >> queries;

    while(queries != 0){
        cin >> coordinate_N >> coordinate_M;
        
        while(queries--){
            cin >> coordinate_X >> coordinate_Y;
            if(coordinate_X < coordinate_N && coordinate_Y < coordinate_M){ //Southwestern
                cout << "SO\n";
            }
            else if(coordinate_X < coordinate_N && coordinate_Y > coordinate_M){ //Northwestern
                cout << "NO\n";
            }
            else if(coordinate_X > coordinate_N && coordinate_Y > coordinate_M){ //Northeastern
                cout << "NE\n";
            }
            else if(coordinate_X > coordinate_N && coordinate_Y < coordinate_M){ //Southeastern
                cout << "SE\n";
            }
            else{
                cout << "divisa\n";
            }
        }

        cin >> queries;
    }

    return 0;
}