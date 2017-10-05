#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void sum(unsigned long int a[5])
{
    int n=5;
    unsigned long int max=0;
    unsigned long int min;
    unsigned long int result[5];
    int i=0;
    unsigned long int temp;
    while(i<n)
    {
        temp = a[i];
        a[i] = 0;
        result[i] = 0;
        for(int j=0;j<n;j++)
        {
            result[i]+= a[j];
        }
        a[i] = temp;
        i++;
    }
    
    min = result[0];
    for(int k=0;k<n;k++)
    {
       if(result[k]>max)
       {
           max = result[k];
       }
       if(result[k]<min)
       {
           min = result[k];
       }
    }
    printf("%lu %lu",min,max);
}

int main() {
    unsigned long int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lu",&arr[arr_i]);
    }
    sum(arr);
    return 0;
}
