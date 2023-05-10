

         /* ASSIGNMENT - 1 */
        /*-----------------*/
// Q.) WAP to find factorial of a given number.

// #include<stdio.h>
// int main(){
//     int number,factorial = 1;
//     printf("Enter a number to find it\'s factorial : "); scanf("%d",&number);
//     for ( int i = number; i >=1 ; i--)
//     {
//         factorial = factorial*i;
//     }
//     printf("The factorial if %d is %d",number,factorial);
//     return 0;
// }


// Q.)WAP to check if a number is pallindrome or not.

// #include<stdio.h>
//  int main(){
//     int n; 
//     printf("Enter a number to check if number is pallindrome or not : "); scanf("%d",&n);
//     int m = n; int r;
//     while (n!=0)
//     {
//         int k = n%10;
//         r = (r*10)+k;
//         n = n/10;
//     }
//     if(r == m)
//      printf("%d is a pallindrome number.",m);
//     else
//      printf("%d is not a pallindrome number.",m);
//     return 0;
// }


// Q.)WAP to find sum of first 'n' natural numbers.

// #include<stdio.h>
// int main(){
//     int term; int sum=0;
//     printf("Enter the number of terms till you want sum: "); scanf("%d",&term);
//     for (int i = 1; i <=term ; i++)
//     {
//         sum = sum + i;
//     }
//     printf("The sum of first %d natural numbers is %d.",term,sum);
//     return 0;
// }


// Q.)WAP to print ABCD pattern.

// #include<stdio.h>
// int main(){
//     int rows;
//     printf("Enter the number of rows to print ABCD-pattern: "); 
//     scanf("%d",&rows);
//     for (int i = 1; i <=rows; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             printf("%c",(64+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Q.)WAP to print 12345 pattern.

// #include<stdio.h>
// int main(){
//     int rows;
//     printf("Enter the number of rows to print 1234-pattern: "); 
//     scanf("%d",&rows);
//     for (int i = 1; i <=rows; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Q.)WAP to print numeric pyramid pattern.

// #include<stdio.h>
// int main(){
//     int rows;
//     printf("Enter the number of rows to print numeric pyramid-pattern: "); 
//     scanf("%d",&rows);
//     for (int i = 1; i <=rows ; i++)
//     {
//        for (int j = i; j<=rows ; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i  ; k++)
//         {
//             printf("%d",k);
//         //     printf("*");
//         }
//         for (int l = 1; l < i ; l++)
//         {
//             printf("%d",l);
//         //     printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Q.)WAP to print diamond pattern.

// #include<stdio.h>
// int main(){
//     int rows = 3;
//     for (int i = 1; i <=rows ; i++)
//     {
//         for (int j = rows; j >=i ; j--)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <=i ; k++)
//         {
//             printf("*");
//         }
//         for (int l = 2; l <=i ; l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//    for (int m = 1; m<=5 ; m++)
//    {
//        if((m==1) || (m==5))
//          printf("  ");
//        else
//          printf("*");  
//    }
//    printf("\n");
//    for (int n = 1; n<=5 ; n++)
//    {
//        if(n==3)
//          printf(" *");
//        else
//          printf(" ");
//    }
//     return 0;
// }


// Q.)WAP to print fibonacci series.

// #include<stdio.h>
// int main(){
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


// Q.)WAP to print largest element of a given array. 

// #include<stdio.h>
// int main(){
//     int largest; int length;
//     printf("Enter the length of array : "); scanf("%d",&length);
//     int array[length];
//     printf("Input %d array elements: \n",length);
//     for (int j = 0; j < length; j++)
//     {
//         scanf("%d",&array[j]);
//     }
//     largest = array[0];
//     for (int i = 0; i < length; i++)
//     {
//         if (array[i] > largest)
//         {
//             largest = array[i];
//         }
//     }
//     printf("\n\nThe largest element of array is %d",largest);
//     return 0;
// }


// Q.)WAP to print transpose of a matrix in an array.

// #include<stdio.h>
// int main(){
//     int rows,columns;
//     printf("Enter the number of rows in matrix: "); scanf("%d",&rows);
//     printf("Enter the number of columns in matrix: "); scanf("%d",&columns);
//     int matrix[rows][columns];
//     int transpose[columns][rows];
//     int length = rows*columns ;
//     printf("Input %d array elements: \n",length);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns ; j++)
//         {
//           scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("The original matrix is :  \n");
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns ; j++)
//         {
//           printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     printf("The transpose of matrix is : \n");
//     for (int k = 0; k < columns; k++)
//     {
//         for (int l = 0; l < rows; l++)
//         {
//             transpose[k][l] = matrix[l][k];
//             printf("%d ",transpose[k][l]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Q.)WAP to multiply two matrices and print it.

