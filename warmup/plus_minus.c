#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

float* func(int size, int* p)
{
    static float array[3];
    int a=0;
    int b=0;
    int c=0;
    for(int i =0; i<size; i++)
    {
        if(*(p+i) > 0)
        {
            a++;
        }
        else if(*(p+i)<0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    array[0] = a/(float)size;
    array[1] = b/(float)size;
    array[2] = c/(float)size;

    return array;
}

int main(){
    int n;
    float* c;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    c = func(n,arr);
    for (int i=0;i<3;i++)
    {
        printf("%f\n",*(c+i));
    }
    return 0;
}
