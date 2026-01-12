/*
    Name: Drought
    Link: https://judge.beecrowd.com/en/problems/view/1023
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int cases, i, person, consumption;
    int medium_consumption[201], city;
    int total_consumption, total_person;
    double final_consumption;
    bool first;

    city = 0;
    while(scanf("%d", &cases)){
        if(cases == 0){
            break;
        }
        city++;        
        if(city != 1){
            printf("\n");
        }

        memset(medium_consumption, 0, sizeof(medium_consumption));

        total_consumption =  total_person = 0;
        while(cases--){
            scanf("%d %d", &person, &consumption);

            total_consumption += consumption;
            total_person += person;
            medium_consumption[consumption / person] += person;
        }

        printf("Cidade# %d:\n", city);
        first = true; 
        for(i = 0; i < 201; i++){
            if(medium_consumption[i] > 0){
                if(first){
                    first = false;
                }
                else{
                    printf(" ");
                }
                printf("%d-%d", medium_consumption[i], i);
            }
        }

        //Truncate without rounding
        final_consumption = (int)((total_consumption * 100.0) / total_person) / 100.0;
        printf("\nConsumo medio: %.2lf m3.\n", final_consumption);
    }

    return 0;
}