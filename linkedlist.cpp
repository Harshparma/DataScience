// Program=insert an elememt at tail or add element at end.
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;     // pointer h wo next node ko point kar raha h then usko type hoga (node*)
    // now we made a construter
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}


void insertAtTail(node* &head, int val){     //here we take head by reference and not by value
    node* n=new node(val);     //isse hamare pass 1 node aa jaiga 'n' jiske data field me hoga 'val' and uske next field me hoga 'null'
    
    if(head==NULL){
        head=n;
        return;
    }
    // now we have to traverse to the last node of the linked list
    // then we make an iterator which traverse owr linked list from start to end
    // now for this we make a pointer
    node* temp=head;       //start from first node
    while (temp->next!=NULL)      //ye jab tak karenge jab tak temp ka next null nhi ho jata
    {
        temp=temp->next;          //jab tak ham karte rahenge temp equal to temp ka next
    }
    // jab is loop se bahar aa gai upar wale loop se 
    // then we rich to owr last element 
    // ab iske aage hame add karna h jo hamne new node banaya h "n"
    temp->next=n;     //temp ka jo next h usme value dal do n
    
}  

// to print a linked list

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAthead(head,4);
    display(head);


    return 0;
     
}