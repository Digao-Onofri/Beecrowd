/*
    Name: Formula 1
    Link: https://judge.beecrowd.com/en/problems/view/1125
    Calculation error
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> pilots, scoring;
    map<int, int>::iterator it, jt;
    vector<int> grand_prix[102];
    int n_grand_prix, n_pilots;
    int n_scoring, position;
    int points, i , j, bigger;
    int last_finished;
    bool first;

    while(scanf("%d %d", &n_grand_prix, &n_pilots)){

        if(n_grand_prix == 0 && n_pilots == 0){
            break;
        }

        for(i = 1; i <= n_grand_prix; i++){
            for(j = 1; j <= n_pilots; j++){
                scanf("%d", &position);
                grand_prix[i].push_back(position);
            }
        }

        scanf("%d", &n_scoring);
        while(n_scoring--){
            i = 1;
            scanf("%d", &last_finished);
            while(i <= last_finished){
                scanf("%d", &points);
                scoring[i] = points;
                i++;
            }

            for(i = 1; i <= n_grand_prix; i++){
                for(j = 1; j <= n_pilots; j++){
                    if(j > last_finished){
                        pilots[grand_prix[i][j]] = 0;
                    }
                    else{
                        pilots[grand_prix[i][j]] += scoring[j];
                    }
                }
            }

            bigger = pilots[1];
            for(it = pilots.begin(); it != pilots.end(); it++){
                if(bigger < it->second){
                    bigger = it->second;
                }
            }
            
            first = true;
            for(it = pilots.begin(); it != pilots.end(); it++){
                if(it->second == bigger){
                    if(first){
                        first = false;
                        cout << it->first + 1;
                    }
                    else{
                        cout << ' ' << it->first + 1;
                    }
                }
                it->second = 0;
            }
            cout << endl;
        }

        pilots.clear();
        scoring.clear();        
        for(j = 1; j <= n_pilots; j++){
            grand_prix[i].clear();
        }
    }

    return 0;
}