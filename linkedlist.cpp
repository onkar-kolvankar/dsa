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
      int r=0;
      Node* pre;
      
      while(r<=n+1 && temp->next!=NULL)
      {
         cout<<temp->data<<endl;
        temp=temp->next;
       
        r=r+1;
        cout<<"value of r"<<r<<endl;
        cout<<"value of n"<<n<<endl;
        if(r=n-1)
        {
            Node* pre=temp;
            cout<<"Pre value"<<pre->data<<endl;
        }
        
      }
      Node *post=temp;
      cout<<"post value"<<post->data;
      pre->next=post;
     

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
   // print(head);
    cout<<"Enter the node number you want to delete"<<endl;
    cin>>k;
    delete1(head,k);
    print(head);


    return 0;
}