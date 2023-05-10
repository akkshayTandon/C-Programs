#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* Next; 
};

// typedef struct Node *Nodeptr;
int totalNodes = 0;

struct Node * start; struct Node * rear;

void countTotalNodes(){
    struct Node * n = start;
    while( n!= NULL){
        totalNodes = totalNodes + 1;
        n = n->Next;
    }
}

int getData(){
    int d; printf("\nEnter the data/value you want to insert : "); scanf("%d",&d); return d;
}

void insertAtBeginning(){
    // Nodeptr temp = (Nodeptr) malloc(sizeof(struct Node));
    struct Node * temp = (struct Node *) malloc(sizeof(struct Node));
    if( temp == NULL ){
        printf("Memory not available...exiting!");
        exit(0);
    }
    int d = getData();
    temp->data = d; 
    if(start == NULL)
      { start = rear = temp; }
    else{
        temp->Next = start;
        start = temp;
        // totalNodes = totalNodes + 1;
    }
}
    /* inssert at end implementation 1 */
// void insertAtEnd(){
//     struct Node * temp = (struct Node *) malloc(sizeof(struct Node));
//     if( temp == NULL ){
//         printf("Memory not available...exiting!");
//         exit(0);
//     }
//     int d = getData();
//     temp->data = d;
//     struct Node * n = start;
//     while( n!= NULL ){
//         n = n->Next;
//     }
//     n->Next = temp;
//     temp->Next = NULL;
// }

    /* insert at end implementation 2 */
void insertAtEnd(){
    struct Node * temp = (struct Node *) malloc(sizeof(struct Node));
    if( temp == NULL ){
        printf("Memory not available...exiting!");
        exit(0);
    }
    int d = getData();
    temp->data = d; 
    if( rear == NULL)
     { rear = temp; }
    else{
        rear->Next = temp;
        temp->Next = NULL;
        // totalNodes = totalNodes - 1;
    }
}

void insertAtPosition(){

}

void deleteAtBeginning(){
    struct Node * n = start;
    start = start->Next; // or start = n->next; // since start and n refer to same location;
    free(n);
}

    /* delete at end implementation 1 */
void deleteAtEnd(){
     struct Node * temp = (struct Node *) malloc(sizeof(struct Node));
    if( temp == NULL ){
        printf("Memory not available...exiting!");
        exit(0);
    }
    int d = getData();
    temp->data = d;
    countTotalNodes();
    struct Node * n = start;
    while( (n!= NULL) && (totalNodes-1) ){
        n = n->Next;
    }
    struct Node * t = n;
    // n = 
}

    /* delete at end implementation 2 */
// void deleteAtEnd(){
//     struct Node * n = rear;
//     rear = rear->Next;
//     free(n);
// }

void deleteAtPositon(){

}


void Traverse(){
    struct Node * n = start;
    while( n!= NULL){
        printf("%d, ", n->data );
        n = n->Next;
    }
}

int main(){
    system("cls");
    start = rear = NULL;
    int ch;
    
    do{
     printf("\n1.Insert At Beginning\n2.Insert At End\n3.Insert At a given Position\n4.Delete At Beginning\n5.Delete At End\n6.Delete At  Position\n7.Traverse\n8.Exit\n\n\tEnter your choice(1-7) : ");
     scanf("%d",&ch);

     switch (ch)
     {
     case 1:
         insertAtBeginning();
         break;
     case 2:
         insertAtEnd();
         break;
     case 3:
         insertAtPosition();
         break;
     case 4:
         deleteAtBeginning();
         break;
     case 5:
         deleteAtEnd();
         break;
     case 6:
         deleteAtPosition();
         break;
     case 7:
         Traverse();
         break;
     case 8:
         exit(0);
     default: printf("\n\tINVALID CHOICE!!");
        //  break;
     }
    }while(ch!=8);

    return 0;
}