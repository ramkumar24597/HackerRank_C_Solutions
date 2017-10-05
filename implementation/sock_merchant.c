#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
# define size 100 
int sockMerchant(int n, int* a) {
    // Complete this function
    int r[size];
    int result = 0;
    int r_size = n; 
    for(int i=0;i<r_size;i++)
    {
        r[i] = a[i];
        //printf("%d ",r[i]);
    }
    //printf("\n");
    for(int i=0;i<r_size;i++)
    {
        for(int j=i+1;j<r_size;)
        {
            if(r[i] == r[j])
            {
                for(int k=j;k<n;k++)
                {
                    r[k] = r[k+1];
                }
                r_size--;
            }
            else
            {
                j++;
            }
        }
    }
    for(int i=0;i<r_size;i++)
    {
        //printf("%d ",r[i]);
    }
    //printf("\n");
    for(int i=0;i<r_size;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(r[i] == a[j])
            {
                count++;
            }
        }
        if(count >= 2)
        {
            count /= 2;
            result += count;
            //printf("%d %d %d\n",r[i],count,result);
        }
    }
    return result;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    return 0;
}
