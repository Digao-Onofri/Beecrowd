/*
    Name: Primary Arithmetic
    Link: https://judge.beecrowd.com/en/problems/view/1212
*/

#include <stdio.h>

int main(){
    unsigned int intA, intB;
    int carry, sum, last_carry;

    while(scanf("%d %d", &intA, &intB)){
        if(!intA && !intB){
            break;
        }

        carry = 0;
        last_carry = 0;

        while(intA && intB){
            sum = intA % 10 + intB % 10 + last_carry;
            if (sum > 9){
                last_carry = 1;
                carry++;
            }
            else{
                last_carry = 0;
            }
            intA = intA / 10;
            intB = intB / 10;
        }

        if(intA > intB){

            while(intA){
                sum = intA % 10 + last_carry;
                if(sum > 9){
                    carry++;
                    last_carry = 1;
                }
                else{
                    last_carry = 0;
                }
                intA = intA / 10;
            }
        }
        else{
            while(intB){
                sum = intB % 10 + last_carry;
                if(sum > 9){
                    carry++;
                    last_carry = 1;
                }
                else{
                    last_carry = 0;
                }
                intB = intB / 10;
            }
        }

        if(carry > 1){
            printf("%d carry operations.\n", carry);
        }
        else if(carry == 1){
            printf("%d carry operation.\n", carry);
        }
        else{
            printf("No carry operation.\n");
        }
    }

    return 0;
}