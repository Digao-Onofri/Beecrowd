/*
    Name: Iu-Di-Oh
    Link: https://judge.beecrowd.com/en/problems/view/2542
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int mcards[101][101];
    long long int lcards[101][101];
    int atributes;
    int marcos, leonardo;
    int mchoose, lchoose;
    int chosen, i, j;

    while(cin >> atributes){
        cin >> marcos >> leonardo;

        for(i = 1; i <= marcos; i++){
            for(j = 1; j <= atributes; j++){
                cin >> mcards[i][j];
            }
        }
        
        for(i = 1; i <= leonardo; i++){
            for(j = 1; j <= atributes; j++){
                cin >> lcards[i][j];
            }
        }

        cin >> mchoose >> lchoose;
        cin >> chosen;

        if(mcards[mchoose][chosen] > lcards[lchoose][chosen]){
            cout << "Marcos" << endl;
        } else if(mcards[mchoose][chosen] < lcards[lchoose][chosen]){
            cout << "Leonardo" << endl;
        } else{
            cout << "Empate" << endl;
        }
    }

    return 0;
}