// #include<stdio.h>
// int main(){
//         int r,c,m,n;
//     printf("Enter the number of rows of first matrix: "); scanf("%d",&r);
//     printf("Enter the number of columns of first matrix: "); scanf("%d",&c);
//     printf("Enter the number of rows of second matrix: "); scanf("%d",&m);
//     printf("Enter the number of columns of second matrix: "); scanf("%d",&n);
//     int  ar[r][c]; int arr[m][n]; int result[r][n];
//     printf("Enter elements of first array: ");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d",&ar[i][j]);
//         }
//     }
//     printf("Enter elements of second array: ");
//     for (int k = 0; k < m; k++)
//     {
//         for (int l = 0; l < n; l++)
//         {
//             scanf("%d",&arr[k][l]);
//         }
//     }
//     if(c!=m)
//      printf("\nMatrix multiplication not possible!");
//     else{
//         for (int p = 0; p < r; p++)
//         {
//             for (int q = 0; q < n; q++)
//             {
//                 result[p][q] = 0;
//                 for (int u = 0; u < n; u++)
//                 {
//                     result[p][q] = result[p][q] + (ar[p][u] * arr[u][q]) ;
//                 }
//             }
//         }
//     printf("\nThe multiplied/resultant matrix is :\n");
//         for (int s = 0; s < r; s++)
//         {
//             for (int t = 0; t < n; t++)
//             {
//                 printf("%d ",result[s][t]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }


// Q.)WAP for Bubble Sort.

// #include<stdio.h>
// int main(){   
//     int size;
//     printf("Enter size of array : "); scanf("%d",&size);
//     int array[size];
//     for(int i = 0; i < size; i++){
//         printf("Enter element %d : ",i+1);  
//         scanf("%d", &array[i]);
//     }
//     for (int i = 0; i < (size-1); i++)
//     {
//         for (int j = 0; j < ((size-1)-i); j++)
//         {
//            if(array[j] > array[j+1]) /*for ascending order */  /* for descending - (array[j] < array[j+1]) */
//             {
//                 int t = array[j];
//                 array[j] = array[j+1];
//                 array[j+1] = t;
//             }
//         }  
//     }
//     printf("\n\tThe sorted array is : ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ",array[i]);
//     }  
//     printf("\n\n"); 
//     return 0;
// }

            /* ASSIGNMENT - 2 */
           /*----------------*/
// Q.)WAP to display an array in reverse order. 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the length of array: "); scanf("%d",&n);
//     int array[n];
//     printf("Enter %d elements of array: ",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&array[i]);
//     }
//     printf("The array in original order is : \n");
//     for (int j = 0; j < n; j++)
//     {
//         printf("%d ",array[j]);
//     }
//     printf("\nThe array in reverse order is : \n");
//     for (int k = (n-1); k >= 0; k--)
//     {
//         printf("%d ",array[k]);
//     }
//     return 0;
// }


// Q.)WAP to  count the number of duplicate elements in array.

// #include<stdio.h>
// int main(){
//     int length; int countDuplicate;
//     printf("Enter the length of array: "); scanf("%d",&length);
//     int array[length];
//     printf("Enter %d elements of array: ",length);
//     for (int i = 0; i < length; i++)
//     {
//         scanf("%d",&array[i]);
//     }
//     for (int j = 0; j < length; j++)
//     {
//         for (int k = 0; k < j; k++)
//         {
//             if (array[j] == array[k])
//             {
//                 countDuplicate = countDuplicate + 1;
//             }
//         }
//     }
//     printf("The number of duplicate elements in the array is : %d", countDuplicate);
//     return 0;
// }


// Q.)WAP to find maximum and minimum element of an array.

// #include<stdio.h>
// int main(){
//     int length; int max,min;
//     printf("Enter the length of array: "); scanf("%d",&length);
//     int array[length];
//     printf("Enter %d elements of array: ");
//     for (int i = 0; i < length; i++)
//     {
//         scanf("%d",&array[i]);
//     }
//     max = min = array[0];
//     for (int j = 0; j < length; j++)
//     {
//         if (array[j] > max)
//         {
//             max = array[j];
//         }
//         if (array[j] < min)
//         {
//             min = array[j];
//         }
//     }
//     printf("\nThe maximum value if array is : %d", max);
//     printf("\nThe minimum value of array is : %d", min);
//     return 0;
// }


