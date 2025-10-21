/*
    Name: Tribol
    Link: https://judge.beecrowd.com/en/problems/view/1875
*/

#include <stdio.h>

int main(){
    int cases, goals, red;
    int i, blue, green;
    char team1, team2;

    scanf("%d", &cases);

    while(cases--){
        scanf("%d", &goals);
        red = blue = green = 0;
        
        for(i = 0; i < goals; i++){
            scanf(" %c %c", &team1, &team2);
            if(team1 == 'R'){
                if(team2 == 'G'){
                    red += 2;
                }
                else{
                    red++;
                }
            }
            else if(team1 == 'G'){
                if(team2 == 'B'){
                    green += 2;
                }
                else{
                    green++;
                }
            }
            else{
                if(team2 == 'R'){
                    blue += 2;
                }
                else{
                    blue++;
                }
            }
        }
            
        

        if(red == green && green == blue){
            printf("trempate\n");
        }
        else if((red == green || green == blue || blue == red) && goals > 1){
            printf("empate\n");
        }
        else{
            if(red > green && red > blue){
                printf("red\n");
            }
            else if(green > red && green > blue){
                printf("green\n");
            }
            else{
                printf("blue\n");
            }
        }

    }



    return 0;
}