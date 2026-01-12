/*
    Name: Grenais
    Link: https://judge.beecrowd.com/en/problems/view/1131
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int inter = 0, gremio = 0, draw = 0, count = 0;
    int score1, score2, grenal;

    while(true){
        cin >> score1 >> score2;
        if(score1 == score2){
            draw++;
        } else if(score1 > score2){
            inter++;
        } else{
            gremio++;
        }
        count++;
        
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> grenal;
        if(grenal == 2){
            break;
        }
    }

    cout << count << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << draw << endl;
    if(inter > gremio){
        cout << "Inter venceu mais" << endl;
    } else if(inter < gremio){
        cout << "Gremio venceu mais" << endl;
    } else{
        cout << "Não houve vencedor" << endl;
    }

    return 0;
}