// Q.)WAP to seperate odd and even integers in seperate arrays from a given array.

// #include<stdio.h>
// int main(){
//     int length; int countEven, countOdd; int j = 0, k = 0;
//     printf("Enter the length of array: "); scanf("%d",&length);
//     int source[length];
//     printf("Enter %d elements of array: ");
//     for (int i = 0; i < length; i++)
//     {
//         scanf("%d",&source[i]);
//     }
//     for (int i = 0; i < length; i++)
//     {
//         if((source[i]%2)==0)
//           countEven = countEven + 1;
//         if((source[i]%2)!=0)
//           countOdd = countOdd + 1;
//     }
//     int evenArray[countEven]; int oddArray[countOdd];
//     for (int i = 0; i < length; i++)
//     {
//         if((source[i]%2)==0)
//         {
//             evenArray[j] = source[i];
//             j = j + 1;
//         }
//         if((source[i]%2)!=0)
//         {
//           oddArray[k] = source[i];
//           k = k + 1;
//         }
//     }
//     printf("\nEven elements of array: \n");
//     for (int m = 0; m < countEven; m++)
//     {
//         printf("%d ", evenArray[m]);
//     }
//     printf("\nOdd elements of array: \n");
//     for (int l = 0; l < countOdd; l++)
//     {
//         printf("%d ", oddArray[l]);
//     }
//     return 0;
// }


// Q.)WAP to find second largest element in an array.

// #include<stdio.h>
// int main(){
//     int length; int pos, largest, secondLargest; 
//     printf("Enter the length of array: "); scanf("%d",&length);
//     int source[length];
//     printf("Enter %d elements of array: \n");
//     for (int i = 0; i < length; i++)
//     {
//         scanf("%d",&source[i]);
//     }
//     largest = source[0];
//     for (int i = 0; i < length; i++)
//     {
//         if (source[i] > largest)
//          {
//             largest = source[i];
//             pos = i;
//          } 
//     }
//     for (int j = 0; j < length; j++)
//     {
//         if(j==pos)
//           continue;
//         if (source[j] > secondLargest)
//         {
//             secondLargest = source[j];
//         }   
//     }
//     printf("\nThe second largest value in array is : %d", secondLargest);
//     return 0;
// }

    
// Q.)WAP to calculate determinant value of a 3*3 matrix.

// #include<stdio.h>
// int main(){
//     int matrix[3][3]; int detValue;
//     int r1,r2,r3;
//     printf("Enter a 3*3 matrix(9 elements): \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     r1 = matrix[0][0] * ( (matrix[1][1]*matrix[2][2]) - (matrix[2][1]*matrix[1][2]) );
//     r2 = matrix[0][1] * ( (matrix[1][0]*matrix[2][2]) - (matrix[2][0]*matrix[1][2]) );
//     r3 = matrix[0][2] * ( (matrix[1][0]*matrix[2][1]) - (matrix[2][0]*matrix[1][1]) );
//     detValue = (r1-r2+r3);
//     printf("The determinant value is : %d", detValue);
//     return 0;
// }


// Q.)WAP to input and check if two matrices are equal or not.

// #include<stdio.h>
// int main(){
//     int r1,c1,r2,c2; int count = 0;
//     printf("Enter the number of rows of first matrix: "); scanf("%d",&r1);
//     printf("Enter the number of columns of first matrix: "); scanf("%d",&c1);
//     printf("Enter the number of rows of second matrix: "); scanf("%d",&r2);
//     printf("Enter the number of columns of second matrix: "); scanf("%d",&c2);
//     int matrix1[r1][c1],matrix2[r2][c2];
//         printf("Enter a %d elements of matrix 1: \n",(r1*c1));
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }
//         printf("Enter a %d elements of matrix 2: \n",(r2*c2));
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }
//     if( (r1*c1) != (r2*c2) )
//       printf("\nThe given matrices are not equal.");
//     else
//     {
//       for (int i = 0; i < r1; i++)
//       {
//         for (int j = 0; j < c1; j++)
//          {
//             if( matrix1[i][j] == matrix2[i][j] )
//               count = count + 1;   
//          } 
//        }
//        if (count == (r1*c1))
//          printf("\nThe matrices are equal.");
//        else
//          printf("\nThe matrices are not equal.");  
//     }
//     return 0;
// }


