#include<iostream>
using namespace std;
class Node
{
    public:
    int data ;
    Node*next;
    Node(int value)
    {
        data=value;
        next=nullptr;
    }
};
 int main()
{
    Node*first=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    first->next=second;
    second->next=third;
    Node*temp=first;
    while(temp !=nullptr)
    {
        cout<<temp->data<<" ";
        cout<<temp->next;
        temp=temp->next;
    }
}