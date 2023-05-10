#include <stdio.h>
#include <conio.h>
// #include <stdlib.h>
int main(){
    // system("cls");

    FILE *fp;
    fp = fopen( "files.c", "r" );
    if (fp == NULL)
    {
        printf("file does not exist");
    }

    char c = fgetc(fp);
    while(c != EOF)
    {
         c = fgetc(fp);
        printf("%c ",c);
    }

    fclose(fp);
    printf("\n DONE");
   
   getch();
    return 0;
}