#include<stdio.h>
typedef struct Employee 
{
    char* name;
    int empno;
}Employee;

int main(){
    Employee e1; 
    printf("Enter a name: ");
    // scanf("%s",&e1.name); printf("%s",&e1.name); //scanf does not reads after space
    // gets(e1.name);
    // printf("%s",e1.name); //or puts(e1.name); //with gets();
    return 0;
}