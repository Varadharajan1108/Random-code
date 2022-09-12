#include<iostream>
using namespace std;
class Node{
    int data;
    Node *next;
    public:
    void push(int data){
        new Node();
        Node *first=new Node();
        first->data=100;
        first->next=NULL;
        Node *second=new Node();
        second->data=200;
        second->next=NULL;
        Node *third=new Node();
        third->data=300;
        third->next=NULL;
    
        
    }
    void display(){
    
        cout<<data;
    }
};
int main(){
    Node obj;
    obj.push(10);
    
    
}
