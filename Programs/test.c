// #include<stdio.h>
// int main(){
//     printf("\nEnter a character: ");
//     getchar();
//     return 0;
// }

#include <stdio.h>
#include <windows.h>
#include <inttypes.h>

void main() {
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

  SetConsoleTextAttribute(hConsole,
    FOREGROUND_RED);
  printf("red text\n");

  SetConsoleTextAttribute(hConsole,
     BACKGROUND_RED);
  printf("yellow on blue\n");
}