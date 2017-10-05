#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
# define size 100

char* solve(int year){
    // Complete this function
    static char result[size];
    char month[5] = "09";
    int day = 256;           
    if(year < 1919)
    {
        if(year%4 == 0)
        {
            day = day - 215 - 29;
            sprintf(result,"%d.%s.%d",day,month,year);
        }
        else if(year == 1918)
        {
            day = day - 215 - 28 + 13;
            sprintf(result,"%d.%s.%d",day,month,year); 
        }
        else 
        {
            day = day - 215 - 28;
            sprintf(result,"%d.%s.%d",day,month,year);
        }
    }
    else if(year%100 == 0)
    {
        if(year%400 == 0)
        {
            day = day - 215 - 29;
            sprintf(result,"%d.%s.%d",day,month,year);
        }
        else
        {
            day = day - 215 - 28;
            sprintf(result,"%d.%s.%d",day,month,year);
        }
    }
    else 
    {
        if(year%4 == 0)
        {
            day = day - 215 - 29;
            sprintf(result,"%d.%s.%d",day,month,year);
        }
        else
        {
            day = day - 215 - 28;
            sprintf(result,"%d.%s.%d",day,month,year);
        }
    }
    //printf("%s\n",result);
    return result;
}

int main() {
    int year; 
    scanf("%d", &year);
    int result_size;
    char* result = solve(year);
    printf("%s\n", result);
    return 0;
}
