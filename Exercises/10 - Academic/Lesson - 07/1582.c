/*
    Name: The Pythagorean Theorem
    Link: https://judge.beecrowd.com/en/problems/view/1582
    Wrong answer (5%)
*/

#include <stdio.h>

int main(){
    int catheti1, catheti2, hypotenuse;
    int number1, number2, number3;

    while(scanf("%d %d %d", &number1, &number2, &number3) != EOF){

        if(number1 > number2 && number1 > number3){
            hypotenuse = number1;
            catheti1 = number2;
            catheti2 = number3;
        }
        else if(number2 > number1 && number2 > number3){
            hypotenuse = number2;
            catheti1 = number1;
            catheti2 = number3;
        }
        else{
            hypotenuse = number3;
            catheti1 = number1;
            catheti2 = number2;
        }

        if(hypotenuse * hypotenuse == catheti1 * catheti1 + catheti2 * catheti2){
            if((hypotenuse / 2) * (hypotenuse / 2) == (catheti1 / 2) * (catheti1 / 2) + (catheti2 / 2) * (catheti2 / 2)){
                printf("tripla pitagorica\n");
            }
            else{
                printf("tripla pitagorica primitiva\n");
            }
        }   
        else{
            printf("tripla\n");
        }
    }

    return 0;
}