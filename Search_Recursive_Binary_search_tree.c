//https://www.youtube.com/watch?v=ZFdmR-MJVkc&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=74
//https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-74
#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}

void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

//https://www.youtube.com/watch?v=ZFdmR-MJVkc&list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi&index=74
//agar ye niche search function me problem aai to refer to this video at 3.00 min best explantion line by line
struct node* search(struct node*  root, int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){          //agar meri key small h root ke data se
        return search(root->left, key);   //to same work karo left me(recursive wala kame karo).......root ke left me find karna start kar do kisko key ko
    }
    else{
        return search(root->right, key);
    }
}

int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    struct node* n =search(p,10);
    if(n!=NULL){
        printf("Found: %d",n->data);
    }
    else{
        printf("Element not found");
    }
    return 0;
}
