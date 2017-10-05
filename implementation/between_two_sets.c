#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

# define size 100

int getTotalX(int as, int* a, int bs, int* b)
{
    // Complete this function
    int factors[size];
    int temp;
    int address = 0;
    int result=0;
    
    for(int i =0;i<as;i++)
    {        
        for(int j=0;j<as;j++)
        {
            temp = a[i] * a[j];
            factors[address] = temp;
            address++;
        }            
    }
    if(a[as-1] > 1 )
    {
        factors[address] = a[as - 1];
        address++;   
    }
    if( b[0] > 1 )
    {
        factors[address] = b[0];
        address++;   
    }
    
    
    for(int i=0;i<address;i++)
    {
      for(int j=i+1;j<address;)
      {
          if(factors[i] == factors[j])
          {
              for(int k=j;k<address;k++)
              {
                  factors[k] = factors[k+1];
              }
              address--;
          }
          else
          {
              j++;
          }
      }
    }
    
    for(int i=0;i<address;i++)
    {
        printf("%d\n",factors[i]);
    }
    for(int i=0;i<address;i++)
    {
        int count = 0;
        for(int j=0;j<bs;j++)
        {            
            if(b[j] >= factors[i] && b[j]%factors[i] == 0)
            {
                 count++;
            }
        }
        if(count == bs)
        {
            result++;
        }
    }    
    return result;   
}

int main() 
{
    int n; 
    int m; 
    scanf("%d %d", &n, &m);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++)
    {
       scanf("%d",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for(int b_i = 0; b_i < m; b_i++)
    {
       scanf("%d",&b[b_i]);
    }
    int total = getTotalX(n,a,m,b);
    printf("%d\n", total);
    return 0;
}
