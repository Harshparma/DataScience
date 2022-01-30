//https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-41
//https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-40
//https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-39

#include<stdio.h>
#include<stdlib.h> // because of that we use malloc

struct queue{
    int size;  //size: to store the size of the array
    int f;     //frontInd: to store the index prior to the first element.
    int r;     //backInd: to store the index of the rearmost element.
    int *arr;  //*arr: to store the address of the array dynamically allocated in heap.
};

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0; //else likhne ki jarurat nhi h likhna ho to likh bhi sakte h

}


int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}


void enqueue(struct queue *q, int val){  // 1 q pointer lenge and value
    if(isFull(q)){
        printf("Queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int dequeue(struct queue *q){   //int isliye liya kyoki me yaha me int return karna chata hu  
    int a = -1;  //yaha pe ham 1 value le rahe h a le liye or kuch bhi le sakte the val bhi le sakte the aisa apn ne kyo kiya kyoki means -1 kyo kiya because agar koi problem hoti h jati h agar kisi reason se dequeue nhi kar pata to me -1 return karunga or wo -1 is baat ka sanket hoga ki me dequeu nhi kar paya
    if(isEmpty(q)){
        printf("This queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];  //(value me store kar ke return kar diya)jo element me dequeue kar pa raha hu uski value muje de do
    }
    return a;
    
}

int main(){
    struct queue q;  //struct Queue q; (we are not dynamically allocating q here for now, as we did in stacks).
    q.size = 4;  //q.size = 100; (this gives size element the value 100). , //Use dot here, and not arrow operator to assign values to struct members, since q is not a pointer.
    q.f = q.r = -1;  //q.frontInd = q.backInd = -1;(this gives both the indices element the value -1)  here we name as q and r no problem 
    q.arr=(int*)malloc(q.size*sizeof(int)); //Use malloc to assign memory to the arr element of struct q.

    //Enqueue for elements
    enqueue(&q,12);
    enqueue(&q, 15);
    enqueue(&q, 22);
    enqueue(&q, 30);
    printf("Dequeing element %d\n",dequeue(&q));
    printf("Dequeing element %d\n",dequeue(&q));
    printf("Dequeing element %d\n",dequeue(&q));
    printf("Dequeing element %d\n",dequeue(&q));
    //enqueue(&q, 40); //ab enqueue nhi kar sakte queue full likh aaiga lekin piche se to queue khali h , yahi sab confusion or gadbad ke karan ham use karenge circular queue


    /* AGAR HAMNE FOR EXAMPLE QUEUE KA SIZE 4 LIYA OR, 4ELEMENT DAALE(ENQUEUE) OR 4 NIKAL BHI LIYE THEN ,
    ouput aaiga queue is empty and queue is full because 
    front and rear dono last me aa gai 3rd index pe kyoki 4 size thi isliye 
    to hoga kya ki front= rear bhi hoga and rear=size -1 bhi hoga 
    dono conditon 1 sath satisfy ho jati h isliye ham circular queue use karte h. */


    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }


    return 0;
}
