/*
    Name: TDA Rational
    Link: https://judge.beecrowd.com/en/problems/view/1022
*/

#include <stdio.h>

void simplification(int *simp_deno, int *simp_nume){

    if(*simp_deno == *simp_nume){
        *simp_deno = 1;
        *simp_nume = 1;
        return;
    }
    
    while(*simp_deno % 2 == 0 && *simp_nume % 2 == 0|| *simp_deno % 3 == 0 && *simp_nume % 3 == 0){
        if(*simp_deno % 2 == 0 && *simp_nume % 2 == 0){
            *simp_deno = *simp_deno / 2;
            *simp_nume = *simp_nume / 2;
        }
        else{
            *simp_deno = *simp_deno / 3;
            *simp_nume = *simp_nume / 3;
        }
    }

}

int main(){
    int cases, nume1, nume2;
    int deno1, deno2;
    int ans_deno, ans_nume;
    int simp_deno, simp_nume;
    char opera;

    while(scanf("%d", &cases) != EOF){
        while(cases--){
            scanf("%d / %d %c %d / %d", &nume1, &deno1, &opera, &nume2, &deno2);

            if(opera == '+'){
                ans_nume = nume1 * deno2 + nume2 * deno1;
                ans_deno = deno1 * deno2;
                simp_deno = ans_deno;
                simp_nume = ans_nume;
                simplification(&simp_deno, &simp_nume);
                printf("%d/%d = %d/%d\n", ans_nume, ans_deno, simp_nume, simp_deno);
            }
            else if(opera == '-'){
                ans_nume = nume1 * deno2 - nume2 * deno1;
                ans_deno = deno1 * deno2;
                simp_deno = ans_deno;
                simp_nume = ans_nume;
                simplification(&simp_deno, &simp_nume);
                printf("%d/%d = %d/%d\n", ans_nume, ans_deno, simp_nume, simp_deno);
            } 
            else if(opera == '*'){
                ans_nume = nume1 * nume2;
                ans_deno = deno1 * deno2;
                simp_deno = ans_deno;
                simp_nume = ans_nume;
                simplification(&simp_deno, &simp_nume);
                printf("%d/%d = %d/%d\n", ans_nume, ans_deno, simp_nume, simp_deno);
            }
            else{
                ans_nume = nume1 * deno2;
                ans_deno = nume2 * deno1;
                simp_deno = ans_deno;
                simp_nume = ans_nume;
                simplification(&simp_deno, &simp_nume);
                printf("%d/%d = %d/%d\n", ans_nume, ans_deno, simp_nume, simp_deno);
            }
        }
    }

    return 0;
}