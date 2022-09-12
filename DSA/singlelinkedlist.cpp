#include<iostream>
using namespace std;
class Node{
    int data;
    Node *next;
    public:
    Node *first;
    void init(){
        first=NULL;
    }
    void f_insert(int d){
        Node *current=new Node();
        current->data=d;
        current->next=NULL;
        if(first==NULL){
        first=current;
    }
    else{
        current->next=first;
        first=current;
    }
    }
    
    int f_delete(){
        if(first==NULL){
            cout<<"Empty List";
            return 9999;
        }
        else{
            Node *temp=first;
            int x=first->data;
            first=first->next;
            delete(temp);
            return x;
        }
    }
    void b_insert(int d){
        Node *current=new Node();
        current->data=d;
        current->next=NULL;
        if(first==NULL){
        first=current;
    }
    else{
        Node *temp=first;
        while(temp->next=NULL){
        temp=temp->next;
        }
    }
}
int b_delete(){
    Node *temp=first;
    Node *prev;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    int x=temp->data;
    delete(temp);
    prev->next=NULL;
    return x;
}
void m_insert(int d){
    int n;
    cout<<"After how many nodes do you want to insert??";
    cin>>n;
    Node *current=new Node();
    current->data=d;
    current->next=NULL;
    if(first==NULL){
        first=current;
    }
    else{
        int l;
        int count=l;
        Node *temp=first;
        while(count<n){
            temp=temp->next;
            count++;
        }
    }
}
    int m_delete(){
        int x;
        cout<<"enter the node you want to delete";
        cin>>x;
        Node *temp=first;
        Node *prev=NULL;
        while(temp->data!=x && temp->next!=NULL){
            prev=temp;
            temp=temp->data;
            prev->next=temp->next;
            delete temp;
            return x;
        }
    }
};


int main(){
   Node obj;
   int ch, val;
   cout<<"1) Insert from front"<<endl;
   cout<<"2) Delete from front"<<endl;
   cout<<"3) Insert from back"<<endl;
   cout<<"4) Delete from back"<<endl;
   cout<<"5) Insert from middle"<<endl;
   cout<<"6) Delete from middle"<<endl;
   cout<<"7) exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be insertedfrom the front:"<<endl;
            cin>>val;
            obj.f_insert(val);
            break;
         }
         case 2: {
            
            obj.f_delete();
            break;
         }
         case 3: {
            cout<<"Enter value to be inserted from the back:"<<endl;
            cin>>val;
            obj.b_insert(val);
            break;
         }
         case 4: {
            
            obj.b_delete();
            break;
         }
         case 5: {
            cout<<"Enter value to be inserted from the middle:"<<endl;
            cin>>val;
            obj.m_insert(val);
            break;
         }
         case 6: {
            
            obj.m_delete();
            break;
         }
          default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=1 && ch!=7);
   return 0;
}

