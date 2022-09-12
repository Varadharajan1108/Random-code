#include<iostream>
using namespace std;
class stck{
    public:
    int top=-1;
    int stack[100];
    int n=100;
    
    void push(int val){
        if(top>=n-1){
            cout<<"OVERFLOW";
        }
        else{
            top++;
            stack[top]=val;
        }
    }
    void pop(){
        if(top<=-1){
            cout<<"UNDERFLOW";
        }
        else{
            cout<<"Popped element is"<<stack[top];
            top--;
        }
    }
    void display(){
        if(top>=0){
            cout<<"stack elements are";
            for(int i;i=top;i++){
                cout<<stack[top]<<endl;
            }
        }
    }
};
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
