/*
    Name: Stepladder
    Link: https://judge.beecrowd.com/en/problems/view/2782
    Wrong answer (60%)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size, count, i;
    int arr[1010], dif, consecutive;

    cin >> size;

    for(i = 0; i < size; i++){
        cin >> arr[i];
    }

    count = 1;
    for(i = 1; i < size; i++){
        if(i - 1 == 0){
            dif = arr[i - 1] - arr[i];
            consecutive = 1;
        } else{
            if(dif == arr[i - 1] - arr[i] && abs(arr[i - 1] - arr[i] ) <= 106){
                consecutive++;
            } else{
                dif = arr[i - 1] - arr[i];
                consecutive = 1;
            }

            if(consecutive >= 2){
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}