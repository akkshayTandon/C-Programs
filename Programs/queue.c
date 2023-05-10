#include<stdio.h>
#include<stdlib.h>

    // Insert from rear and delete from front ; { FIFO = First In - First Out };

  // Queue Using Array
//   int front,rear; int size;
// void insertQ(int queue[],int n){
//     if( rear == (size-1) ){
//         printf("\nQueue full!\n");
//         return;
//     }
//     else{
//         rear++;
//         queue[rear] = n;
//         if( rear == 0)
//          front = 0;
//     }
// }
// void deleteQ(int queue[]){
//     if( front == -1 ){
//         printf("\nQueue empty!\n");
//         return;
//     }
//     else{
//         int n = queue[front];
//         printf("%d element removed from queue",n);
//         front++;
//         if( front == (rear+1) )
//          front=rear=-1;
//     }
// }
// void TRAVERSE(int queue[]){
//     if(front == -1)
//      printf("\nQueue Empty!\n");
//     else{
//         int i = front;
//         while(i<=rear){
//             printf("%d\n", queue[i]);
//             i++;
//         }
//     }
// }
// int main(){
//     system("cls");
//     front = rear = -1;
//     printf("Enter the size of queue array you want to create : ");  scanf("%d",&size);
//     int Queue[size];
//     int ch,n;
//     do
//     {
//         printf("\n1-insert element to Queue\n2-delete element from queue\n3-Display/Traverse\n4-Exit\n\tEnter your choice(1-4) : ");
//         scanf("%d",&ch);
//     switch (ch)
//     {
//     case 1:
//          printf("\nEnter the element to be added in queue : "); scanf("%d",&n);
//          insertQ(Queue,n);
//         break;
//     case 2:
//          deleteQ(Queue);
//         break;
//     case 3:
//         TRAVERSE(Queue);
//         break;
//     case 4:
//         exit(0);
//     default: printf("\n\nInvalid Choice!!");
//         break;
//     }
//     }while(ch!=4);
//     return 0;
// }

    // circular queue using array
//   int front,rear; int size;
// void insertCQ(int cqueue[],int n){
//     if(( (front==0) && (rear == (size-1)) ) || ( front == (rear+1)) ){
//         printf("\nQueue full!\n");
//     }
//     else{
//         if (front == -1) 
//           front = 0;
//         rear = ((rear + 1) % size);
//         cqueue[rear] = n;
//     }
// }
// void deleteCQ(int cqueue[]){
//     if( front == -1)
//         printf("\nQueue empty!\n");
//     else{
//         int n = cqueue[front];
//         printf("%d removed from queue",n);
//         if( front == rear )
//          front=rear=-1;
//         else if ( front == (size-1) )
//          front = 0;
//         else 
//          front = ((front+1) % size);
//     }
// }
// void TRAVERSE(int cqueue[]){
//     if(front == -1)
//       printf("\nQueue Empty!\n");
//     else if( front <= rear){
//         for (int i = front; i <= rear; i++)
//             printf("\n%d",cqueue[i]);
//     }
//     else{
//       for (int i = front; i < size; i++)
//         printf("\n%d",cqueue[i]);
//       for (int i = 0; i <= rear; i++)
//         printf("\n%d",cqueue[i]);  
//     }
// }
// int main(){
//     system("cls");
//     front = rear = -1;
//     printf("Enter the size of circular queue you want to create : ");  scanf("%d",&size);
//     int CQueue[size];
//     int ch,n;
//     do
//     {
//         printf("\n1-insert element to Queue\n2-delete element from queue\n3-Display/Traverse\n4-Exit\n\tEnter your choice(1-4) : "); 
//         scanf("%d",&ch);
//     switch (ch)
//     {
//     case 1:
//          printf("\nEnter the element to be added in circular queue : "); scanf("%d",&n);
//          insertCQ(CQueue,n);
//         break;
//     case 2:
//          deleteCQ(CQueue); 
//         break;
//     case 3: 
//         TRAVERSE(CQueue);
//         break;
//     case 4:
//         exit(0);
//     default: printf("\n\nInvalid Choice!!");
//         break;
//     }
//     }while(ch!=4);
//     return 0;
// }

    // Queue using linked list
//  struct queue
//  {
//     int data;
//     struct queue * next;
//  };
//  struct queue * front; struct queue * rear;
//  int getData(){
//     int d; printf("\nEnter the data/value you want to insert : "); scanf("%d",&d); return d;
//  }
//  void insertQ(){
//      struct queue * temp = (struct queue*)malloc(sizeof(struct queue));
//      int d = getData(); temp->data = d; temp->next = NULL;
//      if(rear == NULL) 
//         front = rear = temp;
//     else{
//         rear->next = temp;
//         rear = temp;
//     }
//  } 
//  void deleteQ(){
//      struct queue* q = front;
//      if(front == NULL)
//          printf("\nQueue Empty!");
//      else{
//          front = q->next;
//          free(q);
//      }
//  }
//  void Traverse(){
//      struct queue* p = front;
//      while(p!=NULL){
//          printf("%d ",p->data);
//          p = p->next;
//      }
//  }
//  int main(){
//     system("cls");
//     front = rear = NULL;
//     int ch,n;
//     do
//     {
//         printf("\n1-insert element to Queue\n2-delete element from queue\n3-Display/Traverse\n4-Exit\n\tEnter your choice(1-4) : ");
//         scanf("%d",&ch);
//     switch (ch)
//     {
//     case 1:
//         insertQ(); printf("Inserted to queue!");
//         break;
//     case 2:
//         deleteQ(); printf("deleted from queue!");
//         break;
//     case 3:
//         Traverse();
//         break;
//     case 4:
//         exit(0);
//         break;
//     default: printf("\n\nInvalid Choice!!");
//         break;
//     }
//     }while(ch!=4);
//     return 0;
//  }

    // circular queue using linked list
 