#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    char* a = "YES";
    char* b = "NO";
    if(x1 > x2 && v1 > v2 || x2 > x1 && v2 > v1)
    {
        return b;
    }
    else
    {
        if(x1 > x2)
        {
            while(true)
            {
                x1 += v1;
                x2 += v2;
                if(x1 == x2)
                {
                    return a;
                }
                else if(x2 > x1)
                {
                    return b;
                }
            }
        }
        else
        {
           while(true)
            {
                x1 += v1;
                x2 += v2;
                if(x1 == x2)
                {
                    return a;
                }
                else if(x1 > x2)
                {
                    return b;
                }
            } 
        }
    }
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
