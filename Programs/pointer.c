#include<stdio.h>
#include<stdlib.h>

void inputArray(int *a,int size){
    for(int i = 0; i < size; i++){
        printf("Enter element %d : ",i+1);  
        scanf("%d", &a[i]);
    }
}

void printArray(int *A, int sz){
    for (int i = 0; i < sz; i++)
    {
        printf("%d ",A[i]);
    }
    
}

int main(){
    system("cls");
    int s;
    printf("Enter size of array you want to input: "); scanf("%d",&s);
    int ar[s];
    inputArray(ar,s);
    printArray(ar,s);

    return 0;
}