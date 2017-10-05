#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        int q = n-i;
        //printf("%d",q);
        for(int j=0;j<q;j++)
        {
            printf(" ");
        }
        int r = n-q;
        //printf("%d",r);
        for(int j=0;j<r;j++)
        {
            printf("#");
        }

        printf("\n");
        i++;
    }
    return 0;
}
