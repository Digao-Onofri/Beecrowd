/*
    Name: Preparing Production
    Link: https://judge.beecrowd.com/en/problems/view/2775
    Wrong answer (65%)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> aux;
    vector<pair<int, int>> arr;
    int amount, sum, pos, value, i, j;


    while(cin >> amount){
        
        sum = 0;
        arr.clear();
        for(i = 0; i < amount; i++){
            cin >> pos;
            arr.push_back({pos, 0});
        }

        for(i = 0; i < amount; i++){
            cin >> value;
            arr[i].second = value;
        }


        for(i = 0; i < arr.size(); i++){
            for(j = i + 1; j < arr.size(); j++){
                if(arr[i].first > arr[j].first){
                    sum += arr[i].second;
                    sum += arr[j].second;
                    aux = arr[i];
                    arr[i] = arr[j];
                    arr[j] = aux;
                }
            }  
        }

        cout << sum << endl;
    }

    return 0;
}