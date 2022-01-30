//https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-42/
//https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-43/
//https://codewithharry.com/videos/data-structures-and-algorithms-in-hindi-44
#include<stdio.h>
#include<stdlib.h>


//acche se samaj ne k liye pahle queue bana lena or front and rear bhi then karna code to acche se cleaer hoga

struct circularQueue{
    int size;  
    int f;     
    int r;    
    int *arr; 
};

int isFull(struct circularQueue *q){   //circular increment kar ke agar rear front pe aa raha h to queue full h.
    /* So, just see if the index next to the rear becomes front or not.
    Use circular increment (modulus) to pursue any increment in a circular queue. 
    So, check if (r element of q) +1 is equal to the (f element of q).
    If it is, then there is no space left in the queue to insert anymore elements, hence return 1, else 0.*/
    if((q->r+1)%q->size == q->f) {  
        return 1;
    }
    return 0; 

}


int isEmpty(struct circularQueue *q){ 
    if(q->r==q->f){
        return 1;
    }
    return 0;
}


void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else{
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val; 
        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct circularQueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty");
    }
    else{
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f]; 
    }
    return a;
}


int main(){
    struct circularQueue q;  
    q.size = 4;  
    q.f = q.r = 0; // we don’t initialize circular queues’ f and r with -1, rather 0. Since -1 is unreachable in circular incrementation. 
    q.arr=(int*)malloc(q.size*sizeof(int)); 

    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }


    return 0;
}

