#include<stdio.h>
void printFibonacci(){
    int first = 0,second = 1;  int n;
    printf("Enter number of terms to print in fibonacci series after first and second term : "); scanf("%d",&n);
    printf("%d,%d",first,second);
    int t=0;
    while (t<=n)
    {
        t = first+second;
        printf(",%d",t);
        first = second;
        second = t;
    }
}

int fibonacci(int n){
    if( n == 0 )
     return 0;
    else if( n == 1 )
     return 1;
    else 
    return (fibonacci(n-1) + fibonacci(n-2));
}

int main(){
    // printFibonacci();
    int first = 0,second = 1; int fibo;
        printf("Enter the number of terms till you want to print the fibonacci series : "); scanf("%d",&fibo);
        // printf("%d,%d",first,second);
        for (int i = 0; i < fibo; i++)
        {
            printf("%d, ",fibonacci(i));
        }
        
    return 0;
}
