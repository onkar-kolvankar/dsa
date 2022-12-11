#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};
void insertAthead(Node* &head,int data)

{
    
   
     Node *temp = new Node(data);
     temp->next=head;
     head=temp;
}

void insertAtback(Node* &head,int data)
{
    Node *temp=new Node(data);
    Node *t=head;
   while(t->next!=NULL)
    {
        t=t->next;
    }

    t->next=temp;


}void delete1(Node* &head,int n)
{
      Node* temp=head;
      
      
      while(temp->next->data!=n)
      {
        temp=temp->next;
      }
     temp->next=temp->next->next;

}
void print(Node* &head)
{
    Node *temp=head;
   
    while( temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int k;
    Node* n1=new Node(50);
    //cout<<n1->data<<endl;
    //cout<<n1->next<<endl;
    
    Node* head=n1;
    
   // print(head);
      insertAthead(head,30);
    insertAthead(head,60);
   //1 print(head);
    insertAtback(head,80);
    insertAtback(head,90);
    print(head);
    cout<<"Enter the node number you want to delete"<<endl;
    cin>>k;
    delete1(head,k);// deleting middle node of linked list
    print(head);


    return 0;

}