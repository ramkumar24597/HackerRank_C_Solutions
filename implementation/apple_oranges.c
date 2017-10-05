#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int na = 0;
    int no = 0;
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    for(int i=0;i<m;i++)
    {
        int status;
        status = a + apple[i];
        if(status >= s && status <= t)
        {
            na++;
        }
    }
    for(int i=0;i<n;i++)
    {
        int status;
        status = b + orange[i];
        if(status >= s && status <= t)
        {
            no++;
        }
    }
    printf("%d\n",na);
    printf("%d",no);
    return 0;
}
