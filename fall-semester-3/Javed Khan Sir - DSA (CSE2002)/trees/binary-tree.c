#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* new_node;
struct node* root;

struct node* creat_node(int data){
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

struct node* insert_at_left(struct node* root,int data){
    root->left=creat_node(data);
    return root->left;
}
struct node *insert_at_right(struct node* root,int data){
    root->right=creat_node(data);
    return root->right;
}
void inorder(struct node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(struct node*root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

int main(){
    root=creat_node(1);
    insert_at_left(root,2);
    insert_at_right(root,3);
    insert_at_left(root->left,4);
    printf("the inorder of tree is: ");
    inorder(root);
    printf("\n");
    printf("the preorder of tree is: ");
    preorder(root);
    printf("\n");
    printf("the postorder of tree is: ");
    postorder(root);
    printf("\n");
    return 0;
}