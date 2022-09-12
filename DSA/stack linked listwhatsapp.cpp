#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
    public:
        Node *f = NULL, *r = NULL;
        void enqueue(int d) {
            Node *current = new Node();
            current->data = d;
            current->next = NULL;
            if(r == NULL) {
                r = current;
                f = current;
            }
            else
            {
                r->next = current;
                r = current;
            }
        }

        int dequeue() {
            if(r == NULL) {
                cout << "empty queue" << endl;
                return 99999;
            }
            Node *temp = f;
            int x = f->data;
            f = f->next;
            if(f == NULL) {
                r = NULL;
            }
            delete (temp);
            return x;
        }

        void display() {
            Node *temp = f;
            while(temp != NULL) {
                cout << temp->data << ", ";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(int argc, char const *argv[])
{
    int d, x, choice;
    Node obj;
    do {
        cout << "Enter choice: 1-> enqueue, 2-> dequeue, 3-> display, any other key-> quit" << endl;
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter data to be queued" << endl;
                cin >> d;
                obj.enqueue(d);
                break;
            case 2:
                x = obj.dequeue();
                if(x != 99999) {
                    cout << "Popped item: " << x << endl;
                }
                break;
            case 3:
                obj.display();
                break;
            }
    } while (choice >= 1 && choice <= 3);
    return 0;
}