#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

    /* Reverse Pyramid Pattern */ 
// int main(){
//     system("cls"); int rows; int m = 1;
//     printf("Enter number of rows to print: "); scanf("%d",&rows);
//     for(int i = rows; i>=1; i--)
//     {
//         for (int j = i; j>=1; j--)
//         {
//             printf("*");
//         }
//         for (int l = 1; l<=(i-1); l++)
//         {
//             printf("*");
//         } 
//         printf("\n");
//         for (int k = 1; k<=m; k++)
//         {
//             printf(" ");
//         }
//         m = m+1;
//     }
//     return 0;
// }

    /* greatest of 5 numbers using ternary operator */
// int main(){
//     system("cls"); 
//     int a,b,c,d,e;
//     printf("Enter any five numbers: "); 
//     scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//     int greatest = ( a>b && a>c && a>d && a>e) ? a : (( b>c && b>d && b>e) ? b : (( c>d && c>e) ? c : ( d>e ) ? d : e));
//     printf("The greatest of 5 numbers (%d,%d,%d,%d,%d) is : %d", a, b, c, d, e, greatest);
//     return 0;
// }

    /* fibonacci series */
// int main(){
//     system("cls");
//     int first = 0,second = 1;  int n;
//     printf("Enter number of terms to print in fibonacci series after first and second term : "); scanf("%d",&n);
//     printf("%d,%d",first,second);
//     int t=0;
//     while (t<=n)
//     {
//         t = first+second;
//         printf(",%d",t);
//         first = second;
//         second = t;
//     }
//     return 0;
// }

    /* factorial of a number */
// int main(){
//     system("cls");
//     int number,factorial = 1;
//     printf("Enter a number to find it\'s factorial : "); scanf("%d",&number);
//     for ( int i = number; i >=1 ; i--)
//     {
//         factorial = factorial*i;
//     }
//     printf("The factorial if %d is %d",number,factorial);
//     return 0;
// }

    /* swap without third variable */
// int main(){
//     system("cls"); float a,b;//int i = 1;//(%.nf) for n decimal places it can be any no.
//     printf("Enter two numbers to swap : "); printf("\n\ta = "); scanf("%f", &a);
//     printf("\tb = "); scanf("%f", &b);
//     printf("Numbers before swapping : a = %.2f and b = %.2f\n\n",a,b);
//     a = a*b;
//     b = a/b;
//     a = a/b;
//     printf("Numbers after swapping : a = %.2f and b = %.2f\n\n",a,b);
//     return 0;
// }

  /* Leap Year */
// int main(){
//     system("cls"); 
//     // int year;
//     // printf("Enter a year to check whether it is a leap year or not : ");scanf("%d",&year);
//     // if((year%4)==0)
//     //  printf("%d is a leap year.",year);
//     // else
//     //  printf("%d is not a leap year.",year);
//      return 0;
// }

    /* reverse of a number */
// int main(){
//     system("cls");
//     int n; 
//     printf("Enter a number to reverse : "); scanf("%d",&n);
//     int m = n; int r;
//     while (n!=0)
//     {
//         int k = n%10;
//         r = (r*10)+k;
//         n = n/10;
//     }
//     printf("The reverse of %d is %d.",m,r);
//     return 0;
// }

   /* Pyramid Pattern */
// int main(){
//     system("cls"); int rows;
//     printf("Enter number of rows to print: "); scanf("%d",&rows);
//     for(int i = 1; i<=rows; i++)
//     {
//         for (int j = rows; j>=i; j--)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k<=i; k++)
//         {
//             printf("*");
//         }
//         for (int l = 2; l<=i; l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

    /* Half Pyramid of Numbers from left to right */
// int main(){
//     system("cls "); int rows;
//     printf("Enter number of rows: "); scanf("%d",&rows);
//     for (int i = 1; i <=rows ; i++)
//     {
//         for (int j = 1; j <=i ; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");       
//     }
//     return 0;
// }

   /* Half Pyramid of '*' left to right */
// int main(){
//     system("cls "); int rows;
//     printf("Enter number of rows: "); scanf("%d",&rows);
//     for (int i = 1; i<=rows ; i++)
//     {
//         for (int j = 1; j<=i ; j++)
//         {
//             printf("*");
//         }
//     printf("\n");
//     }
//     return 0;
// }

    /* Numeric Pyramid Pattern of C program */
// int main(){
//     system("cls"); int rows;
//     printf("Enter number of rows: "); scanf("%d",&rows);
//     for (int i = 1; i<=rows ; i++)
//     {
//         for (int j = 1; j<=(rows-i) ; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("%d",k);
//         }
//         for (int l = (i-1); l >=1 ; l--)
//         {
//             if (i==1)
//             printf("\n");
//             else
//             printf("%d",l);
//         }
//         // if (i!=1)
//         printf("\n");
//     }
//     return 0;
// }

    /* Print prime numbers from 1 to N */
// int main(){
//     system("cls");
//     int range,count;
//     printf("Enter max range: "); scanf("%d",&range);
//     for (int i = 1; i <=range ; i++)
//     {
//         count = 0;
//         for (int j = 1; j <=i ; j++)
//         {
//             if ((i%j)==0)
//             {
//                 count=count+1;
//             }
//         }
//         if (count==2)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

    //OR
    
// int main(){
//     system("cls");
//     int num,i,count,n;
//     printf("Enter max range: "); scanf("%d",&n);
//     for ( num = 1; num <=n ; num++)
//     {
//         count = 0;
//         for (i = 2; i <=num/2 ; i++)
//         {
//             if (num%i==0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if (count==0 && num!=1)
//         {
//             printf("%d",num);
//         }
//     }
//     return 0;
// }

    /* Sum of prime numbers from 1 to N */
// int main(){
//     system("cls"); 
//     int range,count; int sum = 0;
//     printf("Enter max range : "); scanf("%d",&range);
//     for (int i = 1; i <=range ; i++)
//     {
//         count = 0;
//         for (int j = 1; j <=i ; j++)
//         {
//             if ((i%j)==0)
//             {
//                 count = count+1;
//             }
//         }   
//             if (count==2)
//             {
//                 sum = sum + i;
//             } 
//     } 
//     printf("The sum of all prime numbers from 1 to %d is : %d ",range,sum);
//     return 0;
// }

    /* Half number pattern from right to left */
// int main(){
//     system("cls"); int rows;
//     printf("Enter number of rows : "); scanf("%d",&rows);
//     for (int i = 1; i <=rows ; i++)
//     {
//         for (int j = 1; j <=(rows-i) ; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("%d",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

    /* Half '*' pattern from right to left */
// int main(){
//     system("cls"); int rows;
//     printf("Enter number of rows : "); scanf("%d",&rows);
//     for (int i = 1; i <=rows ; i++)
//     {
//         for (int j = 1; j <=(rows-i) ; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     getch();
//     return 0;
// }

