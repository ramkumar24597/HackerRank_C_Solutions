#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {

    static char result[50];

    if(s[8] == 'P')
    {
        int a;
        int b;
        a = s[1] - 48 + 2;
        if(a>9)
        {

         b = s[0] -48 +2;
         a = a-10;
        }
        else
        {
         b = s[0] -48 +1;
        }
        sprintf(result,"%d%d%s",b,a,s+2);
        result[8] = '\0';
        if(result[0] == '2' && result[1] == '4')
        {
         result[0] = '1';
         result[1] = '2';
        }
        return result;
    }
    else
    {
       sprintf(result,"%s",s);
       result[8] = '\0';
       if(result[0] == '1' && result[1] == '2')
        {
         result[0] = '0';
         result[1] = '0';
        }
       result[8] = '\0';
       return result;
    }
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
        int result_size;
    char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}
