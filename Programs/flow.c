#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void delay(int sec){
    for (long i = 1; i <=sec*4*6*32768; i++);
}

void flow(char s[]){
    for (int i = 0; i < strlen(s); i++)
    {
        delay(100);
        printf("%c",s[i]);
    }
    
}

int main(){
    system("cls");
    char s[] = "My name is Akkshay.";
    // for (int i = 0; i< strlen(s); i++)
    // {
    //     printf("%c",s[i]);
    // for (long j = 1; j <=150*4*6*32768; j++);
    // } 
    flow(s);
    return 0;
}