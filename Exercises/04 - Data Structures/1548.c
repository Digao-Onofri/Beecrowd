/*
    Name: Canteen Queue
    Link: https://judge.beecrowd.com/en/problems/view/1548
*/

#include <stdio.h>

int main(){
    int cases, i, j, dont_changes, aux;
    int students, grades[1000], grades_reordered[1000];

    scanf("%d", &cases);

    while(cases--){
        dont_changes = 0;
        scanf("%d", &students);

        for(i = 0; i < students; i++){
            scanf("%d", &grades[i]);
            grades_reordered[i] = grades[i];
        }

        for(i = 0; i < students; i++){
            for(j = i + 1; j < students; j++){
                if(grades_reordered[i] < grades_reordered[j]){
                    aux = grades_reordered[i];
                    grades_reordered[i] = grades_reordered[j];
                    grades_reordered[j] = aux;
                }
            }
        }
        
        for(i = 0; i < students; i++){
            if(grades[i] == grades_reordered[i]){
                dont_changes++;
            }
        }

        printf("%d\n", dont_changes);
    }

    return 0;
}