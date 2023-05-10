#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>
//#include<process.h>
//#include<math.h>

//program 9
// int main(){
//     system("cls");
//     float i;
//     printf("Enter height in inches : ");
//     scanf("%f",&i);
//     printf("The height in feet is : %f",(i/12));
//     return 0;
// }

// program_8
// int main(){
//     system("cls"); float angle1,angle2;
//     printf("Enter two angles of a triangle in degree : \n"); 
//     printf("angle1 = ");scanf("%f",&angle1); printf("\nangle2 = ");scanf("%f",&angle2);
//     printf("\n\nThe third angle of the triangle is : %.2f degrees", (180-(angle1+angle2))); 
//     return 0;
// }

//program_7
// int main(){
//     system("cls");
//     char choice;
//     do
//     {
//        // system("cls");
//     printf("1.convert temperature from celsius to farhenheit\n2.convert temperature from farhenheit to celsius\n3.Exit\n\n\tEnter your choice : ");
//     scanf("%c",&choice);
//     switch (choice)
//     {
//     case '1': float celsius;
//               printf("\n\nEnter temperature in celsius : "); scanf("%f",&celsius);
//               printf("Temperature in fahrenheit is : %.2f degree fahrenheit\n\n",(((9*celsius)+160)/5)); 
//               break;
//     case '2': float fahrenheit;
//               printf("\n\nEnter temperature in fahrenheit : "); scanf("%f",&fahrenheit);
//               printf("Temperature in celsius is : %.2f degree celsisus\n\n",(5.0/9)*(fahrenheit-32)) ;    
//               break;
//     case '3' : break;
//     default: printf("\n\n\tInvalid Choice!!\n\n"); //break;
//     }
//    // getch();
//     } while (choice!='3');
//     return 0;
// }

// program_6
// int main(){
//     system("cls"); double side1,side2,side3;
//     printf("Enter three sides of a traingle : \nside1 = "); scanf("%lf",&side1);
//     printf("\nside2 = "); scanf("%lf",&side2); printf("\nside3 = ");scanf("%lf",&side3);
//     double s = ((side1+side2+side3)/2); double area = sqrt((s)*(s-side1)*(s-side2)*(s-side3));
//     printf("The area of triangle is : %.2lf",area);
//     return 0;
// }
 
// program_5
// int main(){
//     system("cls"); 
//     float pi = 3.14,radius;
//     printf("Enter radius of circle : \nradius = ");scanf("%f",&radius);
//     printf("The diameter of circle is %.2f\n",(radius*2));
//     printf("The area of circle is %.2f\n",(pi*radius*radius));
//     printf("The circumference of circle is %.2f\n",(2*pi*radius));
//     return 0;
// }

// program_4
// int main(){
//     system("cls");
//     float length,breadth;
//     printf("Enter length and breadth of rectangle : \n"); 
//     printf("length = ");scanf("%f",&length);  printf("breadth = ");scanf("%f",&breadth);
//     printf("\nThe area of rectangle is %.2f\n",(length*breadth));
//     printf("The perimeter of rectangle is %.2f",(2*(length+breadth)));
//     return 0;
// }

// program_3
// int main(){
//     system("cls"); int a,b;
//     printf("Enter two numbers : "); scanf("%d %d",&a,&b);
//     printf("The sum of %d and %d is : %d\n",a,b,(a+b));
//     printf("The difference of %d and %d is : %d\n",a,b,(a-b));
//     printf("The multiplication of %d and %d is : %d\n",a,b,(a*b));
//     printf("The division of %d and %d is : %d\n",a,b,(a/b));
//     printf("The remainder/modulus of %d and %d is : %d\n",a,b,(a%b));
//     return 0;
// }

// program_2
// int main(){
//     system("cls");
//     int a,b;
//     printf("Enter two numbers : "); scanf("%d  %d",&a,&b);
//     printf("The sum of %d and %d is : %d",a,b,(a+b));
//     return 0;
// }

// program_1
// int main(){
//     system("cls");
//     printf("Hello World");
//     return 0;
// }
   
   /* random programs */
// while(i<=10){
    //     printf("%d\n", i);
    //     i = i+1;
    // }

// void main(){
//     int x = 10;
//     for( ; ; )
//     {
//         x++;
//         if(x > 15)
//          break;
//         printf("\n%d",x);
//     }
// }

