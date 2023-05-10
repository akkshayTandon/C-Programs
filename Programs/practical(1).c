// #include<stdio.h>
int main(){
    int number;
    int count = 0;
    printf("Enter a number to check if it is a prime number or not : ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        if(( number % i ) == 0)
        {
            count = count + 1;
        }
    }
    if ( count == 2 )
    {
        printf("%d is a prime number.",number);
    }
    else{
        printf("%d is not  a prime number.",number);
    }
    return 0;
}

























// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter any three numbers: "); 
//     scanf("%d %d %d",&a,&b,&c);
//     int * num1 = &a;
//     int * num2 = &b;
//     int * num3 = &c;
//     int greatest = ( *num1>*num2 && *num1>*num3 ) ? *num1 : (( *num2>*num3 ? *num2 : *num3));
//     printf("The greatest of 3 numbers (%d,%d,%d) is : %d", *num1, *num2, *num3, greatest);
//     return 0;
// }