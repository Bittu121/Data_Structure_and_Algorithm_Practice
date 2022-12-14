#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int length(Node*head){
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
Node*takeInput(){
    int data;
    cin>>data;
    Node*head=NULL;
    Node*tail=NULL;
    while(data!=-1){
        Node*newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}
int main()
{
    Node*head=takeInput();
    print(head);
    cout<<"length:"<<length(head)<<endl;
    return 0;
}