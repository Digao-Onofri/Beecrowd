/*
    Name: Jogo do Operador
    Link: https://judge.beecrowd.com/en/problems/view/2493
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int left[55], right[55], result[55];
    int i, size, pos, count;
    map<string, bool> losers;
    map<string, bool>::iterator it;
    string name;
    char op;
    bool first;

    while(cin >> size){

        for(i = 1; i <= size; i++){
            scanf("%d %d=%d", &left[i], &right[i], &result[i]);
        }

        losers.clear();
        count = 0;
        for(i = 1; i <= size; i++){
            cin >> name >> pos >> op;
            if(op == '+'){
                if(left[pos] + right[pos] != result[pos]){
                    losers[name] = true;
                    count++;
                }
            } else if(op == '-'){
                if(left[pos] - right[pos] != result[pos]){
                    losers[name] = true;
                    count++;
                }
            } else if(op == '*'){
                if(left[pos] * right[pos] != result[pos]){
                    losers[name] = true;
                    count++;
                }
            } else{
                if(left[pos] + right[pos] == result[pos] || left[pos] - right[pos] == result[pos] || left[pos] * right[pos] == result[pos]){
                    losers[name] = true;
                    count++;
                }
            }
        }

        if(count == size){
            cout << "None Shall Pass!" << endl;
        } else if(count == 0){
            cout << "You Shall All Pass!" << endl;
        } else {
            first = true;
            for(it = losers.begin(); it != losers.end(); it++){
                if(first){
                    cout << it->first;
                    first = false;
                } else{
                    cout << " " << it->first;
                }
            }
            cout << endl;
        }
    }

    return 0;
}