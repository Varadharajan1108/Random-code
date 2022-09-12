#include<iostream>
using namespace std;
class node{
    node *prev;
    node *head;
    node *succ;
    int data;
    int val;
    public:
    void insert_f(){
        node *nn=new node();
        nn->data=val;
        nn->prev=NULL;
        nn->succ=NULL;
        if(head==NULL){
            head=nn;
            return;
        }
        else{
            nn->succ=head;
            head=nn;
        }
    }
     void insert_e(){
        node *nn=new node();
        nn->data=val;
        nn->prev=NULL;
        nn->succ=NULL;
        if(head==NULL){
            head=nn;
            return;
        }
        node *temp=head;
        while(temp->succ!=NULL){
            temp=temp->succ;
        }
        temp->succ=nn;
        nn->prev=temp;
     }
    /* void insert_m{
        int n;
        node *nn=new node();
        nn->data=val;
        nn->succ=NULL;
        nn->prev=NULL;
        if(head==NULL){
            head=nn;
            return;
        }
        cout<<"The number of nodes after which you want to insert the data /n";
        cin>>n;
        node *temp=head;
        int count;
        while(count>n){

        }
     }
     /*void display(){
        cout<<val;
     }*/
     void delbeg(){
        node *temp=head;
        node *next;
        int x=temp->data;
        head=head->next;
        delete(temp);
        head->prev=NULL;
     }
};
int main(){
    node obj;
    int val;
    int ch;
    cout<<"Enter 1 to insert from the begining \n";
    cout<<"Enter 2 to insert from the end \n";
    cout<<"Enter 3 to insert from the middle \n";
    cout<<"Enter 4 to delete from the begining \n";


    do{
        cout<<"\nEnter your choice\n\t"<<endl;
        cin>>ch;
        switch(ch){
            case 1:{
            cout<<"Enter the value to be inserted \n";
            cin>>val;
            obj.insert_f();
             }
            case 2:{
            cout<<"Enter the value to be inserted \n";
            cin>>val;
            obj.insert_e();
            }
            /*case 3:{
            
            obj.display();
            }*/
            case 4:{
                obj.delbeg();
            }

        }
    }
        while(ch>=1 && ch<=7);
    
}