#include<stdio.h>
#include<stdlib.h>

    //BINARY TREE ( refer theory/notes to understand BT)
    
struct Node
{
    int info;
    struct Node * left;
    struct Node * right;
};


struct Node* createNode(int value){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void preOrderTraversal(struct Node * root){
    if(root == NULL) return;
    printf("%d -> ", root->info);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);    
}

void inOrderTraversal(struct Node * root){
    if(root == NULL) return;
    inOrderTraversal(root->left);
    printf("%d -> ", root->info);
    inOrderTraversal(root->right);
}

void postOrderTraversal(struct Node * root){
    if(root == NULL) return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d -> ", root->info);
}

struct Node* insertRight(struct Node* root, int value){
    root->right = createNode(value);
    return root->right;   
}

struct Node* insertLeft(struct Node* root, int value){
    root->left = createNode(value);
    return root->left;
}

int main(){
    struct Node * root = createNode(1);
    insertLeft(root, 12); 
    insertRight(root, 10);

    insertLeft(root->left,5);
    insertRight(root->right,6);

    printf("InOrder Traversal \n");
    inOrderTraversal(root);

    printf("\nPreOrder Traversal \n");
    preOrderTraversal(root);

    printf("\nPostOrder Traversal \n");
    postOrderTraversal(root);
    return 0;
}
