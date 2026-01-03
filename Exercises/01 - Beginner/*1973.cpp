/*
    Name: The Motion Picture
    Link: https://judge.beecrowd.com/en/problems/view/1963
    incomplete solution
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int farms, i, values[1000010], visited[1000010], stoled;
    long long int sum;

    memset(visited, 0, sizeof(visited));

    cin >> farms;

    sum = 0;
    for(i = 0; i < farms; i++){
        cin >> values[i];
        sum += values[i];
    }

    cout << sum << endl;
    i = stoled = 0;
    while(true){
        if(i < 0 || i >= farms){
            break;
        }

        if(visited[i] == 1){
            sum--;
            values[i]--;
        } else{
            if(values[i] > 0){
                visited[i] = 1;
                stoled++;
                sum--;
                values[i]--;
            }
        }

        if((values[i] + 1) & 0x1){
            i++;
        } else{
            i--;
        }

        cout << i << endl;
    }

    cout << stoled << " " << sum << endl;

    return 0;
}