#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int s_size, int* a, int d, int m){
    // Complete this function
    int result = 0;
    for(int i=0;i<n-m+1;i++)
    {
        int temp =0;
        for(int j=i;j<i+m;j++)
        {
           temp+=a[j]; 
        }
        //printf("temp = %d\n",temp);
        if(temp == d)
        {
            result++;
        }   
        //printf("result = %d\n",result);
     }
    return result;
}

int main() {
    int n; 
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    int result = solve(n, n, s, d, m);
    printf("%d\n", result);
    return 0;
}
