#include <iostream>
#include<bits/stdc++.h>
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
void increment(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        temp->data++;
        temp=temp->next;
        
    }
}
void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    //Dynamically
    Node*n1=new Node(10);
    Node*n2=new Node(20);
    Node*n3=new Node(30);
    Node*n4=new Node(40);
    Node*n5=new Node(50);
    Node*head=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    increment(head);
    print(head);
}
