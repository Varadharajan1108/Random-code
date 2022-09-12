#include<iostream>
#define MAX 10

using namespace std;
class MyQueue{
    int a[10];
    int r;
    int f;
    public:
    void init(){
        r=-1;
        f=-1;
    }
    void enqueue(int d){
        if(r == (10-1)){
            cout<<"Full Queue";
        }
        else {
            r++;
            a[r] = d;
        }
    }
   int dequeue(){
    if(r==f){
        return 9999;
    }
    else{
        f++;
        return a[f];
    }
   
   } 
   void display(){
    for(int i=f+1;i<=r;i++){
        cout<<a[i];
    }
   }
    bool isempty()
    {
        if(r==f){
            return true;
        }
        else{
            return false;
        }

    }   
};
int main(){
     MyQueue a;
     int choice, d, x;
     do {
        cout << "Enter 1-enqueue, 2-dequeue, 3-display: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the value to be enqueued: ";
                cin >> d;
                a.enqueue(d);
                break;
            case 2:
                x = a.dequeue();
                if (x == 9999) {
                    cout<<"Empty queue" << endl;
                }
                else {
                    cout << x << " is the dequeued value." << endl;
                }
                break;
            case 3:
                a.display();
                break;
        }
     } while (choice > 0 && choice <= 3);
}