// Q.)WAP to implement the strncat() function.

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[] = "Hello";
//     char str2[] = " Supriya";
//     // char str3[] = strncat(str1,str2,6);
//     printf("%s", strncat(str1,str2,6));
//     return 0;
// }


// Q.)WAP to implement strcpy() function.

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char *str1;
//     char *str2 = "Hello World";
//     printf("%s", strcpy(str1,str2));
//     return 0;
// }


// Q.)WAP to rotate an array by 'N' positions.

// #include<stdio.h>
// int main(){
//     int length; int numOfRotation;
//     printf("Enter the length of array: "); scanf("%d",&length);
//     int array[length];
//     printf("Enter %d elements of array: \n");
//     for (int i = 0; i < length; i++)
//     {
//         scanf("%d",&array[length]);
//     }
//     printf("How many times do you want to rotate the array: "); scanf("%d",&numOfRotation);
//     printf("\nOriginal Array: \n");
//     for (int j = 0; j < length; j++)
//     {
//         printf("%d ",array[j]);
//     }
//     int temp;
//     for (int i = 0; i < numOfRotation; i++)
//     {
//        temp = array[length-1];
//         for (int j = (length-1); j > 0; j--)
//         {
//             array[j] = array[j-1];
//         }
//         array[0] = temp;
//     }
//     printf("\n\n%d times rotated Array: \n",numOfRotation);
//     for (int i = 0; i < length; i++)
//     {
//         printf("%d ",array[i]);
//     }
//     return 0;
// }


                /* ASSIGNMENT - 3 */
               /*----------------*/
// Q.)WAP to print all perfect numbers in a given range using functions.

// #include<stdio.h>
// void perfectNumber(){
//     int range,sum;
//     printf("Enter the range till you want to print perfect number: "); scanf("%d",&range);
//     for (int i = 1; i <= range; i++)
//     {
//         sum = 0;
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i%j)==0)
//               sum = sum + j;
//         }
//         if(sum == i)
//           printf("%d ",i);
//     }
// }
// int main(){
//     perfectNumber();
//     return 0;
// }


// Q.)WAP to swap two numbers using function call by reference.

// #include<stdio.h>
// void swap(int *x, int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//     int a,b;
//     printf("Enter two values to swap: \n");
//     printf("a = "); scanf("%d",&a);
//     printf("b = "); scanf("%d",&b);
//     printf("Original values are: ");
//     printf("\n\ta = "); printf("%d",a);
//     printf("\n\tb = "); printf("%d",b);
//     swap(&a,&b);
//     printf("\nSwapped values are: ");
//     printf("\n\ta = "); printf("%d",a);
//     printf("\n\tb = "); printf("%d",b);
//     return 0;
// }


// // Q.)WAP to sort an array in descending order using functions.

// #include<stdio.h>
// void printArray(int *A, int length){
//  for (int i = 0; i < length; i++)
//     {
//         printf("%d ",A[i]);
//     }  
// }
// void inputArray(int *a,int sz){
//  for(int i = 0; i < sz; i++){
//         printf("Enter element %d : ",i+1);  
//         scanf("%d", &a[i]);
//     }
// }
// void SORT(){
//      /* using selection sort */
//     int size; int indexOfminElem;
//     printf("Enter size of array: "); scanf("%d", &size);
//     int array[size];
//     inputArray(array,size);
//     for (int i = 0; i < (size-1); i++)
//     {
//         indexOfminElem = i;
//         for (int j = i; j < size; j++)
//         {
//             if( array[j] > array[indexOfminElem] )
//             {
//                 indexOfminElem = j;
//             }
//         }
//         int t = array[i];
//         array[i] = array[indexOfminElem];
//         array[indexOfminElem] = t;
//     }
//     printf("\n\tThe sorted array in descending order is : ");
//     printArray(array,size);
//     printf("\n\n");
// }
// int main(){
//     SORT();
//     return 0;
// }


// Q.)WAP to reverse the content of an array using function without using another array.

// #include<stdio.h>
// void reverseArray(){
//     int length;
//     printf("Enter the length of array: "); scanf("%d",&length);
//     int array[length];
//     printf("Enter %d elements of the array: \n",length);
//     for (int i = 0; i < length; i++)
//     {
//         printf("Enter element %d : ",i+1);  
//         scanf("%d",&array[i]);
//     }
//     printf("\n\nOriginal Array: ");
//     for (int i = 0; i < length; i++)
//     {
//         printf("%d ",array[i]);
//     }
//     for (int i=0, j=(length-1); i <=((i+j)/2); i++,j--)
//     {
//         int temp = array[i];
//         array[i] = array[j];
//         array[j] = temp;   
//     }
//     printf("\nReversed Array: ");
//     for(int i = 0; i < length; i++)
//     {
//         printf("%d ",array[i]);
//     }   
// }
// int main(){
//     reverseArray();
//     return 0;
// }


