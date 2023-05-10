#include<stdio.h>
#include<stdlib.h>

    // BINARY SEARCH TREE ( refer theory/notes for understanding BST)

struct Node{
    int key; 
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int item){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void inOrder(struct Node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d -> ", root->key);
        inOrder(root->right);
    }
}

struct Node* insert(struct Node* node, int key){
    if(node == NULL) 
        return newNode(key);
    if(key < node->key)
        node->left = insert(node->left,key);
    else
        node->right = insert(node->right,key);

    return node;
}

struct Node* minValueNode(struct Node* node){
    struct Node* current = node;
    while(current && current->left != NULL )
        current = current->left;
    
    return current;
}

struct Node* deleteNode(struct Node* root, int key){
    if(root == NULL) return root;
    if(key < root->key)
        root->left = deleteNode(root->left,key);
    else if(key > root->key)
        root->right = deleteNode(root->right,key);
    else{
        if(root->left == NULL){
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right,temp->key);
    }
    return root;
}

int main(){
    struct Node* root = NULL;
    root = insert(root,8);
    root = insert(root,3);
    root = insert(root,1);
    root = insert(root,6);
    root = insert(root,7);
    root = insert(root,10);
    root = insert(root,14);
    root = insert(root,4);

    printf("InOrder Traversal: ");
    inOrder(root);
    printf("\nAfter deleting 10\n");
    root = deleteNode(root,10);
    printf("InOrder Traversal: ");
    inOrder(root);
    return 0;
}