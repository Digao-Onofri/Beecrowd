/*
    Name: Head or Tail
    Link: https://judge.beecrowd.com/en/problems/view/1329
*/

#include <stdio.h>

int main(){
    int cases, number;
    int mary, john;

    scanf("%d", &cases);

    while(cases != 0){

        mary = john = 0;
        while(cases--){
            scanf("%d", &number);
            if(number == 0){
                mary++;
            }
            else{
                john++;
            }
        }

        printf("Mary won %d times and John won %d times\n", mary, john);
        scanf("%d", &cases);       
    }

    return 0;
}