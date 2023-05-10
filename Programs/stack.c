#include<stdio.h>
#include<stdlib.h>
// #include<conio.h>

// #define true 1;
// #define false 0;

        // expression checker;
// struct stack
// {
//     int top; 
//     char prev[20];
// };
// void Push(struct stack *PS,int n){
//     // struct stack *PS;
//     // int n;
//         PS -> top++;
//         PS -> prev[PS->top] = n ;
// }
// void Pop(struct stack *PS){
//     PS -> top--;
// }
// int empty(struct stack *PS){
//     if((PS -> top) == -1)
//      return true;
// }
// int main(){
//     system("cls");
//     struct stack S;
//     char instr[20];
//     int valid = true; int i = 0;
//     S.top = -1;
//     printf("Enter the expression : \n");
//     while ((instr[i] == getch()) != "\n")
//     {
//         if(instr[i] == '(')
//          Push(&S,instr[i]);
//         if(instr[i] == ')')
//          if(empty(&S))
//          {
//              valid = false;
//              break;
//          }
//          else{
//              Pop(&S);
//          }
//          i++;
//     }
//     if(!empty(&S))
//      valid = false;
//     if(valid)
//      printf("Expression valid");
//     else
//      printf("expression invalid");
//     return 0;
// }

   
    // Insert = PUSH, Delete = POP, Start = TOP ; { LIFO = Last In - First Out };
  
  // stack Using Array
//   int top; int size;
// void PUSH(int Stack[], int N){
//     // if(top == (size - 1))
//     //  printf("\nStack Full/Overflow!\n");
//     // else{
//         top++;
//         Stack[top] = N;
//         printf("\n  %d pushed to stack.\n",N);
//         // printf("  top = %d",top);
//     // }
// }
// int POP(int Stack[]){
//     if(top == -1)
//      printf("\nStack Empty/Underflow!\n");
//     else{
//         int popped = Stack[top];
//         // printf("%d popped.",popped);
//         top=top-1;
//         // printf("  top = %d",top);
//         return popped;
//     }
// }
// void TRAVERSE(int Stack[]){
//     if(top == -1)
//      printf("\nStack Empty/Underflow!\n");
//     else{
//         int top_temp = top;
//         while(top_temp != -1){
//             printf("%d\n", Stack[top_temp]);
//             top_temp--;
//         }
//     }
// }
// int main(){
//     system("cls");
//     top = -1;
//     printf("Enter the size of stack array you want to create : ");  scanf("%d",&size);
//     int ch,n,temp; int S[size];
//     do
//     {
//         printf("\n1-PUSH\n2-POP\n3-Display/Traverse\n4-Exit\n\tEnter your choice(1-4) : "); scanf("%d",&ch);
//     switch (ch)
//     {
//     case 1:
//         if(top == (size - 1))
//           printf("\nStack Full/Overflow!\n"); 
//         else{
//          printf("\nEnter the element to be added in stack : "); scanf("%d",&n);
//          PUSH(S,n);
//         }
//         break;
//     case 2:
//         temp = POP(S); printf("%d popped.",temp);
//         break;
//     case 3: 
//         TRAVERSE(S);
//         break;
//     case 4:
//         exit(0);
//     default: printf("\n\nInvalid Choice!!");
//         break;
//     }
//     }while(ch!=4);
//     return 0;
// }


    // stack Using Linked List
// struct Stack
// {
//     int data;
//     struct Stack * next;
// };
// struct Stack * top;
// int getData(){
//     int d; printf("\nEnter the data/value to be inserted in stack : "); scanf("%d",&d); return d;
// }
// void PUSH(){
//     struct Stack * temp = (struct Stack*)malloc(sizeof(struct Stack));
//     int d = getData();
//     temp->data = d; temp->next = NULL;
//     if (top == NULL)
//         top = temp;
//     else{
//         temp->next = top;
//         top = temp;
//     } 
// }
// void POP(){
//     if (top == NULL)
//         printf("stack empty!");
//     else{
//         struct Stack * s = top;
//         top = s->next;
//         free(s);
//     }
// }
// void TRAVERSE(){
//     if(top == NULL) 
//         printf("\nStack Empty!");
//     else{
//         struct Stack * s = top;
//         while(s!=NULL){
//             printf("%d\n",s->data); 
//             s = s->next;
//         }
//     }
// }
// int main(){
//     system("cls");
//     top = NULL;
//     int ch,n,temp;
//     do
//     {
//         printf("\n1-PUSH\n2-POP\n3-Display/Traverse\n4-Exit\n\tEnter your choice(1-4) : "); scanf("%d",&ch);
//     switch(ch)
//     {
//     case 1:
//          PUSH(); printf("PUSHED!");
//         break;
//     case 2:
//         POP(); printf("popped!");
//         break;
//     case 3: 
//         TRAVERSE();
//         break;
//     case 4:
//         exit(0);
//     default: printf("\n\nInvalid Choice!!");
//     }
//     }while(ch!=4);
//     return 0;
// }