// void main(){
//     int y, x = 6;
//     y = ++x++;
//     x = ++y++;
//     printf("x = %d \t y = %d", y, x);
// }

    /* insert an element at a given position in an array */
// int main(){
//     int length, position, insert_element;
//     printf("Enter length of array: "); scanf("%d",&length);
//     int array[length];
//     printf("Enter %d elements of array: \n");
//     for (int i = 0; i < length; i++)
//     {
//         scanf("%d",&array[i]);
//     }
//     printf("Enter the element to be inserted: "); scanf("%d",&insert_element);
//     printf("Enter the position at which the element is to be inserted(1 - %d): ",length); scanf("%d",&position);
//     printf("Original Array: \n");
//     for (int i = 0; i < length; i++)
//     {
//         printf("%d ",array[i]);
//     }
//     position = position - 1;
//     if ( position<=length && position>=0)
//     {
//         for (int i = length; i > position; i--)
//         {
//             array[i] = array[i-1];   // automatically creates array[5],i.e.,5th index or a new block for 6th element.
//         }
//         array[position] = insert_element;
//     printf("\nUpdated Array: \n");
//     for (int i = 0; i <=length; i++)
//     {
//         printf("%d ",array[i]);
//     }   
//     }
//     else
//      printf("\nInvalid position");
//     return 0;
// }

    /* addition of two 2D arrays */
// int main(){
//     int r1,c1,r2,c2;
//     printf("Enter the number of rows of first matrix: "); scanf("%d",&r1);
//     printf("Enter the number of columns of first matrix: "); scanf("%d",&c1);
//     int matrix1[r1][c1]; 
//     printf("Enter %d elements of matrix 1 : \n", (r1*c1) );
//     for (int i = 0; i < r1; i++)
//       {
//         for (int j = 0; j < c1; j++)
//          {
//            scanf("%d", &matrix1[i][j] );  
//          } 
//        }
//     printf("Enter the number of rows of second matrix: "); scanf("%d",&r2);
//     printf("Enter the number of columns of second matrix: "); scanf("%d",&c2);
//     int matrix2[r2][c2];
//     printf("Enter %d elements of matrix 2 : \n", (r2*c2) );
//     for (int i = 0; i < r2; i++)
//       {
//         for (int j = 0; j < c2; j++)
//          {
//            scanf("%d", &matrix2[i][j] );  
//          } 
//        }
//     if( (r1*c1) != (r2*c2) )
//       printf("\nThe given matrices are not equal.");
//     else
//     {
//         int sum[r1][c1];
//       for (int i = 0; i < r1; i++)
//       {
//         for (int j = 0; j < c1; j++)
//          {
//            sum[i][j] = ( matrix1[i][j] + matrix2[i][j] );  
//          } 
//        }
//        printf("The sum is : \n");
//     for (int i = 0; i < r1; i++)
//       {
//         for (int j = 0; j < c1; j++)
//          {
//            printf("%d ", sum[i][j]);
//          } 
//          printf("\n");
//        }
//     }
//     return 0;
// }

    /* Gross Salary */
// int main(){
//     float basic_salary;
//     printf("Enter the basic salary of the employee : ");
//     scanf("%f",&basic_salary);
//     float HRA = (( 40 * basic_salary ) / 100 );
//     float DA = (( 10 * basic_salary ) / 100 );
//     float gross_salary = ( basic_salary + HRA + DA );
//     printf("The gross salary of the employee is : %f", gross_salary);
//     return 0; 
// }

    /* random program */
// int main(){
//     int x, min, max;
//     scanf("\n%d %d",&max,&x);
//     int result = (x > max) ? (max = x) : (min = x);
//     printf("\n%d",x);
//     return 0;
// }

    /* BINARY SEARCH */
// int main(){
//     int arr[5] = {4,6,7,8,9};
//     int flag = 0; int element = 4;
//     int first = 0, last = 4; int mid;
//     // int mid = ( first + last ) / 2;
//     for (int i = first; i <= last; i++)
//     {
//         mid = (first+last)/2;
//         if( arr[mid] == element ){
//             flag = 1;
//             printf("\n Element Found!");
//             break;
//         }
//         else if( element > arr[mid] )
//          first = mid + 1;
//         else
//          last = mid - 1;
//     }
//     if ( flag == 0)
//       printf("\n Element not found!");
//     return 0;
// }
