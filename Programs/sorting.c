#include<stdio.h>
#include<stdlib.h>

void printArray(int *A, int length){
    for (int i = 0; i < length; i++)
    {
        printf("%d ",A[i]);
    }  
}

void inputArray(int *a,int sz){
    for(int i = 0; i < sz; i++){
        printf("Enter element %d : ",i+1);  
        scanf("%d", &a[i]);
    }
}
   
    /* BUBBLE SORT */
// void BubbleSort(){   
//     int size;
//     printf("Enter size of array : "); scanf("%d",&size);
//     int array[size];
//     inputArray(array,size);
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
//     printArray(array,size);
//     printf("\n\n");
// }

    /* SELECTION SORT */
// void SelectionSort(){
//     int size; int indexOfminElem;
//     printf("Enter size of array: "); scanf("%d", &size);
//     int array[size];
//     inputArray(array,size);
//     for (int i = 0; i < (size-1); i++)
//     {
//         indexOfminElem = i;
//         for (int j = i; j < size; j++)
//         {
//             if( array[j] < array[indexOfminElem] )
//             {
//                 indexOfminElem = j;
//             }
//         }
//         int t = array[i];
//         array[i] = array[indexOfminElem];
//         array[indexOfminElem] = t;
//     }
//     printf("\n\tThe sorted array is : ");
//     printArray(array,size);
//     printf("\n\n");
// }

    /* INSERTION SORT */
// void InsertionSort(){
//     int size; printf("Enter size of array: "); scanf("%d", &size); int array[size];
//     int key; int j ;
//     inputArray(array,size);
//     for (int i = 1; i <= size-1; i++)
//     {
//         key = array[i];
//         j = i-1;
//         while(j>=0 && array[j] > key){
//             array[j+1] = array[j];
//             j--;
//         }
//         array[j+1] = key;
//     }
//     printf("\n\tThe sorted array is : ");
//     printArray(array,size);
//     printf("\n\n");
// }


    /* SHELL SORT */


int main(){
    system("cls");

    // BubbleSort();
    // SelectionSort();
    // InsertionSort();
    
    // ShellSort();
    // QuickSort();
    // MergeSort();
    return 0;
}

    /* Bubble Sort Notes */
// outer loop(i) = (i=0) to {i<(size-1)} and inner loop(j) = (j=0) to {j<((size-1)-i)}

    /* Selection Sort Notes */
// outer loop(i) = (i=0) to {i<(size-1)} and inner loop(j) = (j=i) to {j<(size)}

    /* Insertion Sort Notes */
// outer for loop(i) = (i=1) to {i<=(size-1)} and inner while loop(j>=0&&array[j]>key) where key = A[i] and j =i-1, all inside for
// (i.e. updated every time)

    /* SHELL SORT */

