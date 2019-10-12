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
		   void Insert_rear();
		   void Insert_front();
		   int Delete_front();
		   int Delete_rear();
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
void Que::Insert_rear()
{
	int data;
	if(front==-1)
	{
		front=0;
	}
	if(!isFull())
	{
		cout<<"Enter Element to insert at rear \n";
		cin>>data;
		rear++;
		q[rear]=data;
		
		
	}
	else
	{
		cout<<"Que is Full";
	}
}


void Que::Insert_front()
{
	int ele;
	if(front==0)
	{
		cout<<"you can not Insert data\n";
	}
	if(front==-1)
	{
		front=0;
	}
	else
	{
		cout<<"Enter Elemet to Insert at Front= ";
		cin>>ele;
		
		front--;
		q[front]=ele;
		
	}
	
	
	
}


int Que::Delete_front()
{
	if(!isEmpty())
	{
		cout<<"Elemet to deleted from front is="<<q[front]<<endl;
		front++;
	}
}



int Que::Delete_rear()
{
	if(!isEmpty())
	{
		cout<<"Elemet to deleted from rear is="<<q[rear]<<endl;
		rear--;
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
	
	cout<<"1. Insert from rear\n";
	cout<<"2. Delete from front \n";
	cout<<"3. Display \n";
	cout<<"4. Insert from front\n";
	cout<<"5. Delete from rear \n";
	cout<<"Enter your choice \n";
	cin>>ch;
	switch(ch)
	{
		 case 1:
		 q1.Insert_rear();
		 break;
		 
		 case 2:
		 q1.Delete_front();
		 	break;
		 	
		 	case 3:
		 			q1.Display();
		 	break;
			 
			 case 4:
		 q1.Insert_front();
		 break;
		 
		 case 5:
		 q1.Delete_rear();
		 	break;		
		 	
	}
	cout<<"Do you want to contineu";
	cin>>a;
}
while(a=='Y'||a=='y');
	return 0;
}
