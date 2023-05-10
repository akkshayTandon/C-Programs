#include<stdio.h>
#include<stdlib.h>

    /* factorial using recursion */
int factorial(int n){
    if(( n == 0 ) || ( n == 1 ))
     return 1;
    else
    return n*factorial(n-1);
}

    /* fibonacci series using recursion */
int fibonacci(int n){
    if( n == 0 )
     return 0;
    else if( n == 1 )
     return 1;
    else 
    return (fibonacci(n-1) + fibonacci(n-2));
}

    /* GCD/HCF using recursion*/ /* Approach Used : Euclidean Algorithm */
int findGCD(int a, int b){
    int dividend,divisor,quotient,remainder;
    if( b == 0 )
      return a;
    else if ( a > b)
    {
        dividend = a;
        divisor = b;
        quotient = ( dividend / divisor );
        remainder = ( dividend % divisor );
        return findGCD( divisor , remainder );
    }
    else if( b > a )
    {
        dividend = b;
        divisor = a;
        quotient = ( dividend / divisor );
        remainder = ( dividend % divisor ); 
        return findGCD( divisor , remainder );
    }
    else
    {
        printf("\nThe values are equal!!.");
    }
}

    /* Tower of Hanoi */
void towerOfHanoi(int n,char source,char helper,char destination){
    if(n==0)
     return; 
    //  printf("\nMove source to destination.");
    towerOfHanoi(n-1,source,destination,helper);
    printf("\n Move disc %d from rod %c to rod %c",n,source,destination);
    towerOfHanoi(n-1,helper,source,destination);
}
    /* Main Menu */
int main(){
    system("cls");
    int choice;
    printf("\n\tRECURSION\n 1.Factorial\n 2.Fibonacci \n 3.GCD/HCF \n 4.Tower Of Hanoi\n\tEnter your choice(1-3) : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
         int fact;
         printf("Enter a number to print its factorial: "); scanf("%d",&fact);
         printf("The factorial of %d is %d",fact,factorial(fact));
        break;
    case 2:
        int first = 0,second = 1; int fibo;
        printf("Enter the number of terms till you want to print the fibonacci series : "); scanf("%d",&fibo);
        for (int i = 0; i < fibo; i++)
        {
            printf("%d, ",fibonacci(i));
        }
        break;
    case 3:
         int x,y;
         printf("Enter two number two find their GCD/HCF: ");
         printf("\nFirst Number: "); scanf("%d",&x);
         printf("\nSecond Number: "); scanf("%d",&y);
          int hcf =  findGCD(x,y);
          printf("\n\nThe GCD/HCF of %d and %d is : %d",x,y,hcf);
          break;
    case 4: 
        int discs;
        printf("Enter the number of discs: "); scanf("%d",&discs);
        towerOfHanoi(discs,'A','B','C');
        break;
    default:
        printf("\n\n\tINVALID CHOICE!!\n");
    }
    return 0;
}