#include <stdio.h>
#include <string.h>

int main()
{
    int x[4][3] = {
        {1, 2, 3},
        {7, 8, 9},
        {4, 5, 6},
        {10, 11, 12}};
    char s[] = "hello";
    char st[] = "world";
    //int result = //
    strcat(s,st);
    // printf("%d",*x);
    // printf("%d", result);
    puts(s);
    // printf("%d, %d, %d", x+2, *(x+1)+3, *(x+2));
    return 0;
}