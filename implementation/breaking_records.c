#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* getRecord(int s, int* a, int *result_size){
    // Complete this function
    static int* result;
    *result_size = 2;
    
    int max_no = 0;
    int max = a[0];
    int min_no = 0;
    int min = a[0];
    
    for(int i=1;i<s;i++)
    {        
        if(a[i] > max)
        {
            max_no++;
        }
        else if( a[i] < min)
        {
            min_no++;
        }
    }
    printf("%d %d\n",max_no,min_no);
    result[0] = max_no;
    result[1] = min_no;
    return result;
}

int main() {
    int n; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int result_size;
    int* result = getRecord(n, s, &result_size);
    for(int i = 0; i < result_size; i++) {
        if (i) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    puts("");
    return 0;
}
