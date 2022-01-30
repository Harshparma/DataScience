#include<stdio.h>
#include<stdlib.h>

struct Node{
    int key;  // an integer variable data to store the data of the node...data or key same 
    struct Node* left;  //struct Node pointer called left to store the address of the left child node
    struct Node* right;//struct Node pointer called right to store the address of the right child node
    int height;//an integer variable storing the height of that node for the ease of calculating the absolute balance factor. Absolute balance factor, if you remember, should not exceed 1, otherwise, that node becomes imbalanced.
};

int getHeight(struct Node *n){ //Create an integer getHeight, and pass the pointer to the struct node you want to get the height of as the only parameter
    if(n==NULL){//Check if the struct node pointer is not NULL, return 0 if it is NULL
        return 0;
    }
    else{
        return n->height;//otherwise return the height element of the struct node.
    }
}

struct Node* createNode(int key){   //Create a struct Node* function createNode, and pass the data/key for the node as the only parameter.
    struct Node* node = (struct Node *) malloc(sizeof(struct Node));//Create a struct Node pointer node.  Reserve a memory in the heap for the node using malloc.
    node->key=key;    //matlab pahel apan data le lete the to likhte the ki node->data=data kuch nhi data ki place pe key le liya or kuch nhi
    node->left=NULL;  //Make the left and the right element of the struct node point to NULL,
    node->right=NULL;
    node->height=1;  //set the height element of this node as 1, because any new node would be a leaf node that has a height of 1. 
    return node;  //And now, return the pointer node you created. 
}

int max (int a, int b){
    return (a>b)?a:b;//ternary operator ka use kiya h explanaion agar "(a>b)?a:b" a greater then b h to return kar do a warna return kar do b
}

int getBalanceFacotr(struct Node* n){//Create a struct Node* function getBalanceFactor, and pass the pointer to the struct node you want to get the balance factor of as the only parameter
    if(n==NULL){ // Now the balance factor of a node is just the value we receive after subtracting the height of the right child with that of the left child of the node. So, first check whether the node is not NULL, if it is, simply returns 0.
        return 0;
    }
    else{
        return getHeight(n->left) - getHeight(n->right);  //Otherwise, return the value received after subtracting the height of the right child with that of the left child. This was a utility function to find the balance factor for a node.
    }
}

struct Node* leftRotate(struct Node* x){//Create a struct Node* function leftRotate, and pass the pointer to the imbalanced struct node you want to left rotate as the only parameter. Consider this node x as represented in the figure above.  Figure ke liye notes me bhi dekh sakte ho ya fir is link pe bhi https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-82/
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    y->left=x; //Now, simply assign x to the left element of y, and T2 to the right element of x. And this would finish our left rotation function
    x->right=T2;

    //We must, however, remember to change the new heights of the nodes that have been shifted, which are x and y.
    //MATLAB JO BHI MAXIMUM HEIGHT HOGI CHILD NODE ME USME PLUS ONE KAR DO PLUS ONE ISLIYE KYOKI CHILD NODE TO USKE NICHE H NA JISKI APAN HEIGHT NIKAL RAHE H TO 1 HEIGHT TO WOHI HO GAI ISLIYE PLUS ONE KARA.
    x->height=max(getHeight(x->right), getHeight(x->left)) + 1;//Height of x becomes one added to the maximum of the heights of both of its children.  
    y->height=max(getHeight(y->right), getHeight(y->left)) + 1;//Similarly, the height of y becomes one added to the maximum of the heights of both of its children

    return y;//And now simply return y, since y becomes the new root for the subtree. 

}

struct Node* rightRotate(struct Node* y){// Create a struct Node* function rightRotate, and pass the pointer to the imbalanced struct node you want to right rotate as the only parameter. Consider this node y as represented in the figure above. 
    struct Node* x = y->left; //As you could see, the left child of y is x. So, define a struct node pointer variable x and initialize it with y->left
    struct Node* T2 =  x->right;

    x->right=y;//Now, simply assign y to the right element of x, and T2 to the left element of y
    y->left=T2;

    //And this would finish our right rotation function. In addition, we must remember to adjust the new height for the nodes that have been shifted, which are x and y. 
    x->height=max(getHeight(x->right), getHeight(x->left))+ 1;//Height of x becomes one added to the maximum of the heights of both of its children.
    y->height=max(getHeight(y->right),getHeight(y->left))+ 1;//Similarly, the height of y becomes one added to the maximum of the heights of both of its children.

    return x;//And now simply return x, since x becomes the new root for the subtree.
}

struct Node* insert(struct Node* node, int key){// Create a struct Node* function insert, and pass the pointer to the root of the AVL tree and the data we want to insert as two of its parameters
    //Now, we would follow the simple Binary Search Tree insertion operation which we had already covered in our past lectures. There, we would just recursively iterate to the best-fit position where the new data should be inserted, and once found, we create a new node, and return the pointer to this node. 
    if(node==NULL){
        return createNode(key);
    }

    if(key< node->key){
        node->left= insert(node->left,key);
    }
    else if(key>node->key){
        node->right=insert(node->right,key);
    }
    //And since we have recursively gone down the tree, we would backtrack after inserting. While backtracking, we update the heights of all the nodes we followed to reach the apt position. 
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf=getBalanceFacotr(node);//Once this new node gets inserted, the balance of the tree might get disturbed, so we would first create an integer variable bf, and store in it the balance factor of the current node we are on while backtracking. And if this node gets imbalanced, four of the possible cases arise. 

    //Left Left case
    if(bf>1 && key < node->left->key){
        return leftRotate(node);
    }
    //Right Right case
    if(bf<-1 && key > node->right->key){
        return leftRotate(node);
    }
    // Left Right Case
    if(bf>1 && key > node->left->key){
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    // Right Left Case
    if(bf<-1 && key < node->right->key){
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    return node;
}

// The Last step would be to fetch the preOrder traversal function from our previous programming lecture, to actually see how our tree would get all balanced after all the insertions we would do.
void preOrder(struct Node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
    struct Node * root = NULL;
 
 
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    preOrder(root);
    return 0;
}