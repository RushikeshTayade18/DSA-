#include<iostream>
using namespace std;
#define max 10
class Que
{
	private:
		int q[max];
		int front,rear;
		public:
			Que()
			{
				front=-1;
				rear=-1;
			}
		   int isEmpty();
		   int isFull();
		   void Insert();
		   int Delete();
		   void Display();
			
};
int Que::isEmpty()
{
	if(front==-1&&rear==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Que::isFull()
{
	if(rear==max-1)
	{
		return 1;
		
	}
	else
	{
		return 0;
	}
}
void Que::Insert()
{
	int data;
	if(front==-1)
	{
		front=0;
	}
	if(!isFull())
	{
		cout<<"Enter Element to insert\n";
		cin>>data;
		rear++;
		q[rear]=data;
		
		
	}
	else
	{
		cout<<"Que is Full";
	}
}

int Que::Delete()
{
	if(!isEmpty())
	{
		cout<<"Elemet to deleted is="<<q[front]<<endl;
		front++;
	}
}

void Que::Display()
{
	if(!isEmpty())
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<q[i]<<"";
		}
	}
	else
	{
		cout<<"Que is Empty\n";
	}
}


int main()
{
	Que q1;
	int ch;
	
	char a;
	
	do
	{
	
	cout<<"1. Insert\n";
	cout<<"2. Delete \n";
	cout<<"3. Display \n";
	cout<<"Enter your choice \n";
	cin>>ch;
	switch(ch)
	{
		 case 1:
		 	q1.Insert();
		 break;
		 
		 case 2:
		 	q1.Delete();
		 break;
		 	
		case 3:
		 	q1.Display();
		break;
		 	
		default:
		 	cout<<"Wrong Input\n";
		 	
	}
	cout<<"Do you want to contineu";
	cin>>a;
}
while(a=='Y'||a=='y');

	return 0;
}
