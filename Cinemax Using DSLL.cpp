#include<iostream>
using namespace std;
struct node
{
	char status;
	node *next;
	node *pre;
};
class Cinemax
{
	node *head[10];
	public:
		Cinemax()
		{
			for(int i=0;i<10;i++)
			{
				head[i]=NULL;
			}
		}

		void Create();
		void display();
		void Book();
		void Cancle();
};
void Cinemax::Create()
{
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<7;j++)
		{
				node *nn;
				nn=new node;
				nn->status='A';
				nn->next=NULL;
				nn->pre=NULL;
			if(head[i]==NULL)
			{
				
				head[i]=nn;
				nn->next=head[i];
				head[i]->pre=nn;
			}
			else
			{
				if(head[i]!=NULL)
				{
				node *cn;
				cn=head[i];
				while(cn->next!=head[i])
				{
					cn=cn->next;
				}
				cn->next=nn;
				nn->next=head[i];
				nn->pre=cn;
				head[i]->pre=nn;
				}
			}
		}
	}
		
}


void Cinemax::Book()
{	
	int row,col;
	cout<<"Enter Row Number \n";
	cin>>row;
	cout<<"Enter Coloumn No \n";
	cin>>col;
	node *cn;
	 cn=head[row-1];
	
	for(int i=0;i<col-1;i++)
	{
		cn=cn->next;
	}
	if(cn->status=='A')
	{
		cn->status='B';
	}
	else
	{
		cout<<"Seat is Already Available";
		
	}	
}

void Cinemax::Cancle()
{
	int row,col;
	cout<<"Enter Roll No\n";
	cin>>row;
	cout<<"Enter Coloumn no \n";
	cin>>col;
	node *cn;
	
	cn=head[row-1];
	
	for(int i=0;i<col-1;i++)
	{
		cn=cn->next;
	}
	if(cn->status=='B')
	{
		cn->status='A';
	}
	else
	{
		cout<<"Seat is Already Available \n";
	}
	
}

void Cinemax::display()
{
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"                |       S C R E E N        |                 "<<endl;
	cout<<"                ****************************                 "<<endl;
	for(int i=0;i<10;i++)
	{
		node *cn;
		cn=head[i];
		do
		{
			cout<<cn->status<<"\t";
			cn=cn->next;
		}
		while(cn!=head[i]);
		cout<<endl;
	}
}

int main()
{
	Cinemax c1;
	c1.Create();
	c1.display();
	c1.Book();
	c1.display();
	c1.Cancle();
	c1.display();
	
	
	return 0;
}
