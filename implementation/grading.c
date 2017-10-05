#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
# define size 100

int* solve(int s, int* grades, int *result_size){
    // Complete this function
    static int result[size];
    int q[s];
    for(int i=0;i<s;i++)
    {
        if(grades[i] < 38)
        {
            q[i] = grades[i];
            result[i] = q[i];
        }
        else
        {
            q[i] = grades[i]/5;
            q[i] = (q[i] +1)*5;
            if((q[i] - grades[i]) < 3)
            {
                result[i] = q[i];
            }
            else if((q[i] - grades[i]) >= 3)
            {
                result[i] = grades[i];
            }   
        }
    }
    return result;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size = n;
    int* result = solve(n, grades, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
