/*
    Name: Array Fill IV
    Link: https://judge.beecrowd.com/en/problems/view/1179
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int odd[5], even[5];
    int i, j, k, value;

    j = k = 0;
    for(i = 0; i < 15; i++){
        cin >> value;
        if(value & 0x1){
            odd[j] = value;
            j++;
            if(j == 5){
                for(j = 0; j < 5; j++){
                    cout << "impar[" << j << "] = " << odd[j] << endl;
                }
                j = 0;
            }
        } else{
            even[k] = value;
            k++;
            if(k == 5){
                for(k = 0; k < 5; k++){
                    cout << "par[" << k << "] = " << even[k] << endl;
                }
                k = 0;
            }
        }
    }

    for(i = 0; i < j; i++){
        cout << "impar[" << i << "] = " << odd[i] << endl;
    }

    for(i = 0; i < k; i++){
         cout << "par[" << i << "] = " << even[i] << endl;
    }

    return 0;
}