#include<stdio.h>
#include<stdlib.h>

    // problem with output/traversing; 

struct Node
{
    int data;
    struct Node* next; 
};

struct Node* start; struct Node* rear;
void Traverse();

int getData(){
    int d; printf("\nEnter the data/value you want to insert : "); scanf("%d",&d); return d;
}

int getKey(){
    int k; printf("\n Enter the key/position at which you want to insert/delete data : "); scanf("%d",&k); return k;
} 

int countTotalNodes(){
    struct Node * n = start;  int count = 0;
    if(start == NULL) printf("\nNo Node!");
    else{
    while( n!= NULL ){
        count = count + 1;
        n = n->next;
    }
    }  
    return count;
}

void insertAtBeginning(){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
     if( newNode == NULL ){
        printf("Memory not available...exiting!");
        exit(0);
    }   
    int d = getData();
    newNode->data = d; newNode->next = NULL;
    if(start == NULL) 
        start = rear = newNode; 
    else{
        newNode->next = start;
        rear->next = newNode;
        start = newNode;
    }
}

void insertAtEnd(){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
     if( newNode == NULL ){
        printf("Memory not available...exiting!");
        exit(0);
    }  
    int d = getData(); newNode->data = d; newNode->next = NULL;
    if(start == NULL) 
        start = rear = newNode; 
    else{
        rear->next = newNode;
        newNode->next = start;
        rear = newNode;
    }
}

void deleteAtBeginning(){
    struct Node* n = start;
    start = n->next;
    rear->next = n->next;
    free(n);
}

void deleteAtEnd(){
    struct Node* p = start; struct Node* q = rear; int c = 1; int totalNodes = countTotalNodes();
    printf(" total nodes = %d ",totalNodes);
    while(c!=(totalNodes-1)){
        c = c + 1;
        p = p->next;
    }
    rear = p; rear->next = start; free(q);
}

void insertAtPosition(){
    int d = getData(); 
    struct Node* temp = start; int c = 1; int k = getKey();
    while(c!=(k-1)){
        temp = temp->next; c = c + 1;
    }
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
        if( newNode == NULL ){
            printf("Memory not available...exiting!");
            exit(0);
        }
     newNode->data = d; 
     newNode->next = temp->next;
     temp->next = newNode;
}

void deleteAtPosition(){
    struct Node* temp = start; int c = 1; int k = getKey();
    while (c!=(k-1)){
        temp = temp->next;
        c = c + 1;
    }
    struct Node* n = temp->next;
    temp->next = n->next;
    free(n);
}

void Traverse(){
    struct Node* temp = start;
    if(temp == NULL) printf("\nNo Node!");
    else{
        if(countTotalNodes() == 1) printf("%d,",temp->data);
        else{
        while( (temp!=(rear)) ){
            printf("hello");
            printf("%d,",temp->data);
            temp = temp->next;
        }
        }
    }
}

int main(){
    system("cls");
    start = rear = NULL;
    int ch;
    
    do{
     printf("\n1.Insert At Beginning\n2.Insert At End\n3.Insert At a given Position\n4.Delete At Beginning\n5.Delete At End\n6.Delete At  Position\n7.Traverse\n8.Exit\n\n\tEnter your choice(1-8) : ");
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
        //  break;
     default: printf("\n\tINVALID CHOICE!!");
        //  break;
     }
    }while(ch!=8);
    return 0;
}