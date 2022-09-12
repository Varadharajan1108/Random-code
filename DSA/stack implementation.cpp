#include<iostream>
using namespace std;
class stacktop{
	protected:
		int top;
	public:
		stacktop()
		{
			top=-1;
		}
		
};
class stackarray{
	protected:
		int stackarray[4];
	
};
class stackfunction:public stacktop,stackarray{
	public:
		void push(int n)
		{
			if (top==3)
			cout<<"Stack overflow\n";
			else
			{
				top++;
				stackarray[top]=n;
			}
		}
		void pop()
		{
			if (top==-1)
				cout<<"Stack underflow\n";
			else
				{
					cout<<stackarray[top]<<" popped successfully\n";
					top--;
				}
		}
		void display()
		{
			if(top==-1)
			cout<<"Stack empty\n";
			else
			{
				for (int i=0;i<=top;i++)
				cout<<"Value "<<i+1<<": "<<stackarray[i]<<endl;
			}
		}
		
};
 
int main()
{
	stackfunction s1;
	char ch;
	do{
	
 
	cout<<"Press...\n"
		<<"1 to push\n"
		<<"2 to pop\n"
		<<"3 to display\n"
		<<"4 to exit\n\n";
	cin>>ch;
	switch(ch)
	{
		case '1':
			int n;
			cout<<"Enter element\n";
			cin>>n;
			s1.push(n);
			break;
		case '2':
		s1.pop();
		break;
		case '3':
		s1.display();
		break;	
	}
}
while(ch!='4');
	return 0;
}