// // Q.)Write a program for linear search in character array using pointers.

// #include<stdio.h>
// void linearSearch(){
//     int flag = 0; int length;
//     char array[] = {'G','o','o','d',' ','M','o','r','n','i','n','g','\0'};
//     char *ptr = array; char searchElement;
//     printf("String : %s\n",ptr);
//     printf("Enter a character to be searched: "); scanf("%c",&searchElement);
//     while (*ptr!='\0')
//     {
//         if(*ptr == searchElement)
//         {
//             flag = 1;
//         }
//     ptr++;
//     }
//     if(flag == 0)
//      printf("\nThe character was not found.");
//     else
//      printf("\nThe character was found.");
// }
// int main(){
//     linearSearch();
//     return 0;
// }


// Q.)WAP to declare an array of structure for holding information of 50 students.
//   Also take the information from the user and print it on the screen.

// #include<stdio.h>
// struct student{
//     int rollNo; 
//     char Name[51];
// };  
// int main(){
//     typedef struct student Student;
//     Student s[50];
//     for (int i = 0; i < 50; i++)
//     {
//       printf("Enter structure elements: "); 
//       printf("\nName of student : "); gets(s[i].Name);
//       printf("Roll number of student : "); 
//       scanf("%d",&s[i].rollNo);
//     }
//     for (int i = 0; i < 50; i++)
//     {
//       printf("\nstructure elements are: "); 
//       printf("\nName of student : "); puts(s[i].Name);
//       printf("Roll number of student: %d",s[i].rollNo); 
//     }
//     return 0;
// }


// Q.)Write a program to demonstrate the role of enumeration.

// #include<stdio.h>
// int main(){
//     /* enumeration : used to assign names to integral constants */
//     enum week{Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
//     enum week day;
//     day = Wednesday; 
//     printf("%d",day);
//     day = 6; //you can also update values
//     printf("\n%d",day);
//     return 0;
// }


// Q.)WAP to print sum of all numbers in a float array using functions and pointers.

// #include<stdio.h>
// void sumArray(){
//     float array[10] = {0.5,1.5,2.5,3.5,4.5,6.5,7.5,8.5,9.5,10.5};
//     float sum = 0.0;
//     float* ptr = &array[0];
//     for (int i = 0; i < 10; i++)
//     {
//         sum = sum + *(ptr);
//         ptr++;
//     }
//     printf("The sum is : %f",sum);
// }
// int main(){
//     sumArray();
//     return 0;
// }


// Q.)WAP to find the GCD/HCF of two numbers using recursion.

// #include<stdio.h>
// int findGCD(int a, int b){
//     int dividend,divisor,quotient,remainder;
//     if( b == 0 )
//       return a;
//     else if ( a > b)
//     {
//         dividend = a;
//         divisor = b;
//         quotient = ( dividend / divisor );
//         remainder = ( dividend % divisor );
//         return findGCD( divisor , remainder );
//     }
//     else if( b > a )
//     {
//         dividend = b;
//         divisor = a;
//         quotient = ( dividend / divisor );
//         remainder = ( dividend % divisor ); 
//         return findGCD( divisor , remainder );
//     }
//     else
//     {
//         printf("\nThe values are equal!!.");
//     }
// }
// int main(){
//      /* Approach Used : Euclidean Algorithm */
//     int x,y;
//     printf("Enter two number two find their GCD/HCF: ");
//     printf("\nFirst Number: "); scanf("%d",&x);
//     printf("\nSecond Number: "); scanf("%d",&y);
//     int hcf =  findGCD(x,y);
//     printf("\n\nThe GCD/HCF of %d and %d is : %d",x,y,hcf);
//     return 0;
// }


// Q.)Write a program to show difference between structure and union.

// #include<stdio.h>
// struct struct_example{
//     int integer;
//     float decimal;
//     char character[30];
// }s;
// union union_example
// {
//     int integer_1;
//     float decimal_1;
//     char character_1[30];
// }u;
// int main(){
//     printf("\nsize of structure : %d", sizeof(s));
//     printf("\nsize of union : %d", sizeof(u));
//     return 0;
// }

