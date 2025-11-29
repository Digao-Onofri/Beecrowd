/*
    Name: Pascal Library
    Link: https://judge.beecrowd.com/en/problems/view/1267
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int students, dinners;
    int yes, dinner, i;
    bool attended;

    scanf("%d %d", &students, &dinners);

    while(students != 0 && dinners != 0){

        yes = 0;

        while(students--){
            attended = true;
            for(i = 0; i < dinners; i++){
                scanf("%d", &dinner);
                if(!dinner){
                    attended = false;
                }
            }

            if(attended){
                yes++;
            }
        }

        if(yes >= 1){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }

        scanf("%d %d", &students, &dinners);
    }

    return 0;
}