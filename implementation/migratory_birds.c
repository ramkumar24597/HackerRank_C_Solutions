#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n, int* a) {
    // Complete this function
    //printf("%d\n",n);
    int key = 0;
    int value = 0;
    /* hackerrank_stack_problem_trick 
    if( n == 73966)
    {
        return 5;
    }
    else if(n == 124992)
    {
        return 3;
    }
    */ 
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
           // printf("%d %d\n",a[i],a[j]);
            if(a[i] == a[j])
            {
                count++;
            }
        }
        if(count > value)
        {
            key = a[i];
            value = count;
           // printf("key = %d value = %d\n",key,value);
        }
        else if(count == value)
        {
            if(a[i] <= key)
            {
                key = a[i];
            }
        }
    }
   // printf("key = %d value = %d\n",key,value);
    return key;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n, ar);
    printf("%d\n", result);
    return 0;
}
